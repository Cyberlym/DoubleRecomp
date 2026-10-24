#!/usr/bin/env python3
"""XBE analyzer for SCDA port: parses header, sections, libraries, cert, SHA-1."""
import hashlib
import struct
import sys

ENTRY_KEYS = (0xA8FC57AB, 0x94859D4B)  # retail, debug
THUNK_KEYS = (0x5B6D40B6, 0xEFB1F152)
FLAG_NAMES = [(1, "W"), (2, "P"), (4, "X"), (8, "I")]


def u32(buf, off):
    return struct.unpack_from("<I", buf, off)[0]


def flags_str(f):
    return "".join(ch for bit, ch in FLAG_NAMES if f & bit) or "-"


def analyze(path):
    with open(path, "rb") as fh:
        data = fh.read()
    print(f"\n=== {path} ===")
    print(f"size: {len(data):,} bytes  sha1: {hashlib.sha1(data).hexdigest()}")
    if data[:4] != b"XBEH":
        print("NOT AN XBE (magic mismatch)")
        return
    base = u32(data, 0x104)
    hdr = u32(data, 0x108)
    img_size = u32(data, 0x10C)
    cert = u32(data, 0x118)
    nsec = u32(data, 0x11C)
    sec_addr = u32(data, 0x120)
    init = u32(data, 0x124)
    ep_raw, kt_raw = u32(data, 0x128), u32(data, 0x158)
    debug = False
    for i in (0, 1):
        if base <= (ep_raw ^ ENTRY_KEYS[i]) < base + img_size:
            entry, debug = ep_raw ^ ENTRY_KEYS[i], i == 1
            break
    else:
        entry = 0
    title_id = u32(data, cert - base + 8) if cert - base + 12 <= len(data) else 0
    print(f"base 0x{base:08X}  header 0x{hdr:X}  image 0x{img_size:X} ({img_size:,} B)  entry 0x{entry:08X}"
          f" ({'debug' if debug else 'retail'} key)  title 0x{title_id:08X}  initflags 0x{init:08X}")
    print("sections:")
    for i in range(nsec):
        o = sec_addr - base + i * 56
        sflags, sva, svs, sraw, srs = (u32(data, o), u32(data, o + 4), u32(data, o + 8),
                                       u32(data, o + 12), u32(data, o + 16))
        name_off = u32(data, o + 20)
        name = data[name_off - base:name_off - base + 10].split(b"\0")[0].decode("ascii", "replace")
        print(f"  {name:12s} va 0x{sva:08X} vsize 0x{svs:07X} raw 0x{sraw:07X} rsize 0x{srs:07X} [{flags_str(sflags)}]")
    nlib = u32(data, 0x160)
    lib_addr = u32(data, 0x164)
    libs = []
    for i in range(min(nlib, 64)):
        o = lib_addr - base + i * 16
        nm = data[o:o + 8].decode("ascii", "replace").rstrip("\0 ")
        maj, mnr, bld, fl = struct.unpack_from("<4H", data, o + 8)
        libs.append((nm, maj, mnr, bld, fl))
    print(f"libraries ({len(libs)}):")
    for nm, maj, mnr, bld, fl in libs:
        qht = " [QHT]" if fl & 1 else ""
        print(f"  {nm:10s} {maj}.{mnr}.{bld}{qht}")
    # XAPI heap / region hints not parsed: not needed for identification.


if __name__ == "__main__":
    for p in sys.argv[1:]:
        analyze(p)
