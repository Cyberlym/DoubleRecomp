#include "x86_recomp_shared.h"

X86_FUNC(__imp__sub_00318A81) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318A81 mov ax, [edx+0x20]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x20u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00318A85 cmp ax, [0x003D9364]
	{ uint32_t ea = (uint32_t)(0x3D9364u); uint16_t a = (uint16_t)(((uint16_t)ctx.eax)), b = (uint16_t)(X86_MEM16(ea)); uint16_t r = (uint16_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 15) & 1; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 00318A8C jbe 0x00318A94
	if ((uint16_t)ca <= (uint16_t)cb) { goto loc_00318A94; }
	// 00318A8E mov eax, 0x80000500
	{ ctx.eax = (uint32_t)(0x80000500u); }
	// 00318A93 ret
	ctx.esp += 4; return;
loc_00318A94:
	// 00318A94 lea eax, [ecx+0x424]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ecx + 0x424u));
	// 00318A9A cmp dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318A9D jz 0x00318AAA
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00318AAA; }
	// 00318A9F mov eax, [ecx+0x428]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x428u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318AA5 mov [eax+0x24], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00318AA8 jmp 0x00318AAC
	goto loc_00318AAC;
loc_00318AAA:
	// 00318AAA mov [eax], edx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00318AAC:
	// 00318AAC mov [ecx+0x428], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x428u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00318AB2 call 0x003189B4
	X86_PUSH32(0x318AB7u); sub_003189B4(ctx, base);
	// 00318AB7 mov eax, 0x40000000
	{ ctx.eax = (uint32_t)(0x40000000u); }
	// 00318ABC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00318A81, __imp__sub_00318A81)

X86_FUNC(__imp__sub_00318ABD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318ABD mov ax, [edx+0x20]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x20u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00318AC1 cmp ax, [0x003D9360]
	{ uint32_t ea = (uint32_t)(0x3D9360u); uint16_t a = (uint16_t)(((uint16_t)ctx.eax)), b = (uint16_t)(X86_MEM16(ea)); uint16_t r = (uint16_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 15) & 1; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 00318AC8 jbe 0x00318AD0
	if ((uint16_t)ca <= (uint16_t)cb) { goto loc_00318AD0; }
	// 00318ACA mov eax, 0x80000500
	{ ctx.eax = (uint32_t)(0x80000500u); }
	// 00318ACF ret
	ctx.esp += 4; return;
loc_00318AD0:
	// 00318AD0 lea eax, [ecx+0x41C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ecx + 0x41Cu));
	// 00318AD6 cmp dword ptr [eax], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318AD9 jz 0x00318AE6
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00318AE6; }
	// 00318ADB mov eax, [ecx+0x420]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x420u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318AE1 mov [eax+0x24], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00318AE4 jmp 0x00318AE8
	goto loc_00318AE8;
loc_00318AE6:
	// 00318AE6 mov [eax], edx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00318AE8:
	// 00318AE8 mov [ecx+0x420], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x420u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00318AEE call 0x00318A01
	X86_PUSH32(0x318AF3u); sub_00318A01(ctx, base);
	// 00318AF3 mov eax, 0x40000000
	{ ctx.eax = (uint32_t)(0x40000000u); }
	// 00318AF8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00318ABD, __imp__sub_00318ABD)

X86_FUNC(__imp__sub_00318AF9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318AF9 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00318AFA mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00318AFC push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00318AFD push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318AFE push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00318AFF mov esi, edx
	{ ctx.esi = (uint32_t)(ctx.edx); }
	// 00318B01 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00318B02 mov edi, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00318B05 mov ebx, ecx
	{ ctx.ebx = (uint32_t)(ctx.ecx); }
	// 00318B07 mov edx, edi
	{ ctx.edx = (uint32_t)(ctx.edi); }
	// 00318B09 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00318B0B call 0x003185F7
	X86_PUSH32(0x318B10u); sub_003185F7(ctx, base);
	// 00318B10 mov [esi+0x20], ax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00318B14 call [0x0031B3C4]
	X86_PUSH32(0x318B1Au); x86_kernel(ctx, base, 129);
	// 00318B1A inc [edi+0x26]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x26u); uint8_t a = (uint8_t)(X86_MEM8(ea));  uint8_t r = (uint8_t)(a + 1); X86_MEM8(ea) = (uint8_t)(r); of = r == (uint8_t)(1u << 7); zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00318B1D and dword ptr [esi+0x24], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318B21 mov [ebp-0x01], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00318B24 mov word ptr [esi+0x22], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x22u); X86_MEM16(ea) = (uint16_t)(0x2u); }
	// 00318B2A movzx eax, byte ptr [edi+0x11]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x11u); ctx.eax = (uint32_t)((uint8_t)(X86_MEM8(ea))); }
	// 00318B2E sub eax, 0x00
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318B31 jz 0x00318B58
	if (zf) { goto loc_00318B58; }
	// 00318B33 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318B34 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318B35 jz 0x00318B4D
	if (zf) { goto loc_00318B4D; }
	// 00318B37 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318B38 jz 0x00318B41
	if (zf) { goto loc_00318B41; }
	// 00318B3A mov ebx, 0x80000600
	{ ctx.ebx = (uint32_t)(0x80000600u); }
	// 00318B3F jmp 0x00318B67
	goto loc_00318B67;
loc_00318B41:
	// 00318B41 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00318B42 mov edx, edi
	{ ctx.edx = (uint32_t)(ctx.edi); }
	// 00318B44 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00318B46 call 0x00318A4E
	X86_PUSH32(0x318B4Bu); sub_00318A4E(ctx, base);
	// 00318B4B jmp 0x00318B61
	goto loc_00318B61;
loc_00318B4D:
	// 00318B4D mov edx, esi
	{ ctx.edx = (uint32_t)(ctx.esi); }
	// 00318B4F mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00318B51 call 0x00318A81
	X86_PUSH32(0x318B56u); sub_00318A81(ctx, base);
	// 00318B56 jmp 0x00318B61
	goto loc_00318B61;
loc_00318B58:
	// 00318B58 mov edx, esi
	{ ctx.edx = (uint32_t)(ctx.esi); }
	// 00318B5A mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00318B5C call 0x00318ABD
	X86_PUSH32(0x318B61u); sub_00318ABD(ctx, base);
loc_00318B61:
	// 00318B61 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 00318B63 test ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318B65 jnl 0x00318B6F
	if (((int32_t)(ca & cb)) >= 0) { goto loc_00318B6F; }
loc_00318B67:
	// 00318B67 and word ptr [esi+0x22], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x22u); uint16_t a = (uint16_t)(X86_MEM16(ea)); uint16_t b = (uint16_t)(0x0u); uint16_t r = (uint16_t)(a & b); X86_MEM16(ea) = (uint16_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 00318B6C dec [edi+0x26]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x26u); uint8_t a = (uint8_t)(X86_MEM8(ea));  uint8_t r = (uint8_t)(a - 1); X86_MEM8(ea) = (uint8_t)(r); of = a == (uint8_t)(1u << 7); zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
loc_00318B6F:
	// 00318B6F mov cl, [ebp-0x01]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00318B72 call [0x0031B3C0]
	X86_PUSH32(0x318B78u); x86_kernel(ctx, base, 161);
	// 00318B78 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00318B79 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00318B7A mov eax, ebx
	{ ctx.eax = (uint32_t)(ctx.ebx); }
	// 00318B7C pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00318B7D leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 00318B7E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00318AF9, __imp__sub_00318AF9)

X86_FUNC(__imp__sub_00318B7F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318B7F mov eax, [0x003D56D8]
	{ uint32_t ea = (uint32_t)(0x3D56D8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318B84 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318B86 jz 0x00318B99
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00318B99; }
	// 00318B88 mov ecx, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318B8B mov [0x003D56D8], ecx
	{ uint32_t ea = (uint32_t)(0x3D56D8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00318B91 and dword ptr [eax+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318B95 and dword ptr [eax+0x08], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00318B99:
	// 00318B99 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00318B7F, __imp__sub_00318B7F)

X86_FUNC(__imp__sub_00318B9A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318B9A mov edx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00318B9E push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00318B9F push 0x58
	{ uint32_t v = (uint32_t)(0x58u); X86_PUSH32(v); }
	// 00318BA1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00318BA2 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318BA4 lea edi, [edx+0x10]
	ctx.edi = (uint32_t)((uint32_t)(ctx.edx + 0x10u));
	// 00318BA7 rep stosd
	{ x86_rep_stos(ctx, base, 4); }
	// 00318BA9 mov dword ptr [edx+0x0C], 0x04
	{ uint32_t ea = (uint32_t)(ctx.edx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x4u); }
	// 00318BB0 mov eax, [0x003D56D8]
	{ uint32_t ea = (uint32_t)(0x3D56D8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318BB5 mov [edx+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318BB8 mov [0x003D56D8], edx
	{ uint32_t ea = (uint32_t)(0x3D56D8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00318BBE pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00318BBF ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00318B9A, __imp__sub_00318B9A)

X86_FUNC(__imp__sub_00318BC2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318BC2 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318BC3 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00318BC4 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00318BC5 mov edi, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00318BC9 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00318BCB call 0x00314B1D
	X86_PUSH32(0x318BD0u); sub_00314B1D(ctx, base);
	// 00318BD0 xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318BD2 xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318BD4 cmp eax, 0x10
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318BD7 jb 0x00318BDD
	if ((uint32_t)ca < (uint32_t)cb) { goto loc_00318BDD; }
	// 00318BD9 sub eax, 0x10
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318BDC inc ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a + 1); ctx.ecx = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00318BDD:
	// 00318BDD lea eax, [ecx+eax*2]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ecx + ctx.eax * 2u));
	// 00318BE0 mov ecx, [0x003D86E4]
	{ uint32_t ea = (uint32_t)(0x3D86E4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318BE6 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318BE7 lea eax, [eax+eax*2]
	ctx.eax = (uint32_t)((uint32_t)(ctx.eax + ctx.eax * 2u));
	// 00318BEA push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00318BEC lea esi, [ecx+eax*4]
	ctx.esi = (uint32_t)((uint32_t)(ctx.ecx + ctx.eax * 4u));
	// 00318BEF push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00318BF1 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00318BF3 call 0x00314AA7
	X86_PUSH32(0x318BF8u); sub_00314AA7(ctx, base);
	// 00318BF8 cmp eax, ebx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318BFA jz 0x00318C46
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00318C46; }
	// 00318BFC mov cl, [eax+0x02]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x2u); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00318BFF mov [esi+0x05], cl
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 00318C02 cmp word ptr [eax+0x04], 0x40
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); uint16_t a = (uint16_t)(X86_MEM16(ea)), b = (uint16_t)(0x40u); uint16_t r = (uint16_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 15) & 1; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 00318C07 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00318C09 jnz 0x00318C48
	if ((uint16_t)ca != (uint16_t)cb) { goto loc_00318C48; }
	// 00318C0B push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318C0C push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318C0D push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00318C0F call 0x00314AA7
	X86_PUSH32(0x318C14u); sub_00314AA7(ctx, base);
	// 00318C14 cmp eax, ebx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318C16 jz 0x00318C46
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00318C46; }
	// 00318C18 mov cl, [eax+0x02]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x2u); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00318C1B mov [esi+0x06], cl
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 00318C1E cmp word ptr [eax+0x04], 0x40
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); uint16_t a = (uint16_t)(X86_MEM16(ea)), b = (uint16_t)(0x40u); uint16_t r = (uint16_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 15) & 1; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 00318C23 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00318C25 jnz 0x00318C48
	if ((uint16_t)ca != (uint16_t)cb) { goto loc_00318C48; }
	// 00318C27 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00318C28 call 0x003149AC
	X86_PUSH32(0x318C2Du); sub_003149AC(ctx, base);
	// 00318C2D mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00318C2F mov [esi], edi
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00318C31 call 0x003149B9
	X86_PUSH32(0x318C36u); sub_003149B9(ctx, base);
	// 00318C36 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318C37 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00318C39 mov [esi+0x04], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00318C3C call 0x003149BD
	X86_PUSH32(0x318C41u); sub_003149BD(ctx, base);
	// 00318C41 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318C42 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00318C44 jmp 0x00318C4D
	goto loc_00318C4D;
loc_00318C46:
	// 00318C46 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
loc_00318C48:
	// 00318C48 push 0x80000400
	{ uint32_t v = (uint32_t)(0x80000400u); X86_PUSH32(v); }
loc_00318C4D:
	// 00318C4D call 0x003156D9
	X86_PUSH32(0x318C52u); sub_003156D9(ctx, base);
	// 00318C52 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00318C53 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00318C54 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00318C55 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00318BC2, __imp__sub_00318BC2)

X86_FUNC(__imp__sub_00318C58) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318C58 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318C5C mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318C60 lea eax, [eax+ecx*2]
	ctx.eax = (uint32_t)((uint32_t)(ctx.eax + ctx.ecx * 2u));
	// 00318C63 mov ecx, [0x003D86E4]
	{ uint32_t ea = (uint32_t)(0x3D86E4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318C69 lea eax, [eax+eax*2]
	ctx.eax = (uint32_t)((uint32_t)(ctx.eax + ctx.eax * 2u));
	// 00318C6C mov eax, [ecx+eax*4+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + ctx.eax * 4u + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318C70 mov eax, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318C72 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00318C58, __imp__sub_00318C58)

X86_FUNC(__imp__sub_00318C75) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318C75 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00318C76 mov esi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00318C7A mov eax, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318C7D test eax, 0x40000
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x40000u); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318C82 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00318C83 mov edi, [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00318C86 jz 0x00318CA3
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00318CA3; }
	// 00318C88 mov edx, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00318C8B and dword ptr [esi+0x24], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318C8F mov byte ptr [esi+0x111], 0x43
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x111u); X86_MEM8(ea) = (uint8_t)(0x43u); }
	// 00318C96 mov [esi+0x120], edx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x120u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00318C9C and eax, 0xFFFBFFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFBFFFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318CA1 jmp 0x00318CD8
	goto loc_00318CD8;
loc_00318CA3:
	// 00318CA3 test eax, 0x20000
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x20000u); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318CA8 jz 0x00318CC5
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00318CC5; }
	// 00318CAA mov edx, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00318CAD and dword ptr [esi+0x20], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318CB1 mov byte ptr [esi+0x111], 0x43
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x111u); X86_MEM8(ea) = (uint8_t)(0x43u); }
	// 00318CB8 mov [esi+0x120], edx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x120u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00318CBE and eax, 0xFFFDFFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFDFFFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318CC3 jmp 0x00318CD8
	goto loc_00318CD8;
loc_00318CC5:
	// 00318CC5 test eax, 0x10000
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x10000u); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318CCA jz 0x00318CFE
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00318CFE; }
	// 00318CCC mov byte ptr [esi+0x111], 0xC3
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x111u); X86_MEM8(ea) = (uint8_t)(0xFFFFFFC3u); }
	// 00318CD3 and eax, 0xFFFEFFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFEFFFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00318CD8:
	// 00318CD8 lea ecx, [esi+0x110]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x110u));
	// 00318CDE mov byte ptr [ecx], 0x1C
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM8(ea) = (uint8_t)(0x1Cu); }
	// 00318CE1 mov dword ptr [esi+0x118], 0x318C75
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x118u); X86_MEM32(ea) = (uint32_t)(0x318C75u); }
	// 00318CEB mov [esi+0x11C], esi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x11Cu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 00318CF1 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318CF4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00318CF5 mov ecx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318CF7 call 0x00314D5D
	X86_PUSH32(0x318CFCu); sub_00314D5D(ctx, base);
	// 00318CFC jmp 0x00318D42
	goto loc_00318D42;
loc_00318CFE:
	// 00318CFE and eax, 0xFFF7FFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFF7FFFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318D03 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318D04 xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318D06 test al, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00318D08 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318D0B mov [esi+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00318D0E jz 0x00318D26
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00318D26; }
	// 00318D10 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318D11 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318D12 lea eax, [esi+0x12C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x12Cu));
	// 00318D18 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00318D19 mov [edi+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00318D1C call [0x0031B448]
	X86_PUSH32(0x318D22u); x86_kernel(ctx, base, 145);
	// 00318D22 and dword ptr [esi+0x0C], 0xFFFFFFFE
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0xFFFFFFFEu); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00318D26:
	// 00318D26 test byte ptr [esi+0x0C], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00318D2A jz 0x00318D41
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00318D41; }
	// 00318D2C mov ecx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318D2E call 0x0031530D
	X86_PUSH32(0x318D33u); sub_0031530D(ctx, base);
	// 00318D33 mov [edi], ebx
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00318D35 mov eax, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318D38 and eax, 0xFFFFFFFD
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFFFDu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318D3B or eax, 0x04
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318D3E mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_00318D41:
	// 00318D41 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
loc_00318D42:
	// 00318D42 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00318D43 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00318D44 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00318C75, __imp__sub_00318C75)

X86_FUNC(__imp__sub_00318D47) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318D47 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318D4A mov edx, 0x80000
	{ ctx.edx = (uint32_t)(0x80000u); }
	// 00318D4F test edx, eax
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318D51 jnz 0x00318D60
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00318D60; }
	// 00318D53 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00318D54 or eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318D56 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00318D58 mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318D5B call 0x00318C75
	X86_PUSH32(0x318D60u); sub_00318C75(ctx, base);
loc_00318D60:
	// 00318D60 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00318D47, __imp__sub_00318D47)

X86_FUNC(__imp__sub_00318D61) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318D61 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318D65 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00318D66 call 0x003149A8
	X86_PUSH32(0x318D6Bu); sub_003149A8(ctx, base);
	// 00318D6B mov esi, eax
	{ ctx.esi = (uint32_t)(ctx.eax); }
	// 00318D6D mov ecx, [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318D70 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318D72 jz 0x00318D88
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00318D88; }
	// 00318D74 mov eax, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318D77 test al, 0x04
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00318D79 jnz 0x00318D88
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00318D88; }
	// 00318D7B or eax, 0x02
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x2u); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318D7E mov [ecx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318D81 call 0x00318D47
	X86_PUSH32(0x318D86u); sub_00318D47(ctx, base);
	// 00318D86 jmp 0x00318D92
	goto loc_00318D92;
loc_00318D88:
	// 00318D88 mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318D8A call 0x0031530D
	X86_PUSH32(0x318D8Fu); sub_0031530D(ctx, base);
	// 00318D8F and dword ptr [esi], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00318D92:
	// 00318D92 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00318D93 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00318D61, __imp__sub_00318D61)

X86_FUNC(__imp__sub_00318D96) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318D96 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00318D97 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00318D99 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318D9C mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318D9F push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318DA0 lea eax, [eax+ecx*2]
	ctx.eax = (uint32_t)((uint32_t)(ctx.eax + ctx.ecx * 2u));
	// 00318DA3 mov ecx, [0x003D86E4]
	{ uint32_t ea = (uint32_t)(0x3D86E4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318DA9 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00318DAA lea eax, [eax+eax*2]
	ctx.eax = (uint32_t)((uint32_t)(ctx.eax + ctx.eax * 2u));
	// 00318DAD push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00318DAE lea edi, [ecx+eax*4]
	ctx.edi = (uint32_t)((uint32_t)(ctx.ecx + ctx.eax * 4u));
	// 00318DB1 call [0x0031B3C4]
	X86_PUSH32(0x318DB7u); x86_kernel(ctx, base, 129);
	// 00318DB7 mov esi, [edi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00318DBA xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318DBC cmp [esi+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318DBF mov cl, al
	{ ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(((uint8_t)ctx.eax)); }
	// 00318DC1 mov [ebp+0x0F], cl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 00318DC4 jz 0x00318DED
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00318DED; }
	// 00318DC6 or dword ptr [esi+0x0C], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a | b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318DCA mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00318DCC call 0x00318D47
	X86_PUSH32(0x318DD1u); sub_00318D47(ctx, base);
	// 00318DD1 mov cl, [ebp+0x0F]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00318DD4 call [0x0031B3C0]
	X86_PUSH32(0x318DDAu); x86_kernel(ctx, base, 161);
	// 00318DDA push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318DDB push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318DDC push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318DDD push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318DDE lea eax, [esi+0x12C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x12Cu));
	// 00318DE4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00318DE5 call [0x0031B44C]
	X86_PUSH32(0x318DEBu); x86_kernel(ctx, base, 159);
	// 00318DEB jmp 0x00318DF6
	goto loc_00318DF6;
loc_00318DED:
	// 00318DED mov [edi+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00318DF0 call [0x0031B3C0]
	X86_PUSH32(0x318DF6u); x86_kernel(ctx, base, 161);
loc_00318DF6:
	// 00318DF6 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00318DF7 call 0x00318B9A
	X86_PUSH32(0x318DFCu); sub_00318B9A(ctx, base);
	// 00318DFC pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00318DFD pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00318DFE pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00318DFF pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00318E00 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00318D96, __imp__sub_00318D96)

X86_FUNC(__imp__sub_00318E03) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318E03 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00318E04 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00318E06 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00318E07 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00318E08 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318E0B mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318E0E push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318E0F lea eax, [eax+ecx*2]
	ctx.eax = (uint32_t)((uint32_t)(ctx.eax + ctx.ecx * 2u));
	// 00318E12 mov ecx, [0x003D86E4]
	{ uint32_t ea = (uint32_t)(0x3D86E4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318E18 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00318E19 lea eax, [eax+eax*2]
	ctx.eax = (uint32_t)((uint32_t)(ctx.eax + ctx.eax * 2u));
	// 00318E1C push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00318E1D xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318E1F mov [ebp-0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00318E22 lea edi, [ecx+eax*4]
	ctx.edi = (uint32_t)((uint32_t)(ctx.ecx + ctx.eax * 4u));
	// 00318E25 call [0x0031B3C4]
	X86_PUSH32(0x318E2Bu); x86_kernel(ctx, base, 129);
	// 00318E2B mov [ebp-0x01], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00318E2E call 0x00318B7F
	X86_PUSH32(0x318E33u); sub_00318B7F(ctx, base);
	// 00318E33 mov esi, eax
	{ ctx.esi = (uint32_t)(ctx.eax); }
	// 00318E35 cmp esi, ebx
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318E37 jnz 0x00318E40
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00318E40; }
	// 00318E39 mov esi, 0xC0000017
	{ ctx.esi = (uint32_t)(0xC0000017u); }
	// 00318E3E jmp 0x00318E4F
	goto loc_00318E4F;
loc_00318E40:
	// 00318E40 cmp [edi], ebx
	{ uint32_t ea = (uint32_t)(ctx.edi); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318E42 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00318E43 jnz 0x00318E5F
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00318E5F; }
	// 00318E45 call 0x00318B9A
	X86_PUSH32(0x318E4Au); sub_00318B9A(ctx, base);
	// 00318E4A mov esi, 0xC000009D
	{ ctx.esi = (uint32_t)(0xC000009Du); }
loc_00318E4F:
	// 00318E4F mov cl, [ebp-0x01]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00318E52 call [0x0031B3C0]
	X86_PUSH32(0x318E58u); x86_kernel(ctx, base, 161);
	// 00318E58 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00318E5A jmp 0x00318FB0
	goto loc_00318FB0;
loc_00318E5F:
	// 00318E5F push 0x319B82
	{ uint32_t v = (uint32_t)(0x319B82u); X86_PUSH32(v); }
	// 00318E64 lea eax, [esi+0x98]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x98u));
	// 00318E6A mov [edi+0x08], esi
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 00318E6D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00318E6E mov [esi+0x08], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00318E71 call [0x0031B450]
	X86_PUSH32(0x318E77u); x86_kernel(ctx, base, 107);
	// 00318E77 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318E78 lea eax, [esi+0x70]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x70u));
	// 00318E7B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00318E7C call [0x0031B43C]
	X86_PUSH32(0x318E82u); x86_kernel(ctx, base, 113);
	// 00318E82 and dword ptr [esi+0xC0], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC0u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318E89 mov [esi+0x130], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x130u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00318E8F lea eax, [esi+0x134]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x134u));
	// 00318E95 lea ebx, [esi+0xB8]
	ctx.ebx = (uint32_t)((uint32_t)(ctx.esi + 0xB8u));
	// 00318E9B mov byte ptr [esi+0x12C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x12Cu); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00318EA2 mov byte ptr [esi+0x12E], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x12Eu); X86_MEM8(ea) = (uint8_t)(0x4u); }
	// 00318EA9 mov [esi+0x138], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x138u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318EAF mov [eax], eax
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318EB1 mov byte ptr [ebx], 0x20
	{ uint32_t ea = (uint32_t)(ctx.ebx); X86_MEM8(ea) = (uint8_t)(0x20u); }
	// 00318EB4 mov byte ptr [esi+0xB9], 0x82
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xB9u); X86_MEM8(ea) = (uint8_t)(0xFFFFFF82u); }
	// 00318EBB mov ecx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318EBD push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318EBE call 0x00314D5D
	X86_PUSH32(0x318EC3u); sub_00314D5D(ctx, base);
	// 00318EC3 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318EC5 jl 0x00318F65
	if (((int32_t)(ca & cb)) < 0) { goto loc_00318F65; }
	// 00318ECB or byte ptr [esi+0x0E], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00318ECF and dword ptr [esi+0xC0], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC0u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318ED6 mov byte ptr [ebx], 0x20
	{ uint32_t ea = (uint32_t)(ctx.ebx); X86_MEM8(ea) = (uint8_t)(0x20u); }
	// 00318ED9 mov byte ptr [esi+0xB9], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xB9u); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 00318EE0 mov al, [edi+0x05]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x5u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00318EE3 mov [esi+0xCD], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00318EE9 mov byte ptr [esi+0xCE], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCEu); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 00318EF0 mov byte ptr [esi+0xCF], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCFu); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00318EF7 mov word ptr [esi+0xD4], 0x40
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD4u); X86_MEM16(ea) = (uint16_t)(0x40u); }
	// 00318F00 mov ecx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318F02 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318F03 call 0x00314D5D
	X86_PUSH32(0x318F08u); sub_00314D5D(ctx, base);
	// 00318F08 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318F0A jl 0x00318F65
	if (((int32_t)(ca & cb)) < 0) { goto loc_00318F65; }
	// 00318F0C mov eax, [esi+0xC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318F12 or byte ptr [esi+0x0E], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00318F16 and dword ptr [esi+0xC0], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC0u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318F1D mov [esi+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318F20 mov byte ptr [ebx], 0x20
	{ uint32_t ea = (uint32_t)(ctx.ebx); X86_MEM8(ea) = (uint8_t)(0x20u); }
	// 00318F23 mov byte ptr [esi+0xB9], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xB9u); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 00318F2A mov al, [edi+0x06]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x6u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00318F2D mov [esi+0xCD], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00318F33 mov byte ptr [esi+0xCE], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCEu); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 00318F3A mov byte ptr [esi+0xCF], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCFu); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00318F41 mov word ptr [esi+0xD4], 0x40
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD4u); X86_MEM16(ea) = (uint16_t)(0x40u); }
	// 00318F4A mov ecx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318F4C push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00318F4D call 0x00314D5D
	X86_PUSH32(0x318F52u); sub_00314D5D(ctx, base);
	// 00318F52 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318F54 jl 0x00318F65
	if (((int32_t)(ca & cb)) < 0) { goto loc_00318F65; }
	// 00318F56 mov eax, [esi+0xC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318F5C or byte ptr [esi+0x0E], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00318F60 mov [esi+0x24], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318F63 jmp 0x00318F6E
	goto loc_00318F6E;
loc_00318F65:
	// 00318F65 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00318F66 call 0x00314A35
	X86_PUSH32(0x318F6Bu); sub_00314A35(ctx, base);
	// 00318F6B mov [ebp-0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_00318F6E:
	// 00318F6E mov cl, [ebp-0x01]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00318F71 call [0x0031B3C0]
	X86_PUSH32(0x318F77u); x86_kernel(ctx, base, 161);
	// 00318F77 mov ecx, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00318F7A mov eax, 0xC0000000
	{ ctx.eax = (uint32_t)(0xC0000000u); }
	// 00318F7F and ecx, eax
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318F81 cmp ecx, eax
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00318F83 jnz 0x00318F92
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00318F92; }
	// 00318F85 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00318F88 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00318F8B call 0x00318D96
	X86_PUSH32(0x318F90u); sub_00318D96(ctx, base);
	// 00318F90 jmp 0x00318FAD
	goto loc_00318FAD;
loc_00318F92:
	// 00318F92 mov eax, [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318F95 mov word ptr [eax], 0x0C
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM16(ea) = (uint16_t)(0xCu); }
	// 00318F9A push [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00318F9D push 0x31B314
	{ uint32_t v = (uint32_t)(0x31B314u); X86_PUSH32(v); }
	// 00318FA2 push [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00318FA5 call 0x0020E6BF
	X86_PUSH32(0x318FAAu); sub_0020E6BF(ctx, base);
	// 00318FAA add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00318FAD:
	// 00318FAD mov eax, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_00318FB0:
	// 00318FB0 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00318FB1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00318FB2 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00318FB3 leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 00318FB4 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_00318E03, __imp__sub_00318E03)

X86_FUNC(__imp__sub_00318FB7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318FB7 mov eax, [0x0031B514]
	{ uint32_t ea = (uint32_t)(0x31B514u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00318FBC mov [0x0031282C], eax
	{ uint32_t ea = (uint32_t)(0x31282Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318FC1 mov [0x00312830], eax
	{ uint32_t ea = (uint32_t)(0x312830u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318FC6 mov [0x0031283C], eax
	{ uint32_t ea = (uint32_t)(0x31283Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318FCB mov [0x00312840], eax
	{ uint32_t ea = (uint32_t)(0x312840u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318FD0 mov [0x00312844], eax
	{ uint32_t ea = (uint32_t)(0x312844u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318FD5 mov [0x00312848], eax
	{ uint32_t ea = (uint32_t)(0x312848u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318FDA mov [0x0031284C], eax
	{ uint32_t ea = (uint32_t)(0x31284Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318FDF mov [0x00312850], eax
	{ uint32_t ea = (uint32_t)(0x312850u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318FE4 mov [0x0031285C], eax
	{ uint32_t ea = (uint32_t)(0x31285Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318FE9 mov [0x00312860], eax
	{ uint32_t ea = (uint32_t)(0x312860u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00318FEE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00318FB7, __imp__sub_00318FB7)

X86_FUNC(__imp__sub_00318FEF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00318FEF push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00318FF0 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00318FF2 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00318FF3 mov al, [ebp+0x0B]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xBu); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00318FF6 mov [ebp-0x04], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00318FF9 mov al, [ebp+0x0A]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xAu); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00318FFC mov [ebp-0x03], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00318FFF mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319002 mov [ebp-0x02], ah
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)(ctx.eax >> 8))); }
	// 00319005 mov [ebp-0x01], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00319008 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031900B leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 0031900C ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00318FEF, __imp__sub_00318FEF)

X86_FUNC(__imp__sub_0031900F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031900F push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00319010 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00319012 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00319013 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319014 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319015 mov edi, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00319018 mov esi, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031901B mov ebx, 0x103
	{ ctx.ebx = (uint32_t)(0x103u); }
	// 00319020 call [0x0031B3C4]
	X86_PUSH32(0x319026u); x86_kernel(ctx, base, 129);
	// 00319026 test byte ptr [esi+0x0C], 0x06
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x6u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031902A mov ecx, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031902D mov [ebp+0x0B], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00319030 jz 0x00319046
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319046; }
	// 00319032 mov eax, 0xC000009D
	{ ctx.eax = (uint32_t)(0xC000009Du); }
	// 00319037 xor dl, dl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.edx)); uint8_t b = (uint8_t)(((uint8_t)ctx.edx)); uint8_t r = (uint8_t)(a ^ b); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319039 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0031903B mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031903E call [0x0031B51C]
	X86_PUSH32(0x319044u); x86_kernel(ctx, base, 87);
	// 00319044 jmp 0x00319057
	goto loc_00319057;
loc_00319046:
	// 00319046 mov eax, [ecx+0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x5Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319049 or byte ptr [eax+0x03], 0x01
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x3u); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031904D push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031904F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00319050 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319051 call [0x0031B518]
	X86_PUSH32(0x319057u); x86_kernel(ctx, base, 83);
loc_00319057:
	// 00319057 mov cl, [ebp+0x0B]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xBu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031905A call [0x0031B3C0]
	X86_PUSH32(0x319060u); x86_kernel(ctx, base, 161);
	// 00319060 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00319061 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319062 mov eax, ebx
	{ ctx.eax = (uint32_t)(ctx.ebx); }
	// 00319064 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00319065 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00319066 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0031900F, __imp__sub_0031900F)

X86_FUNC(__imp__sub_00319069) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319069 mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031906D push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031906E mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00319072 mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319075 mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319078 mov ecx, 0xC0000000
	{ ctx.ecx = (uint32_t)(0xC0000000u); }
	// 0031907D and eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031907F cmp eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319081 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319084 jnz 0x0031908C
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_0031908C; }
	// 00319086 and dword ptr [eax+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031908A jmp 0x00319092
	goto loc_00319092;
loc_0031908C:
	// 0031908C mov ecx, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031908F mov [eax+0x14], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
loc_00319092:
	// 00319092 mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319095 xor dl, dl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.edx)); uint8_t b = (uint8_t)(((uint8_t)ctx.edx)); uint8_t r = (uint8_t)(a ^ b); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319097 call [0x0031B51C]
	X86_PUSH32(0x31909Du); x86_kernel(ctx, base, 87);
	// 0031909D push [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031909F call [0x0031B520]
	X86_PUSH32(0x3190A5u); x86_kernel(ctx, base, 81);
	// 003190A5 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 003190A6 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00319069, __imp__sub_00319069)

X86_FUNC(__imp__sub_003190A9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003190A9 mov eax, [0x003D56DC]
	{ uint32_t ea = (uint32_t)(0x3D56DCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003190AE cmp eax, 0x3D56DC
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x3D56DCu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003190B3 jz 0x003190C4
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_003190C4; }
	// 003190B5 mov eax, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003190B8 mov eax, [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003190BB mov eax, [eax+0x18]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003190BE push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 003190C0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 003190C1 call [eax+0x30]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.eax + 0x30u)); X86_PUSH32(0x3190C4u); x86_icall(ctx, base, t); }
loc_003190C4:
	// 003190C4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003190A9, __imp__sub_003190A9)

X86_FUNC(__imp__sub_003190C5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003190C5 mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 003190C7 xor edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a ^ b); ctx.edx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003190C9 cmp [eax+0x04], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003190CC jbe 0x003190EB
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_003190EB; }
	// 003190CE push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 003190CF push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
loc_003190D0:
	// 003190D0 mov edi, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 003190D2 add edi, edx
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003190D4 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 003190D6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 003190D7 mov esi, 0x31B324
	{ ctx.esi = (uint32_t)(0x31B324u); }
	// 003190DC add edx, 0x1000
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x1000u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003190E2 rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 003190E4 cmp edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003190E7 jb 0x003190D0
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_003190D0; }
	// 003190E9 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 003190EA pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_003190EB:
	// 003190EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003190C5, __imp__sub_003190C5)

X86_FUNC(__imp__sub_003190EC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003190EC mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003190F0 cmp eax, 0x01
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003190F3 jbe 0x00319101
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_00319101; }
	// 003190F5 lea ecx, [eax-0x01]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.eax + 0xFFFFFFFFu));
	// 003190F8 test eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003190FA jnz 0x00319101
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00319101; }
	// 003190FC xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003190FE inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003190FF jmp 0x00319103
	goto loc_00319103;
loc_00319101:
	// 00319101 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00319103:
	// 00319103 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_003190EC, __imp__sub_003190EC)

X86_FUNC(__imp__sub_00319106) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319106 xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319108 xor al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint8_t b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a ^ b); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031910A inc ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a + 1); ctx.ecx = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031910B:
	// 0031910B test [esp+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031910F jnz 0x00319119
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00319119; }
	// 00319111 inc al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax));  uint8_t r = (uint8_t)(a + 1); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); of = r == (uint8_t)(1u << 7); zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319113 shl ecx, 0x01
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x1u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 00319115 cmp al, 0x20
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x20u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319117 jb 0x0031910B
	if ((uint8_t)ca < (uint8_t)cb) { X86_BARRIER(); goto loc_0031910B; }
loc_00319119:
	// 00319119 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_00319106, __imp__sub_00319106)

X86_FUNC(__imp__sub_0031911C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031911C push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031911D mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031911F sub esp, 0x14
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319122 mov edx, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00319125 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00319126 mov ebx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00319129 mov ecx, [ebx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031912C mov eax, [ecx+0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x5Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031912F push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319130 mov [ebp-0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319133 mov eax, 0xC0000000
	{ ctx.eax = (uint32_t)(0xC0000000u); }
	// 00319138 mov esi, edx
	{ ctx.esi = (uint32_t)(ctx.edx); }
	// 0031913A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031913B mov edi, [ebx+0x28]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x28u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031913E and esi, eax
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319140 cmp esi, eax
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319142 mov [ebp-0x08], edi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00319145 mov [ebp-0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00319148 jnz 0x00319159
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00319159; }
	// 0031914A and dword ptr [ecx+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031914E mov eax, [ebx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319151 mov [eax+0x10], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00319154 jmp 0x003192CE
	goto loc_003192CE;
loc_00319159:
	// 00319159 mov ax, [edi+0x06]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x6u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 0031915D push [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031915F mov [ebp+0x0A], ah
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)(ctx.eax >> 8))); }
	// 00319162 mov [ebp+0x0B], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00319165 mov ax, [edi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00319169 movzx ecx, word ptr [ebp+0x0A]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xAu); ctx.ecx = (uint32_t)((uint16_t)(X86_MEM16(ea))); }
	// 0031916D mov [ebp+0x0E], ah
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)(ctx.eax >> 8))); }
	// 00319170 mov [ebp+0x0F], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00319173 movzx esi, word ptr [ebp+0x0E]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xEu); ctx.esi = (uint32_t)((uint16_t)(X86_MEM16(ea))); }
	// 00319177 imul esi, ecx
	{ int64_t p = (int64_t)(int32_t)(ctx.esi) * (int64_t)(int32_t)(ctx.ecx); uint32_t r = (uint32_t)p; cf = of = p != (int32_t)r; ctx.esi = (uint32_t)(r); }
	// 0031917A call 0x00318FEF
	X86_PUSH32(0x31917Fu); sub_00318FEF(ctx, base);
	// 0031917F movzx ecx, word ptr [ebp+0x0A]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xAu); ctx.ecx = (uint32_t)((uint16_t)(X86_MEM16(ea))); }
	// 00319183 inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319184 mov [ebp+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319187 mul ecx
	{ uint64_t p = (uint64_t)ctx.eax * (uint32_t)ctx.ecx; ctx.eax = (uint32_t)p; ctx.edx = (uint32_t)(p >> 32); cf = of = ctx.edx != 0; }
	// 00319189 test esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031918B mov [ebp-0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031918E mov [ebp-0x10], edx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00319191 jnz 0x00319198
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00319198; }
	// 00319193 mov esi, 0x2000
	{ ctx.esi = (uint32_t)(0x2000u); }
loc_00319198:
	// 00319198 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00319199 call 0x003190EC
	X86_PUSH32(0x31919Eu); sub_003190EC(ctx, base);
	// 0031919E test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003191A0 jz 0x003192EF
	if (((uint32_t)(ca & cb)) == 0) { goto loc_003192EF; }
	// 003191A6 movzx edx, word ptr [ebp+0x0A]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xAu); ctx.edx = (uint32_t)((uint16_t)(X86_MEM16(ea))); }
	// 003191AA cmp edx, 0x1000
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(0x1000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003191B0 jnbe 0x003192EF
	if ((uint32_t)ca > (uint32_t)cb) { goto loc_003192EF; }
	// 003191B6 cmp esi, 0x4000
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(0x4000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003191BC jnbe 0x003192EF
	if ((uint32_t)ca > (uint32_t)cb) { goto loc_003192EF; }
	// 003191C2 test si, 0xFFF
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.esi)), b = (uint16_t)(0xFFFu); uint16_t r = (uint16_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 003191C7 jnz 0x003192EF
	if (((uint16_t)(ca & cb)) != 0) { goto loc_003192EF; }
	// 003191CD xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003191CF cmp [ebp+0x0C], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003191D2 jz 0x003192EF
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_003192EF; }
	// 003191D8 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003191DB cmp eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003191DD jb 0x003192EF
	if ((uint32_t)ca < (uint32_t)cb) { goto loc_003192EF; }
	// 003191E3 jnbe 0x003191EE
	if (!(cf | zf)) { goto loc_003191EE; }
	// 003191E5 cmp [ebp-0x14], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003191E8 jb 0x003192EF
	if ((uint32_t)ca < (uint32_t)cb) { goto loc_003192EF; }
loc_003191EE:
	// 003191EE cmp eax, 0x01
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003191F1 jnbe 0x003192EF
	if ((uint32_t)ca > (uint32_t)cb) { goto loc_003192EF; }
	// 003191F7 jb 0x00319203
	if (cf) { goto loc_00319203; }
	// 003191F9 cmp dword ptr [ebp-0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003191FD jnbe 0x003192EF
	if ((uint32_t)ca > (uint32_t)cb) { goto loc_003192EF; }
loc_00319203:
	// 00319203 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319206 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00319207 mov [ebx+0x160], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x160u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031920D mov [ebx+0x164], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x164u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319213 mov [ebx+0x168], esi
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x168u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 00319219 call 0x00319106
	X86_PUSH32(0x31921Eu); sub_00319106(ctx, base);
	// 0031921E movzx eax, al
	{ ctx.eax = (uint32_t)((uint8_t)(((uint8_t)ctx.eax))); }
	// 00319221 mov [ebx+0x158], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x158u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319227 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319229 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031922A push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031922B push [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031922E mov dword ptr [ebx+0x148], 0x0C
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x148u); X86_MEM32(ea) = (uint32_t)(0xCu); }
	// 00319238 push [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031923B lea edi, [ebx+0x140]
	ctx.edi = (uint32_t)((uint32_t)(ctx.ebx + 0x140u));
	// 00319241 call 0x0020EF40
	X86_PUSH32(0x319246u); sub_0020EF40(ctx, base);
	// 00319246 mov [edi], eax
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319248 mov eax, [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031924B shr esi, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t c = (uint32_t)(0xCu) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.esi = (uint32_t)(r); } }
	// 0031924E mov [edi+0x04], edx
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00319251 mov dword ptr [ebx+0x14C], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14Cu); X86_MEM32(ea) = (uint32_t)(0x1u); }
	// 0031925B mov [ebx+0x150], esi
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x150u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 00319261 mov dword ptr [ebx+0x154], 0x1000
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x154u); X86_MEM32(ea) = (uint32_t)(0x1000u); }
	// 0031926B mov eax, [eax+0x10]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031926E cmp eax, 0x70000
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x70000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319273 jz 0x003192AD
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_003192AD; }
	// 00319275 cmp eax, 0x74004
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x74004u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031927A jnz 0x003192CB
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_003192CB; }
	// 0031927C mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031927F mov edx, [eax+0x30]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x30u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00319282 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319284 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 00319286 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00319287 mov edi, edx
	{ ctx.edi = (uint32_t)(ctx.edx); }
	// 00319289 rep stosd
	{ x86_rep_stos(ctx, base, 4); }
	// 0031928B mov eax, [ebx+0x160]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x160u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319291 mov [edx+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319294 mov eax, [ebx+0x164]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x164u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031929A mov [edx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031929D mov byte ptr [edx+0x1A], 0x01
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x1Au); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 003192A1 mov eax, [ebx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003192A4 mov dword ptr [eax+0x14], 0x20
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); X86_MEM32(ea) = (uint32_t)(0x20u); }
	// 003192AB jmp 0x003192C4
	goto loc_003192C4;
loc_003192AD:
	// 003192AD mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003192B0 push 0x06
	{ uint32_t v = (uint32_t)(0x6u); X86_PUSH32(v); }
	// 003192B2 mov esi, edi
	{ ctx.esi = (uint32_t)(ctx.edi); }
	// 003192B4 mov edi, [eax+0x30]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x30u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 003192B7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 003192B8 rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 003192BA mov eax, [ebx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003192BD mov dword ptr [eax+0x14], 0x18
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); X86_MEM32(ea) = (uint32_t)(0x18u); }
loc_003192C4:
	// 003192C4 mov eax, [ebx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003192C7 and dword ptr [eax+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_003192CB:
	// 003192CB mov edi, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
loc_003192CE:
	// 003192CE push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 003192CF call [0x0031B490]
	X86_PUSH32(0x3192D5u); x86_kernel(ctx, base, 17);
	// 003192D5 mov ecx, [ebx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003192D8 xor dl, dl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.edx)); uint8_t b = (uint8_t)(((uint8_t)ctx.edx)); uint8_t r = (uint8_t)(a ^ b); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 003192DA call [0x0031B51C]
	X86_PUSH32(0x3192E0u); x86_kernel(ctx, base, 87);
	// 003192E0 push [ebx]
	{ uint32_t ea = (uint32_t)(ctx.ebx); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 003192E2 call [0x0031B520]
	X86_PUSH32(0x3192E8u); x86_kernel(ctx, base, 81);
	// 003192E8 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 003192E9 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 003192EA pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 003192EB leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 003192EC ret 0x08
	ctx.esp += 12; return;
loc_003192EF:
	// 003192EF mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003192F2 and dword ptr [eax+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003192F6 mov eax, [ebx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003192F9 mov dword ptr [eax+0x10], 0xC000014F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(0xC000014Fu); }
	// 00319300 jmp 0x003192CE
	X86_BARRIER();
	goto loc_003192CE;
}
X86_WEAK_FUNC(sub_0031911C, __imp__sub_0031911C)

X86_FUNC(__imp__sub_00319302) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319302 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00319303 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00319305 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00319306 mov eax, [edx+0x5C]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x5Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319309 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031930A push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031930B mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 0031930D push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031930E mov edi, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00319311 mov byte ptr [esi+0x4F], 0x2F
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4Fu); X86_MEM8(ea) = (uint8_t)(0x2Fu); }
	// 00319315 mov ecx, [esi+0x158]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x158u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031931B mov eax, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031931D mov edx, [edi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00319320 call 0x0027A710
	X86_PUSH32(0x319325u); sub_0027A710(ctx, base);
	// 00319325 mov ecx, [esi+0x158]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x158u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031932B mov ebx, [edi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0031932E mov edx, eax
	{ ctx.edx = (uint32_t)(ctx.eax); }
	// 00319330 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319332 mov [esi+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319335 mov [esi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319338 mov dword ptr [esi+0x30], 0x319069
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); X86_MEM32(ea) = (uint32_t)(0x319069u); }
	// 0031933F shr ebx, cl
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t c = (uint32_t)(((uint8_t)ctx.ecx)) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ebx = (uint32_t)(r); } }
	// 00319341 mov cx, [edi+0x0A]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xAu); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00319345 imul cx, cx, 0x64
	{ int64_t p = (int64_t)(int16_t)(((uint16_t)ctx.ecx)) * (int64_t)(int16_t)(0x64u); uint16_t r = (uint16_t)p; cf = of = p != (int16_t)r; ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(r); }
	// 00319349 mov [esi+0x34], cx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0031934D lea ecx, [esi+0x4F]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x4Fu));
	// 00319350 mov [esi+0x37], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x37u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00319353 mov byte ptr [esi+0x36], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x36u); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 00319357 mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 00319359 stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 0031935A stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 0031935B stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 0031935C stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 0031935D push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0031935E mov byte ptr [ecx], 0x2F
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM8(ea) = (uint8_t)(0x2Fu); }
	// 00319361 call 0x00318FEF
	X86_PUSH32(0x319366u); sub_00318FEF(ctx, base);
	// 00319366 mov [esi+0x51], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x51u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319369 mov [ebp-0x04], bh
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)(ctx.ebx >> 8))); }
	// 0031936C mov [ebp-0x03], bl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0031936F mov ax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00319373 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00319375 mov [esi+0x56], ax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x56u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00319379 call 0x0031A2A4
	X86_PUSH32(0x31937Eu); sub_0031A2A4(ctx, base);
	// 0031937E pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031937F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319380 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00319381 leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 00319382 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00319302, __imp__sub_00319302)

X86_FUNC(__imp__sub_00319383) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319383 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00319384 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00319386 sub esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319389 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031938C mov ecx, [eax+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x2Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031938F push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319390 mov edi, [eax+0x28]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00319393 add ecx, edi
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319395 cmp edi, ecx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319397 mov [ebp-0x08], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031939A jnb 0x00319443
	if ((uint32_t)ca >= (uint32_t)cb) { goto loc_00319443; }
	// 003193A0 mov edx, edi
	{ ctx.edx = (uint32_t)(ctx.edi); }
	// 003193A2 sub edx, 0x31B324
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x31B324u); uint32_t r = (uint32_t)(a - b); ctx.edx = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003193A8 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 003193A9 mov [ebp-0x0C], edx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 003193AC push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
loc_003193AD:
	// 003193AD xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003193AF cmp dword ptr [edi], 0x46313539
	{ uint32_t ea = (uint32_t)(ctx.edi); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x46313539u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003193B5 jnz 0x00319427
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00319427; }
loc_003193B7:
	// 003193B7 inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003193B8 cmp eax, 0x08
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003193BB mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003193BE jz 0x003193D2
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_003193D2; }
	// 003193C0 mov esi, [edx+eax*4+0x31B324]
	{ uint32_t ea = (uint32_t)(ctx.edx + ctx.eax * 4u + 0x31B324u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 003193C7 cmp esi, [eax*4+0x31B324]
	{ uint32_t ea = (uint32_t)(ctx.eax * 4u + 0x31B324u); uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003193CE jz 0x003193B7
	if ((uint32_t)ca == (uint32_t)cb) { X86_BARRIER(); goto loc_003193B7; }
	// 003193D0 jmp 0x00319427
	goto loc_00319427;
loc_003193D2:
	// 003193D2 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 003193D3 call [0x0031B468]
	X86_PUSH32(0x3193D9u); x86_kernel(ctx, base, 179);
	// 003193D9 or esi, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a | b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003193DC cmp dword ptr [ebp+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003193E0 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 003193E2 jl 0x003193EB
	if ((int32_t)ca < (int32_t)cb) { goto loc_003193EB; }
	// 003193E4 mov dword ptr [ebp+0x0C], 0xC000003E
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); X86_MEM32(ea) = (uint32_t)(0xC000003Eu); }
loc_003193EB:
	// 003193EB mov eax, ebx
	{ ctx.eax = (uint32_t)(ctx.ebx); }
	// 003193ED and eax, 0x06
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x6u); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003193F0 cmp al, 0x02
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 003193F2 jnz 0x00319406
	if ((uint8_t)ca != (uint8_t)cb) { goto loc_00319406; }
	// 003193F4 mov esi, ebx
	{ ctx.esi = (uint32_t)(ctx.ebx); }
	// 003193F6 and esi, 0xFFFFFFFD
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0xFFFFFFFDu); uint32_t r = (uint32_t)(a & b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003193F9 or esi, 0x04
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a | b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003193FC push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 003193FD push 0x20
	{ uint32_t v = (uint32_t)(0x20u); X86_PUSH32(v); }
	// 003193FF push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319400 call [0x0031B464]
	X86_PUSH32(0x319406u); x86_kernel(ctx, base, 182);
loc_00319406:
	// 00319406 dec [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a - 1); X86_MEM32(ea) = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319409 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031940C mov dword ptr [edi+eax*4], 0x4C494146
	{ uint32_t ea = (uint32_t)(ctx.edi + ctx.eax * 4u); X86_MEM32(ea) = (uint32_t)(0x4C494146u); }
	// 00319413 jnz 0x00319406
	if (!zf) { X86_BARRIER(); goto loc_00319406; }
	// 00319415 cmp esi, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319418 jz 0x00319424
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00319424; }
	// 0031941A push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031941B push 0x20
	{ uint32_t v = (uint32_t)(0x20u); X86_PUSH32(v); }
	// 0031941D push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031941E call [0x0031B464]
	X86_PUSH32(0x319424u); x86_kernel(ctx, base, 182);
loc_00319424:
	// 00319424 mov ecx, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
loc_00319427:
	// 00319427 mov edx, [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031942A mov eax, 0x1000
	{ ctx.eax = (uint32_t)(0x1000u); }
	// 0031942F add edi, eax
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319431 add edx, eax
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319433 cmp edi, ecx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319435 mov [ebp-0x0C], edx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00319438 jb 0x003193AD
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_003193AD; }
	// 0031943E mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319441 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319442 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
loc_00319443:
	// 00319443 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00319446 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319447 call 0x00319069
	X86_PUSH32(0x31944Cu); sub_00319069(ctx, base);
	// 0031944C pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031944D leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 0031944E ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00319383, __imp__sub_00319383)

X86_FUNC(__imp__sub_00319451) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319451 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00319452 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00319454 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00319455 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319456 mov esi, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00319459 mov ebx, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0031945C mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031945F and ebx, 0xF0000000
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(0xF0000000u); uint32_t r = (uint32_t)(a & b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319465 cmp dword ptr [ebp+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319469 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031946A mov edi, [ecx+0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x5Cu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031946D mov [ebp+0x08], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00319470 jl 0x00319527
	if ((int32_t)ca < (int32_t)cb) { goto loc_00319527; }
	// 00319476 add ebx, 0x10000000
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(0x10000000u); uint32_t r = (uint32_t)(a + b); ctx.ebx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031947C cmp ebx, 0x20000000
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(0x20000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319482 jnz 0x0031948F
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_0031948F; }
	// 00319484 test byte ptr [esi+0x0F], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xFu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319488 jnz 0x003194A2
	if (((uint8_t)(ca & cb)) != 0) { goto loc_003194A2; }
	// 0031948A mov ebx, 0x40000000
	{ ctx.ebx = (uint32_t)(0x40000000u); }
loc_0031948F:
	// 0031948F cmp ebx, 0x40000000
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(0x40000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319495 jnz 0x003194A2
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_003194A2; }
	// 00319497 test byte ptr [esi+0x0F], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xFu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031949B jnz 0x003194A2
	if (((uint8_t)(ca & cb)) != 0) { goto loc_003194A2; }
loc_0031949D:
	// 0031949D mov ebx, 0x60000000
	{ ctx.ebx = (uint32_t)(0x60000000u); }
loc_003194A2:
	// 003194A2 mov eax, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003194A5 mov edx, 0xFFFFFFF
	{ ctx.edx = (uint32_t)(0xFFFFFFFu); }
	// 003194AA and eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003194AC or eax, ebx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003194AE cmp ebx, 0x20000000
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(0x20000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003194B4 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003194B7 jz 0x003195E0
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_003195E0; }
	// 003194BD cmp ebx, 0x30000000
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(0x30000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003194C3 jz 0x003195B4
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_003195B4; }
	// 003194C9 cmp ebx, 0x40000000
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(0x40000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003194CF jz 0x00319594
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00319594; }
	// 003194D5 cmp ebx, 0x50000000
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(0x50000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003194DB jz 0x00319562
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00319562; }
	// 003194E1 cmp ebx, 0x60000000
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(0x60000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003194E7 jnz 0x00319630
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00319630; }
	// 003194ED and eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003194EF mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003194F2 mov eax, [0x003D56DC]
	{ uint32_t ea = (uint32_t)(0x3D56DCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003194F7 mov edx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 003194F9 mov eax, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003194FC mov [eax], edx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 003194FE mov [edx+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319501 mov eax, [edi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319504 mov [ecx+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319507 mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031950A xor dl, dl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.edx)); uint8_t b = (uint8_t)(((uint8_t)ctx.edx)); uint8_t r = (uint8_t)(a ^ b); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031950C mov [ecx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031950F call [0x0031B51C]
	X86_PUSH32(0x319515u); x86_kernel(ctx, base, 87);
	// 00319515 call 0x003190A9
	X86_PUSH32(0x31951Au); sub_003190A9(ctx, base);
	// 0031951A push [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031951C call [0x0031B520]
	X86_PUSH32(0x319522u); x86_kernel(ctx, base, 81);
	// 00319522 jmp 0x00319630
	goto loc_00319630;
loc_00319527:
	// 00319527 cmp ebx, 0x20000000
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(0x20000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031952D jz 0x0031953B
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031953B; }
	// 0031952F cmp ebx, 0x40000000
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(0x40000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319535 jnz 0x0031949D
	if ((uint32_t)ca != (uint32_t)cb) { X86_BARRIER(); goto loc_0031949D; }
loc_0031953B:
	// 0031953B cmp dword ptr [ebp+0x0C], 0xC000003E
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0xC000003Eu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319542 jnz 0x0031949D
	if ((uint32_t)ca != (uint32_t)cb) { X86_BARRIER(); goto loc_0031949D; }
	// 00319548 lea ecx, [esi+0x28]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x28u));
	// 0031954B call 0x003190C5
	X86_PUSH32(0x319550u); sub_003190C5(ctx, base);
	// 00319550 and dword ptr [ebp+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319554 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319557 add ebx, 0x10000000
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(0x10000000u); uint32_t r = (uint32_t)(a + b); ctx.ebx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031955D jmp 0x003194A2
	X86_BARRIER();
	goto loc_003194A2;
loc_00319562:
	// 00319562 and dword ptr [esi+0x38], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x38u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319566 mov byte ptr [esi+0x37], 0x06
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x37u); X86_MEM8(ea) = (uint8_t)(0x6u); }
	// 0031956A mov eax, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031956D mov [esi+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319570 mov byte ptr [esi+0x4F], 0x2A
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4Fu); X86_MEM8(ea) = (uint8_t)(0x2Au); }
	// 00319574 mov eax, [edi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319577 sub eax, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031957A add eax, [edi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x4u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031957D mov [esi+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319580 mov eax, [esi+0x168]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x168u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319586 mov [esi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319589 mov eax, [edi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031958C sub eax, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031958F:
	// 0031958F add eax, [edi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x4u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319592 jmp 0x00319601
	goto loc_00319601;
loc_00319594:
	// 00319594 mov dword ptr [esi+0x28], 0x3D56E4
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(0x3D56E4u); }
	// 0031959B mov eax, [esi+0x168]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x168u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003195A1 sub eax, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003195A4 mov byte ptr [esi+0x37], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x37u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 003195A8 mov [esi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003195AB mov byte ptr [esi+0x4F], 0x28
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4Fu); X86_MEM8(ea) = (uint8_t)(0x28u); }
	// 003195AF mov eax, [edi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003195B2 jmp 0x0031958F
	X86_BARRIER();
	goto loc_0031958F;
loc_003195B4:
	// 003195B4 mov eax, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003195B7 mov [esi+0x38], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003195BA mov byte ptr [esi+0x37], 0x06
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x37u); X86_MEM8(ea) = (uint8_t)(0x6u); }
	// 003195BE lea eax, [esi+0x168]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x168u));
	// 003195C4 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003195C6 mov [esi+0x3C], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 003195C9 mov ecx, [edi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003195CC mov [esi+0x28], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 003195CF mov eax, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003195D1 mov [esi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003195D4 mov byte ptr [esi+0x4F], 0x2A
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4Fu); X86_MEM8(ea) = (uint8_t)(0x2Au); }
	// 003195D8 mov eax, [edi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003195DB sub eax, [esi+0x38]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x38u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003195DE jmp 0x00319601
	goto loc_00319601;
loc_003195E0:
	// 003195E0 mov dword ptr [esi+0x28], 0x3D56E4
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(0x3D56E4u); }
	// 003195E7 mov eax, [esi+0x168]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x168u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003195ED sub eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003195F0 mov byte ptr [esi+0x37], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x37u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 003195F4 mov [esi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003195F7 mov byte ptr [esi+0x4F], 0x28
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4Fu); X86_MEM8(ea) = (uint8_t)(0x28u); }
	// 003195FB mov eax, [edi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003195FE sub eax, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00319601:
	// 00319601 lea edi, [esi+0x158]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + 0x158u));
	// 00319607 mov ecx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319609 shr eax, cl
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(((uint8_t)ctx.ecx)) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 0031960B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031960C call 0x00318FEF
	X86_PUSH32(0x319611u); sub_00318FEF(ctx, base);
	// 00319611 mov [esi+0x51], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x51u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319614 mov ecx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319616 mov eax, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319619 shr eax, cl
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(((uint8_t)ctx.ecx)) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 0031961B mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031961D mov [ebp+0x0E], ah
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)(ctx.eax >> 8))); }
	// 00319620 mov [ebp+0x0F], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00319623 mov ax, [ebp+0x0E]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xEu); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00319627 mov [esi+0x56], ax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x56u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0031962B call 0x0031A2A4
	X86_PUSH32(0x319630u); sub_0031A2A4(ctx, base);
loc_00319630:
	// 00319630 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00319631 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319632 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00319633 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00319634 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00319451, __imp__sub_00319451)

X86_FUNC(__imp__sub_00319637) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319637 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00319638 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031963A push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031963B push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031963C mov esi, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031963F mov ebx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00319642 mov edx, [ebx+0x5C]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x5Cu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00319645 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319646 mov edi, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00319649 and edi, 0xF0000000
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0xF0000000u); uint32_t r = (uint32_t)(a & b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031964F cmp dword ptr [ebp+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319653 mov [ebp+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00319656 jl 0x00319660
	if ((int32_t)ca < (int32_t)cb) { goto loc_00319660; }
	// 00319658 add edi, 0x10000000
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0x10000000u); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031965E jmp 0x00319695
	goto loc_00319695;
loc_00319660:
	// 00319660 cmp edi, 0x20000000
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(0x20000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319666 jz 0x00319670
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00319670; }
	// 00319668 cmp edi, 0x30000000
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(0x30000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031966E jnz 0x00319690
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00319690; }
loc_00319670:
	// 00319670 cmp dword ptr [ebp+0x0C], 0xC000003E
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0xC000003Eu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319677 jnz 0x00319690
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00319690; }
	// 00319679 lea ecx, [esi+0x28]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x28u));
	// 0031967C call 0x003190C5
	X86_PUSH32(0x319681u); sub_003190C5(ctx, base);
	// 00319681 and dword ptr [ebp+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319685 mov edx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00319688 add edi, 0x10000000
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0x10000000u); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031968E jmp 0x00319695
	goto loc_00319695;
loc_00319690:
	// 00319690 mov edi, 0x50000000
	{ ctx.edi = (uint32_t)(0x50000000u); }
loc_00319695:
	// 00319695 mov eax, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319698 mov ecx, 0xFFFFFFF
	{ ctx.ecx = (uint32_t)(0xFFFFFFFu); }
	// 0031969D and eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031969F or eax, edi
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003196A1 cmp edi, 0x20000000
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(0x20000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003196A7 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003196AA jz 0x0031975C
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031975C; }
	// 003196B0 cmp edi, 0x30000000
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(0x30000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003196B6 jz 0x00319743
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00319743; }
	// 003196BC cmp edi, 0x40000000
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(0x40000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003196C2 jz 0x0031970C
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031970C; }
	// 003196C4 cmp edi, 0x50000000
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(0x50000000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003196CA jnz 0x003197AB
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_003197AB; }
	// 003196D0 and eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003196D2 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003196D5 mov eax, [0x003D56DC]
	{ uint32_t ea = (uint32_t)(0x3D56DCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003196DA mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 003196DC mov eax, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003196DF mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 003196E1 mov [ecx+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003196E4 mov eax, [edx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003196E7 mov [ebx+0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003196EA mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003196ED xor dl, dl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.edx)); uint8_t b = (uint8_t)(((uint8_t)ctx.edx)); uint8_t r = (uint8_t)(a ^ b); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 003196EF mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 003196F1 mov [ebx+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003196F4 call [0x0031B51C]
	X86_PUSH32(0x3196FAu); x86_kernel(ctx, base, 87);
	// 003196FA call 0x003190A9
	X86_PUSH32(0x3196FFu); sub_003190A9(ctx, base);
	// 003196FF push [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00319701 call [0x0031B520]
	X86_PUSH32(0x319707u); x86_kernel(ctx, base, 81);
	// 00319707 jmp 0x003197AB
	goto loc_003197AB;
loc_0031970C:
	// 0031970C mov byte ptr [esi+0x4F], 0x2A
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4Fu); X86_MEM8(ea) = (uint8_t)(0x2Au); }
	// 00319710 mov byte ptr [esi+0x37], 0x06
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x37u); X86_MEM8(ea) = (uint8_t)(0x6u); }
	// 00319714 mov eax, [esi+0x168]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x168u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031971A sub eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031971D mov [esi+0x38], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x38u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319720 mov eax, [esi+0x168]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x168u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319726 sub eax, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319729 mov [esi+0x3C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031972C mov eax, [edx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031972F mov [esi+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319732 mov eax, [esi+0x168]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x168u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319738 mov [esi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031973B mov eax, [edx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031973E sub eax, [esi+0x38]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x38u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319741 jmp 0x0031977C
	goto loc_0031977C;
loc_00319743:
	// 00319743 mov eax, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319746 add eax, 0x3D56E4
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x3D56E4u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031974B mov [esi+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031974E mov eax, [esi+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319751 mov [esi+0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319754 mov eax, [edx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319757 add eax, [edx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x4u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031975A jmp 0x0031977C
	goto loc_0031977C;
loc_0031975C:
	// 0031975C mov byte ptr [esi+0x37], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x37u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 00319760 mov byte ptr [esi+0x4F], 0x28
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4Fu); X86_MEM8(ea) = (uint8_t)(0x28u); }
	// 00319764 mov dword ptr [esi+0x28], 0x3D56E4
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(0x3D56E4u); }
	// 0031976B mov ecx, [esi+0x168]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x168u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319771 sub ecx, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ctx.ecx = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319774 mov [esi+0x2C], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00319777 mov eax, [edx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031977A sub eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031977C:
	// 0031977C lea edi, [esi+0x158]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + 0x158u));
	// 00319782 mov ecx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319784 shr eax, cl
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(((uint8_t)ctx.ecx)) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 00319786 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319787 call 0x00318FEF
	X86_PUSH32(0x31978Cu); sub_00318FEF(ctx, base);
	// 0031978C mov [esi+0x51], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x51u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031978F mov ecx, [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319791 mov eax, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319794 shr eax, cl
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(((uint8_t)ctx.ecx)) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 00319796 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00319798 mov [ebp+0x0E], ah
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)(ctx.eax >> 8))); }
	// 0031979B mov [ebp+0x0F], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031979E mov ax, [ebp+0x0E]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xEu); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 003197A2 mov [esi+0x56], ax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x56u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 003197A6 call 0x0031A2A4
	X86_PUSH32(0x3197ABu); sub_0031A2A4(ctx, base);
loc_003197AB:
	// 003197AB pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 003197AC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 003197AD pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 003197AE pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 003197AF ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00319637, __imp__sub_00319637)

X86_FUNC(__imp__sub_003197B2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003197B2 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 003197B3 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 003197B4 push 0x5F5F554D
	{ uint32_t v = (uint32_t)(0x5F5F554Du); X86_PUSH32(v); }
	// 003197B9 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 003197BB pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 003197BC push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 003197BD mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 003197BF call [0x0031B48C]
	X86_PUSH32(0x3197C5u); x86_kernel(ctx, base, 15);
	// 003197C5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003197C7 jnz 0x003197D7
	if (((uint32_t)(ca & cb)) != 0) { goto loc_003197D7; }
	// 003197C9 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003197CC and dword ptr [eax+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003197D0 mov eax, 0xC000009A
	{ ctx.eax = (uint32_t)(0xC000009Au); }
	// 003197D5 jmp 0x0031980C
	goto loc_0031980C;
loc_003197D7:
	// 003197D7 mov [esi+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003197DA mov [esi+0x2C], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 003197DD lea ecx, [esi+0x4F]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x4Fu));
	// 003197E0 mov dword ptr [esi+0x30], 0x31911C
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); X86_MEM32(ea) = (uint32_t)(0x31911Cu); }
	// 003197E7 mov word ptr [esi+0x34], 0x0A
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); X86_MEM16(ea) = (uint16_t)(0xAu); }
	// 003197ED mov byte ptr [esi+0x36], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x36u); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 003197F1 mov byte ptr [esi+0x37], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x37u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 003197F5 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003197F7 mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 003197F9 stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 003197FA stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 003197FB stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 003197FC stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 003197FD mov byte ptr [ecx], 0x25
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM8(ea) = (uint8_t)(0x25u); }
	// 00319800 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00319802 call 0x0031A2A4
	X86_PUSH32(0x319807u); sub_0031A2A4(ctx, base);
	// 00319807 mov eax, 0x103
	{ ctx.eax = (uint32_t)(0x103u); }
loc_0031980C:
	// 0031980C pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031980D pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031980E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_003197B2, __imp__sub_003197B2)

X86_FUNC(__imp__sub_0031980F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031980F mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00319813 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319814 mov esi, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00319818 and byte ptr [esi+0x0F], 0x0F
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xFu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031981C mov ecx, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031981F push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319820 mov eax, 0xC0000000
	{ ctx.eax = (uint32_t)(0xC0000000u); }
	// 00319825 mov edi, edx
	{ ctx.edi = (uint32_t)(ctx.edx); }
	// 00319827 and edi, eax
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319829 cmp edi, eax
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031982B jnz 0x00319846
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00319846; }
	// 0031982D and dword ptr [ecx+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319831 mov [ecx+0x10], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00319834 xor dl, dl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.edx)); uint8_t b = (uint8_t)(((uint8_t)ctx.edx)); uint8_t r = (uint8_t)(a ^ b); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319836 call [0x0031B51C]
	X86_PUSH32(0x31983Cu); x86_kernel(ctx, base, 87);
	// 0031983C push [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031983E call [0x0031B520]
	X86_PUSH32(0x319844u); x86_kernel(ctx, base, 81);
	// 00319844 jmp 0x003198AC
	goto loc_003198AC;
loc_00319846:
	// 00319846 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319848 lea edi, [esi+0x4F]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + 0x4Fu));
	// 0031984B stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 0031984C stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 0031984D stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 0031984E stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 0031984F mov word ptr [esi+0x34], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); X86_MEM16(ea) = (uint16_t)(0x8u); }
	// 00319855 mov byte ptr [esi+0x36], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x36u); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 00319859 test byte ptr [esi+0x0F], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xFu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x8u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031985D jz 0x00319868
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319868; }
	// 0031985F mov dword ptr [esi+0x30], 0x319637
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); X86_MEM32(ea) = (uint32_t)(0x319637u); }
	// 00319866 jmp 0x0031986F
	goto loc_0031986F;
loc_00319868:
	// 00319868 mov dword ptr [esi+0x30], 0x319451
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); X86_MEM32(ea) = (uint32_t)(0x319451u); }
loc_0031986F:
	// 0031986F or byte ptr [esi+0x0F], 0x10
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xFu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319873 mov edi, [0x003D56DC]
	{ uint32_t ea = (uint32_t)(0x3D56DCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00319879 mov edx, 0x3D56DC
	{ ctx.edx = (uint32_t)(0x3D56DCu); }
	// 0031987E cmp edi, edx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319880 lea eax, [ecx+0x54]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ecx + 0x54u));
	// 00319883 jnz 0x0031989A
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_0031989A; }
	// 00319885 mov [eax], edi
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00319887 mov [ecx+0x58], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0031988A push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031988C mov [edi+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031988F push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319890 mov [0x003D56DC], eax
	{ uint32_t ea = (uint32_t)(0x3D56DCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319895 call [esi+0x30]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.esi + 0x30u)); X86_PUSH32(0x319898u); x86_icall(ctx, base, t); }
	// 00319898 jmp 0x003198AC
	goto loc_003198AC;
loc_0031989A:
	// 0031989A mov esi, [0x003D56E0]
	{ uint32_t ea = (uint32_t)(0x3D56E0u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 003198A0 mov [eax], edx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 003198A2 mov [ecx+0x58], esi
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 003198A5 mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003198A7 mov [0x003D56E0], eax
	{ uint32_t ea = (uint32_t)(0x3D56E0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_003198AC:
	// 003198AC pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 003198AD pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 003198AE ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0031980F, __imp__sub_0031980F)

X86_FUNC(__imp__sub_003198B1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 003198B1 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 003198B2 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 003198B4 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 003198B5 mov ebx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 003198B8 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 003198B9 mov esi, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 003198BC mov eax, [esi+0x5C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x5Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003198BF mov eax, [eax+0x10]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003198C2 sub eax, 0x70000
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x70000u); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003198C7 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 003198C8 jz 0x00319934
	if (zf) { goto loc_00319934; }
	// 003198CA sub eax, 0x14
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003198CD jz 0x00319928
	if (zf) { goto loc_00319928; }
	// 003198CF sub eax, 0x3FF0
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x3FF0u); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003198D4 jz 0x003198E4
	if (zf) { goto loc_003198E4; }
	// 003198D6 and dword ptr [esi+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003198DA mov eax, 0xC0000010
	{ ctx.eax = (uint32_t)(0xC0000010u); }
	// 003198DF jmp 0x00319965
	goto loc_00319965;
loc_003198E4:
	// 003198E4 mov edx, [esi+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 003198E7 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 003198E9 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003198EB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 003198EC mov edi, edx
	{ ctx.edi = (uint32_t)(ctx.edx); }
	// 003198EE rep stosd
	{ x86_rep_stos(ctx, base, 4); }
	// 003198F0 mov eax, [ebx+0x160]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x160u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003198F6 or eax, [ebx+0x164]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x164u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003198FC jnz 0x00319909
	if (!zf) { goto loc_00319909; }
loc_003198FE:
	// 003198FE mov edx, esi
	{ ctx.edx = (uint32_t)(ctx.esi); }
	// 00319900 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00319902 call 0x003197B2
	X86_PUSH32(0x319907u); sub_003197B2(ctx, base);
	// 00319907 jmp 0x0031995E
	goto loc_0031995E;
loc_00319909:
	// 00319909 mov eax, [ebx+0x160]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x160u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031990F mov [edx+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319912 mov eax, [ebx+0x164]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x164u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319918 mov [edx+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031991B mov byte ptr [edx+0x1A], 0x01
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x1Au); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0031991F mov dword ptr [esi+0x14], 0x20
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(0x20u); }
	// 00319926 jmp 0x0031995C
	goto loc_0031995C;
loc_00319928:
	// 00319928 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031992B mov edx, esi
	{ ctx.edx = (uint32_t)(ctx.esi); }
	// 0031992D call 0x00319302
	X86_PUSH32(0x319932u); sub_00319302(ctx, base);
	// 00319932 jmp 0x0031997A
	goto loc_0031997A;
loc_00319934:
	// 00319934 mov eax, [ebx+0x160]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x160u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031993A or eax, [ebx+0x164]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x164u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319940 mov edi, [esi+0x30]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00319943 jz 0x003198FE
	if (zf) { X86_BARRIER(); goto loc_003198FE; }
	// 00319945 push 0x06
	{ uint32_t v = (uint32_t)(0x6u); X86_PUSH32(v); }
	// 00319947 lea esi, [ebx+0x140]
	ctx.esi = (uint32_t)((uint32_t)(ctx.ebx + 0x140u));
	// 0031994D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0031994E rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 00319950 mov ecx, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319953 mov dword ptr [ecx+0x14], 0x18
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(0x18u); }
	// 0031995A mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
loc_0031995C:
	// 0031995C xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031995E:
	// 0031995E cmp eax, 0x103
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(0x103u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319963 jz 0x0031997A
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031997A; }
loc_00319965:
	// 00319965 xor dl, dl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.edx)); uint8_t b = (uint8_t)(((uint8_t)ctx.edx)); uint8_t r = (uint8_t)(a ^ b); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319967 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00319969 mov [esi+0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031996C call [0x0031B51C]
	X86_PUSH32(0x319972u); x86_kernel(ctx, base, 87);
	// 00319972 push [ebx]
	{ uint32_t ea = (uint32_t)(ctx.ebx); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00319974 call [0x0031B520]
	X86_PUSH32(0x31997Au); x86_kernel(ctx, base, 81);
loc_0031997A:
	// 0031997A pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031997B pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031997C pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031997D pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0031997E ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_003198B1, __imp__sub_003198B1)

X86_FUNC(__imp__sub_00319981) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319981 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00319982 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00319984 sub esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319987 and dword ptr [ebp-0x04], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031998B push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031998C mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 0031998E push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031998F mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00319991 mov ecx, [eax+0x5C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319994 mov edx, [ecx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00319997 mov ebx, [ecx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0031999A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031999B mov edi, 0xFFF
	{ ctx.edi = (uint32_t)(0xFFFu); }
	// 003199A0 test edi, edx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003199A2 mov [ebp-0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003199A5 mov [ebp-0x0C], edx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 003199A8 jnz 0x003199FD
	if (((uint32_t)(ca & cb)) != 0) { goto loc_003199FD; }
	// 003199AA test edi, ebx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003199AC jnz 0x003199FD
	if (((uint32_t)(ca & cb)) != 0) { goto loc_003199FD; }
	// 003199AE xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003199B0 mov edi, ebx
	{ ctx.edi = (uint32_t)(ctx.ebx); }
	// 003199B2 add edi, edx
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003199B4 adc eax, [ecx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t c0 = cf; uint32_t r = (uint32_t)(a + b + c0); ctx.eax = (uint32_t)(r); cf = ((uint64_t)a + b + c0) >> 32 & 1; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003199B7 cmp eax, [esi+0x164]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x164u); uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003199BD jnle 0x003199FA
	if ((int32_t)ca > (int32_t)cb) { goto loc_003199FA; }
	// 003199BF jl 0x003199C9
	if ((sf != of)) { goto loc_003199C9; }
	// 003199C1 cmp edi, [esi+0x160]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x160u); uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003199C7 jnbe 0x003199FA
	if ((uint32_t)ca > (uint32_t)cb) { goto loc_003199FA; }
loc_003199C9:
	// 003199C9 test ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003199CB jnz 0x003199D5
	if (((uint32_t)(ca & cb)) != 0) { goto loc_003199D5; }
	// 003199CD mov eax, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003199D0 and [eax+0x10], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003199D3 jmp 0x00319A0A
	goto loc_00319A0A;
loc_003199D5:
	// 003199D5 test byte ptr [ecx+0x02], 0x80
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x2u); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0xFFFFFF80u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 003199D9 jz 0x003199E6
	if (((uint8_t)(ca & cb)) == 0) { goto loc_003199E6; }
	// 003199DB mov eax, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003199DE mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 003199E1 mov eax, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003199E4 jmp 0x003199F2
	goto loc_003199F2;
loc_003199E6:
	// 003199E6 mov eax, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 003199E9 mov edi, [eax+0x30]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x30u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 003199EC add edi, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 003199EF mov [ebp-0x04], edi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
loc_003199F2:
	// 003199F2 mov edi, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 003199F5 mov [ecx+0x08], edi
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 003199F8 jmp 0x00319A04
	goto loc_00319A04;
loc_003199FA:
	// 003199FA mov eax, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_003199FD:
	// 003199FD mov dword ptr [eax+0x10], 0xC000000D
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(0xC000000Du); }
loc_00319A04:
	// 00319A04 cmp dword ptr [ebp-0x04], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A08 jnz 0x00319A25
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00319A25; }
loc_00319A0A:
	// 00319A0A and dword ptr [eax+0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A0E xor dl, dl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.edx)); uint8_t b = (uint8_t)(((uint8_t)ctx.edx)); uint8_t r = (uint8_t)(a ^ b); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319A10 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 00319A12 call [0x0031B51C]
	X86_PUSH32(0x319A18u); x86_kernel(ctx, base, 87);
	// 00319A18 push [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00319A1A call [0x0031B520]
	X86_PUSH32(0x319A20u); x86_kernel(ctx, base, 81);
	// 00319A20 jmp 0x00319B0C
	goto loc_00319B0C;
loc_00319A25:
	// 00319A25 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A27 lea edi, [esi+0x4F]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + 0x4Fu));
	// 00319A2A stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 00319A2B stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 00319A2C stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 00319A2D stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 00319A2E cmp byte ptr [ecx], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ecx); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x3u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319A31 jnz 0x00319ABE
	if ((uint8_t)ca != (uint8_t)cb) { goto loc_00319ABE; }
	// 00319A37 mov edi, [esi+0x168]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x168u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00319A3D mov eax, edx
	{ ctx.eax = (uint32_t)(ctx.edx); }
	// 00319A3F xor edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a ^ b); ctx.edx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A41 div edi
	{ uint64_t n = ((uint64_t)ctx.edx << 32) | ctx.eax; uint32_t d = (uint32_t)ctx.edi; if (!d) x86_trap(ctx, 0x319A41, "divide error"); uint64_t q = n / d; if (q > 0xFFFFFFFFull) x86_trap(ctx, 0x319A41, "divide error"); ctx.eax = (uint32_t)q; ctx.edx = (uint32_t)(n % d); }
	// 00319A43 and byte ptr [esi+0x0F], 0xF1
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xFu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFF1u); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319A47 mov ecx, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319A4A test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A4C jz 0x00319A7A
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00319A7A; }
	// 00319A4E mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
	// 00319A50 sub eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A52 cmp eax, ebx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A54 mov [esi+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319A57 jbe 0x00319A69
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_00319A69; }
	// 00319A59 or ecx, 0x8000000
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x8000000u); uint32_t r = (uint32_t)(a | b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A5F sub eax, ebx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A61 mov [esi+0x0C], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00319A64 mov [esi+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319A67 jmp 0x00319A91
	goto loc_00319A91;
loc_00319A69:
	// 00319A69 add [ebp-0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a + b); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A6C add [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a + b); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A6F sub ebx, eax
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ctx.ebx = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A71 or ecx, 0x2000000
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x2000000u); uint32_t r = (uint32_t)(a | b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A77 mov [esi+0x0C], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
loc_00319A7A:
	// 00319A7A xor edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a ^ b); ctx.edx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A7C mov eax, ebx
	{ ctx.eax = (uint32_t)(ctx.ebx); }
	// 00319A7E div edi
	{ uint64_t n = ((uint64_t)ctx.edx << 32) | ctx.eax; uint32_t d = (uint32_t)ctx.edi; if (!d) x86_trap(ctx, 0x319A7E, "divide error"); uint64_t q = n / d; if (q > 0xFFFFFFFFull) x86_trap(ctx, 0x319A7E, "divide error"); ctx.eax = (uint32_t)q; ctx.edx = (uint32_t)(n % d); }
	// 00319A80 test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A82 jz 0x00319A8D
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00319A8D; }
	// 00319A84 sub ebx, edx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ctx.ebx = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A86 or byte ptr [esi+0x0F], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xFu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319A8A mov [esi+0x1C], edx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_00319A8D:
	// 00319A8D test ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319A8F jnz 0x00319A9B
	if (((uint32_t)(ca & cb)) != 0) { goto loc_00319A9B; }
loc_00319A91:
	// 00319A91 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00319A93 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319A94 call 0x0031980F
	X86_PUSH32(0x319A99u); sub_0031980F(ctx, base);
	// 00319A99 jmp 0x00319B0C
	goto loc_00319B0C;
loc_00319A9B:
	// 00319A9B test byte ptr [esi+0x0F], 0x0E
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xFu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0xEu); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319A9F jz 0x00319AAA
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319AAA; }
	// 00319AA1 mov dword ptr [esi+0x30], 0x31980F
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); X86_MEM32(ea) = (uint32_t)(0x31980Fu); }
	// 00319AA8 jmp 0x00319AB1
	goto loc_00319AB1;
loc_00319AAA:
	// 00319AAA mov dword ptr [esi+0x30], 0x319069
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); X86_MEM32(ea) = (uint32_t)(0x319069u); }
loc_00319AB1:
	// 00319AB1 mov edx, [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00319AB4 mov byte ptr [esi+0x37], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x37u); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 00319AB8 mov byte ptr [esi+0x4F], 0x2A
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4Fu); X86_MEM8(ea) = (uint8_t)(0x2Au); }
	// 00319ABC jmp 0x00319ACD
	goto loc_00319ACD;
loc_00319ABE:
	// 00319ABE mov dword ptr [esi+0x30], 0x319383
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x30u); X86_MEM32(ea) = (uint32_t)(0x319383u); }
	// 00319AC5 mov byte ptr [esi+0x37], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x37u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 00319AC9 mov byte ptr [esi+0x4F], 0x28
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4Fu); X86_MEM8(ea) = (uint8_t)(0x28u); }
loc_00319ACD:
	// 00319ACD mov edi, [esi+0x158]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x158u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00319AD3 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319AD6 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00319AD8 shr edx, cl
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t c = (uint32_t)(((uint8_t)ctx.ecx)) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.edx = (uint32_t)(r); } }
	// 00319ADA mov [esi+0x28], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319ADD mov [esi+0x2C], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00319AE0 mov word ptr [esi+0x34], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); X86_MEM16(ea) = (uint16_t)(0x8u); }
	// 00319AE6 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00319AE7 mov byte ptr [esi+0x36], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x36u); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 00319AEB call 0x00318FEF
	X86_PUSH32(0x319AF0u); sub_00318FEF(ctx, base);
	// 00319AF0 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00319AF2 shr ebx, cl
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t c = (uint32_t)(((uint8_t)ctx.ecx)) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ebx = (uint32_t)(r); } }
	// 00319AF4 mov [esi+0x51], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x51u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319AF7 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00319AF9 mov [ebp-0x02], bh
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)(ctx.ebx >> 8))); }
	// 00319AFC mov [ebp-0x01], bl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 00319AFF mov ax, [ebp-0x02]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFEu); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 00319B03 mov [esi+0x56], ax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x56u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00319B07 call 0x0031A2A4
	X86_PUSH32(0x319B0Cu); sub_0031A2A4(ctx, base);
loc_00319B0C:
	// 00319B0C pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00319B0D pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319B0E pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00319B0F leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 00319B10 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00319981, __imp__sub_00319981)

X86_FUNC(__imp__sub_00319B11) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319B11 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00319B12 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00319B14 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00319B15 mov ebx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00319B18 mov eax, [ebx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319B1B push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319B1C push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319B1D mov edi, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00319B20 mov esi, [edi+0x5C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x5Cu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00319B23 mov [ebp+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319B26 call [0x0031B528]
	X86_PUSH32(0x319B2Cu); x86_kernel(ctx, base, 358);
	// 00319B2C test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319B2E jz 0x00319B4A
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319B4A; }
	// 00319B30 xor dl, dl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.edx)); uint8_t b = (uint8_t)(((uint8_t)ctx.edx)); uint8_t r = (uint8_t)(a ^ b); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319B32 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00319B34 mov dword ptr [edi+0x10], 0xC0000240
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x10u); X86_MEM32(ea) = (uint32_t)(0xC0000240u); }
	// 00319B3B call [0x0031B51C]
	X86_PUSH32(0x319B41u); x86_kernel(ctx, base, 87);
	// 00319B41 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00319B42 call [0x0031B520]
	X86_PUSH32(0x319B48u); x86_kernel(ctx, base, 81);
	// 00319B48 jmp 0x00319B7B
	goto loc_00319B7B;
loc_00319B4A:
	// 00319B4A mov [esi+0x14], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00319B4D mov ebx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00319B50 mov [ebx+0x10], edi
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00319B53 movzx eax, byte ptr [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)((uint8_t)(X86_MEM8(ea))); }
	// 00319B56 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319B57 dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319B58 jz 0x00319B72
	if (zf) { goto loc_00319B72; }
	// 00319B5A dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319B5B jz 0x00319B6B
	if (zf) { goto loc_00319B6B; }
	// 00319B5D sub eax, 0x07
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x7u); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319B60 jnz 0x00319B7B
	if (!zf) { goto loc_00319B7B; }
	// 00319B62 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319B63 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00319B64 call 0x003198B1
	X86_PUSH32(0x319B69u); sub_003198B1(ctx, base);
	// 00319B69 jmp 0x00319B7B
	goto loc_00319B7B;
loc_00319B6B:
	// 00319B6B push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319B6C call [0x0031B524]
	X86_PUSH32(0x319B72u); x86_kernel(ctx, base, 359);
loc_00319B72:
	// 00319B72 mov edx, edi
	{ ctx.edx = (uint32_t)(ctx.edi); }
	// 00319B74 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 00319B76 call 0x00319981
	X86_PUSH32(0x319B7Bu); sub_00319981(ctx, base);
loc_00319B7B:
	// 00319B7B pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00319B7C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319B7D pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00319B7E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00319B7F ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00319B11, __imp__sub_00319B11)

X86_FUNC(__imp__sub_00319B82) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319B82 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319B83 mov esi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00319B87 and byte ptr [esi+0x0D], 0xFE
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFFEu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319B8B test byte ptr [esi+0x0D], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319B8F jz 0x00319BA2
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319BA2; }
	// 00319B91 lea eax, [esi+0xB8]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0xB8u));
	// 00319B97 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319B98 mov eax, [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319B9B mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319B9D call 0x00314995
	X86_PUSH32(0x319BA2u); sub_00314995(ctx, base);
loc_00319BA2:
	// 00319BA2 test byte ptr [esi+0x0D], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319BA6 jz 0x00319BB9
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319BB9; }
	// 00319BA8 lea eax, [esi+0xE8]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0xE8u));
	// 00319BAE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319BAF mov eax, [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319BB2 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319BB4 call 0x00314995
	X86_PUSH32(0x319BB9u); sub_00314995(ctx, base);
loc_00319BB9:
	// 00319BB9 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319BBA ret 0x10
	ctx.esp += 20; return;
}
X86_WEAK_FUNC(sub_00319B82, __imp__sub_00319B82)

X86_FUNC(__imp__sub_00319BBD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319BBD push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00319BBE push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319BBF mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00319BC1 test byte ptr [esi+0x0D], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319BC5 mov ebp, [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00319BC8 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319BC9 mov edi, edx
	{ ctx.edi = (uint32_t)(ctx.edx); }
	// 00319BCB jz 0x00319BDB
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319BDB; }
	// 00319BCD lea eax, [esi+0x70]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x70u));
	// 00319BD0 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319BD1 call [0x0031B444]
	X86_PUSH32(0x319BD7u); x86_kernel(ctx, base, 97);
	// 00319BD7 and byte ptr [esi+0x0D], 0xFE
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFFEu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
loc_00319BDB:
	// 00319BDB mov eax, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319BDE test al, 0x06
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x6u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319BE0 jz 0x00319BF0
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319BF0; }
	// 00319BE2 push 0xC000009D
	{ uint32_t v = (uint32_t)(0xC000009Du); X86_PUSH32(v); }
	// 00319BE7 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319BE8 call [esi+0x30]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.esi + 0x30u)); X86_PUSH32(0x319BEBu); x86_icall(ctx, base, t); }
	// 00319BEB jmp 0x00319CBF
	goto loc_00319CBF;
loc_00319BF0:
	// 00319BF0 or eax, 0x1000
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1000u); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319BF5 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00319BF6 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319BF9 mov eax, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319BFC mov [esi+0x6C], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00319BFF lea edi, [esi+0xB8]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + 0xB8u));
	// 00319C05 xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319C07 mov byte ptr [edi], 0x18
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM8(ea) = (uint8_t)(0x18u); }
	// 00319C0A mov byte ptr [esi+0xB9], 0x05
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xB9u); X86_MEM8(ea) = (uint8_t)(0x5u); }
	// 00319C11 mov [esi+0xC0], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC0u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00319C17 mov [esi+0xC8], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319C1D mov dword ptr [esi+0xCC], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCCu); X86_MEM32(ea) = (uint32_t)(0x4u); }
	// 00319C27 mov ecx, [ebp]
	{ uint32_t ea = (uint32_t)(ctx.ebp); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319C2A push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319C2B call 0x00314D5D
	X86_PUSH32(0x319C30u); sub_00314D5D(ctx, base);
	// 00319C30 or byte ptr [esi+0x0D], 0x03
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x3u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319C34 lea edx, [esi+0x98]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esi + 0x98u));
	// 00319C3A push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00319C3B or ecx, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a | b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319C3E push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00319C3F mov eax, 0xFFF0BDC0
	{ ctx.eax = (uint32_t)(0xFFF0BDC0u); }
	// 00319C44 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319C45 lea eax, [esi+0x70]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x70u));
	// 00319C48 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319C49 call [0x0031B440]
	X86_PUSH32(0x319C4Fu); x86_kernel(ctx, base, 149);
	// 00319C4F mov byte ptr [edi], 0x30
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM8(ea) = (uint8_t)(0x30u); }
	// 00319C52 mov byte ptr [esi+0xB9], 0x40
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xB9u); X86_MEM8(ea) = (uint8_t)(0x40u); }
	// 00319C59 mov dword ptr [esi+0xC0], 0x31A0A4
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC0u); X86_MEM32(ea) = (uint32_t)(0x31A0A4u); }
	// 00319C63 mov [esi+0xC4], esi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 00319C69 mov [esi+0xC8], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00319C6F mov [esi+0xD0], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD0u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00319C75 mov [esi+0xCC], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCCu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00319C7B mov [esi+0xD4], bl
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 00319C81 mov [esi+0xD5], bl
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 00319C87 mov [esi+0xD6], bl
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 00319C8D mov byte ptr [esi+0xE0], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE0u); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 00319C94 mov byte ptr [esi+0xE1], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE1u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 00319C9B mov [esi+0xE2], bx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE2u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ebx)); }
	// 00319CA2 movzx ax, byte ptr [ebp+0x05]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x5u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)((uint8_t)(X86_MEM8(ea))); }
	// 00319CA7 mov [esi+0xE4], ax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE4u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00319CAE mov [esi+0xE6], bx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE6u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ebx)); }
	// 00319CB5 mov ecx, [ebp]
	{ uint32_t ea = (uint32_t)(ctx.ebp); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319CB8 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319CB9 call 0x00314D5D
	X86_PUSH32(0x319CBEu); sub_00314D5D(ctx, base);
	// 00319CBE pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
loc_00319CBF:
	// 00319CBF pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00319CC0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319CC1 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00319CC2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00319BBD, __imp__sub_00319BBD)

X86_FUNC(__imp__sub_00319CC3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319CC3 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319CC4 mov esi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00319CC8 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319CC9 xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319CCB test byte ptr [esi+0x0D], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319CCF jz 0x00319CDF
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319CDF; }
	// 00319CD1 lea eax, [esi+0x70]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x70u));
	// 00319CD4 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319CD5 call [0x0031B444]
	X86_PUSH32(0x319CDBu); x86_kernel(ctx, base, 97);
	// 00319CDB and byte ptr [esi+0x0D], 0xFE
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFFEu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
loc_00319CDF:
	// 00319CDF and byte ptr [esi+0x0D], 0xFD
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFFDu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319CE3 mov eax, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319CE7 mov eax, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319CEA test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319CEC jnl 0x00319CF6
	if (((int32_t)(ca & cb)) >= 0) { goto loc_00319CF6; }
	// 00319CEE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319CEF call 0x00314A35
	X86_PUSH32(0x319CF4u); sub_00314A35(ctx, base);
	// 00319CF4 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
loc_00319CF6:
	// 00319CF6 cmp dword ptr [esi+0x5F], 0x53425355
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x5Fu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x53425355u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319CFD mov eax, 0xC0000001
	{ ctx.eax = (uint32_t)(0xC0000001u); }
	// 00319D02 jz 0x00319D06
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00319D06; }
	// 00319D04 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
loc_00319D06:
	// 00319D06 mov ecx, [esi+0x63]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x63u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319D09 cmp ecx, [esi+0x44]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x44u); uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319D0C jz 0x00319D10
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00319D10; }
	// 00319D0E mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
loc_00319D10:
	// 00319D10 mov cl, [esi+0x6B]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x6Bu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00319D13 cmp cl, 0x02
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319D16 jnz 0x00319D1A
	if ((uint8_t)ca != (uint8_t)cb) { goto loc_00319D1A; }
	// 00319D18 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
loc_00319D1A:
	// 00319D1A cmp cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319D1D jnz 0x00319D24
	if ((uint8_t)ca != (uint8_t)cb) { goto loc_00319D24; }
	// 00319D1F mov edi, 0xC000003E
	{ ctx.edi = (uint32_t)(0xC000003Eu); }
loc_00319D24:
	// 00319D24 mov eax, 0xC0000000
	{ ctx.eax = (uint32_t)(0xC0000000u); }
	// 00319D29 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 00319D2B and ecx, eax
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319D2D cmp ecx, eax
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319D2F jnz 0x00319D3C
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00319D3C; }
	// 00319D31 mov edx, edi
	{ ctx.edx = (uint32_t)(ctx.edi); }
	// 00319D33 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00319D35 call 0x00319BBD
	X86_PUSH32(0x319D3Au); sub_00319BBD(ctx, base);
	// 00319D3A jmp 0x00319D42
	goto loc_00319D42;
loc_00319D3C:
	// 00319D3C push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00319D3E push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319D3F call [esi+0x30]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.esi + 0x30u)); X86_PUSH32(0x319D42u); x86_icall(ctx, base, t); }
loc_00319D42:
	// 00319D42 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00319D43 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319D44 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00319CC3, __imp__sub_00319CC3)

X86_FUNC(__imp__sub_00319D47) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319D47 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319D48 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00319D4A mov eax, [esi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x20u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319D4D mov [esi+0xC8], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319D53 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319D54 lea eax, [esi+0x5F]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x5Fu));
	// 00319D57 mov [esi+0xD0], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319D5D movzx eax, word ptr [esi+0x34]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x34u); ctx.eax = (uint32_t)((uint16_t)(X86_MEM16(ea))); }
	// 00319D61 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00319D63 cdq
	ctx.edx = (uint32_t)((int32_t)ctx.eax >> 31);
	// 00319D64 push 0xFFFE7960
	{ uint32_t v = (uint32_t)(0xFFFE7960u); X86_PUSH32(v); }
	// 00319D69 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00319D6A lea edi, [esi+0xB8]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + 0xB8u));
	// 00319D70 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319D71 mov byte ptr [edi], 0x28
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM8(ea) = (uint8_t)(0x28u); }
	// 00319D74 mov byte ptr [esi+0xB9], 0x41
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xB9u); X86_MEM8(ea) = (uint8_t)(0x41u); }
	// 00319D7B mov dword ptr [esi+0xC0], 0x319CC3
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC0u); X86_MEM32(ea) = (uint32_t)(0x319CC3u); }
	// 00319D85 mov [esi+0xC4], esi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 00319D8B mov dword ptr [esi+0xCC], 0x0D
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCCu); X86_MEM32(ea) = (uint32_t)(0xDu); }
	// 00319D95 mov byte ptr [esi+0xD4], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD4u); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 00319D9C mov byte ptr [esi+0xD5], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD5u); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00319DA3 mov byte ptr [esi+0xD6], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD6u); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00319DAA call 0x0020EE30
	X86_PUSH32(0x319DAFu); sub_0020EE30(ctx, base);
	// 00319DAF lea ecx, [esi+0x98]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0x98u));
	// 00319DB5 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00319DB6 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00319DB7 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319DB8 lea eax, [esi+0x70]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x70u));
	// 00319DBB push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319DBC call [0x0031B440]
	X86_PUSH32(0x319DC2u); x86_kernel(ctx, base, 149);
	// 00319DC2 mov eax, [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319DC5 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319DC7 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319DC8 call 0x00314D5D
	X86_PUSH32(0x319DCDu); sub_00314D5D(ctx, base);
	// 00319DCD pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00319DCE pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319DCF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00319D47, __imp__sub_00319D47)

X86_FUNC(__imp__sub_00319DD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319DD0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319DD1 mov esi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00319DD5 mov eax, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319DD8 mov edx, 0x800
	{ ctx.edx = (uint32_t)(0x800u); }
	// 00319DDD test edx, eax
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319DDF jz 0x00319E1F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_00319E1F; }
	// 00319DE1 and eax, 0xFFFFF7FF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFF7FFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319DE6 lea ecx, [esi+0xB8]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0xB8u));
	// 00319DEC cmp [esp+0x08], ecx
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319DF0 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319DF3 jnz 0x00319DFD
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00319DFD; }
	// 00319DF5 mov ecx, [esi+0xEC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319DFB jmp 0x00319E03
	goto loc_00319E03;
loc_00319DFD:
	// 00319DFD mov ecx, [esi+0xBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
loc_00319E03:
	// 00319E03 and eax, 0xFFFFF9FF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFF9FFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319E08 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00319E09 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319E0C call 0x00314A35
	X86_PUSH32(0x319E11u); sub_00314A35(ctx, base);
	// 00319E11 mov edx, eax
	{ ctx.edx = (uint32_t)(ctx.eax); }
	// 00319E13 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00319E15 call 0x00319BBD
	X86_PUSH32(0x319E1Au); sub_00319BBD(ctx, base);
	// 00319E1A jmp 0x00319EC9
	goto loc_00319EC9;
loc_00319E1F:
	// 00319E1F mov ecx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319E23 cmp dword ptr [ecx+0x04], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319E27 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319E28 jl 0x00319E73
	if ((int32_t)ca < (int32_t)cb) { goto loc_00319E73; }
	// 00319E2A test al, 0x06
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x6u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319E2C jnz 0x00319E73
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00319E73; }
	// 00319E2E mov edx, [esi+0x6C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x6Cu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00319E31 cmp edx, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319E34 jnb 0x00319E42
	if ((uint32_t)ca >= (uint32_t)cb) { goto loc_00319E42; }
	// 00319E36 mov edx, esi
	{ ctx.edx = (uint32_t)(ctx.esi); }
	// 00319E38 call 0x00319ECD
	X86_PUSH32(0x319E3Du); sub_00319ECD(ctx, base);
	// 00319E3D jmp 0x00319EC8
	goto loc_00319EC8;
loc_00319E42:
	// 00319E42 lea edi, [esi+0xB8]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + 0xB8u));
	// 00319E48 cmp ecx, edi
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319E4A mov edx, 0x200
	{ ctx.edx = (uint32_t)(0x200u); }
	// 00319E4F jnz 0x00319E5B
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00319E5B; }
	// 00319E51 and eax, 0xFFFFFDFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFDFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319E56 test ah, 0x04
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319E59 jmp 0x00319E62
	goto loc_00319E62;
loc_00319E5B:
	// 00319E5B and eax, 0xFFFFFBFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFBFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319E60 test edx, eax
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00319E62:
	// 00319E62 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319E65 jnz 0x00319EC8
	if (!zf) { goto loc_00319EC8; }
	// 00319E67 or [esi+0x0C], edx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a | b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319E6A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00319E6C call 0x00319D47
	X86_PUSH32(0x319E71u); sub_00319D47(ctx, base);
	// 00319E71 jmp 0x00319EC8
	goto loc_00319EC8;
loc_00319E73:
	// 00319E73 lea edi, [esi+0xB8]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + 0xB8u));
	// 00319E79 cmp ecx, edi
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319E7B jnz 0x00319EA2
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_00319EA2; }
	// 00319E7D and eax, 0xFFFFFDFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFDFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319E82 test ah, 0x04
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319E85 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319E88 jz 0x00319EB7
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319EB7; }
	// 00319E8A or eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319E8C mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319E8F lea eax, [esi+0xE8]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0xE8u));
	// 00319E95 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
loc_00319E96:
	// 00319E96 mov eax, [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319E99 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319E9B call 0x00314995
	X86_PUSH32(0x319EA0u); sub_00314995(ctx, base);
	// 00319EA0 jmp 0x00319EC8
	goto loc_00319EC8;
loc_00319EA2:
	// 00319EA2 and eax, 0xFFFFFBFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFBFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319EA7 test ah, 0x02
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319EAA mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319EAD jz 0x00319EB7
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319EB7; }
	// 00319EAF or eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319EB1 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319EB4 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319EB5 jmp 0x00319E96
	X86_BARRIER();
	goto loc_00319E96;
loc_00319EB7:
	// 00319EB7 push [ecx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00319EBA call 0x00314A35
	X86_PUSH32(0x319EBFu); sub_00314A35(ctx, base);
	// 00319EBF mov edx, eax
	{ ctx.edx = (uint32_t)(ctx.eax); }
	// 00319EC1 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00319EC3 call 0x00319BBD
	X86_PUSH32(0x319EC8u); sub_00319BBD(ctx, base);
loc_00319EC8:
	// 00319EC8 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_00319EC9:
	// 00319EC9 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319ECA ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00319DD0, __imp__sub_00319DD0)

X86_FUNC(__imp__sub_00319ECD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319ECD push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00319ECE mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00319ED0 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00319ED1 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00319ED2 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319ED3 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319ED4 mov edi, edx
	{ ctx.edi = (uint32_t)(ctx.edx); }
	// 00319ED6 mov al, [edi+0x37]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x37u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00319ED9 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00319EDB mov cl, al
	{ ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(((uint8_t)ctx.eax)); }
	// 00319EDD and cl, 0x03
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)); uint8_t b = (uint8_t)(0x3u); uint8_t r = (uint8_t)(a & b); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319EE0 cmp cl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319EE3 jnz 0x00319EEE
	if ((uint8_t)ca != (uint8_t)cb) { goto loc_00319EEE; }
	// 00319EE5 mov ebx, [edi+0x20]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x20u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00319EE8 mov byte ptr [ebp-0x01], 0x02
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 00319EEC jmp 0x00319EF5
	goto loc_00319EF5;
loc_00319EEE:
	// 00319EEE mov ebx, [edi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x24u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00319EF1 mov byte ptr [ebp-0x01], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); X86_MEM8(ea) = (uint8_t)(0x1u); }
loc_00319EF5:
	// 00319EF5 test al, 0x04
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319EF7 mov edx, [edi+0x6C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x6Cu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00319EFA jz 0x00319F24
	if (((uint8_t)(ca & cb)) == 0) { goto loc_00319F24; }
	// 00319EFC mov ecx, [edi+0x38]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x38u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319EFF cmp edx, ecx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319F01 jnb 0x00319F0B
	if ((uint32_t)ca >= (uint32_t)cb) { goto loc_00319F0B; }
	// 00319F03 lea eax, [edx+0x3D56E4]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edx + 0x3D56E4u));
	// 00319F09 jmp 0x00319F29
	goto loc_00319F29;
loc_00319F0B:
	// 00319F0B mov eax, [edi+0x3C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x3Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319F0E cmp edx, eax
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319F10 jnb 0x00319F19
	if ((uint32_t)ca >= (uint32_t)cb) { goto loc_00319F19; }
	// 00319F12 mov eax, [edi+0x28]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x28u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319F15 sub eax, ecx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319F17 jmp 0x00319F27
	goto loc_00319F27;
loc_00319F19:
	// 00319F19 sub ecx, eax
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ctx.ecx = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319F1B lea eax, [ecx+edx*1+0x3D56E4]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ecx + ctx.edx + 0x3D56E4u));
	// 00319F22 jmp 0x00319F29
	goto loc_00319F29;
loc_00319F24:
	// 00319F24 mov eax, [edi+0x28]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x28u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
loc_00319F27:
	// 00319F27 add eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_00319F29:
	// 00319F29 mov ecx, [edi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x2Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319F2C sub ecx, edx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ctx.ecx = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319F2E cmp ecx, 0x400
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(0x400u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319F34 jbe 0x00319F3B
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_00319F3B; }
	// 00319F36 mov ecx, 0x400
	{ ctx.ecx = (uint32_t)(0x400u); }
loc_00319F3B:
	// 00319F3B add edx, ecx
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319F3D mov [edi+0x6C], edx
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00319F40 mov [esi+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00319F43 mov al, [ebp-0x01]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 00319F46 lea edx, [edi+0x98]
	ctx.edx = (uint32_t)((uint32_t)(ctx.edi + 0x98u));
	// 00319F4C push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 00319F4D mov [esi+0x14], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00319F50 mov [esi+0x1C], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00319F53 or ecx, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a | b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319F56 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00319F57 mov eax, 0xFFE91CA0
	{ ctx.eax = (uint32_t)(0xFFE91CA0u); }
	// 00319F5C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319F5D lea eax, [edi+0x70]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x70u));
	// 00319F60 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00319F61 mov byte ptr [esi], 0x28
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM8(ea) = (uint8_t)(0x28u); }
	// 00319F64 mov byte ptr [esi+0x01], 0x41
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1u); X86_MEM8(ea) = (uint8_t)(0x41u); }
	// 00319F68 mov dword ptr [esi+0x08], 0x319DD0
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); X86_MEM32(ea) = (uint32_t)(0x319DD0u); }
	// 00319F6F mov [esi+0x0C], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00319F72 mov [esi+0x10], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00319F75 mov byte ptr [esi+0x1D], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Du); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00319F79 mov byte ptr [esi+0x1E], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x1Eu); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00319F7D call [0x0031B440]
	X86_PUSH32(0x319F83u); x86_kernel(ctx, base, 149);
	// 00319F83 mov eax, [edi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319F86 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00319F88 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319F89 call 0x00314D5D
	X86_PUSH32(0x319F8Eu); sub_00314D5D(ctx, base);
	// 00319F8E pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00319F8F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319F90 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00319F91 leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 00319F92 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00319ECD, __imp__sub_00319ECD)

X86_FUNC(__imp__sub_00319F93) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319F93 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319F97 xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319F99 cmp [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319F9C push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319F9D mov esi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 00319FA1 jl 0x00319FE2
	if ((int32_t)ca < (int32_t)cb) { goto loc_00319FE2; }
	// 00319FA3 test byte ptr [esi+0x0C], 0x06
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x6u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319FA7 jnz 0x00319FE2
	if (((uint8_t)(ca & cb)) != 0) { goto loc_00319FE2; }
	// 00319FA9 cmp [esi+0x28], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x28u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319FAC jz 0x00319FD9
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_00319FD9; }
	// 00319FAE mov [esi+0x6C], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00319FB1 lea ecx, [esi+0xB8]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0xB8u));
	// 00319FB7 mov edx, esi
	{ ctx.edx = (uint32_t)(ctx.esi); }
	// 00319FB9 call 0x00319ECD
	X86_PUSH32(0x319FBEu); sub_00319ECD(ctx, base);
	// 00319FBE mov eax, [esi+0x6C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x6Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00319FC1 cmp eax, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00319FC4 jnb 0x00319FF7
	if ((uint32_t)ca >= (uint32_t)cb) { goto loc_00319FF7; }
	// 00319FC6 or byte ptr [esi+0x0D], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319FCA lea ecx, [esi+0xE8]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0xE8u));
	// 00319FD0 mov edx, esi
	{ ctx.edx = (uint32_t)(ctx.esi); }
	// 00319FD2 call 0x00319ECD
	X86_PUSH32(0x319FD7u); sub_00319ECD(ctx, base);
	// 00319FD7 jmp 0x00319FF7
	goto loc_00319FF7;
loc_00319FD9:
	// 00319FD9 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00319FDB call 0x00319D47
	X86_PUSH32(0x319FE0u); sub_00319D47(ctx, base);
	// 00319FE0 jmp 0x00319FF7
	goto loc_00319FF7;
loc_00319FE2:
	// 00319FE2 and byte ptr [esi+0x0D], 0xFD
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFFDu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 00319FE6 push [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00319FE9 call 0x00314A35
	X86_PUSH32(0x319FEEu); sub_00314A35(ctx, base);
	// 00319FEE mov edx, eax
	{ ctx.edx = (uint32_t)(ctx.eax); }
	// 00319FF0 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00319FF2 call 0x00319BBD
	X86_PUSH32(0x319FF7u); sub_00319BBD(ctx, base);
loc_00319FF7:
	// 00319FF7 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00319FF8 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_00319F93, __imp__sub_00319F93)

X86_FUNC(__imp__sub_00319FFB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00319FFB push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00319FFC mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00319FFE push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00319FFF lea edi, [esi+0x40]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + 0x40u));
	// 0031A002 mov dword ptr [edi], 0x43425355
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM32(ea) = (uint32_t)(0x43425355u); }
	// 0031A008 mov eax, [esi+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x10u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A00B mov [edi+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A00E mov eax, [esi+0x2C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A011 mov [edi+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A014 mov al, [esi+0x37]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x37u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A017 shl al, 0x07
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint32_t c = (uint32_t)(0x7u) & 31; if (c) { uint8_t r = (uint8_t)((uint32_t)a << c); cf = c <= 8 ? ((uint32_t)a >> (8 - c)) & 1 : 0; of = ((uint32_t)(r >> 7) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); } }
	// 0031A01A lea edx, [esi+0x98]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esi + 0x98u));
	// 0031A020 push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0031A021 mov [edi+0x0C], al
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031A024 or ecx, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a | b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A027 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0031A028 mov eax, 0xFFF3CB00
	{ ctx.eax = (uint32_t)(0xFFF3CB00u); }
	// 0031A02D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A02E lea eax, [esi+0x70]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x70u));
	// 0031A031 mov byte ptr [edi+0x0D], 0x00
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xDu); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 0031A035 mov byte ptr [edi+0x0E], 0x0A
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xEu); X86_MEM8(ea) = (uint8_t)(0xAu); }
	// 0031A039 or byte ptr [esi+0x0D], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A03D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A03E call [0x0031B440]
	X86_PUSH32(0x31A044u); x86_kernel(ctx, base, 149);
	// 0031A044 mov ecx, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A047 or byte ptr [esi+0x0D], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A04B lea eax, [esi+0xB8]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0xB8u));
	// 0031A051 mov byte ptr [eax], 0x28
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM8(ea) = (uint8_t)(0x28u); }
	// 0031A054 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A055 mov eax, [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A058 mov byte ptr [esi+0xB9], 0x41
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xB9u); X86_MEM8(ea) = (uint8_t)(0x41u); }
	// 0031A05F mov dword ptr [esi+0xC0], 0x319F93
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC0u); X86_MEM32(ea) = (uint32_t)(0x319F93u); }
	// 0031A069 mov [esi+0xC4], esi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 0031A06F mov [esi+0xC8], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A075 mov [esi+0xD0], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD0u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0031A07B mov dword ptr [esi+0xCC], 0x1F
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCCu); X86_MEM32(ea) = (uint32_t)(0x1Fu); }
	// 0031A085 mov byte ptr [esi+0xD4], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD4u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0031A08C mov byte ptr [esi+0xD5], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD5u); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 0031A093 mov byte ptr [esi+0xD6], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD6u); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 0031A09A mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A09C call 0x00314D5D
	X86_PUSH32(0x31A0A1u); sub_00314D5D(ctx, base);
	// 0031A0A1 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031A0A2 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031A0A3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00319FFB, __imp__sub_00319FFB)

X86_FUNC(__imp__sub_0031A0A4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A0A4 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031A0A5 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031A0A6 mov esi, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031A0AA mov eax, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A0AD mov ebx, [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A0B0 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A0B1 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031A0B3 and eax, 0xFFFFFDFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFFDFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A0B8 and edi, 0x7000
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0x7000u); uint32_t r = (uint32_t)(a & b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A0BE test ah, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)(ctx.eax >> 8))), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A0C1 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A0C4 jz 0x0031A0D4
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031A0D4; }
	// 0031A0C6 lea eax, [esi+0x70]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x70u));
	// 0031A0C9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A0CA call [0x0031B444]
	X86_PUSH32(0x31A0D0u); x86_kernel(ctx, base, 97);
	// 0031A0D0 and byte ptr [esi+0x0D], 0xFE
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFFEu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
loc_0031A0D4:
	// 0031A0D4 mov eax, [esi+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A0D7 test al, 0x06
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x6u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A0D9 jz 0x0031A0E2
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031A0E2; }
loc_0031A0DB:
	// 0031A0DB push 0xC000009D
	{ uint32_t v = (uint32_t)(0xC000009Du); X86_PUSH32(v); }
	// 0031A0E0 jmp 0x0031A143
	goto loc_0031A143;
loc_0031A0E2:
	// 0031A0E2 mov edx, [esp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x10u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A0E6 xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A0E8 cmp [edx+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A0EB jnl 0x0031A0FE
	if ((int32_t)ca >= (int32_t)cb) { goto loc_0031A0FE; }
	// 0031A0ED and eax, 0xFFFF8FFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFF8FFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A0F2 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A0F5 mov ecx, [ebx]
	{ uint32_t ea = (uint32_t)(ctx.ebx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A0F7 call 0x003154FB
	X86_PUSH32(0x31A0FCu); sub_003154FB(ctx, base);
	// 0031A0FC jmp 0x0031A0DB
	X86_BARRIER();
	goto loc_0031A0DB;
loc_0031A0FE:
	// 0031A0FE cmp edi, 0x1000
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(0x1000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A104 jz 0x0031A1CD
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031A1CD; }
	// 0031A10A cmp edi, 0x2000
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(0x2000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A110 jz 0x0031A14C
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031A14C; }
	// 0031A112 cmp edi, 0x4000
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(0x4000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A118 jnz 0x0031A29E
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_0031A29E; }
	// 0031A11E and eax, 0xFFFFBFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFBFFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A123 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A126 mov al, [esi+0x36]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x36u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A129 mov cl, al
	{ ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031A12B dec cl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx));  uint8_t r = (uint8_t)(a - 1); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(r); of = a == (uint8_t)(1u << 7); zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A12D test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A12F mov [esi+0x36], cl
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x36u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 0031A132 jz 0x0031A140
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031A140; }
	// 0031A134 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031A136 call 0x00319FFB
	X86_PUSH32(0x31A13Bu); sub_00319FFB(ctx, base);
	// 0031A13B jmp 0x0031A29E
	goto loc_0031A29E;
loc_0031A140:
	// 0031A140 push [esi+0x6C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x6Cu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
loc_0031A143:
	// 0031A143 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031A144 call [esi+0x30]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.esi + 0x30u)); X86_PUSH32(0x31A147u); x86_icall(ctx, base, t); }
	// 0031A147 jmp 0x0031A29E
	goto loc_0031A29E;
loc_0031A14C:
	// 0031A14C and eax, 0xFFFFDFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFDFFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A151 or eax, 0x4000
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x4000u); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A156 lea edi, [esi+0xB8]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + 0xB8u));
	// 0031A15C mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A15F mov byte ptr [edi], 0x30
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM8(ea) = (uint8_t)(0x30u); }
	// 0031A162 mov byte ptr [esi+0xB9], 0x40
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xB9u); X86_MEM8(ea) = (uint8_t)(0x40u); }
	// 0031A169 mov dword ptr [esi+0xC0], 0x31A0A4
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC0u); X86_MEM32(ea) = (uint32_t)(0x31A0A4u); }
	// 0031A173 mov [esi+0xC4], esi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 0031A179 mov [esi+0xC8], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A17F mov [esi+0xD0], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A185 mov [esi+0xCC], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A18B mov byte ptr [esi+0xD4], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD4u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0031A192 mov byte ptr [esi+0xD5], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD5u); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 0031A199 mov byte ptr [esi+0xD6], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD6u); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 0031A1A0 mov byte ptr [esi+0xE0], 0x21
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE0u); X86_MEM8(ea) = (uint8_t)(0x21u); }
	// 0031A1A7 mov byte ptr [esi+0xE1], 0xFF
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE1u); X86_MEM8(ea) = (uint8_t)(0xFFFFFFFFu); }
	// 0031A1AE mov [esi+0xE2], cx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE2u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0031A1B5 movzx ax, byte ptr [ebx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)((uint8_t)(X86_MEM8(ea))); }
	// 0031A1BA mov [esi+0xE4], ax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE4u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0031A1C1 mov [esi+0xE6], cx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE6u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0031A1C8 jmp 0x0031A273
	goto loc_0031A273;
loc_0031A1CD:
	// 0031A1CD and eax, 0xFFFFEFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFEFFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A1D2 or eax, 0x2000
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x2000u); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A1D7 mov [esi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A1DA mov eax, [esi+0x24]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x24u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A1DD lea edi, [esi+0xB8]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + 0xB8u));
	// 0031A1E3 mov byte ptr [edi], 0x18
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM8(ea) = (uint8_t)(0x18u); }
	// 0031A1E6 mov byte ptr [esi+0xB9], 0x05
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xB9u); X86_MEM8(ea) = (uint8_t)(0x5u); }
	// 0031A1ED mov [esi+0xC0], ecx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A1F3 mov [esi+0xC8], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A1F9 mov dword ptr [esi+0xCC], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCCu); X86_MEM32(ea) = (uint32_t)(0x4u); }
	// 0031A203 mov ecx, [ebx]
	{ uint32_t ea = (uint32_t)(ctx.ebx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A205 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A206 call 0x00314D5D
	X86_PUSH32(0x31A20Bu); sub_00314D5D(ctx, base);
	// 0031A20B xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A20D mov byte ptr [edi], 0x30
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM8(ea) = (uint8_t)(0x30u); }
	// 0031A210 mov byte ptr [esi+0xB9], 0x40
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xB9u); X86_MEM8(ea) = (uint8_t)(0x40u); }
	// 0031A217 mov dword ptr [esi+0xC0], 0x31A0A4
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC0u); X86_MEM32(ea) = (uint32_t)(0x31A0A4u); }
	// 0031A221 mov [esi+0xC4], esi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 0031A227 mov [esi+0xC8], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xC8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A22D mov [esi+0xD0], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A233 mov [esi+0xCC], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A239 mov [esi+0xD4], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031A23F mov [esi+0xD5], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031A245 mov [esi+0xD6], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031A24B mov byte ptr [esi+0xE0], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE0u); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 0031A252 mov byte ptr [esi+0xE1], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE1u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0031A259 mov [esi+0xE2], ax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE2u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0031A260 movzx cx, byte ptr [ebx+0x06]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x6u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)((uint8_t)(X86_MEM8(ea))); }
	// 0031A265 mov [esi+0xE4], cx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE4u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0031A26C mov [esi+0xE6], ax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE6u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
loc_0031A273:
	// 0031A273 or byte ptr [esi+0x0D], 0x03
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x3u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A277 lea edx, [esi+0x98]
	ctx.edx = (uint32_t)((uint32_t)(ctx.esi + 0x98u));
	// 0031A27D push edx
	{ uint32_t v = (uint32_t)(ctx.edx); X86_PUSH32(v); }
	// 0031A27E or ecx, 0xFFFFFFFF
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a | b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A281 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0031A282 mov eax, 0xFFF0BDC0
	{ ctx.eax = (uint32_t)(0xFFF0BDC0u); }
	// 0031A287 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A288 lea eax, [esi+0x70]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x70u));
	// 0031A28B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A28C call [0x0031B440]
	X86_PUSH32(0x31A292u); x86_kernel(ctx, base, 149);
	// 0031A292 or byte ptr [esi+0x0D], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A296 mov ecx, [ebx]
	{ uint32_t ea = (uint32_t)(ctx.ebx); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A298 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A299 call 0x00314D5D
	X86_PUSH32(0x31A29Eu); sub_00314D5D(ctx, base);
loc_0031A29E:
	// 0031A29E pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031A29F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031A2A0 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031A2A1 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0031A0A4, __imp__sub_0031A0A4)

X86_FUNC(__imp__sub_0031A2A4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A2A4 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031A2A5 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031A2A6 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 0031A2A8 call [0x0031B3C4]
	X86_PUSH32(0x31A2AEu); x86_kernel(ctx, base, 129);
	// 0031A2AE test byte ptr [esi+0x0C], 0x06
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x6u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A2B2 mov bl, al
	{ ctx.ebx = (ctx.ebx & 0xFFFFFF00u) | (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031A2B4 jz 0x0031A2C1
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031A2C1; }
	// 0031A2B6 push 0xC000009D
	{ uint32_t v = (uint32_t)(0xC000009Du); X86_PUSH32(v); }
	// 0031A2BB push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031A2BC call [esi+0x30]
	{ uint32_t t = X86_MEM32((uint32_t)(ctx.esi + 0x30u)); X86_PUSH32(0x31A2BFu); x86_icall(ctx, base, t); }
	// 0031A2BF jmp 0x0031A2C8
	goto loc_0031A2C8;
loc_0031A2C1:
	// 0031A2C1 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031A2C3 call 0x00319FFB
	X86_PUSH32(0x31A2C8u); sub_00319FFB(ctx, base);
loc_0031A2C8:
	// 0031A2C8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031A2C9 mov cl, bl
	{ ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0031A2CB pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031A2CC jmp [0x0031B3C0]
	x86_kernel(ctx, base, 161); return;
}
X86_WEAK_FUNC(sub_0031A2A4, __imp__sub_0031A2A4)

X86_FUNC(__imp__sub_0031A2D2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A2D2 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031A2D3 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031A2D5 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031A2D6 mov ebx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A2D9 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031A2DA push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A2DB mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031A2DD call 0x00314B1D
	X86_PUSH32(0x31A2E2u); sub_00314B1D(ctx, base);
	// 0031A2E2 mov esi, eax
	{ ctx.esi = (uint32_t)(ctx.eax); }
	// 0031A2E4 cmp esi, 0x10
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A2E7 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031A2E9 jnb 0x0031A3A8
	if ((uint32_t)ca >= (uint32_t)cb) { goto loc_0031A3A8; }
	// 0031A2EF call 0x00314AA1
	X86_PUSH32(0x31A2F4u); sub_00314AA1(ctx, base);
	// 0031A2F4 mov al, [eax+0x06]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x6u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A2F7 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A2F9 jnz 0x0031A301
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031A301; }
	// 0031A2FB and dword ptr [ebp+0x08], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A2FF jmp 0x0031A310
	goto loc_0031A310;
loc_0031A301:
	// 0031A301 cmp al, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A303 jnz 0x0031A3A6
	if ((uint8_t)ca != (uint8_t)cb) { goto loc_0031A3A6; }
	// 0031A309 mov dword ptr [ebp+0x08], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(0x1u); }
loc_0031A310:
	// 0031A310 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031A312 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0031A314 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0031A316 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031A318 call 0x00314AA7
	X86_PUSH32(0x31A31Du); sub_00314AA7(ctx, base);
	// 0031A31D mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031A31F test edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A321 jz 0x0031A340
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031A340; }
	// 0031A323 mov cl, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A326 imul esi, esi, 0x1C
	{ int64_t p = (int64_t)(int32_t)(ctx.esi) * (int64_t)(int32_t)(0x1Cu); uint32_t r = (uint32_t)p; cf = of = p != (int32_t)r; ctx.esi = (uint32_t)(r); }
	// 0031A329 add esi, 0x3D8818
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x3D8818u); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A32F mov al, [esi+0x0B]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A332 and al, 0x6F
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint8_t b = (uint8_t)(0x6Fu); uint8_t r = (uint8_t)(a & b); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A334 shl cl, 0x07
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)); uint32_t c = (uint32_t)(0x7u) & 31; if (c) { uint8_t r = (uint8_t)((uint32_t)a << c); cf = c <= 8 ? ((uint32_t)a >> (8 - c)) & 1 : 0; of = ((uint32_t)(r >> 7) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(r); } }
	// 0031A337 or al, cl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint8_t b = (uint8_t)(((uint8_t)ctx.ecx)); uint8_t r = (uint8_t)(a | b); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A339 or al, 0x10
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint8_t b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a | b); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A33B mov [esi+0x0B], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031A33E jmp 0x0031A366
	goto loc_0031A366;
loc_0031A340:
	// 0031A340 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031A342 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031A344 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0031A346 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031A348 call 0x00314AA7
	X86_PUSH32(0x31A34Du); sub_00314AA7(ctx, base);
	// 0031A34D mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031A34F test edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A351 jz 0x0031A3A6
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031A3A6; }
	// 0031A353 cmp dword ptr [ebp+0x08], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A357 jnz 0x0031A3A6
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_0031A3A6; }
	// 0031A359 imul esi, esi, 0x1C
	{ int64_t p = (int64_t)(int32_t)(ctx.esi) * (int64_t)(int32_t)(0x1Cu); uint32_t r = (uint32_t)p; cf = of = p != (int32_t)r; ctx.esi = (uint32_t)(r); }
	// 0031A35C add esi, 0x3D8888
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x3D8888u); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A362 and byte ptr [esi+0x0B], 0xEF
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFEFu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
loc_0031A366:
	// 0031A366 or byte ptr [esi+0x0B], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A36A push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031A36B mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031A36D call 0x003149AC
	X86_PUSH32(0x31A372u); sub_003149AC(ctx, base);
	// 0031A372 test byte ptr [esi+0x0B], 0x10
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A376 mov [esi+0x04], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A379 mov al, [edi+0x02]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x2u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A37C mov [esi+0x0A], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031A37F mov ax, [edi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x4u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 0031A383 mov [esi+0x08], ax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0031A387 jz 0x0031A395
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031A395; }
	// 0031A389 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A38C neg eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(0 - a); ctx.eax = (uint32_t)(r); cf = a != 0; of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A38E sbb eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t c0 = cf; uint32_t r = (uint32_t)(a - b - c0); ctx.eax = (uint32_t)(r); cf = (uint64_t)a < (uint64_t)b + c0; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A390 and eax, 0x02
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x2u); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A393 jmp 0x0031A398
	goto loc_0031A398;
loc_0031A395:
	// 0031A395 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A397 inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031A398:
	// 0031A398 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A399 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031A39B call 0x003149BD
	X86_PUSH32(0x31A3A0u); sub_003149BD(ctx, base);
	// 0031A3A0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031A3A2 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031A3A4 jmp 0x0031A3AD
	goto loc_0031A3AD;
loc_0031A3A6:
	// 0031A3A6 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
loc_0031A3A8:
	// 0031A3A8 push 0x80000400
	{ uint32_t v = (uint32_t)(0x80000400u); X86_PUSH32(v); }
loc_0031A3AD:
	// 0031A3AD call 0x003156D9
	X86_PUSH32(0x31A3B2u); sub_003156D9(ctx, base);
	// 0031A3B2 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031A3B3 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031A3B4 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031A3B5 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0031A3B6 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0031A2D2, __imp__sub_0031A2D2)

X86_FUNC(__imp__sub_0031A3B9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A3B9 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031A3BA mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031A3BC mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A3BF add eax, 0x0C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A3C2 mov [ebp+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A3C5 mov eax, 0x01
	{ ctx.eax = (uint32_t)(0x1u); }
	// 0031A3CA mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A3CD xadd [ecx], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(a); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A3D0 inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A3D1 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0031A3D2 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0031A3B9, __imp__sub_0031A3B9)

X86_FUNC(__imp__sub_0031A3D5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A3D5 mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A3D9 test byte ptr [ecx+0x0B], 0x10
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A3DD mov eax, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A3E1 jz 0x0031A3FE
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031A3FE; }
	// 0031A3E3 mov dword ptr [eax], 0x09
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x9u); }
	// 0031A3E9 mov ecx, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A3EC movsx ecx, byte ptr [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)((uint32_t)(int8_t)(X86_MEM8(ea))); }
	// 0031A3F0 lea ecx, [ecx+ecx*4]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ecx + ctx.ecx * 4u));
	// 0031A3F3 shl ecx, 0x01
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x1u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031A3F5 and dword ptr [eax+0x04], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A3F9 mov [eax+0x08], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A3FC jmp 0x0031A417
	goto loc_0031A417;
loc_0031A3FE:
	// 0031A3FE mov dword ptr [eax], 0x05
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x5u); }
	// 0031A404 mov ecx, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A407 movsx ecx, byte ptr [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.ecx = (uint32_t)((uint32_t)(int8_t)(X86_MEM8(ea))); }
	// 0031A40B lea ecx, [ecx+ecx*4]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ecx + ctx.ecx * 4u));
	// 0031A40E shl ecx, 0x01
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x1u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031A410 and dword ptr [eax+0x08], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A414 mov [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
loc_0031A417:
	// 0031A417 and dword ptr [eax+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A41B xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A41D ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0031A3D5, __imp__sub_0031A3D5)

X86_FUNC(__imp__sub_0031A420) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A420 mov eax, 0x80004001
	{ ctx.eax = (uint32_t)(0x80004001u); }
	// 0031A425 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0031A420, __imp__sub_0031A420)

X86_FUNC(__imp__sub_0031A428) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A428 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A42A ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0031A428, __imp__sub_0031A428)

X86_FUNC(__imp__sub_0031A42D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A42D push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031A42E call [0x0031B3C4]
	X86_PUSH32(0x31A434u); x86_kernel(ctx, base, 129);
	// 0031A434 mov edx, [esp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A438 mov bl, [edx+0x0B]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0xBu); ctx.ebx = (ctx.ebx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A43B test bl, 0x20
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ebx)), b = (uint8_t)(0x20u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A43E jz 0x0031A45B
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031A45B; }
	// 0031A440 mov ecx, [edx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A443 cmp dword ptr [ecx+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A447 jz 0x0031A45B
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031A45B; }
	// 0031A449 mov edx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A44D push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031A44F test bl, 0x10
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ebx)), b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A452 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0031A453 setnz cl
	{ ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)((((uint8_t)(ca & cb)) != 0) ? 1u : 0u); }
	// 0031A456 inc ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a + 1); ctx.ecx = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A457 mov [edx], ecx
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A459 jmp 0x0031A462
	goto loc_0031A462;
loc_0031A45B:
	// 0031A45B mov ecx, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A45F and dword ptr [ecx], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031A462:
	// 0031A462 mov cl, al
	{ ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031A464 call [0x0031B3C0]
	X86_PUSH32(0x31A46Au); x86_kernel(ctx, base, 161);
	// 0031A46A xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A46C pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031A46D ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0031A42D, __imp__sub_0031A42D)

X86_FUNC(__imp__sub_0031A470) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A470 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031A471 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031A473 sub esp, 0x30
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x30u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A476 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031A477 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 0031A479 test byte ptr [esi+0x0B], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A47D jnz 0x0031A489
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031A489; }
	// 0031A47F mov eax, 0x8007048F
	{ ctx.eax = (uint32_t)(0x8007048Fu); }
	// 0031A484 jmp 0x0031A57A
	goto loc_0031A57A;
loc_0031A489:
	// 0031A489 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A48C push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031A48D push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A48E lea eax, [ebp-0x30]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD0u));
	// 0031A491 xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A493 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A494 mov byte ptr [ebp-0x30], 0x20
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD0u); X86_MEM8(ea) = (uint8_t)(0x20u); }
	// 0031A498 mov byte ptr [ebp-0x2F], 0x82
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD1u); X86_MEM8(ea) = (uint8_t)(0xFFFFFF82u); }
	// 0031A49C mov [ebp-0x28], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A49F call 0x00314D5D
	X86_PUSH32(0x31A4A4u); sub_00314D5D(ctx, base);
	// 0031A4A4 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031A4A6 cmp edi, ebx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A4A8 jl 0x0031A557
	if ((int32_t)ca < (int32_t)cb) { goto loc_0031A557; }
	// 0031A4AE mov cl, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A4B1 or byte ptr [esi+0x0B], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A4B5 call [0x0031B3C0]
	X86_PUSH32(0x31A4BBu); x86_kernel(ctx, base, 161);
	// 0031A4BB movzx ax, byte ptr [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)((uint8_t)(X86_MEM8(ea))); }
	// 0031A4C0 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A4C3 or ax, 0x100
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.eax)); uint16_t b = (uint16_t)(0x100u); uint16_t r = (uint16_t)(a | b); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 0031A4C7 mov [ebp-0x06], ax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFAu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0031A4CB lea eax, [ebp-0x30]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD0u));
	// 0031A4CE push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A4CF mov byte ptr [ebp-0x30], 0x30
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD0u); X86_MEM8(ea) = (uint8_t)(0x30u); }
	// 0031A4D3 mov byte ptr [ebp-0x2F], 0x40
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD1u); X86_MEM8(ea) = (uint8_t)(0x40u); }
	// 0031A4D7 mov [ebp-0x28], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A4DA mov [ebp-0x24], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A4DD mov [ebp-0x20], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE0u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A4E0 mov [ebp-0x18], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A4E3 mov [ebp-0x1C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A4E6 mov [ebp-0x14], bl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0031A4E9 mov [ebp-0x13], bl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFEDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0031A4EC mov [ebp-0x12], bl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFEEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0031A4EF mov byte ptr [ebp-0x08], 0x41
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM8(ea) = (uint8_t)(0x41u); }
	// 0031A4F3 mov byte ptr [ebp-0x07], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF9u); X86_MEM8(ea) = (uint8_t)(0x3u); }
	// 0031A4F7 mov [ebp-0x04], bx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ebx)); }
	// 0031A4FB mov [ebp-0x02], bx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFEu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ebx)); }
	// 0031A4FF call 0x00314D5D
	X86_PUSH32(0x31A504u); sub_00314D5D(ctx, base);
	// 0031A504 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A507 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031A509 lea eax, [ebp-0x30]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD0u));
	// 0031A50C push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A50D mov byte ptr [ebp-0x30], 0x1C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD0u); X86_MEM8(ea) = (uint8_t)(0x1Cu); }
	// 0031A511 mov byte ptr [ebp-0x2F], 0xC3
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD1u); X86_MEM8(ea) = (uint8_t)(0xFFFFFFC3u); }
	// 0031A515 mov [ebp-0x28], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A518 mov [ebp-0x24], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A51B call 0x00314D5D
	X86_PUSH32(0x31A520u); sub_00314D5D(ctx, base);
	// 0031A520 call [0x0031B3C4]
	X86_PUSH32(0x31A526u); x86_kernel(ctx, base, 129);
	// 0031A526 and byte ptr [esi+0x0B], 0xF9
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFF9u); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A52A test byte ptr [esi+0x0B], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x8u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A52E jz 0x0031A54F
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031A54F; }
	// 0031A530 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A533 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031A534 call 0x003149AC
	X86_PUSH32(0x31A539u); sub_003149AC(ctx, base);
	// 0031A539 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A53C call 0x0031530D
	X86_PUSH32(0x31A541u); sub_0031530D(ctx, base);
	// 0031A541 and byte ptr [esi+0x0B], 0xF7
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFF7u); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A545 mov [esi+0x04], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A548 mov eax, 0x8007048F
	{ ctx.eax = (uint32_t)(0x8007048Fu); }
	// 0031A54D jmp 0x0031A578
	goto loc_0031A578;
loc_0031A54F:
	// 0031A54F cmp byte ptr [ebp+0x08], 0x02
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A553 jnz 0x0031A557
	if ((uint8_t)ca != (uint8_t)cb) { goto loc_0031A557; }
	// 0031A555 xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031A557:
	// 0031A557 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A558 call 0x003149C7
	X86_PUSH32(0x31A55Du); sub_003149C7(ctx, base);
	// 0031A55D test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A55F push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A560 jnle 0x0031A569
	if (((int32_t)(ca & cb)) > 0) { goto loc_0031A569; }
	// 0031A562 call 0x003149C7
	X86_PUSH32(0x31A567u); sub_003149C7(ctx, base);
	// 0031A567 jmp 0x0031A578
	goto loc_0031A578;
loc_0031A569:
	// 0031A569 call 0x003149C7
	X86_PUSH32(0x31A56Eu); sub_003149C7(ctx, base);
	// 0031A56E and eax, 0xFFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A573 or eax, 0x80070000
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x80070000u); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031A578:
	// 0031A578 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031A579 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
loc_0031A57A:
	// 0031A57A pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031A57B leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 0031A57C ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0031A470, __imp__sub_0031A470)

X86_FUNC(__imp__sub_0031A57F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A57F push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031A580 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031A582 sub esp, 0x30
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x30u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A585 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031A586 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 0031A588 test byte ptr [esi+0x0B], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A58C jnz 0x0031A598
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031A598; }
	// 0031A58E mov eax, 0x8007048F
	{ ctx.eax = (uint32_t)(0x8007048Fu); }
	// 0031A593 jmp 0x0031A67F
	goto loc_0031A67F;
loc_0031A598:
	// 0031A598 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A59B push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031A59C push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A59D lea eax, [ebp-0x30]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD0u));
	// 0031A5A0 xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A5A2 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A5A3 mov byte ptr [ebp-0x30], 0x20
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD0u); X86_MEM8(ea) = (uint8_t)(0x20u); }
	// 0031A5A7 mov byte ptr [ebp-0x2F], 0x82
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD1u); X86_MEM8(ea) = (uint8_t)(0xFFFFFF82u); }
	// 0031A5AB mov [ebp-0x28], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A5AE call 0x00314D5D
	X86_PUSH32(0x31A5B3u); sub_00314D5D(ctx, base);
	// 0031A5B3 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031A5B5 cmp edi, ebx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A5B7 jl 0x0031A65C
	if ((int32_t)ca < (int32_t)cb) { goto loc_0031A65C; }
	// 0031A5BD mov cl, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A5C0 or byte ptr [esi+0x0B], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A5C4 call [0x0031B3C0]
	X86_PUSH32(0x31A5CAu); x86_kernel(ctx, base, 161);
	// 0031A5CA movzx ax, byte ptr [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (ctx.eax & 0xFFFF0000u) | (uint16_t)((uint8_t)(X86_MEM8(ea))); }
	// 0031A5CF mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A5D2 mov [ebp-0x06], ax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFAu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0031A5D6 lea eax, [ebp-0x30]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD0u));
	// 0031A5D9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A5DA mov byte ptr [ebp-0x30], 0x30
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD0u); X86_MEM8(ea) = (uint8_t)(0x30u); }
	// 0031A5DE mov byte ptr [ebp-0x2F], 0x40
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD1u); X86_MEM8(ea) = (uint8_t)(0x40u); }
	// 0031A5E2 mov [ebp-0x28], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A5E5 mov [ebp-0x24], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A5E8 mov [ebp-0x20], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE0u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A5EB mov [ebp-0x18], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A5EE mov [ebp-0x1C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A5F1 mov [ebp-0x14], bl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0031A5F4 mov [ebp-0x13], bl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFEDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0031A5F7 mov [ebp-0x12], bl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFEEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0031A5FA mov byte ptr [ebp-0x08], 0x41
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM8(ea) = (uint8_t)(0x41u); }
	// 0031A5FE mov byte ptr [ebp-0x07], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF9u); X86_MEM8(ea) = (uint8_t)(0x3u); }
	// 0031A602 mov word ptr [ebp-0x04], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM16(ea) = (uint16_t)(0x1u); }
	// 0031A608 mov [ebp-0x02], bx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFEu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ebx)); }
	// 0031A60C call 0x00314D5D
	X86_PUSH32(0x31A611u); sub_00314D5D(ctx, base);
	// 0031A611 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A614 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031A616 lea eax, [ebp-0x30]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD0u));
	// 0031A619 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A61A mov byte ptr [ebp-0x30], 0x1C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD0u); X86_MEM8(ea) = (uint8_t)(0x1Cu); }
	// 0031A61E mov byte ptr [ebp-0x2F], 0xC3
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD1u); X86_MEM8(ea) = (uint8_t)(0xFFFFFFC3u); }
	// 0031A622 mov [ebp-0x28], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A625 mov [ebp-0x24], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A628 call 0x00314D5D
	X86_PUSH32(0x31A62Du); sub_00314D5D(ctx, base);
	// 0031A62D call [0x0031B3C4]
	X86_PUSH32(0x31A633u); x86_kernel(ctx, base, 129);
	// 0031A633 and byte ptr [esi+0x0B], 0xF9
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFF9u); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A637 test byte ptr [esi+0x0B], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x8u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A63B jz 0x0031A65C
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031A65C; }
	// 0031A63D mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A640 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031A641 call 0x003149AC
	X86_PUSH32(0x31A646u); sub_003149AC(ctx, base);
	// 0031A646 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A649 call 0x0031530D
	X86_PUSH32(0x31A64Eu); sub_0031530D(ctx, base);
	// 0031A64E and byte ptr [esi+0x0B], 0xF7
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFF7u); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A652 mov [esi+0x04], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A655 mov eax, 0x8007048F
	{ ctx.eax = (uint32_t)(0x8007048Fu); }
	// 0031A65A jmp 0x0031A67D
	goto loc_0031A67D;
loc_0031A65C:
	// 0031A65C push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A65D call 0x003149C7
	X86_PUSH32(0x31A662u); sub_003149C7(ctx, base);
	// 0031A662 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A664 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A665 jnle 0x0031A66E
	if (((int32_t)(ca & cb)) > 0) { goto loc_0031A66E; }
	// 0031A667 call 0x003149C7
	X86_PUSH32(0x31A66Cu); sub_003149C7(ctx, base);
	// 0031A66C jmp 0x0031A67D
	goto loc_0031A67D;
loc_0031A66E:
	// 0031A66E call 0x003149C7
	X86_PUSH32(0x31A673u); sub_003149C7(ctx, base);
	// 0031A673 and eax, 0xFFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A678 or eax, 0x80070000
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x80070000u); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031A67D:
	// 0031A67D pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031A67E pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
loc_0031A67F:
	// 0031A67F pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031A680 leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 0031A681 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0031A57F, __imp__sub_0031A57F)

X86_FUNC(__imp__sub_0031A684) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A684 mov eax, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A688 and dword ptr [eax+0x18], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x18u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A68C mov edx, [ecx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A68F test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A691 jz 0x0031A698
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031A698; }
	// 0031A693 mov [edx+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A696 jmp 0x0031A69A
	goto loc_0031A69A;
loc_0031A698:
	// 0031A698 mov [ecx], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0031A69A:
	// 0031A69A mov [ecx+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A69D ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0031A684, __imp__sub_0031A684)

X86_FUNC(__imp__sub_0031A6A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A6A0 mov eax, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A6A2 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A6A4 jz 0x0031A6B3
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031A6B3; }
	// 0031A6A6 mov edx, [eax+0x18]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x18u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A6A9 test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A6AB mov [ecx], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0031A6AD jnz 0x0031A6B5
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0031A6B5; }
	// 0031A6AF and [ecx+0x04], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A6B2 ret
	ctx.esp += 4; return;
loc_0031A6B3:
	// 0031A6B3 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031A6B5:
	// 0031A6B5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0031A6A0, __imp__sub_0031A6A0)

X86_FUNC(__imp__sub_0031A6B6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A6B6 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031A6B7 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031A6B9 sub esp, 0x3C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x3Cu); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A6BC push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031A6BD push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031A6BE mov esi, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031A6C1 imul esi, esi, 0x1C
	{ int64_t p = (int64_t)(int32_t)(ctx.esi) * (int64_t)(int32_t)(0x1Cu); uint32_t r = (uint32_t)p; cf = of = p != (int32_t)r; ctx.esi = (uint32_t)(r); }
	// 0031A6C4 push 0x6B776168
	{ uint32_t v = (uint32_t)(0x6B776168u); X86_PUSH32(v); }
	// 0031A6C9 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031A6CA mov ebx, ecx
	{ ctx.ebx = (uint32_t)(ctx.ecx); }
	// 0031A6CC call [0x0031B48C]
	X86_PUSH32(0x31A6D2u); x86_kernel(ctx, base, 15);
	// 0031A6D2 mov edx, eax
	{ ctx.edx = (uint32_t)(ctx.eax); }
	// 0031A6D4 test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A6D6 mov [ebp-0x04], edx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0031A6D9 jnz 0x0031A6E5
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0031A6E5; }
	// 0031A6DB mov eax, 0x8007000E
	{ ctx.eax = (uint32_t)(0x8007000Eu); }
	// 0031A6E0 jmp 0x0031A802
	goto loc_0031A802;
loc_0031A6E5:
	// 0031A6E5 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A6E6 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A6E8 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031A6EA shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031A6ED mov edi, edx
	{ ctx.edi = (uint32_t)(ctx.edx); }
	// 0031A6EF rep stosd
	{ x86_rep_stos(ctx, base, 4); }
	// 0031A6F1 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031A6F3 and ecx, 0x03
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A6F6 rep stosb
	{ x86_rep_stos(ctx, base, 1); }
	// 0031A6F8 mov esi, [0x0031286C]
	{ uint32_t ea = (uint32_t)(0x31286Cu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031A6FE mov eax, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A700 mov [0x0031286C], eax
	{ uint32_t ea = (uint32_t)(0x31286Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A705 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A707 mov ecx, 0xE0
	{ ctx.ecx = (uint32_t)(0xE0u); }
	// 0031A70C mov edi, esi
	{ ctx.edi = (uint32_t)(ctx.esi); }
	// 0031A70E rep stosd
	{ x86_rep_stos(ctx, base, 4); }
	// 0031A710 mov eax, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A713 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A715 mov [esi], edx
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0031A717 jbe 0x0031A72F
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031A72F; }
	// 0031A719 lea ecx, [esi+0x0C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0xCu));
	// 0031A71C mov edi, edx
	{ ctx.edi = (uint32_t)(ctx.edx); }
	// 0031A71E mov [ebp+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
loc_0031A721:
	// 0031A721 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A722 call 0x0031A684
	X86_PUSH32(0x31A727u); sub_0031A684(ctx, base);
	// 0031A727 add edi, 0x1C
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0x1Cu); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A72A dec [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a - 1); X86_MEM32(ea) = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A72D jnz 0x0031A721
	if (!zf) { X86_BARRIER(); goto loc_0031A721; }
loc_0031A72F:
	// 0031A72F mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A732 shl eax, 0x02
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 0031A735 mov cl, [eax+0x312872]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x312872u); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A73B mov [esi+0x14], cl
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x14u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 0031A73E mov al, [eax+0x312873]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x312873u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A744 mov [esi+0x15], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x15u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031A747 mov byte ptr [esi+0x17], 0x03
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x17u); X86_MEM8(ea) = (uint8_t)(0x3u); }
	// 0031A74B mov [esi+0x2C], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A74E mov [esi+0x18], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A751 mov byte ptr [esi+0x2A], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x2Au); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0031A755 mov byte ptr [esi+0x3E], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x3Eu); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 0031A759 mov cl, [ebx+0x0A]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xAu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A75C xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A75E mov [ebp-0x0B], cl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 0031A761 mov cx, [ebx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x8u); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 0031A765 mov [ebp-0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A768 mov [ebp-0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A76B mov [ebp-0x08], ax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 0031A76F lea eax, [ebp-0x20]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE0u));
	// 0031A772 mov [ebp-0x0A], cx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF6u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0031A776 mov ecx, [ebx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A779 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A77A mov byte ptr [ebp-0x20], 0x1C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE0u); X86_MEM8(ea) = (uint8_t)(0x1Cu); }
	// 0031A77E mov byte ptr [ebp-0x1F], 0x09
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE1u); X86_MEM8(ea) = (uint8_t)(0x9u); }
	// 0031A782 call 0x00314D5D
	X86_PUSH32(0x31A787u); sub_00314D5D(ctx, base);
	// 0031A787 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031A789 xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A78B cmp edi, ecx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A78D jnl 0x0031A7C8
	if ((int32_t)ca >= (int32_t)cb) { goto loc_0031A7C8; }
	// 0031A78F push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031A792 call [0x0031B490]
	X86_PUSH32(0x31A798u); x86_kernel(ctx, base, 17);
	// 0031A798 mov eax, [0x0031286C]
	{ uint32_t ea = (uint32_t)(0x31286Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A79D mov [esi], eax
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A79F push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A7A0 mov [0x0031286C], esi
	{ uint32_t ea = (uint32_t)(0x31286Cu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 0031A7A6 call 0x003149C7
	X86_PUSH32(0x31A7ABu); sub_003149C7(ctx, base);
	// 0031A7AB test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A7AD push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A7AE jnle 0x0031A7B7
	if (((int32_t)(ca & cb)) > 0) { goto loc_0031A7B7; }
	// 0031A7B0 call 0x003149C7
	X86_PUSH32(0x31A7B5u); sub_003149C7(ctx, base);
	// 0031A7B5 jmp 0x0031A801
	goto loc_0031A801;
loc_0031A7B7:
	// 0031A7B7 call 0x003149C7
	X86_PUSH32(0x31A7BCu); sub_003149C7(ctx, base);
	// 0031A7BC and eax, 0xFFFF
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFFFFu); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A7C1 or eax, 0x80070000
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x80070000u); uint32_t r = (uint32_t)(a | b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A7C6 jmp 0x0031A801
	goto loc_0031A801;
loc_0031A7C8:
	// 0031A7C8 mov edx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A7CB lea eax, [esi+0x37C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x37Cu));
	// 0031A7D1 mov [eax], edx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0031A7D3 mov [ebp-0x34], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A7D6 mov [ebp-0x30], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A7D9 mov byte ptr [ebp-0x3C], 0x1C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC4u); X86_MEM8(ea) = (uint8_t)(0x1Cu); }
	// 0031A7DD mov byte ptr [ebp-0x3B], 0x0C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC5u); X86_MEM8(ea) = (uint8_t)(0xCu); }
	// 0031A7E1 mov eax, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A7E3 mov [ebp-0x2C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A7E6 lea eax, [ebp-0x3C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFC4u));
	// 0031A7E9 mov [ebp-0x28], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A7EC mov ecx, [ebx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A7EF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A7F0 mov dword ptr [ebp-0x24], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); X86_MEM32(ea) = (uint32_t)(0x1u); }
	// 0031A7F7 call 0x00314D5D
	X86_PUSH32(0x31A7FCu); sub_00314D5D(ctx, base);
	// 0031A7FC mov [ebx+0x18], esi
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 0031A7FF xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031A801:
	// 0031A801 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_0031A802:
	// 0031A802 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031A803 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031A804 leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 0031A805 ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0031A6B6, __imp__sub_0031A6B6)

X86_FUNC(__imp__sub_0031A808) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031A808 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031A809 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031A80B sub esp, 0x48
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x48u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A80E push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031A80F push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031A810 mov edi, ecx
	{ ctx.edi = (uint32_t)(ctx.ecx); }
	// 0031A812 mov [ebp-0x0C], edi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0031A815 call [0x0031B3C4]
	X86_PUSH32(0x31A81Bu); x86_kernel(ctx, base, 129);
	// 0031A81B mov [ebp-0x01], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031A81E mov eax, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A821 mov al, [eax+0x17]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x17u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A824 xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A826 test al, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A828 jz 0x0031A839
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031A839; }
	// 0031A82A mov eax, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A82D and byte ptr [eax+0x17], 0xFE
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x17u); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFFEu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A831 mov ebx, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A834 add ebx, 0x18
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(0x18u); uint32_t r = (uint32_t)(a + b); ctx.ebx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A837 jmp 0x0031A84A
	goto loc_0031A84A;
loc_0031A839:
	// 0031A839 test al, 0x02
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A83B jz 0x0031A84A
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031A84A; }
	// 0031A83D mov eax, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A840 and byte ptr [eax+0x17], 0xFD
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x17u); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFFDu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A844 mov ebx, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A847 add ebx, 0x2C
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(0x2Cu); uint32_t r = (uint32_t)(a + b); ctx.ebx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031A84A:
	// 0031A84A test ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A84C mov dword ptr [ebp-0x30], 0x31AA3A
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD0u); X86_MEM32(ea) = (uint32_t)(0x31AA3Au); }
	// 0031A853 jz 0x0031AA2D
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031AA2D; }
	// 0031A859 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
loc_0031A85A:
	// 0031A85A mov eax, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A85D mov eax, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A860 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A862 jz 0x0031AA23
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031AA23; }
	// 0031A868 mov [ebx+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A86B mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A86D and dword ptr [ebx+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A871 and dword ptr [ebp-0x08], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A875 mov [ebx+0x08], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A878 mov ecx, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A87B mov cl, [ecx+0x16]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x16u); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A87E mov [ebx+0x11], cl
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x11u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 0031A881 mov byte ptr [ebx+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 0031A885 mov byte ptr [ebx+0x13], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x13u); X86_MEM8(ea) = (uint8_t)(0x0u); }
loc_0031A889:
	// 0031A889 mov ecx, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A88C mov esi, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031A88F movsx dx, byte ptr [ecx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); ctx.edx = (ctx.edx & 0xFFFF0000u) | (uint16_t)((uint16_t)(int8_t)(X86_MEM8(ea))); }
	// 0031A894 lea esi, [ebp+esi*2-0x40]
	ctx.esi = (uint32_t)((uint32_t)(ctx.ebp + ctx.esi * 2u + 0xFFFFFFC0u));
	// 0031A898 mov [esi], dx
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.edx)); }
	// 0031A89B cmp byte ptr [ecx+0x15], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x15u); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x0u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A89F jz 0x0031A8B7
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_0031A8B7; }
	// 0031A8A1 inc [ecx+0x16]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x16u); uint8_t a = (uint8_t)(X86_MEM8(ea));  uint8_t r = (uint8_t)(a + 1); X86_MEM8(ea) = (uint8_t)(r); of = r == (uint8_t)(1u << 7); zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A8A4 mov ecx, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A8A7 mov dl, [ecx+0x16]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x16u); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A8AA cmp dl, [ecx+0x15]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x15u); uint8_t a = (uint8_t)(((uint8_t)ctx.edx)), b = (uint8_t)(X86_MEM8(ea)); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A8AD jnz 0x0031A8B7
	if ((uint8_t)ca != (uint8_t)cb) { goto loc_0031A8B7; }
	// 0031A8AF add word ptr [esi], 0x02
	{ uint32_t ea = (uint32_t)(ctx.esi); uint16_t a = (uint16_t)(X86_MEM16(ea)); uint16_t b = (uint16_t)(0x2u); uint16_t r = (uint16_t)(a + b); X86_MEM16(ea) = (uint16_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 15) & 1; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 0031A8B3 mov byte ptr [ecx+0x16], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x16u); X86_MEM8(ea) = (uint8_t)(0x0u); }
loc_0031A8B7:
	// 0031A8B7 movzx ecx, word ptr [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)((uint16_t)(X86_MEM16(ea))); }
	// 0031A8BA mov edx, [ebx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A8BD add ecx, edx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A8BF mov [ebx+0x0C], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A8C2 mov edx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A8C5 cmp ecx, edx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A8C7 jbe 0x0031A8FA
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_0031A8FA; }
	// 0031A8C9 sub ecx, edx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ctx.ecx = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A8CB mov edx, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A8CE mov [edx+0x48], ecx
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x48u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A8D1 mov ecx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A8D4 mov [ebx+0x0C], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A8D7 mov byte ptr [ebx+0x10], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0031A8DB test byte ptr [edi+0x0B], 0x10
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A8DF jnz 0x0031A8FA
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031A8FA; }
	// 0031A8E1 mov edi, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031A8E4 mov esi, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031A8E6 mov edx, ecx
	{ ctx.edx = (uint32_t)(ctx.ecx); }
	// 0031A8E8 add edi, 0x4C
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0x4Cu); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A8EB shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031A8EE rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 0031A8F0 mov ecx, edx
	{ ctx.ecx = (uint32_t)(ctx.edx); }
	// 0031A8F2 and ecx, 0x03
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A8F5 rep movsb
	{ x86_rep_movs(ctx, base, 1); }
	// 0031A8F7 mov edi, [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
loc_0031A8FA:
	// 0031A8FA mov ecx, [ebx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A8FD inc [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a + 1); X86_MEM32(ea) = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A900 cmp ecx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A903 jz 0x0031A911
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031A911; }
	// 0031A905 cmp dword ptr [ebp-0x08], 0x08
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A909 jl 0x0031A889
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_0031A889; }
	// 0031A90F jmp 0x0031A915
	goto loc_0031A915;
loc_0031A911:
	// 0031A911 mov byte ptr [ebx+0x13], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x13u); X86_MEM8(ea) = (uint8_t)(0x1u); }
loc_0031A915:
	// 0031A915 mov ecx, [ebx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A918 sub [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); X86_MEM32(ea) = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A91B mov ecx, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A91E mov [ebp-0x2C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031A921 mov [ebp-0x48], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFB8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A924 mov ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A926 mov [ebp-0x44], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFBCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A929 mov ecx, [ebx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A92C add [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a + b); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A92E cmp byte ptr [ebx+0x13], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x13u); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x0u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A932 jz 0x0031A93F
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_0031A93F; }
	// 0031A934 mov ecx, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A937 add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A93A call 0x0031A6A0
	X86_PUSH32(0x31A93Fu); sub_0031A6A0(ctx, base);
loc_0031A93F:
	// 0031A93F cmp byte ptr [ebx+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x0u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A943 jz 0x0031A9B9
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_0031A9B9; }
	// 0031A945 mov edx, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A948 lea eax, [edx+0x4C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edx + 0x4Cu));
	// 0031A94B mov [ebp-0x44], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFBCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A94E mov eax, [edx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A951 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A953 jz 0x0031A98E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031A98E; }
	// 0031A955 mov [edx+0x40], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x40u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A958 mov esi, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031A95A mov [edx+0x44], esi
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 0031A95D test byte ptr [edi+0x0B], 0x10
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A961 jnz 0x0031A97E
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031A97E; }
	// 0031A963 mov ecx, [edx+0x48]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x48u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A966 mov edi, [ebx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031A969 mov ebx, ecx
	{ ctx.ebx = (uint32_t)(ctx.ecx); }
	// 0031A96B shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031A96E lea edi, [edi+edx*1+0x4C]
	ctx.edi = (uint32_t)((uint32_t)(ctx.edi + ctx.edx + 0x4Cu));
	// 0031A972 rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 0031A974 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031A976 and ecx, 0x03
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A979 rep movsb
	{ x86_rep_movs(ctx, base, 1); }
	// 0031A97B mov edi, [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
loc_0031A97E:
	// 0031A97E mov ecx, [edx+0x48]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x48u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A981 add ecx, [edx+0x44]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x44u); uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A984 mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031A986 mov ecx, [edx+0x48]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x48u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A989 sub [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a - b); X86_MEM32(ea) = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A98C jmp 0x0031A9B9
	goto loc_0031A9B9;
loc_0031A98E:
	// 0031A98E and dword ptr [edx+0x40], 0x00
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x40u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A992 and dword ptr [edx+0x44], 0x00
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x44u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A996 test byte ptr [edi+0x0B], 0x10
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A99A jnz 0x0031A9B9
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031A9B9; }
	// 0031A99C mov esi, [ebx+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031A99F mov ecx, [edx+0x48]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x48u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A9A2 lea edi, [esi+edx*1+0x4C]
	ctx.edi = (uint32_t)((uint32_t)(ctx.esi + ctx.edx + 0x4Cu));
	// 0031A9A6 mov edx, ecx
	{ ctx.edx = (uint32_t)(ctx.ecx); }
	// 0031A9A8 shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031A9AB xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A9AD rep stosd
	{ x86_rep_stos(ctx, base, 4); }
	// 0031A9AF mov ecx, edx
	{ ctx.ecx = (uint32_t)(ctx.edx); }
	// 0031A9B1 and ecx, 0x03
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A9B4 rep stosb
	{ x86_rep_stos(ctx, base, 1); }
	// 0031A9B6 mov edi, [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
loc_0031A9B9:
	// 0031A9B9 mov eax, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A9BC and dword ptr [ebp-0x20], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE0u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A9C0 and dword ptr [ebp-0x1C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031A9C4 mov ecx, [edi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A9C7 mov byte ptr [ebp-0x28], 0x1C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM8(ea) = (uint8_t)(0x1Cu); }
	// 0031A9CB mov byte ptr [ebp-0x27], 0x0B
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD9u); X86_MEM8(ea) = (uint8_t)(0xBu); }
	// 0031A9CF mov eax, [eax+0x37C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x37Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A9D5 mov [ebp-0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A9D8 lea eax, [ebp-0x48]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFB8u));
	// 0031A9DB mov [ebp-0x10], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031A9DE lea eax, [ebp-0x28]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD8u));
	// 0031A9E1 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031A9E2 mov byte ptr [ebp-0x14], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 0031A9E6 call 0x00314D5D
	X86_PUSH32(0x31A9EBu); sub_00314D5D(ctx, base);
	// 0031A9EB mov eax, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A9EE mov al, [eax+0x17]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x17u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031A9F1 test al, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A9F3 jz 0x0031AA04
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AA04; }
	// 0031A9F5 mov eax, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031A9F8 and byte ptr [eax+0x17], 0xFE
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x17u); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFFEu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031A9FC mov ebx, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0031A9FF add ebx, 0x18
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(0x18u); uint32_t r = (uint32_t)(a + b); ctx.ebx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AA02 jmp 0x0031AA19
	goto loc_0031AA19;
loc_0031AA04:
	// 0031AA04 test al, 0x02
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AA06 jz 0x0031AA17
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AA17; }
	// 0031AA08 mov eax, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AA0B and byte ptr [eax+0x17], 0xFD
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x17u); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFFDu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AA0F mov ebx, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AA12 add ebx, 0x2C
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(0x2Cu); uint32_t r = (uint32_t)(a + b); ctx.ebx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AA15 jmp 0x0031AA19
	goto loc_0031AA19;
loc_0031AA17:
	// 0031AA17 xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031AA19:
	// 0031AA19 test ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AA1B jnz 0x0031A85A
	if (((uint32_t)(ca & cb)) != 0) { X86_BARRIER(); goto loc_0031A85A; }
	// 0031AA21 jmp 0x0031AA2C
	goto loc_0031AA2C;
loc_0031AA23:
	// 0031AA23 mov edi, [edi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x18u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031AA26 mov al, [ebx+0x12]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x12u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AA29 or [edi+0x17], al
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x17u); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
loc_0031AA2C:
	// 0031AA2C pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_0031AA2D:
	// 0031AA2D mov cl, [ebp-0x01]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AA30 call [0x0031B3C0]
	X86_PUSH32(0x31AA36u); x86_kernel(ctx, base, 161);
	// 0031AA36 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031AA37 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031AA38 leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 0031AA39 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0031A808, __imp__sub_0031A808)

X86_FUNC(__imp__sub_0031AA3A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031AA3A push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031AA3B mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031AA3D sub esp, 0x30
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x30u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AA40 mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AA43 mov ecx, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AA46 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031AA47 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031AA48 mov esi, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031AA4A mov edx, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AA4D mov [ebp-0x14], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031AA50 mov cl, [edx+0x15]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x15u); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AA53 test cl, cl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(((uint8_t)ctx.ecx)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AA55 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031AA56 mov [ebp-0x18], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 0031AA59 mov [ebp-0x01], cl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 0031AA5C jz 0x0031AA61
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AA61; }
	// 0031AA5E dec [ebp-0x01]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); uint8_t a = (uint8_t)(X86_MEM8(ea));  uint8_t r = (uint8_t)(a - 1); X86_MEM8(ea) = (uint8_t)(r); of = a == (uint8_t)(1u << 7); zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
loc_0031AA61:
	// 0031AA61 test byte ptr [esi+0x0B], 0x10
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AA65 jz 0x0031ABA0
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031ABA0; }
	// 0031AA6B cmp byte ptr [eax+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x0u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AA6F lea esi, [edx+0x4C]
	ctx.esi = (uint32_t)((uint32_t)(ctx.edx + 0x4Cu));
	// 0031AA72 jnz 0x0031AA77
	if ((uint8_t)ca != (uint8_t)cb) { goto loc_0031AA77; }
	// 0031AA74 mov esi, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
loc_0031AA77:
	// 0031AA77 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AA7A and dword ptr [ebp-0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AA7E cmp dword ptr [ecx+0x04], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AA82 jbe 0x0031AB62
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_0031AB62; }
	// 0031AA88 add ecx, 0x08
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AA8B mov [ebp-0x08], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
loc_0031AA8E:
	// 0031AA8E cmp byte ptr [ebp-0x01], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x0u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AA92 movsx ecx, byte ptr [edx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x14u); ctx.ecx = (uint32_t)((uint32_t)(int8_t)(X86_MEM8(ea))); }
	// 0031AA96 mov [ebp-0x10], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031AA99 jz 0x0031AAAF
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_0031AAAF; }
	// 0031AA9B movsx edi, byte ptr [eax+0x11]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x11u); ctx.edi = (uint32_t)((uint32_t)(int8_t)(X86_MEM8(ea))); }
	// 0031AA9F movsx ebx, byte ptr [ebp-0x01]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); ctx.ebx = (uint32_t)((uint32_t)(int8_t)(X86_MEM8(ea))); }
	// 0031AAA3 add edi, [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AAA6 cmp edi, ebx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AAA8 jnz 0x0031AAAF
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_0031AAAF; }
	// 0031AAAA inc ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a + 1); ctx.ecx = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AAAB inc ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a + 1); ctx.ecx = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AAAC mov [ebp-0x10], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
loc_0031AAAF:
	// 0031AAAF mov edi, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031AAB2 movzx edi, word ptr [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edi = (uint32_t)((uint16_t)(X86_MEM16(ea))); }
	// 0031AAB5 mov ebx, edi
	{ ctx.ebx = (uint32_t)(ctx.edi); }
	// 0031AAB7 and bx, 0xF000
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.ebx)); uint16_t b = (uint16_t)(0xFFFFF000u); uint16_t r = (uint16_t)(a & b); ctx.ebx = (ctx.ebx & 0xFFFF0000u) | (uint16_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 0031AABC cmp bx, 0x9000
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.ebx)), b = (uint16_t)(0xFFFF9000u); uint16_t r = (uint16_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 15) & 1; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 0031AAC1 jnz 0x0031AB26
	if ((uint16_t)ca != (uint16_t)cb) { goto loc_0031AB26; }
	// 0031AAC3 test di, 0xFFF
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.edi)), b = (uint16_t)(0xFFFu); uint16_t r = (uint16_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 0031AAC8 jz 0x0031AB0F
	if (((uint16_t)(ca & cb)) == 0) { goto loc_0031AB0F; }
	// 0031AACA mov edi, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031AACD movzx edi, word ptr [edi]
	{ uint32_t ea = (uint32_t)(ctx.edi); ctx.edi = (uint32_t)((uint16_t)(X86_MEM16(ea))); }
	// 0031AAD0 and edi, 0xFFF
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0xFFFu); uint32_t r = (uint32_t)(a & b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AAD6 sub ecx, edi
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ctx.ecx = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AAD8 lea esi, [esi+edi*1-0x02]
	ctx.esi = (uint32_t)((uint32_t)(ctx.esi + ctx.edi + 0xFFFFFFFEu));
	// 0031AADC xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AADE mov di, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.edi = (ctx.edi & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 0031AAE1 shr ecx, 0x01
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x1u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031AAE3 inc esi
	{ uint32_t a = (uint32_t)(ctx.esi);  uint32_t r = (uint32_t)(a + 1); ctx.esi = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AAE4 inc esi
	{ uint32_t a = (uint32_t)(ctx.esi);  uint32_t r = (uint32_t)(a + 1); ctx.esi = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AAE5 test ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AAE7 mov [ebp-0x10], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031AAEA jz 0x0031AB28
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031AB28; }
	// 0031AAEC mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
	// 0031AAEE mov bx, ax
	{ ctx.ebx = (ctx.ebx & 0xFFFF0000u) | (uint16_t)(((uint16_t)ctx.eax)); }
	// 0031AAF1 mov edi, esi
	{ ctx.edi = (uint32_t)(ctx.esi); }
	// 0031AAF3 shl ebx, 0x10
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t c = (uint32_t)(0x10u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ebx = (uint32_t)(r); } }
	// 0031AAF6 mov bx, ax
	{ ctx.ebx = (ctx.ebx & 0xFFFF0000u) | (uint16_t)(((uint16_t)ctx.eax)); }
	// 0031AAF9 shr ecx, 0x01
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x1u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031AAFB mov eax, ebx
	{ ctx.eax = (uint32_t)(ctx.ebx); }
	// 0031AAFD rep stosd
	{ x86_rep_stos(ctx, base, 4); }
	// 0031AAFF adc ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t c0 = cf; uint32_t r = (uint32_t)(a + b + c0); ctx.ecx = (uint32_t)(r); cf = ((uint64_t)a + b + c0) >> 32 & 1; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AB01 rep stosw
	{ x86_rep_stos(ctx, base, 2); }
	// 0031AB04 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AB07 lea esi, [esi+eax*2]
	ctx.esi = (uint32_t)((uint32_t)(ctx.esi + ctx.eax * 2u));
loc_0031AB0A:
	// 0031AB0A mov eax, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AB0D jmp 0x0031AB28
	goto loc_0031AB28;
loc_0031AB0F:
	// 0031AB0F mov ebx, ecx
	{ ctx.ebx = (uint32_t)(ctx.ecx); }
	// 0031AB11 shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031AB14 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AB16 mov edi, esi
	{ ctx.edi = (uint32_t)(ctx.esi); }
	// 0031AB18 rep stosd
	{ x86_rep_stos(ctx, base, 4); }
	// 0031AB1A mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031AB1C and ecx, 0x03
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AB1F add esi, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AB22 rep stosb
	{ x86_rep_stos(ctx, base, 1); }
	// 0031AB24 jmp 0x0031AB0A
	X86_BARRIER();
	goto loc_0031AB0A;
loc_0031AB26:
	// 0031AB26 add esi, ecx
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031AB28:
	// 0031AB28 cmp byte ptr [ebp-0x01], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x0u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AB2C jz 0x0031AB4C
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_0031AB4C; }
	// 0031AB2E mov ecx, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AB31 mov cx, [ecx]
	{ uint32_t ea = (uint32_t)(ctx.ecx); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(X86_MEM16(ea)); }
	// 0031AB34 and cx, 0xF000
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.ecx)); uint16_t b = (uint16_t)(0xFFFFF000u); uint16_t r = (uint16_t)(a & b); ctx.ecx = (ctx.ecx & 0xFFFF0000u) | (uint16_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 0031AB39 cmp cx, 0x8000
	{ uint16_t a = (uint16_t)(((uint16_t)ctx.ecx)), b = (uint16_t)(0xFFFF8000u); uint16_t r = (uint16_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 15) & 1; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 0031AB3E jnz 0x0031AB4C
	if ((uint16_t)ca != (uint16_t)cb) { goto loc_0031AB4C; }
	// 0031AB40 mov cl, [ebp-0x01]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFFu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AB43 sub cl, [eax+0x11]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x11u); uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)); uint8_t b = (uint8_t)(X86_MEM8(ea)); uint8_t r = (uint8_t)(a - b); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AB46 sub cl, [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)); uint8_t b = (uint8_t)(X86_MEM8(ea)); uint8_t r = (uint8_t)(a - b); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AB49 add [edx+0x16], cl
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x16u); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(((uint8_t)ctx.ecx)); uint8_t r = (uint8_t)(a + b); X86_MEM8(ea) = (uint8_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
loc_0031AB4C:
	// 0031AB4C inc [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a + 1); X86_MEM32(ea) = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AB4F mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AB52 mov edi, [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031AB55 add dword ptr [ebp-0x08], 0x02
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x2u); uint32_t r = (uint32_t)(a + b); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AB59 cmp edi, [ecx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AB5C jb 0x0031AA8E
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_0031AA8E; }
loc_0031AB62:
	// 0031AB62 cmp byte ptr [eax+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x0u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AB66 jz 0x0031ABA0
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_0031ABA0; }
	// 0031AB68 mov ecx, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AB6B mov edi, [eax+0x08]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031AB6E mov ebx, ecx
	{ ctx.ebx = (uint32_t)(ctx.ecx); }
	// 0031AB70 shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031AB73 lea esi, [edx+0x4C]
	ctx.esi = (uint32_t)((uint32_t)(ctx.edx + 0x4Cu));
	// 0031AB76 rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 0031AB78 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031AB7A and ecx, 0x03
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AB7D rep movsb
	{ x86_rep_movs(ctx, base, 1); }
	// 0031AB7F cmp dword ptr [edx+0x40], 0x00
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x40u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AB83 jz 0x0031ABA0
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031ABA0; }
	// 0031AB85 mov ecx, [edx+0x48]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x48u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AB88 mov esi, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031AB8B mov edi, [edx+0x44]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x44u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031AB8E mov ebx, ecx
	{ ctx.ebx = (uint32_t)(ctx.ecx); }
	// 0031AB90 shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031AB93 lea esi, [edx+esi*1+0x4C]
	ctx.esi = (uint32_t)((uint32_t)(ctx.edx + ctx.esi + 0x4Cu));
	// 0031AB97 rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 0031AB99 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031AB9B and ecx, 0x03
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AB9E rep movsb
	{ x86_rep_movs(ctx, base, 1); }
loc_0031ABA0:
	// 0031ABA0 mov esi, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031ABA3 xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ABA5 cmp [esi+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ABA8 jz 0x0031ABB2
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031ABB2; }
	// 0031ABAA mov ecx, [esi+0x08]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031ABAD mov edi, [eax+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031ABB0 add [ecx], edi
	{ uint32_t ea = (uint32_t)(ctx.ecx); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a + b); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031ABB2:
	// 0031ABB2 cmp byte ptr [eax+0x10], 0x00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x0u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031ABB6 jz 0x0031ABCC
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_0031ABCC; }
	// 0031ABB8 mov ecx, [edx+0x40]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x40u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031ABBB cmp ecx, ebx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ABBD jz 0x0031ABCC
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031ABCC; }
	// 0031ABBF cmp [ecx+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ABC2 jz 0x0031ABCC
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031ABCC; }
	// 0031ABC4 mov ecx, [ecx+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031ABC7 mov edi, [edx+0x48]
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x48u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031ABCA add [ecx], edi
	{ uint32_t ea = (uint32_t)(ctx.ecx); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a + b); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031ABCC:
	// 0031ABCC movzx ecx, byte ptr [eax+0x13]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x13u); ctx.ecx = (uint32_t)((uint8_t)(X86_MEM8(ea))); }
	// 0031ABD0 mov al, [eax+0x12]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x12u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031ABD3 or [edx+0x17], al
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x17u); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031ABD6 cmp ecx, ebx
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ABD8 jz 0x0031AC0B
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031AC0B; }
	// 0031ABDA push 0x06
	{ uint32_t v = (uint32_t)(0x6u); X86_PUSH32(v); }
	// 0031ABDC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0031ABDD lea edi, [ebp-0x30]
	ctx.edi = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD0u));
	// 0031ABE0 rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 0031ABE2 mov eax, [ebp-0x28]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031ABE5 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ABE7 jz 0x0031ABEB
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031ABEB; }
	// 0031ABE9 mov ebx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
loc_0031ABEB:
	// 0031ABEB push [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031ABEE lea ecx, [edx+0x0C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edx + 0xCu));
	// 0031ABF1 call 0x0031A684
	X86_PUSH32(0x31ABF6u); sub_0031A684(ctx, base);
	// 0031ABF6 mov eax, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031ABF9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031ABFB push [eax+0x14]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031ABFE push [eax+0x10]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AC01 lea eax, [ebp-0x30]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD0u));
	// 0031AC04 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031AC05 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031AC06 call 0x002C0257
	X86_PUSH32(0x31AC0Bu); sub_002C0257(ctx, base);
loc_0031AC0B:
	// 0031AC0B mov ecx, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AC0E test byte ptr [ecx+0x0B], 0x20
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x20u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AC12 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031AC13 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031AC14 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031AC15 jz 0x0031AC1C
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AC1C; }
	// 0031AC17 call 0x0031A808
	X86_PUSH32(0x31AC1Cu); sub_0031A808(ctx, base);
loc_0031AC1C:
	// 0031AC1C leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 0031AC1D ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0031AA3A, __imp__sub_0031AA3A)

X86_FUNC(__imp__sub_0031AC20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031AC20 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031AC21 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031AC23 sub esp, 0x18
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x18u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AC26 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031AC27 mov ebx, ecx
	{ ctx.ebx = (uint32_t)(ctx.ecx); }
	// 0031AC29 mov ecx, [ebx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AC2C mov dl, [ecx+0x17]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x17u); ctx.edx = (ctx.edx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AC2F test dl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.edx)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AC32 jnz 0x0031AC41
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031AC41; }
	// 0031AC34 cmp byte ptr [ecx+0x2B], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x2Bu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x0u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AC38 jz 0x0031AC41
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_0031AC41; }
	// 0031AC3A mov eax, [ecx+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AC3D test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AC3F jnz 0x0031AC5F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0031AC5F; }
loc_0031AC41:
	// 0031AC41 test dl, 0x02
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.edx)), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AC44 jnz 0x0031AC53
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031AC53; }
	// 0031AC46 cmp byte ptr [ecx+0x3F], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x3Fu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x0u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AC4A jz 0x0031AC53
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_0031AC53; }
	// 0031AC4C mov eax, [ecx+0x30]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AC4F test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AC51 jnz 0x0031AC5F
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0031AC5F; }
loc_0031AC53:
	// 0031AC53 add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AC56 call 0x0031A6A0
	X86_PUSH32(0x31AC5Bu); sub_0031A6A0(ctx, base);
	// 0031AC5B test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AC5D jz 0x0031AC9E
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031AC9E; }
loc_0031AC5F:
	// 0031AC5F push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031AC60 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
loc_0031AC61:
	// 0031AC61 push 0x06
	{ uint32_t v = (uint32_t)(0x6u); X86_PUSH32(v); }
	// 0031AC63 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0031AC64 mov esi, eax
	{ ctx.esi = (uint32_t)(ctx.eax); }
	// 0031AC66 lea edi, [ebp-0x18]
	ctx.edi = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE8u));
	// 0031AC69 rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 0031AC6B mov ecx, [ebx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AC6E push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031AC6F add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AC72 call 0x0031A684
	X86_PUSH32(0x31AC77u); sub_0031A684(ctx, base);
	// 0031AC77 push 0x80004004
	{ uint32_t v = (uint32_t)(0x80004004u); X86_PUSH32(v); }
	// 0031AC7C push [ebx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AC7F lea eax, [ebp-0x18]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE8u));
	// 0031AC82 push [ebx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AC85 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031AC87 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031AC88 call 0x002C0257
	X86_PUSH32(0x31AC8Du); sub_002C0257(ctx, base);
	// 0031AC8D mov ecx, [ebx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AC90 add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AC93 call 0x0031A6A0
	X86_PUSH32(0x31AC98u); sub_0031A6A0(ctx, base);
	// 0031AC98 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AC9A jnz 0x0031AC61
	if (((uint32_t)(ca & cb)) != 0) { X86_BARRIER(); goto loc_0031AC61; }
	// 0031AC9C pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031AC9D pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_0031AC9E:
	// 0031AC9E pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031AC9F leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 0031ACA0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0031AC20, __imp__sub_0031AC20)

X86_FUNC(__imp__sub_0031ACA1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031ACA1 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031ACA2 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031ACA4 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0031ACA5 and dword ptr [ebp-0x04], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ACA9 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031ACAA mov ebx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0031ACAD test byte ptr [ebx+0x0B], 0x10
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031ACB1 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031ACB2 mov esi, [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031ACB5 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031ACB6 jnz 0x0031ACBB
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031ACBB; }
	// 0031ACB8 mov esi, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
loc_0031ACBB:
	// 0031ACBB call [0x0031B3C4]
	X86_PUSH32(0x31ACC1u); x86_kernel(ctx, base, 129);
	// 0031ACC1 test byte ptr [ebx+0x0B], 0x20
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x20u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031ACC5 mov [ebp+0x0B], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031ACC8 jz 0x0031AD09
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AD09; }
	// 0031ACCA mov ecx, [ebx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031ACCD add ecx, 0x0C
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ACD0 call 0x0031A6A0
	X86_PUSH32(0x31ACD5u); sub_0031A6A0(ctx, base);
	// 0031ACD5 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031ACD7 test edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ACD9 mov [ebp+0x10], edi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0031ACDC jz 0x0031AD00
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031AD00; }
	// 0031ACDE push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031ACDF call 0x002C0239
	X86_PUSH32(0x31ACE4u); sub_002C0239(ctx, base);
	// 0031ACE4 push 0x06
	{ uint32_t v = (uint32_t)(0x6u); X86_PUSH32(v); }
	// 0031ACE6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0031ACE7 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031ACEA rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 0031ACEC mov ecx, [ebx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031ACEF add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ACF2 call 0x0031A684
	X86_PUSH32(0x31ACF7u); sub_0031A684(ctx, base);
	// 0031ACF7 mov ecx, ebx
	{ ctx.ecx = (uint32_t)(ctx.ebx); }
	// 0031ACF9 call 0x0031A808
	X86_PUSH32(0x31ACFEu); sub_0031A808(ctx, base);
	// 0031ACFE jmp 0x0031AD23
	goto loc_0031AD23;
loc_0031AD00:
	// 0031AD00 mov dword ptr [ebp-0x04], 0x800700AA
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(0x800700AAu); }
	// 0031AD07 jmp 0x0031AD10
	goto loc_0031AD10;
loc_0031AD09:
	// 0031AD09 mov dword ptr [ebp-0x04], 0x8007048F
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(0x8007048Fu); }
loc_0031AD10:
	// 0031AD10 push 0x80004005
	{ uint32_t v = (uint32_t)(0x80004005u); X86_PUSH32(v); }
	// 0031AD15 push [ebx+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AD18 push [ebx+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AD1B push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031AD1D push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031AD1E call 0x002C0257
	X86_PUSH32(0x31AD23u); sub_002C0257(ctx, base);
loc_0031AD23:
	// 0031AD23 mov cl, [ebp+0x0B]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xBu); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AD26 call [0x0031B3C0]
	X86_PUSH32(0x31AD2Cu); x86_kernel(ctx, base, 161);
	// 0031AD2C mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AD2F pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031AD30 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031AD31 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031AD32 leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 0031AD33 ret 0x0C
	ctx.esp += 16; return;
}
X86_WEAK_FUNC(sub_0031ACA1, __imp__sub_0031ACA1)

X86_FUNC(__imp__sub_0031AD36) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031AD36 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031AD37 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031AD39 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0031AD3A push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0031AD3B push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031AD3C push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031AD3D push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031AD3E xor esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a ^ b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AD40 mov byte ptr [ebp-0x04], 0x02
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM8(ea) = (uint8_t)(0x2u); }
	// 0031AD44 mov bl, 0x1F
	{ ctx.ebx = (ctx.ebx & 0xFFFFFF00u) | (uint8_t)(0x1Fu); }
	// 0031AD46 call [0x0031B3C4]
	X86_PUSH32(0x31AD4Cu); x86_kernel(ctx, base, 129);
	// 0031AD4C mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AD4F cmp ecx, 0x312890
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(0x312890u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AD55 mov edi, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031AD58 mov [ebp-0x08], al
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031AD5B mov eax, 0x3128A8
	{ ctx.eax = (uint32_t)(0x3128A8u); }
	// 0031AD60 jz 0x0031AD84
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031AD84; }
	// 0031AD62 cmp ecx, eax
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AD64 jz 0x0031AD84
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031AD84; }
	// 0031AD66 cmp ecx, 0x31289C
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(0x31289Cu); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AD6C jnz 0x0031ADC1
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_0031ADC1; }
	// 0031AD6E cmp [0x00312864], si
	{ uint32_t ea = (uint32_t)(0x312864u); uint16_t a = (uint16_t)(X86_MEM16(ea)), b = (uint16_t)(((uint16_t)ctx.esi)); uint16_t r = (uint16_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 15) & 1; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 0031AD75 jz 0x0031AD8E
	if ((uint16_t)ca == (uint16_t)cb) { goto loc_0031AD8E; }
	// 0031AD77 mov esi, edi
	{ ctx.esi = (uint32_t)(ctx.edi); }
	// 0031AD79 imul esi, esi, 0x1C
	{ int64_t p = (int64_t)(int32_t)(ctx.esi) * (int64_t)(int32_t)(0x1Cu); uint32_t r = (uint32_t)p; cf = of = p != (int32_t)r; ctx.esi = (uint32_t)(r); }
	// 0031AD7C add esi, 0x3D8888
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x3D8888u); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AD82 jmp 0x0031ADC1
	goto loc_0031ADC1;
loc_0031AD84:
	// 0031AD84 cmp word ptr [0x00312868], 0x00
	{ uint32_t ea = (uint32_t)(0x312868u); uint16_t a = (uint16_t)(X86_MEM16(ea)), b = (uint16_t)(0x0u); uint16_t r = (uint16_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 15) & 1; zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 0031AD8C jnz 0x0031AD98
	if ((uint16_t)ca != (uint16_t)cb) { goto loc_0031AD98; }
loc_0031AD8E:
	// 0031AD8E mov esi, 0x8007000E
	{ ctx.esi = (uint32_t)(0x8007000Eu); }
	// 0031AD93 jmp 0x0031AE48
	goto loc_0031AE48;
loc_0031AD98:
	// 0031AD98 mov esi, edi
	{ ctx.esi = (uint32_t)(ctx.edi); }
	// 0031AD9A imul esi, esi, 0x1C
	{ int64_t p = (int64_t)(int32_t)(ctx.esi) * (int64_t)(int32_t)(0x1Cu); uint32_t r = (uint32_t)p; cf = of = p != (int32_t)r; ctx.esi = (uint32_t)(r); }
	// 0031AD9D add esi, 0x3D8818
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x3D8818u); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ADA3 cmp ecx, eax
	{ uint32_t a = (uint32_t)(ctx.ecx), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ADA5 jnz 0x0031ADBB
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_0031ADBB; }
	// 0031ADA7 test byte ptr [esi+0x0B], 0x80
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0xFFFFFF80u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031ADAB jnz 0x0031ADB7
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031ADB7; }
loc_0031ADAD:
	// 0031ADAD mov esi, 0x8007048F
	{ ctx.esi = (uint32_t)(0x8007048Fu); }
	// 0031ADB2 jmp 0x0031AE48
	goto loc_0031AE48;
loc_0031ADB7:
	// 0031ADB7 mov bl, 0xB5
	{ ctx.ebx = (ctx.ebx & 0xFFFFFF00u) | (uint8_t)(0xFFFFFFB5u); }
	// 0031ADB9 jmp 0x0031ADC1
	goto loc_0031ADC1;
loc_0031ADBB:
	// 0031ADBB test byte ptr [esi+0x0B], 0x80
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0xFFFFFF80u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031ADBF jnz 0x0031ADAD
	if (((uint8_t)(ca & cb)) != 0) { X86_BARRIER(); goto loc_0031ADAD; }
loc_0031ADC1:
	// 0031ADC1 mov eax, [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031ADC4 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ADC6 jz 0x0031ADF8
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031ADF8; }
	// 0031ADC8 mov eax, [eax+0x04]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031ADCB xor cl, cl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)); uint8_t b = (uint8_t)(((uint8_t)ctx.ecx)); uint8_t r = (uint8_t)(a ^ b); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031ADCD mov [ebp-0x04], cl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
loc_0031ADD0:
	// 0031ADD0 movzx edx, cl
	{ ctx.edx = (uint32_t)((uint8_t)(((uint8_t)ctx.ecx))); }
	// 0031ADD3 movzx edx, word ptr [edx*4+0x312870]
	{ uint32_t ea = (uint32_t)(ctx.edx * 4u + 0x312870u); ctx.edx = (uint32_t)((uint16_t)(X86_MEM16(ea))); }
	// 0031ADDB cmp eax, edx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ADDD jz 0x0031ADEB
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031ADEB; }
	// 0031ADDF inc cl
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx));  uint8_t r = (uint8_t)(a + 1); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(r); of = r == (uint8_t)(1u << 7); zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031ADE1 cmp cl, 0x08
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ecx)), b = (uint8_t)(0x8u); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031ADE4 mov [ebp-0x04], cl
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 0031ADE7 jb 0x0031ADD0
	if ((uint8_t)ca < (uint8_t)cb) { X86_BARRIER(); goto loc_0031ADD0; }
	// 0031ADE9 jmp 0x0031ADF8
	goto loc_0031ADF8;
loc_0031ADEB:
	// 0031ADEB xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ADED inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031ADEE shl eax, cl
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(((uint8_t)ctx.ecx)) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 0031ADF0 test bl, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ebx)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031ADF2 jnz 0x0031ADF8
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031ADF8; }
	// 0031ADF4 mov byte ptr [ebp-0x04], 0x08
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM8(ea) = (uint8_t)(0x8u); }
loc_0031ADF8:
	// 0031ADF8 mov al, [esi+0x0B]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031ADFB test al, 0x02
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x2u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031ADFD jz 0x0031AE0B
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AE0B; }
	// 0031ADFF xor esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a ^ b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AE01 mov ebx, 0x80070020
	{ ctx.ebx = (uint32_t)(0x80070020u); }
	// 0031AE06 jmp 0x0031AEDA
	goto loc_0031AEDA;
loc_0031AE0B:
	// 0031AE0B test al, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x1u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AE0D jz 0x0031AEB9
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AEB9; }
	// 0031AE13 test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AE15 jns 0x0031AE26
	if (((int8_t)(ca & cb)) >= 0) { goto loc_0031AE26; }
	// 0031AE17 push [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AE1A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031AE1C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AE1F call 0x0031A470
	X86_PUSH32(0x31AE24u); sub_0031A470(ctx, base);
	// 0031AE24 jmp 0x0031AE87
	goto loc_0031AE87;
loc_0031AE26:
	// 0031AE26 mov al, [edi+0x3D8814]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x3D8814u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AE2C test al, al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(((uint8_t)ctx.eax)); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AE2E jz 0x0031AE58
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AE58; }
	// 0031AE30 inc al
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax));  uint8_t r = (uint8_t)(a + 1); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); of = r == (uint8_t)(1u << 7); zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AE32 mov [edi+0x3D8814], al
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x3D8814u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031AE38 mov al, [edi+0x3D8810]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x3D8810u); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AE3E cmp al, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(X86_MEM8(ea)); uint8_t r = (uint8_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AE41 jz 0x0031AE8D
	if ((uint8_t)ca == (uint8_t)cb) { goto loc_0031AE8D; }
	// 0031AE43 mov esi, 0x80070057
	{ ctx.esi = (uint32_t)(0x80070057u); }
loc_0031AE48:
	// 0031AE48 mov cl, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AE4B call [0x0031B3C0]
	X86_PUSH32(0x31AE51u); x86_kernel(ctx, base, 161);
	// 0031AE51 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0031AE53 jmp 0x0031AEEA
	goto loc_0031AEEA;
loc_0031AE58:
	// 0031AE58 push [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AE5B mov al, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AE5E push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AE61 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031AE63 mov byte ptr [edi+0x3D8814], 0x01
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x3D8814u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0031AE6A mov [edi+0x3D8810], al
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x3D8810u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031AE70 call 0x0031A470
	X86_PUSH32(0x31AE75u); sub_0031A470(ctx, base);
	// 0031AE75 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0031AE77 test ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AE79 jl 0x0031AEAF
	if (((int32_t)(ca & cb)) < 0) { goto loc_0031AEAF; }
	// 0031AE7B push [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AE7E mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031AE80 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031AE82 call 0x0031A57F
	X86_PUSH32(0x31AE87u); sub_0031A57F(ctx, base);
loc_0031AE87:
	// 0031AE87 mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0031AE89 test ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AE8B jl 0x0031AEAF
	if (((int32_t)(ca & cb)) < 0) { goto loc_0031AEAF; }
loc_0031AE8D:
	// 0031AE8D movzx eax, byte ptr [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)((uint8_t)(X86_MEM8(ea))); }
	// 0031AE91 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031AE92 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AE95 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031AE97 call 0x0031A6B6
	X86_PUSH32(0x31AE9Cu); sub_0031A6B6(ctx, base);
	// 0031AE9C mov ebx, eax
	{ ctx.ebx = (uint32_t)(ctx.eax); }
	// 0031AE9E test ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AEA0 jl 0x0031AEAF
	if (((int32_t)(ca & cb)) < 0) { goto loc_0031AEAF; }
	// 0031AEA2 or byte ptr [esi+0x0B], 0x22
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x22u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AEA6 mov dword ptr [esi+0x0C], 0x01
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xCu); X86_MEM32(ea) = (uint32_t)(0x1u); }
	// 0031AEAD jmp 0x0031AEC0
	goto loc_0031AEC0;
loc_0031AEAF:
	// 0031AEAF xor esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a ^ b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AEB1 dec [edi+0x3D8814]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x3D8814u); uint8_t a = (uint8_t)(X86_MEM8(ea));  uint8_t r = (uint8_t)(a - 1); X86_MEM8(ea) = (uint8_t)(r); of = a == (uint8_t)(1u << 7); zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AEB7 jmp 0x0031AEC0
	goto loc_0031AEC0;
loc_0031AEB9:
	// 0031AEB9 xor esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a ^ b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AEBB mov ebx, 0x8007048F
	{ ctx.ebx = (uint32_t)(0x8007048Fu); }
loc_0031AEC0:
	// 0031AEC0 test esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AEC2 jz 0x0031AEDA
	if (((uint32_t)(ca & cb)) == 0) { goto loc_0031AEDA; }
	// 0031AEC4 test byte ptr [esi+0x0B], 0x10
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AEC8 jz 0x0031AED3
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AED3; }
	// 0031AECA dec [0x00312868]
	{ uint32_t ea = (uint32_t)(0x312868u); uint16_t a = (uint16_t)(X86_MEM16(ea));  uint16_t r = (uint16_t)(a - 1); X86_MEM16(ea) = (uint16_t)(r); of = a == (uint16_t)(1u << 15); zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 0031AED1 jmp 0x0031AEDA
	goto loc_0031AEDA;
loc_0031AED3:
	// 0031AED3 dec [0x00312864]
	{ uint32_t ea = (uint32_t)(0x312864u); uint16_t a = (uint16_t)(X86_MEM16(ea));  uint16_t r = (uint16_t)(a - 1); X86_MEM16(ea) = (uint16_t)(r); of = a == (uint16_t)(1u << 15); zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
loc_0031AEDA:
	// 0031AEDA mov cl, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AEDD call [0x0031B3C0]
	X86_PUSH32(0x31AEE3u); x86_kernel(ctx, base, 161);
	// 0031AEE3 mov eax, [ebp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AEE6 mov [eax], esi
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 0031AEE8 mov eax, ebx
	{ ctx.eax = (uint32_t)(ctx.ebx); }
loc_0031AEEA:
	// 0031AEEA pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031AEEB pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031AEEC pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031AEED leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 0031AEEE ret 0x14
	ctx.esp += 24; return;
}
X86_WEAK_FUNC(sub_0031AD36, __imp__sub_0031AD36)

X86_FUNC(__imp__sub_0031AEF1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031AEF1 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031AEF2 mov esi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031AEF6 mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AEF9 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031AEFA xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AEFC mov [eax+0x37C], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x37Cu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0031AF02 test byte ptr [esi+0x0B], 0x10
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AF06 push 0x1C
	{ uint32_t v = (uint32_t)(0x1Cu); X86_PUSH32(v); }
	// 0031AF08 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0031AF0A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0031AF0B jz 0x0031AF14
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AF14; }
	// 0031AF0D sub eax, 0x3D8818
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x3D8818u); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AF12 jmp 0x0031AF19
	goto loc_0031AF19;
loc_0031AF14:
	// 0031AF14 sub eax, 0x3D8888
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x3D8888u); uint32_t r = (uint32_t)(a - b); ctx.eax = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031AF19:
	// 0031AF19 cdq
	ctx.edx = (uint32_t)((int32_t)ctx.eax >> 31);
	// 0031AF1A idiv ecx
	{ int64_t n = (int64_t)(((uint64_t)ctx.edx << 32) | ctx.eax); int32_t d = (int32_t)ctx.ecx; if (!d) x86_trap(ctx, 0x31AF1A, "divide error"); if (n == INT64_MIN && d == -1) x86_trap(ctx, 0x31AF1A, "divide error"); int64_t q = n / d; if (q != (int32_t)q) x86_trap(ctx, 0x31AF1A, "divide error"); ctx.eax = (uint32_t)q; ctx.edx = (uint32_t)(n % d); }
	// 0031AF1C mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031AF1E dec [eax+0x3D8814]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x3D8814u); uint8_t a = (uint8_t)(X86_MEM8(ea));  uint8_t r = (uint8_t)(a - 1); X86_MEM8(ea) = (uint8_t)(r); of = a == (uint8_t)(1u << 7); zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AF24 call 0x0031AC20
	X86_PUSH32(0x31AF29u); sub_0031AC20(ctx, base);
	// 0031AF29 test byte ptr [esi+0x0B], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x8u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AF2D jz 0x0031AF47
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AF47; }
	// 0031AF2F mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AF32 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031AF33 call 0x003149AC
	X86_PUSH32(0x31AF38u); sub_003149AC(ctx, base);
	// 0031AF38 mov ecx, [esi+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AF3B call 0x0031530D
	X86_PUSH32(0x31AF40u); sub_0031530D(ctx, base);
	// 0031AF40 and byte ptr [esi+0x0B], 0xF7
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFF7u); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AF44 mov [esi+0x04], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
loc_0031AF47:
	// 0031AF47 mov al, [esi+0x0B]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AF4A test al, 0x04
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AF4C jz 0x0031AF64
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031AF64; }
	// 0031AF4E and al, 0xF9
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint8_t b = (uint8_t)(0xFFFFFFF9u); uint8_t r = (uint8_t)(a & b); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AF50 mov [esi+0x0B], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031AF53 mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AF56 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031AF57 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031AF58 add eax, 0x350
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x350u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AF5D push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031AF5E call [0x0031B448]
	X86_PUSH32(0x31AF64u); x86_kernel(ctx, base, 145);
loc_0031AF64:
	// 0031AF64 and byte ptr [esi+0x0B], 0xBF
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFBFu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AF68 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031AF69 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031AF6A ret 0x08
	ctx.esp += 12; return;
}
X86_WEAK_FUNC(sub_0031AEF1, __imp__sub_0031AEF1)

X86_FUNC(__imp__sub_0031AF6D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031AF6D push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031AF6E mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031AF70 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031AF71 mov esi, [ebp+0x20]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x20u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031AF74 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031AF75 push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AF78 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AF7B push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AF7E push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031AF81 call 0x0031AD36
	X86_PUSH32(0x31AF86u); sub_0031AD36(ctx, base);
	// 0031AF86 test eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AF88 jl 0x0031AF98
	if (((int32_t)(ca & cb)) < 0) { goto loc_0031AF98; }
	// 0031AF8A mov ecx, [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AF8C mov edx, [ebp+0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x1Cu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AF8F mov [ecx+0x14], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0031AF92 mov edx, [ebp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x18u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AF95 mov [ecx+0x10], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
loc_0031AF98:
	// 0031AF98 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031AF99 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0031AF9A ret 0x1C
	ctx.esp += 32; return;
}
X86_WEAK_FUNC(sub_0031AF6D, __imp__sub_0031AF6D)

X86_FUNC(__imp__sub_0031AF9D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031AF9D and byte ptr [ecx+0x0B], 0xDF
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFDFu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AFA1 mov al, [ecx+0x0B]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xBu); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031AFA4 test al, 0x40
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x40u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AFA6 jnz 0x0031AFF7
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031AFF7; }
	// 0031AFA8 or al, 0x40
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint8_t b = (uint8_t)(0x40u); uint8_t r = (uint8_t)(a | b); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031AFAA mov [ecx+0x0B], al
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031AFAD mov eax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AFB0 mov byte ptr [eax+0x360], 0x1C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x360u); X86_MEM8(ea) = (uint8_t)(0x1Cu); }
	// 0031AFB7 mov eax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AFBA mov byte ptr [eax+0x361], 0x4A
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x361u); X86_MEM8(ea) = (uint8_t)(0x4Au); }
	// 0031AFC1 mov eax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AFC4 mov dword ptr [eax+0x368], 0x31AEF1
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x368u); X86_MEM32(ea) = (uint32_t)(0x31AEF1u); }
	// 0031AFCE mov eax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AFD1 mov [eax+0x36C], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x36Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031AFD7 mov eax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AFDA mov edx, [eax+0x37C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x37Cu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AFE0 mov [eax+0x370], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x370u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0031AFE6 mov eax, [ecx+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031AFE9 mov ecx, [ecx+0x04]
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031AFEC add eax, 0x360
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x360u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031AFF1 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031AFF2 call 0x00314D5D
	X86_PUSH32(0x31AFF7u); sub_00314D5D(ctx, base);
loc_0031AFF7:
	// 0031AFF7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0031AF9D, __imp__sub_0031AF9D)

X86_FUNC(__imp__sub_0031AFF8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031AFF8 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031AFF9 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031AFFA push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031AFFB mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 0031AFFD call [0x0031B3C4]
	X86_PUSH32(0x31B003u); x86_kernel(ctx, base, 129);
	// 0031B003 mov bl, al
	{ ctx.ebx = (ctx.ebx & 0xFFFFFF00u) | (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031B005 mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031B008 xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B00A cmp [eax+0x37C], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x37Cu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B010 jz 0x0031B078
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031B078; }
	// 0031B012 or byte ptr [esi+0x0B], 0x04
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a | b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031B016 mov byte ptr [eax+0x350], 0x01
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x350u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 0031B01D mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031B020 mov byte ptr [eax+0x352], 0x04
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x352u); X86_MEM8(ea) = (uint8_t)(0x4u); }
	// 0031B027 mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031B02A mov [eax+0x354], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x354u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0031B030 mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031B033 lea ecx, [eax+0x358]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.eax + 0x358u));
	// 0031B039 mov [eax+0x35C], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x35Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B03F mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031B042 mov ecx, [eax+0x35C]
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x35Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031B048 mov [eax+0x358], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x358u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B04E test byte ptr [esi+0x0B], 0x08
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x8u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031B052 jnz 0x0031B05B
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031B05B; }
	// 0031B054 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031B056 call 0x0031AF9D
	X86_PUSH32(0x31B05Bu); sub_0031AF9D(ctx, base);
loc_0031B05B:
	// 0031B05B mov cl, bl
	{ ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0031B05D call [0x0031B3C0]
	X86_PUSH32(0x31B063u); x86_kernel(ctx, base, 161);
	// 0031B063 mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031B066 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031B067 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031B068 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031B069 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031B06A add eax, 0x350
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x350u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B06F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031B070 call [0x0031B44C]
	X86_PUSH32(0x31B076u); x86_kernel(ctx, base, 159);
	// 0031B076 jmp 0x0031B084
	goto loc_0031B084;
loc_0031B078:
	// 0031B078 and byte ptr [esi+0x0B], 0xFD
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFFDu); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031B07C mov cl, bl
	{ ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0031B07E call [0x0031B3C0]
	X86_PUSH32(0x31B084u); x86_kernel(ctx, base, 161);
loc_0031B084:
	// 0031B084 test byte ptr [esi+0x0B], 0x10
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)), b = (uint8_t)(0x10u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031B088 jz 0x0031B093
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031B093; }
	// 0031B08A inc [0x00312868]
	{ uint32_t ea = (uint32_t)(0x312868u); uint16_t a = (uint16_t)(X86_MEM16(ea));  uint16_t r = (uint16_t)(a + 1); X86_MEM16(ea) = (uint16_t)(r); of = r == (uint16_t)(1u << 15); zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
	// 0031B091 jmp 0x0031B09A
	goto loc_0031B09A;
loc_0031B093:
	// 0031B093 inc [0x00312864]
	{ uint32_t ea = (uint32_t)(0x312864u); uint16_t a = (uint16_t)(X86_MEM16(ea));  uint16_t r = (uint16_t)(a + 1); X86_MEM16(ea) = (uint16_t)(r); of = r == (uint16_t)(1u << 15); zf = r == 0; sf = (uint32_t)(r >> 15) & 1; pf = X86_PARITY(r); }
loc_0031B09A:
	// 0031B09A mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031B09D push [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031B09F call [0x0031B490]
	X86_PUSH32(0x31B0A5u); x86_kernel(ctx, base, 17);
	// 0031B0A5 mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031B0A8 mov ecx, [0x0031286C]
	{ uint32_t ea = (uint32_t)(0x31286Cu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031B0AE mov [eax], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B0B0 mov eax, [esi+0x18]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031B0B3 mov [0x0031286C], eax
	{ uint32_t ea = (uint32_t)(0x31286Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031B0B8 mov [esi+0x18], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0031B0BB pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031B0BC pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031B0BD pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031B0BE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0031AFF8, __imp__sub_0031AFF8)

X86_FUNC(__imp__sub_0031B0BF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031B0BF push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031B0C0 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031B0C1 mov edi, [esp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031B0C5 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0031B0C7 call 0x003149A8
	X86_PUSH32(0x31B0CCu); sub_003149A8(ctx, base);
	// 0031B0CC mov esi, eax
	{ ctx.esi = (uint32_t)(ctx.eax); }
	// 0031B0CE mov al, [esi+0x0B]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031B0D1 and al, 0xFE
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint8_t b = (uint8_t)(0xFFFFFFFEu); uint8_t r = (uint8_t)(a & b); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031B0D3 or al, 0x08
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)); uint8_t b = (uint8_t)(0x8u); uint8_t r = (uint8_t)(a | b); ctx.eax = (ctx.eax & 0xFFFFFF00u) | (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031B0D5 test al, 0x20
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x20u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031B0D7 mov [esi+0x0B], al
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0031B0DA jz 0x0031B0E5
	if (((uint8_t)(ca & cb)) == 0) { goto loc_0031B0E5; }
	// 0031B0DC mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0031B0DE call 0x0031AF9D
	X86_PUSH32(0x31B0E3u); sub_0031AF9D(ctx, base);
	// 0031B0E3 jmp 0x0031B101
	goto loc_0031B101;
loc_0031B0E5:
	// 0031B0E5 test al, 0x04
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.eax)), b = (uint8_t)(0x4u); uint8_t r = (uint8_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031B0E7 jnz 0x0031B101
	if (((uint8_t)(ca & cb)) != 0) { goto loc_0031B101; }
	// 0031B0E9 and dword ptr [esi+0x04], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esi + 0x4u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B0ED push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0031B0EF mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0031B0F1 call 0x003149AC
	X86_PUSH32(0x31B0F6u); sub_003149AC(ctx, base);
	// 0031B0F6 mov ecx, edi
	{ ctx.ecx = (uint32_t)(ctx.edi); }
	// 0031B0F8 call 0x0031530D
	X86_PUSH32(0x31B0FDu); sub_0031530D(ctx, base);
	// 0031B0FD and byte ptr [esi+0x0B], 0xF7
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xBu); uint8_t a = (uint8_t)(X86_MEM8(ea)); uint8_t b = (uint8_t)(0xFFFFFFF7u); uint8_t r = (uint8_t)(a & b); X86_MEM8(ea) = (uint8_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
loc_0031B101:
	// 0031B101 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031B102 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031B103 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0031B0BF, __imp__sub_0031B0BF)

X86_FUNC(__imp__sub_0031B106) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031B106 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031B107 mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031B109 mov edx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031B10C lea eax, [edx+0x0C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edx + 0xCu));
	// 0031B10F push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031B110 mov [ebp+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031B113 mov eax, 0xFFFFFFFF
	{ ctx.eax = (uint32_t)(0xFFFFFFFFu); }
	// 0031B118 mov ecx, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031B11B xadd [ecx], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(a); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B11E dec eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a - 1); ctx.eax = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B11F mov esi, eax
	{ ctx.esi = (uint32_t)(ctx.eax); }
	// 0031B121 test esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B123 jnl 0x0031B129
	if (((int32_t)(ca & cb)) >= 0) { goto loc_0031B129; }
	// 0031B125 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B127 jmp 0x0031B134
	goto loc_0031B134;
loc_0031B129:
	// 0031B129 jnz 0x0031B132
	if (!zf) { goto loc_0031B132; }
	// 0031B12B mov ecx, edx
	{ ctx.ecx = (uint32_t)(ctx.edx); }
	// 0031B12D call 0x0031AFF8
	X86_PUSH32(0x31B132u); sub_0031AFF8(ctx, base);
loc_0031B132:
	// 0031B132 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
loc_0031B134:
	// 0031B134 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031B135 pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 0031B136 ret 0x04
	ctx.esp += 8; return;
}
X86_WEAK_FUNC(sub_0031B106, __imp__sub_0031B106)

X86_FUNC(__imp__sub_0031B139) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031B139 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0031B13B mov eax, 0x3D8820
	{ ctx.eax = (uint32_t)(0x3D8820u); }
	// 0031B140 pop edx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edx = (uint32_t)(v); }
	// 0031B141 xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031B143:
	// 0031B143 mov dword ptr [eax-0x08], 0x33DBBC
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFFFFFFF8u); X86_MEM32(ea) = (uint32_t)(0x33DBBCu); }
	// 0031B14A mov [eax-0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B14D mov [eax], cx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0031B150 mov [eax+0x02], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 0031B153 mov [eax+0x03], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 0031B156 mov [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B159 mov [eax+0x08], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B15C mov [eax+0x0C], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B15F mov [eax+0x10], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B162 add eax, 0x1C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B165 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B166 jnz 0x0031B143
	if (!zf) { X86_BARRIER(); goto loc_0031B143; }
	// 0031B168 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0031B139, __imp__sub_0031B139)

X86_FUNC(__imp__sub_0031B169) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031B169 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0031B16B mov eax, 0x3D8890
	{ ctx.eax = (uint32_t)(0x3D8890u); }
	// 0031B170 pop edx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edx = (uint32_t)(v); }
	// 0031B171 xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031B173:
	// 0031B173 mov dword ptr [eax-0x08], 0x33DBBC
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFFFFFFF8u); X86_MEM32(ea) = (uint32_t)(0x33DBBCu); }
	// 0031B17A mov [eax-0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B17D mov [eax], cx
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ecx)); }
	// 0031B180 mov [eax+0x02], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 0031B183 mov [eax+0x03], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 0031B186 mov [eax+0x04], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B189 mov [eax+0x08], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B18C mov [eax+0x0C], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B18F mov [eax+0x10], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0031B192 add eax, 0x1C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B195 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B196 jnz 0x0031B173
	if (!zf) { X86_BARRIER(); goto loc_0031B173; }
	// 0031B198 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0031B169, __imp__sub_0031B169)

X86_FUNC(__imp__sub_0031B199) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0031B199 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 0031B19A mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 0031B19C sub esp, 0x94
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x94u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B1A2 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031B1A3 mov bl, [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); ctx.ebx = (ctx.ebx & 0xFFFFFF00u) | (uint8_t)(X86_MEM8(ea)); }
	// 0031B1A6 add bl, 0x23
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ebx)); uint8_t b = (uint8_t)(0x23u); uint8_t r = (uint8_t)(a + b); ctx.ebx = (ctx.ebx & 0xFFFFFF00u) | (uint8_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031B1A9 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031B1AA shl bl, 0x01
	{ uint8_t a = (uint8_t)(((uint8_t)ctx.ebx)); uint32_t c = (uint32_t)(0x1u) & 31; if (c) { uint8_t r = (uint8_t)((uint32_t)a << c); cf = c <= 8 ? ((uint32_t)a >> (8 - c)) & 1 : 0; of = ((uint32_t)(r >> 7) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); ctx.ebx = (ctx.ebx & 0xFFFFFF00u) | (uint8_t)(r); } }
	// 0031B1AC add bl, [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint8_t a = (uint8_t)(((uint8_t)ctx.ebx)); uint8_t b = (uint8_t)(X86_MEM8(ea)); uint8_t r = (uint8_t)(a + b); ctx.ebx = (ctx.ebx & 0xFFFFFF00u) | (uint8_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 7) & 1; zf = r == 0; sf = (uint32_t)(r >> 7) & 1; pf = X86_PARITY(r); }
	// 0031B1AF push 0x312900
	{ uint32_t v = (uint32_t)(0x312900u); X86_PUSH32(v); }
	// 0031B1B4 call [0x0031B474]
	X86_PUSH32(0x31B1BAu); x86_kernel(ctx, base, 277);
	// 0031B1BA xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B1BC mov cl, bl
	{ ctx.ecx = (ctx.ecx & 0xFFFFFF00u) | (uint8_t)(((uint8_t)ctx.ebx)); }
	// 0031B1BE xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B1C0 inc eax
	{ uint32_t a = (uint32_t)(ctx.eax);  uint32_t r = (uint32_t)(a + 1); ctx.eax = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B1C1 xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B1C3 sub ecx, 0x46
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x46u); uint32_t r = (uint32_t)(a - b); ctx.ecx = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B1C6 shl eax, cl
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(((uint8_t)ctx.ecx)) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 0031B1C8 test [0x003A8B04], eax
	{ uint32_t ea = (uint32_t)(0x3A8B04u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B1CE mov [ebp-0x14], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031B1D1 jnz 0x0031B1F9
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0031B1F9; }
	// 0031B1D3 lea eax, [ebp-0x94]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFF6Cu));
	// 0031B1D9 mov [ebp-0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031B1DC lea eax, [ebp-0x10]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 0031B1DF push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031B1E0 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031B1E3 mov [ebp-0x10], bx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.ebx)); }
	// 0031B1E7 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031B1EA mov word ptr [ebp-0x0E], 0x3E
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF2u); X86_MEM16(ea) = (uint16_t)(0x3Eu); }
	// 0031B1F0 call 0x00318E03
	X86_PUSH32(0x31B1F5u); sub_00318E03(ctx, base);
	// 0031B1F5 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031B1F7 jmp 0x0031B1FB
	goto loc_0031B1FB;
loc_0031B1F9:
	// 0031B1F9 xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_0031B1FB:
	// 0031B1FB cmp edi, ebx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B1FD jl 0x0031B2EC
	if ((int32_t)ca < (int32_t)cb) { goto loc_0031B2EC; }
	// 0031B203 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031B204 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031B207 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031B20A call 0x00318C58
	X86_PUSH32(0x31B20Fu); sub_00318C58(ctx, base);
	// 0031B20F mov esi, [0x0031B5A4]
	{ uint32_t ea = (uint32_t)(0x31B5A4u); ctx.esi = (uint32_t)(X86_MEM32(ea)); }
	// 0031B215 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031B216 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031B217 push 0x18
	{ uint32_t v = (uint32_t)(0x18u); X86_PUSH32(v); }
	// 0031B219 lea ecx, [ebp-0x54]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFACu));
	// 0031B21C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0031B21D push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031B21E push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031B21F push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031B220 push 0x70000
	{ uint32_t v = (uint32_t)(0x70000u); X86_PUSH32(v); }
	// 0031B225 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031B228 call esi
	{ uint32_t t = ctx.esi; X86_PUSH32(0x31B22Au); x86_icall(ctx, base, t); }
	// 0031B22A mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031B22C cmp edi, ebx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B22E jl 0x0031B2D5
	if ((int32_t)ca < (int32_t)cb) { goto loc_0031B2D5; }
	// 0031B234 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031B235 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031B236 push 0x20
	{ uint32_t v = (uint32_t)(0x20u); X86_PUSH32(v); }
	// 0031B238 lea eax, [ebp-0x3C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFC4u));
	// 0031B23B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031B23C push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031B23D push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 0031B23E push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031B241 push 0x74004
	{ uint32_t v = (uint32_t)(0x74004u); X86_PUSH32(v); }
	// 0031B246 call esi
	{ uint32_t t = ctx.esi; X86_PUSH32(0x31B248u); x86_icall(ctx, base, t); }
	// 0031B248 cmp [ebp-0x30], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD0u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B24B mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031B24D mov esi, 0x1000
	{ ctx.esi = (uint32_t)(0x1000u); }
	// 0031B252 jnle 0x0031B260
	if ((int32_t)ca > (int32_t)cb) { goto loc_0031B260; }
	// 0031B254 jl 0x0031B25B
	if ((sf != of)) { goto loc_0031B25B; }
	// 0031B256 cmp [ebp-0x34], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B259 jnb 0x0031B260
	if ((uint32_t)ca >= (uint32_t)cb) { goto loc_0031B260; }
loc_0031B25B:
	// 0031B25B mov edi, 0xC000014F
	{ ctx.edi = (uint32_t)(0xC000014Fu); }
loc_0031B260:
	// 0031B260 cmp edi, ebx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B262 jl 0x0031B2D5
	if ((int32_t)ca < (int32_t)cb) { goto loc_0031B2D5; }
	// 0031B264 push 0x24830000
	{ uint32_t v = (uint32_t)(0x24830000u); X86_PUSH32(v); }
	// 0031B269 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031B26A call 0x0001D3BB
	X86_PUSH32(0x31B26Fu); sub_0001D3BB(ctx, base);
	// 0031B26F cmp eax, ebx
	{ uint32_t a = (uint32_t)(ctx.eax), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B271 mov [ebp-0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0031B274 jz 0x0031B2D0
	if ((uint32_t)ca == (uint32_t)cb) { goto loc_0031B2D0; }
	// 0031B276 lea ecx, [ebp-0x1C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE4u));
	// 0031B279 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 0031B27A push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0031B27B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0031B27C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031B27F mov [ebp-0x1C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031B282 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 0031B284 mov [ebp-0x18], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0031B287 call [0x0031B5A0]
	X86_PUSH32(0x31B28Du); x86_kernel(ctx, base, 85);
	// 0031B28D mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 0031B28F cmp edi, ebx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B291 jl 0x0031B2C1
	if ((int32_t)ca < (int32_t)cb) { goto loc_0031B2C1; }
	// 0031B293 mov eax, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031B296 cmp dword ptr [eax], 0x58544146
	{ uint32_t ea = (uint32_t)(ctx.eax); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x58544146u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B29C jnz 0x0031B2BC
	if ((uint32_t)ca != (uint32_t)cb) { goto loc_0031B2BC; }
	// 0031B29E mov edx, [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0031B2A1 mov ecx, [ebp+0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x18u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0031B2A4 mov edi, [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 0031B2A7 lea esi, [eax+edx*1]
	ctx.esi = (uint32_t)((uint32_t)(ctx.eax + ctx.edx));
	// 0031B2AA mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0031B2AC shr ecx, 0x02
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t c = (uint32_t)(0x2u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a >> c); cf = c <= 32 ? ((uint32_t)a >> (c - 1)) & 1 : 0; of = (uint32_t)(a >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ecx = (uint32_t)(r); } }
	// 0031B2AF rep movsd
	{ x86_rep_movs(ctx, base, 4); }
	// 0031B2B1 mov ecx, eax
	{ ctx.ecx = (uint32_t)(ctx.eax); }
	// 0031B2B3 and ecx, 0x03
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x3u); uint32_t r = (uint32_t)(a & b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B2B6 rep movsb
	{ x86_rep_movs(ctx, base, 1); }
	// 0031B2B8 xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B2BA jmp 0x0031B2C1
	goto loc_0031B2C1;
loc_0031B2BC:
	// 0031B2BC mov edi, 0xC000014F
	{ ctx.edi = (uint32_t)(0xC000014Fu); }
loc_0031B2C1:
	// 0031B2C1 push 0x24830000
	{ uint32_t v = (uint32_t)(0x24830000u); X86_PUSH32(v); }
	// 0031B2C6 push [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031B2C9 call 0x0001D45B
	X86_PUSH32(0x31B2CEu); sub_0001D45B(ctx, base);
	// 0031B2CE jmp 0x0031B2D5
	goto loc_0031B2D5;
loc_0031B2D0:
	// 0031B2D0 mov edi, 0xC000009A
	{ ctx.edi = (uint32_t)(0xC000009Au); }
loc_0031B2D5:
	// 0031B2D5 mov eax, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0031B2D8 test [0x003A8B04], eax
	{ uint32_t ea = (uint32_t)(0x3A8B04u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0031B2DE pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0031B2DF jnz 0x0031B2EC
	if (((uint32_t)(ca & cb)) != 0) { goto loc_0031B2EC; }
	// 0031B2E1 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031B2E4 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 0031B2E7 call 0x00318D96
	X86_PUSH32(0x31B2ECu); sub_00318D96(ctx, base);
loc_0031B2EC:
	// 0031B2EC push 0x312900
	{ uint32_t v = (uint32_t)(0x312900u); X86_PUSH32(v); }
	// 0031B2F1 call [0x0031B470]
	X86_PUSH32(0x31B2F7u); x86_kernel(ctx, base, 294);
	// 0031B2F7 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0031B2F8 call [0x0031B380]
	X86_PUSH32(0x31B2FEu); x86_kernel(ctx, base, 301);
	// 0031B2FE pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0031B2FF pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0031B300 leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 0031B301 ret 0x14
	ctx.esp += 24; return;
}
X86_WEAK_FUNC(sub_0031B199, __imp__sub_0031B199)

