#include "x86_recomp_shared.h"

X86_FUNC(__imp__sub_00459D80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459D80;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459D80:
	// 00459D80 mov eax, 0x5AE1D8
	{ ctx.eax = (uint32_t)(0x5AE1D8u); }
	// 00459D85 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459D80, __imp__sub_00459D80)

X86_FUNC(__imp__sub_00459D90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459D90;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459D90:
	// 00459D90 mov eax, 0x5AE228
	{ ctx.eax = (uint32_t)(0x5AE228u); }
	// 00459D95 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459D90, __imp__sub_00459D90)

X86_FUNC(__imp__sub_00459DA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459DA0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459DA0:
	// 00459DA0 mov eax, 0x5AE2AC
	{ ctx.eax = (uint32_t)(0x5AE2ACu); }
	// 00459DA5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459DA0, __imp__sub_00459DA0)

X86_FUNC(__imp__sub_00459DB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459DB0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459DB0:
	// 00459DB0 mov eax, 0x5AE2FC
	{ ctx.eax = (uint32_t)(0x5AE2FCu); }
	// 00459DB5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459DB0, __imp__sub_00459DB0)

X86_FUNC(__imp__sub_00459DC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459DC0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459DC0:
	// 00459DC0 mov eax, 0x5AE34C
	{ ctx.eax = (uint32_t)(0x5AE34Cu); }
	// 00459DC5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459DC0, __imp__sub_00459DC0)

X86_FUNC(__imp__sub_00459DD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459DD0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459DD0:
	// 00459DD0 mov eax, 0x5AE39C
	{ ctx.eax = (uint32_t)(0x5AE39Cu); }
	// 00459DD5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459DD0, __imp__sub_00459DD0)

X86_FUNC(__imp__sub_00459DE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459DE0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459DE0:
	// 00459DE0 mov eax, 0x5AE3EC
	{ ctx.eax = (uint32_t)(0x5AE3ECu); }
	// 00459DE5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459DE0, __imp__sub_00459DE0)

X86_FUNC(__imp__sub_00459DF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459DF0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459DF0:
	// 00459DF0 mov eax, 0x5AE43C
	{ ctx.eax = (uint32_t)(0x5AE43Cu); }
	// 00459DF5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459DF0, __imp__sub_00459DF0)

X86_FUNC(__imp__sub_00459E00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459E00;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459E00:
	// 00459E00 mov eax, 0x5AE48C
	{ ctx.eax = (uint32_t)(0x5AE48Cu); }
	// 00459E05 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459E00, __imp__sub_00459E00)

X86_FUNC(__imp__sub_00459E10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459E10;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459E10:
	// 00459E10 mov eax, 0x5AE4DC
	{ ctx.eax = (uint32_t)(0x5AE4DCu); }
	// 00459E15 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459E10, __imp__sub_00459E10)

X86_FUNC(__imp__sub_00459E20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459E20;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459E20:
	// 00459E20 mov eax, 0x5AE52C
	{ ctx.eax = (uint32_t)(0x5AE52Cu); }
	// 00459E25 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459E20, __imp__sub_00459E20)

X86_FUNC(__imp__sub_00459E30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459E30;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459E30:
	// 00459E30 mov eax, 0x5AE57C
	{ ctx.eax = (uint32_t)(0x5AE57Cu); }
	// 00459E35 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459E30, __imp__sub_00459E30)

X86_FUNC(__imp__sub_00459E40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459E40;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459E40:
	// 00459E40 mov eax, 0x5AE5CC
	{ ctx.eax = (uint32_t)(0x5AE5CCu); }
	// 00459E45 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459E40, __imp__sub_00459E40)

X86_FUNC(__imp__sub_00459E50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459E50;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459E50:
	// 00459E50 mov eax, 0x5AE61C
	{ ctx.eax = (uint32_t)(0x5AE61Cu); }
	// 00459E55 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459E50, __imp__sub_00459E50)

X86_FUNC(__imp__sub_00459E60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459E60;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459E60:
	// 00459E60 mov eax, 0x5AE66C
	{ ctx.eax = (uint32_t)(0x5AE66Cu); }
	// 00459E65 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459E60, __imp__sub_00459E60)

X86_FUNC(__imp__sub_00459E70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459E70;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459E70:
	// 00459E70 mov eax, 0x5AE6BC
	{ ctx.eax = (uint32_t)(0x5AE6BCu); }
	// 00459E75 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459E70, __imp__sub_00459E70)

X86_FUNC(__imp__sub_00459E80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459E80;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459E80:
	// 00459E80 mov eax, 0x5AE70C
	{ ctx.eax = (uint32_t)(0x5AE70Cu); }
	// 00459E85 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459E80, __imp__sub_00459E80)

X86_FUNC(__imp__sub_00459E90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459E90;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459E90:
	// 00459E90 mov eax, 0x5AE75C
	{ ctx.eax = (uint32_t)(0x5AE75Cu); }
	// 00459E95 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459E90, __imp__sub_00459E90)

X86_FUNC(__imp__sub_00459EA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459EA0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459EA0:
	// 00459EA0 mov eax, 0x5AE7AC
	{ ctx.eax = (uint32_t)(0x5AE7ACu); }
	// 00459EA5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459EA0, __imp__sub_00459EA0)

X86_FUNC(__imp__sub_00459EB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459EB0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459EB0:
	// 00459EB0 mov eax, 0x5AE7FC
	{ ctx.eax = (uint32_t)(0x5AE7FCu); }
	// 00459EB5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459EB0, __imp__sub_00459EB0)

X86_FUNC(__imp__sub_00459EC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459EC0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459EC0:
	// 00459EC0 mov eax, 0x5AE84C
	{ ctx.eax = (uint32_t)(0x5AE84Cu); }
	// 00459EC5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459EC0, __imp__sub_00459EC0)

X86_FUNC(__imp__sub_00459ED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459ED0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459ED0:
	// 00459ED0 mov eax, 0x5AE89C
	{ ctx.eax = (uint32_t)(0x5AE89Cu); }
	// 00459ED5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459ED0, __imp__sub_00459ED0)

X86_FUNC(__imp__sub_00459EE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459EE0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459EE0:
	// 00459EE0 mov eax, 0x5AE8EC
	{ ctx.eax = (uint32_t)(0x5AE8ECu); }
	// 00459EE5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459EE0, __imp__sub_00459EE0)

X86_FUNC(__imp__sub_00459EF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459EF0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459EF0:
	// 00459EF0 mov eax, 0x5AE93C
	{ ctx.eax = (uint32_t)(0x5AE93Cu); }
	// 00459EF5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459EF0, __imp__sub_00459EF0)

X86_FUNC(__imp__sub_00459F00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459F00;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459F00:
	// 00459F00 mov eax, 0x5AE98C
	{ ctx.eax = (uint32_t)(0x5AE98Cu); }
	// 00459F05 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459F00, __imp__sub_00459F00)

X86_FUNC(__imp__sub_00459F10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459F10;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459F10:
	// 00459F10 mov eax, 0x5AE9DC
	{ ctx.eax = (uint32_t)(0x5AE9DCu); }
	// 00459F15 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459F10, __imp__sub_00459F10)

X86_FUNC(__imp__sub_00459F20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459F20;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459F20:
	// 00459F20 mov eax, 0x5AEA2C
	{ ctx.eax = (uint32_t)(0x5AEA2Cu); }
	// 00459F25 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459F20, __imp__sub_00459F20)

X86_FUNC(__imp__sub_00459F30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459F30;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459F30:
	// 00459F30 mov eax, 0x5AEA7C
	{ ctx.eax = (uint32_t)(0x5AEA7Cu); }
	// 00459F35 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459F30, __imp__sub_00459F30)

X86_FUNC(__imp__sub_00459F40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459F40;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459F40:
	// 00459F40 mov eax, 0x5AEACC
	{ ctx.eax = (uint32_t)(0x5AEACCu); }
	// 00459F45 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459F40, __imp__sub_00459F40)

X86_FUNC(__imp__sub_00459F50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459F50;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459F50:
	// 00459F50 mov eax, 0x5AEB50
	{ ctx.eax = (uint32_t)(0x5AEB50u); }
	// 00459F55 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459F50, __imp__sub_00459F50)

X86_FUNC(__imp__sub_00459F60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459F60;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459F60:
	// 00459F60 mov eax, 0x5AEBA0
	{ ctx.eax = (uint32_t)(0x5AEBA0u); }
	// 00459F65 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459F60, __imp__sub_00459F60)

X86_FUNC(__imp__sub_00459F70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459F70;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459F70:
	// 00459F70 mov eax, 0x5AEBF0
	{ ctx.eax = (uint32_t)(0x5AEBF0u); }
	// 00459F75 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459F70, __imp__sub_00459F70)

X86_FUNC(__imp__sub_00459F80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459F80;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459F80:
	// 00459F80 mov eax, 0x5AEC40
	{ ctx.eax = (uint32_t)(0x5AEC40u); }
	// 00459F85 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459F80, __imp__sub_00459F80)

X86_FUNC(__imp__sub_00459F90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459F90;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459F90:
	// 00459F90 mov eax, 0x5AEC90
	{ ctx.eax = (uint32_t)(0x5AEC90u); }
	// 00459F95 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459F90, __imp__sub_00459F90)

X86_FUNC(__imp__sub_00459FA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459FA0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459FA0:
	// 00459FA0 mov eax, 0x5AECE0
	{ ctx.eax = (uint32_t)(0x5AECE0u); }
	// 00459FA5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459FA0, __imp__sub_00459FA0)

X86_FUNC(__imp__sub_00459FB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459FB0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459FB0:
	// 00459FB0 mov eax, 0x5AED30
	{ ctx.eax = (uint32_t)(0x5AED30u); }
	// 00459FB5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459FB0, __imp__sub_00459FB0)

X86_FUNC(__imp__sub_00459FC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459FC0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459FC0:
	// 00459FC0 mov eax, 0x5AED80
	{ ctx.eax = (uint32_t)(0x5AED80u); }
	// 00459FC5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459FC0, __imp__sub_00459FC0)

X86_FUNC(__imp__sub_00459FD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459FD0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459FD0:
	// 00459FD0 mov eax, 0x5AEDD0
	{ ctx.eax = (uint32_t)(0x5AEDD0u); }
	// 00459FD5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459FD0, __imp__sub_00459FD0)

X86_FUNC(__imp__sub_00459FE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459FE0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459FE0:
	// 00459FE0 mov eax, 0x5AEE20
	{ ctx.eax = (uint32_t)(0x5AEE20u); }
	// 00459FE5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459FE0, __imp__sub_00459FE0)

X86_FUNC(__imp__sub_00459FF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00459FF0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_00459FF0:
	// 00459FF0 mov eax, 0x5AEE70
	{ ctx.eax = (uint32_t)(0x5AEE70u); }
	// 00459FF5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_00459FF0, __imp__sub_00459FF0)

X86_FUNC(__imp__sub_0045A000) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A000;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A000:
	// 0045A000 mov eax, 0x5AEEC0
	{ ctx.eax = (uint32_t)(0x5AEEC0u); }
	// 0045A005 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A000, __imp__sub_0045A000)

X86_FUNC(__imp__sub_0045A010) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A010;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A010:
	// 0045A010 mov eax, 0x5AEF10
	{ ctx.eax = (uint32_t)(0x5AEF10u); }
	// 0045A015 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A010, __imp__sub_0045A010)

X86_FUNC(__imp__sub_0045A020) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A020;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A020:
	// 0045A020 mov eax, 0x5AEF60
	{ ctx.eax = (uint32_t)(0x5AEF60u); }
	// 0045A025 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A020, __imp__sub_0045A020)

X86_FUNC(__imp__sub_0045A030) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A030;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A030:
	// 0045A030 mov eax, 0x5AEFB0
	{ ctx.eax = (uint32_t)(0x5AEFB0u); }
	// 0045A035 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A030, __imp__sub_0045A030)

X86_FUNC(__imp__sub_0045A040) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A040;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A040:
	// 0045A040 mov eax, 0x5AF000
	{ ctx.eax = (uint32_t)(0x5AF000u); }
	// 0045A045 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A040, __imp__sub_0045A040)

X86_FUNC(__imp__sub_0045A050) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A050;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A050:
	// 0045A050 mov eax, 0x5AF050
	{ ctx.eax = (uint32_t)(0x5AF050u); }
	// 0045A055 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A050, __imp__sub_0045A050)

X86_FUNC(__imp__sub_0045A060) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A060;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A060:
	// 0045A060 mov eax, 0x5AF0A0
	{ ctx.eax = (uint32_t)(0x5AF0A0u); }
	// 0045A065 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A060, __imp__sub_0045A060)

X86_FUNC(__imp__sub_0045A070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A070;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A070:
	// 0045A070 mov eax, 0x5AF0F0
	{ ctx.eax = (uint32_t)(0x5AF0F0u); }
	// 0045A075 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A070, __imp__sub_0045A070)

X86_FUNC(__imp__sub_0045A080) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A080;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A080:
	// 0045A080 mov eax, 0x5AF140
	{ ctx.eax = (uint32_t)(0x5AF140u); }
	// 0045A085 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A080, __imp__sub_0045A080)

X86_FUNC(__imp__sub_0045A090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A090;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A090:
	// 0045A090 mov eax, 0x5AF190
	{ ctx.eax = (uint32_t)(0x5AF190u); }
	// 0045A095 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A090, __imp__sub_0045A090)

X86_FUNC(__imp__sub_0045A0A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A0A0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A0A0:
	// 0045A0A0 mov eax, 0x5AF1E0
	{ ctx.eax = (uint32_t)(0x5AF1E0u); }
	// 0045A0A5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A0A0, __imp__sub_0045A0A0)

X86_FUNC(__imp__sub_0045A0B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A0B0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A0B0:
	// 0045A0B0 mov eax, 0x5AF230
	{ ctx.eax = (uint32_t)(0x5AF230u); }
	// 0045A0B5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A0B0, __imp__sub_0045A0B0)

X86_FUNC(__imp__sub_0045A0C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A0C0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A0C0:
	// 0045A0C0 mov eax, 0x5AF280
	{ ctx.eax = (uint32_t)(0x5AF280u); }
	// 0045A0C5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A0C0, __imp__sub_0045A0C0)

X86_FUNC(__imp__sub_0045A0D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A0D0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A0D0:
	// 0045A0D0 mov eax, 0x5AF2D0
	{ ctx.eax = (uint32_t)(0x5AF2D0u); }
	// 0045A0D5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A0D0, __imp__sub_0045A0D0)

X86_FUNC(__imp__sub_0045A0E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A0E0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A0E0:
	// 0045A0E0 mov eax, 0x5AF320
	{ ctx.eax = (uint32_t)(0x5AF320u); }
	// 0045A0E5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A0E0, __imp__sub_0045A0E0)

X86_FUNC(__imp__sub_0045A0F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A0F0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A0F0:
	// 0045A0F0 mov eax, 0x5AF370
	{ ctx.eax = (uint32_t)(0x5AF370u); }
	// 0045A0F5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A0F0, __imp__sub_0045A0F0)

X86_FUNC(__imp__sub_0045A100) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A100;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A100:
	// 0045A100 mov eax, 0x5AF3C0
	{ ctx.eax = (uint32_t)(0x5AF3C0u); }
	// 0045A105 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A100, __imp__sub_0045A100)

X86_FUNC(__imp__sub_0045A110) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A110;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A110:
	// 0045A110 mov eax, 0x5AF444
	{ ctx.eax = (uint32_t)(0x5AF444u); }
	// 0045A115 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A110, __imp__sub_0045A110)

X86_FUNC(__imp__sub_0045A120) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A120;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A120:
	// 0045A120 mov eax, 0x5AF494
	{ ctx.eax = (uint32_t)(0x5AF494u); }
	// 0045A125 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A120, __imp__sub_0045A120)

X86_FUNC(__imp__sub_0045A130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A130;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A130:
	// 0045A130 mov eax, 0x5AF4E4
	{ ctx.eax = (uint32_t)(0x5AF4E4u); }
	// 0045A135 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A130, __imp__sub_0045A130)

X86_FUNC(__imp__sub_0045A140) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A140;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A140:
	// 0045A140 mov eax, 0x5AF534
	{ ctx.eax = (uint32_t)(0x5AF534u); }
	// 0045A145 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A140, __imp__sub_0045A140)

X86_FUNC(__imp__sub_0045A150) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A150;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A150:
	// 0045A150 mov eax, 0x5AF584
	{ ctx.eax = (uint32_t)(0x5AF584u); }
	// 0045A155 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A150, __imp__sub_0045A150)

X86_FUNC(__imp__sub_0045A160) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A160;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A160:
	// 0045A160 mov eax, 0x5AF5D4
	{ ctx.eax = (uint32_t)(0x5AF5D4u); }
	// 0045A165 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A160, __imp__sub_0045A160)

X86_FUNC(__imp__sub_0045A170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A170;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A170:
	// 0045A170 mov eax, 0x5AF624
	{ ctx.eax = (uint32_t)(0x5AF624u); }
	// 0045A175 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A170, __imp__sub_0045A170)

X86_FUNC(__imp__sub_0045A180) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A180;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A180:
	// 0045A180 mov eax, 0x5AF674
	{ ctx.eax = (uint32_t)(0x5AF674u); }
	// 0045A185 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A180, __imp__sub_0045A180)

X86_FUNC(__imp__sub_0045A190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A190;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A190:
	// 0045A190 mov eax, 0x5AF6C4
	{ ctx.eax = (uint32_t)(0x5AF6C4u); }
	// 0045A195 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A190, __imp__sub_0045A190)

X86_FUNC(__imp__sub_0045A1A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A1A0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A1A0:
	// 0045A1A0 mov eax, 0x5AF714
	{ ctx.eax = (uint32_t)(0x5AF714u); }
	// 0045A1A5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A1A0, __imp__sub_0045A1A0)

X86_FUNC(__imp__sub_0045A1B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A1B0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A1B0:
	// 0045A1B0 mov eax, 0x5AF764
	{ ctx.eax = (uint32_t)(0x5AF764u); }
	// 0045A1B5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A1B0, __imp__sub_0045A1B0)

X86_FUNC(__imp__sub_0045A1C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A1C0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A1C0:
	// 0045A1C0 mov eax, 0x5AF7B4
	{ ctx.eax = (uint32_t)(0x5AF7B4u); }
	// 0045A1C5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A1C0, __imp__sub_0045A1C0)

X86_FUNC(__imp__sub_0045A1D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A1D0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A1D0:
	// 0045A1D0 mov eax, 0x5AF804
	{ ctx.eax = (uint32_t)(0x5AF804u); }
	// 0045A1D5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A1D0, __imp__sub_0045A1D0)

X86_FUNC(__imp__sub_0045A1E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A1E0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A1E0:
	// 0045A1E0 mov eax, 0x5AF854
	{ ctx.eax = (uint32_t)(0x5AF854u); }
	// 0045A1E5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A1E0, __imp__sub_0045A1E0)

X86_FUNC(__imp__sub_0045A1F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A1F0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A1F0:
	// 0045A1F0 mov eax, 0x5AF8A4
	{ ctx.eax = (uint32_t)(0x5AF8A4u); }
	// 0045A1F5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A1F0, __imp__sub_0045A1F0)

X86_FUNC(__imp__sub_0045A200) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A200;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A200:
	// 0045A200 mov eax, 0x5AF8F4
	{ ctx.eax = (uint32_t)(0x5AF8F4u); }
	// 0045A205 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A200, __imp__sub_0045A200)

X86_FUNC(__imp__sub_0045A210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A210;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A210:
	// 0045A210 mov eax, 0x5AF944
	{ ctx.eax = (uint32_t)(0x5AF944u); }
	// 0045A215 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A210, __imp__sub_0045A210)

X86_FUNC(__imp__sub_0045A220) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A220;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A220:
	// 0045A220 mov eax, 0x5AF994
	{ ctx.eax = (uint32_t)(0x5AF994u); }
	// 0045A225 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A220, __imp__sub_0045A220)

X86_FUNC(__imp__sub_0045A230) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A230;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A230:
	// 0045A230 mov eax, 0x5AF9E4
	{ ctx.eax = (uint32_t)(0x5AF9E4u); }
	// 0045A235 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A230, __imp__sub_0045A230)

X86_FUNC(__imp__sub_0045A240) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A240;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A240:
	// 0045A240 mov eax, 0x5AFA34
	{ ctx.eax = (uint32_t)(0x5AFA34u); }
	// 0045A245 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A240, __imp__sub_0045A240)

X86_FUNC(__imp__sub_0045A250) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A250;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A250:
	// 0045A250 mov eax, 0x5AFA84
	{ ctx.eax = (uint32_t)(0x5AFA84u); }
	// 0045A255 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A250, __imp__sub_0045A250)

X86_FUNC(__imp__sub_0045A260) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A260;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A260:
	// 0045A260 mov eax, 0x5AFAD4
	{ ctx.eax = (uint32_t)(0x5AFAD4u); }
	// 0045A265 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A260, __imp__sub_0045A260)

X86_FUNC(__imp__sub_0045A270) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A270;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A270:
	// 0045A270 mov eax, 0x5AFB24
	{ ctx.eax = (uint32_t)(0x5AFB24u); }
	// 0045A275 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A270, __imp__sub_0045A270)

X86_FUNC(__imp__sub_0045A280) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A280;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A280:
	// 0045A280 mov eax, 0x5AFB74
	{ ctx.eax = (uint32_t)(0x5AFB74u); }
	// 0045A285 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A280, __imp__sub_0045A280)

X86_FUNC(__imp__sub_0045A290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A290;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A290:
	// 0045A290 mov eax, 0x5AFBC4
	{ ctx.eax = (uint32_t)(0x5AFBC4u); }
	// 0045A295 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A290, __imp__sub_0045A290)

X86_FUNC(__imp__sub_0045A2A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A2A0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A2A0:
	// 0045A2A0 mov eax, 0x5AFC14
	{ ctx.eax = (uint32_t)(0x5AFC14u); }
	// 0045A2A5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A2A0, __imp__sub_0045A2A0)

X86_FUNC(__imp__sub_0045A2B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A2B0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A2B0:
	// 0045A2B0 mov eax, 0x5AFC64
	{ ctx.eax = (uint32_t)(0x5AFC64u); }
	// 0045A2B5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A2B0, __imp__sub_0045A2B0)

X86_FUNC(__imp__sub_0045A2C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A2C0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A2C0:
	// 0045A2C0 mov eax, 0x5AFCB4
	{ ctx.eax = (uint32_t)(0x5AFCB4u); }
	// 0045A2C5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A2C0, __imp__sub_0045A2C0)

X86_FUNC(__imp__sub_0045A2D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A2D0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A2D0:
	// 0045A2D0 mov eax, 0x5AFD04
	{ ctx.eax = (uint32_t)(0x5AFD04u); }
	// 0045A2D5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A2D0, __imp__sub_0045A2D0)

X86_FUNC(__imp__sub_0045A2E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A2E0;
loc_00410B60:
	// 00410B60 mov dword ptr [ecx], 0x59E8C4
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x59E8C4u); }
	// 00410B66 jmp 0x004128E0
	{ X86_SAVE_FLAGS(); sub_004128E0(ctx, base); return; }
loc_0045A2E0:
	// 0045A2E0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A2E3 add ecx, 0x04
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A2E6 jmp 0x00410B60
	X86_BARRIER();
	goto loc_00410B60;
}
X86_WEAK_FUNC(sub_0045A2E0, __imp__sub_0045A2E0)

X86_FUNC(__imp__sub_0045A2EB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A2EB;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A2EB:
	// 0045A2EB mov eax, 0x5AFD28
	{ ctx.eax = (uint32_t)(0x5AFD28u); }
	// 0045A2F0 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A2EB, __imp__sub_0045A2EB)

X86_FUNC(__imp__sub_0045A300) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A300 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A303 jmp 0x00410F00
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00410F00(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045A300, __imp__sub_0045A300)

X86_FUNC(__imp__sub_0045A308) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A308;
loc_00411BA0:
	// 00411BA0 mov dword ptr [ecx], 0x59E904
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x59E904u); }
	// 00411BA6 jmp 0x004128E0
	{ X86_SAVE_FLAGS(); sub_004128E0(ctx, base); return; }
loc_0045A308:
	// 0045A308 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A30B add ecx, 0x20
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A30E jmp 0x00411BA0
	X86_BARRIER();
	goto loc_00411BA0;
}
X86_WEAK_FUNC(sub_0045A308, __imp__sub_0045A308)

X86_FUNC(__imp__sub_0045A313) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A313;
loc_00411BA0:
	// 00411BA0 mov dword ptr [ecx], 0x59E904
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x59E904u); }
	// 00411BA6 jmp 0x004128E0
	{ X86_SAVE_FLAGS(); sub_004128E0(ctx, base); return; }
loc_0045A313:
	// 0045A313 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A316 add ecx, 0x30
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x30u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A319 jmp 0x00411BA0
	X86_BARRIER();
	goto loc_00411BA0;
}
X86_WEAK_FUNC(sub_0045A313, __imp__sub_0045A313)

X86_FUNC(__imp__sub_0045A31E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A31E;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A31E:
	// 0045A31E mov eax, 0x5AFD5C
	{ ctx.eax = (uint32_t)(0x5AFD5Cu); }
	// 0045A323 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A31E, __imp__sub_0045A31E)

X86_FUNC(__imp__sub_0045A330) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A330 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A333 jmp 0x00410F00
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00410F00(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045A330, __imp__sub_0045A330)

X86_FUNC(__imp__sub_0045A338) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A338;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A338:
	// 0045A338 mov eax, 0x5AFD80
	{ ctx.eax = (uint32_t)(0x5AFD80u); }
	// 0045A33D jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A338, __imp__sub_0045A338)

X86_FUNC(__imp__sub_0045A350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A350 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A353 jmp 0x00410F00
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00410F00(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045A350, __imp__sub_0045A350)

X86_FUNC(__imp__sub_0045A358) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A358;
loc_004125F0:
	// 004125F0 mov dword ptr [ecx], 0x59E958
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x59E958u); }
	// 004125F6 jmp 0x004128E0
	{ X86_SAVE_FLAGS(); sub_004128E0(ctx, base); return; }
loc_0045A358:
	// 0045A358 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A35B add ecx, 0x20
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A35E jmp 0x004125F0
	X86_BARRIER();
	goto loc_004125F0;
}
X86_WEAK_FUNC(sub_0045A358, __imp__sub_0045A358)

X86_FUNC(__imp__sub_0045A363) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A363;
loc_004125F0:
	// 004125F0 mov dword ptr [ecx], 0x59E958
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x59E958u); }
	// 004125F6 jmp 0x004128E0
	{ X86_SAVE_FLAGS(); sub_004128E0(ctx, base); return; }
loc_0045A363:
	// 0045A363 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A366 add ecx, 0x30
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x30u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A369 jmp 0x004125F0
	X86_BARRIER();
	goto loc_004125F0;
}
X86_WEAK_FUNC(sub_0045A363, __imp__sub_0045A363)

X86_FUNC(__imp__sub_0045A36E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A36E;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A36E:
	// 0045A36E mov eax, 0x5AFDB4
	{ ctx.eax = (uint32_t)(0x5AFDB4u); }
	// 0045A373 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A36E, __imp__sub_0045A36E)

X86_FUNC(__imp__sub_0045A380) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A380 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A383 jmp 0x00410F00
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00410F00(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045A380, __imp__sub_0045A380)

X86_FUNC(__imp__sub_0045A388) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A388;
loc_004129C0:
	// 004129C0 mov dword ptr [ecx], 0x59E994
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x59E994u); }
	// 004129C6 jmp 0x004128E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_004128E0(ctx, base); return; }
loc_0045A388:
	// 0045A388 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A38B add ecx, 0x20
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A38E jmp 0x004129C0
	X86_BARRIER();
	goto loc_004129C0;
}
X86_WEAK_FUNC(sub_0045A388, __imp__sub_0045A388)

X86_FUNC(__imp__sub_0045A393) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A393;
loc_004129C0:
	// 004129C0 mov dword ptr [ecx], 0x59E994
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x59E994u); }
	// 004129C6 jmp 0x004128E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_004128E0(ctx, base); return; }
loc_0045A393:
	// 0045A393 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A396 add ecx, 0x30
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x30u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A399 jmp 0x004129C0
	X86_BARRIER();
	goto loc_004129C0;
}
X86_WEAK_FUNC(sub_0045A393, __imp__sub_0045A393)

X86_FUNC(__imp__sub_0045A39E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A39E;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A39E:
	// 0045A39E mov eax, 0x5AFDE8
	{ ctx.eax = (uint32_t)(0x5AFDE8u); }
	// 0045A3A3 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A39E, __imp__sub_0045A39E)

X86_FUNC(__imp__sub_0045A3B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A3B0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A3B3 jmp 0x00410F00
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00410F00(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045A3B0, __imp__sub_0045A3B0)

X86_FUNC(__imp__sub_0045A3B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A3B8;
loc_00413980:
	// 00413980 mov dword ptr [ecx], 0x59E9DC
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x59E9DCu); }
	// 00413986 jmp 0x004128E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_004128E0(ctx, base); return; }
loc_0045A3B8:
	// 0045A3B8 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A3BB add ecx, 0x20
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A3BE jmp 0x00413980
	X86_BARRIER();
	goto loc_00413980;
}
X86_WEAK_FUNC(sub_0045A3B8, __imp__sub_0045A3B8)

X86_FUNC(__imp__sub_0045A3C3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A3C3;
loc_00413980:
	// 00413980 mov dword ptr [ecx], 0x59E9DC
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x59E9DCu); }
	// 00413986 jmp 0x004128E0
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_004128E0(ctx, base); return; }
loc_0045A3C3:
	// 0045A3C3 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A3C6 add ecx, 0x30
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x30u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A3C9 jmp 0x00413980
	X86_BARRIER();
	goto loc_00413980;
}
X86_WEAK_FUNC(sub_0045A3C3, __imp__sub_0045A3C3)

X86_FUNC(__imp__sub_0045A3CE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A3CE;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A3CE:
	// 0045A3CE mov eax, 0x5AFE1C
	{ ctx.eax = (uint32_t)(0x5AFE1Cu); }
	// 0045A3D3 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A3CE, __imp__sub_0045A3CE)

X86_FUNC(__imp__sub_0045A3E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A3E0 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A3E3 jmp 0x00413E70
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00413E70(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045A3E0, __imp__sub_0045A3E0)

X86_FUNC(__imp__sub_0045A3E8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A3E8 push 0x343760
	{ uint32_t v = (uint32_t)(0x343760u); X86_PUSH32(v); }
	// 0045A3ED push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0045A3EF push 0x24
	{ uint32_t v = (uint32_t)(0x24u); X86_PUSH32(v); }
	// 0045A3F1 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0045A3F4 add eax, 0xAC
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xACu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A3F9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0045A3FA call 0x00369225
	X86_PUSH32(0x45A3FFu); sub_00369225(ctx, base);
	// 0045A3FF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A3E8, __imp__sub_0045A3E8)

X86_FUNC(__imp__sub_0045A400) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A400 push 0x413490
	{ uint32_t v = (uint32_t)(0x413490u); X86_PUSH32(v); }
	// 0045A405 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0045A407 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 0045A409 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0045A40C add eax, 0x150
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x150u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A411 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0045A412 call 0x00369225
	X86_PUSH32(0x45A417u); sub_00369225(ctx, base);
	// 0045A417 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A400, __imp__sub_0045A400)

X86_FUNC(__imp__sub_0045A418) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A418 push 0x413490
	{ uint32_t v = (uint32_t)(0x413490u); X86_PUSH32(v); }
	// 0045A41D push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0045A41F push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 0045A421 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0045A424 add eax, 0x190
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x190u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A429 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0045A42A call 0x00369225
	X86_PUSH32(0x45A42Fu); sub_00369225(ctx, base);
	// 0045A42F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A418, __imp__sub_0045A418)

X86_FUNC(__imp__sub_0045A430) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A430;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A430:
	// 0045A430 mov eax, 0x5AFE58
	{ ctx.eax = (uint32_t)(0x5AFE58u); }
	// 0045A435 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A430, __imp__sub_0045A430)

X86_FUNC(__imp__sub_0045A440) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A440 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0045A443 jmp 0x00413E70
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_00413E70(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045A440, __imp__sub_0045A440)

X86_FUNC(__imp__sub_0045A448) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A448 push 0x343760
	{ uint32_t v = (uint32_t)(0x343760u); X86_PUSH32(v); }
	// 0045A44D push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0045A44F push 0x24
	{ uint32_t v = (uint32_t)(0x24u); X86_PUSH32(v); }
	// 0045A451 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0045A454 add eax, 0xAC
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xACu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A459 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0045A45A call 0x00369225
	X86_PUSH32(0x45A45Fu); sub_00369225(ctx, base);
	// 0045A45F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A448, __imp__sub_0045A448)

X86_FUNC(__imp__sub_0045A460) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A460 push 0x413490
	{ uint32_t v = (uint32_t)(0x413490u); X86_PUSH32(v); }
	// 0045A465 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0045A467 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 0045A469 mov eax, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0045A46C add eax, 0x150
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x150u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A471 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0045A472 call 0x00369225
	X86_PUSH32(0x45A477u); sub_00369225(ctx, base);
	// 0045A477 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A460, __imp__sub_0045A460)

X86_FUNC(__imp__sub_0045A478) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A478;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A478:
	// 0045A478 mov eax, 0x5AFE8C
	{ ctx.eax = (uint32_t)(0x5AFE8Cu); }
	// 0045A47D jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A478, __imp__sub_0045A478)

X86_FUNC(__imp__sub_0045A482) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A482;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A482:
	// 0045A482 mov eax, 0x5AFEDC
	{ ctx.eax = (uint32_t)(0x5AFEDCu); }
	// 0045A487 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A482, __imp__sub_0045A482)

X86_FUNC(__imp__sub_0045A48C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A48C;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A48C:
	// 0045A48C mov eax, 0x5AFF60
	{ ctx.eax = (uint32_t)(0x5AFF60u); }
	// 0045A491 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A48C, __imp__sub_0045A48C)

X86_FUNC(__imp__sub_0045A496) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A496;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A496:
	// 0045A496 mov eax, 0x5AFFB0
	{ ctx.eax = (uint32_t)(0x5AFFB0u); }
	// 0045A49B jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A496, __imp__sub_0045A496)

X86_FUNC(__imp__sub_0045A4A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A4A0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A4A0:
	// 0045A4A0 mov eax, 0x5B0000
	{ ctx.eax = (uint32_t)(0x5B0000u); }
	// 0045A4A5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A4A0, __imp__sub_0045A4A0)

X86_FUNC(__imp__sub_0045A4AA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A4AA;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A4AA:
	// 0045A4AA mov eax, 0x5B0050
	{ ctx.eax = (uint32_t)(0x5B0050u); }
	// 0045A4AF jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A4AA, __imp__sub_0045A4AA)

X86_FUNC(__imp__sub_0045A4B4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A4B4;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A4B4:
	// 0045A4B4 mov eax, 0x5B00A0
	{ ctx.eax = (uint32_t)(0x5B00A0u); }
	// 0045A4B9 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A4B4, __imp__sub_0045A4B4)

X86_FUNC(__imp__sub_0045A4BE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A4BE;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A4BE:
	// 0045A4BE mov eax, 0x5B00F0
	{ ctx.eax = (uint32_t)(0x5B00F0u); }
	// 0045A4C3 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A4BE, __imp__sub_0045A4BE)

X86_FUNC(__imp__sub_0045A4C8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A4C8;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A4C8:
	// 0045A4C8 mov eax, 0x5B0140
	{ ctx.eax = (uint32_t)(0x5B0140u); }
	// 0045A4CD jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A4C8, __imp__sub_0045A4C8)

X86_FUNC(__imp__sub_0045A4D2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A4D2;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A4D2:
	// 0045A4D2 mov eax, 0x5B0190
	{ ctx.eax = (uint32_t)(0x5B0190u); }
	// 0045A4D7 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A4D2, __imp__sub_0045A4D2)

X86_FUNC(__imp__sub_0045A4DC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A4DC;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A4DC:
	// 0045A4DC mov eax, 0x5B01E0
	{ ctx.eax = (uint32_t)(0x5B01E0u); }
	// 0045A4E1 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A4DC, __imp__sub_0045A4DC)

X86_FUNC(__imp__sub_0045A4E6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A4E6;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A4E6:
	// 0045A4E6 mov eax, 0x5B0230
	{ ctx.eax = (uint32_t)(0x5B0230u); }
	// 0045A4EB jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A4E6, __imp__sub_0045A4E6)

X86_FUNC(__imp__sub_0045A4F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A4F0;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A4F0:
	// 0045A4F0 mov eax, 0x5B0280
	{ ctx.eax = (uint32_t)(0x5B0280u); }
	// 0045A4F5 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A4F0, __imp__sub_0045A4F0)

X86_FUNC(__imp__sub_0045A4FA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A4FA;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A4FA:
	// 0045A4FA mov eax, 0x5B02D0
	{ ctx.eax = (uint32_t)(0x5B02D0u); }
	// 0045A4FF jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A4FA, __imp__sub_0045A4FA)

X86_FUNC(__imp__sub_0045A504) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A504;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A504:
	// 0045A504 mov eax, 0x5B0320
	{ ctx.eax = (uint32_t)(0x5B0320u); }
	// 0045A509 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A504, __imp__sub_0045A504)

X86_FUNC(__imp__sub_0045A50E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A50E;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A50E:
	// 0045A50E mov eax, 0x5B0370
	{ ctx.eax = (uint32_t)(0x5B0370u); }
	// 0045A513 jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A50E, __imp__sub_0045A50E)

X86_FUNC(__imp__sub_0045A518) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A518;
loc_00365CFA:
	// 00365CFA push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 00365CFB mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 00365CFD sub esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D00 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00365D01 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00365D02 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00365D03 cld
	ctx.df = 0;
	// 00365D04 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D07 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D09 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00365D0C push [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D0F push [ebp+0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D12 push [ebp+0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D15 push [ebp+0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D18 push [ebp+0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00365D1B call 0x0036AB0E
	X86_PUSH32(0x365D20u); sub_0036AB0E(ctx, base);
	// 00365D20 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00365D23 mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00365D26 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00365D27 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00365D28 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00365D29 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00365D2C mov esp, ebp
	{ ctx.esp = (uint32_t)(ctx.ebp); }
	// 00365D2E pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00365D2F ret
	ctx.esp += 4; return;
loc_0045A518:
	// 0045A518 mov eax, 0x5B03C0
	{ ctx.eax = (uint32_t)(0x5B03C0u); }
	// 0045A51D jmp 0x00365CFA
	X86_BARRIER();
	goto loc_00365CFA;
}
X86_WEAK_FUNC(sub_0045A518, __imp__sub_0045A518)

X86_FUNC(__imp__sub_0045A530) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A530 push 0x464640
	{ uint32_t v = (uint32_t)(0x464640u); X86_PUSH32(v); }
	// 0045A535 call 0x00366943
	X86_PUSH32(0x45A53Au); sub_00366943(ctx, base);
	// 0045A53A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A53B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A530, __imp__sub_0045A530)

X86_FUNC(__imp__sub_0045A53C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A53C push 0x464672
	{ uint32_t v = (uint32_t)(0x464672u); X86_PUSH32(v); }
	// 0045A541 call 0x00366943
	X86_PUSH32(0x45A546u); sub_00366943(ctx, base);
	// 0045A546 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A547 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A53C, __imp__sub_0045A53C)

X86_FUNC(__imp__sub_0045A548) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A548 push 0x46467F
	{ uint32_t v = (uint32_t)(0x46467Fu); X86_PUSH32(v); }
	// 0045A54D call 0x00366943
	X86_PUSH32(0x45A552u); sub_00366943(ctx, base);
	// 0045A552 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A553 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A548, __imp__sub_0045A548)

X86_FUNC(__imp__sub_0045A554) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A554 push 0x46468C
	{ uint32_t v = (uint32_t)(0x46468Cu); X86_PUSH32(v); }
	// 0045A559 call 0x00366943
	X86_PUSH32(0x45A55Eu); sub_00366943(ctx, base);
	// 0045A55E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A55F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A554, __imp__sub_0045A554)

X86_FUNC(__imp__sub_0045A560) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A560 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0045A561 mov esi, 0x6B2240
	{ ctx.esi = (uint32_t)(0x6B2240u); }
	// 0045A566 call 0x000307E2
	X86_PUSH32(0x45A56Bu); sub_000307E2(ctx, base);
	// 0045A56B xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A56D xor esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a ^ b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A56F mov [0x006B223C], eax
	{ uint32_t ea = (uint32_t)(0x6B223Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A574 mov [0x006B224C], eax
	{ uint32_t ea = (uint32_t)(0x6B224Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A579 mov [0x006B2250], eax
	{ uint32_t ea = (uint32_t)(0x6B2250u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A57E mov [0x006B2254], eax
	{ uint32_t ea = (uint32_t)(0x6B2254u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A583 mov [0x006B2258], eax
	{ uint32_t ea = (uint32_t)(0x6B2258u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A588 mov [0x006B225C], eax
	{ uint32_t ea = (uint32_t)(0x6B225Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A58D mov [0x006B2238], eax
	{ uint32_t ea = (uint32_t)(0x6B2238u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A592 mov [0x006B21DC], eax
	{ uint32_t ea = (uint32_t)(0x6B21DCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A597 mov [0x006B2290], eax
	{ uint32_t ea = (uint32_t)(0x6B2290u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A59C mov [0x006B2288], eax
	{ uint32_t ea = (uint32_t)(0x6B2288u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A5A1 mov [0x006B2294], eax
	{ uint32_t ea = (uint32_t)(0x6B2294u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A5A6 mov [0x006B2298], eax
	{ uint32_t ea = (uint32_t)(0x6B2298u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045A5AB inc esi
	{ uint32_t a = (uint32_t)(ctx.esi);  uint32_t r = (uint32_t)(a + 1); ctx.esi = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0045A5AC mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0045A5AE mov ecx, 0x6B2238
	{ ctx.ecx = (uint32_t)(0x6B2238u); }
	// 0045A5B3 mov dword ptr [0x006B229C], 0x10000
	{ uint32_t ea = (uint32_t)(0x6B229Cu); X86_MEM32(ea) = (uint32_t)(0x10000u); }
	// 0045A5BD call 0x0001FE29
	X86_PUSH32(0x45A5C2u); sub_0001FE29(ctx, base);
	// 0045A5C2 push 0x4646BE
	{ uint32_t v = (uint32_t)(0x4646BEu); X86_PUSH32(v); }
	// 0045A5C7 mov [0x006B22C8], esi
	{ uint32_t ea = (uint32_t)(0x6B22C8u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 0045A5CD mov dword ptr [0x006B2260], 0x20F71
	{ uint32_t ea = (uint32_t)(0x6B2260u); X86_MEM32(ea) = (uint32_t)(0x20F71u); }
	// 0045A5D7 mov dword ptr [0x006B2264], 0x20FC0
	{ uint32_t ea = (uint32_t)(0x6B2264u); X86_MEM32(ea) = (uint32_t)(0x20FC0u); }
	// 0045A5E1 mov dword ptr [0x006B2268], 0x21034
	{ uint32_t ea = (uint32_t)(0x6B2268u); X86_MEM32(ea) = (uint32_t)(0x21034u); }
	// 0045A5EB mov dword ptr [0x006B226C], 0x210BA
	{ uint32_t ea = (uint32_t)(0x6B226Cu); X86_MEM32(ea) = (uint32_t)(0x210BAu); }
	// 0045A5F5 mov dword ptr [0x006B2270], 0x2110B
	{ uint32_t ea = (uint32_t)(0x6B2270u); X86_MEM32(ea) = (uint32_t)(0x2110Bu); }
	// 0045A5FF mov dword ptr [0x006B2274], 0x21167
	{ uint32_t ea = (uint32_t)(0x6B2274u); X86_MEM32(ea) = (uint32_t)(0x21167u); }
	// 0045A609 mov dword ptr [0x006B2278], 0x211B4
	{ uint32_t ea = (uint32_t)(0x6B2278u); X86_MEM32(ea) = (uint32_t)(0x211B4u); }
	// 0045A613 mov dword ptr [0x006B227C], 0x211EC
	{ uint32_t ea = (uint32_t)(0x6B227Cu); X86_MEM32(ea) = (uint32_t)(0x211ECu); }
	// 0045A61D mov dword ptr [0x006B2280], 0x2122B
	{ uint32_t ea = (uint32_t)(0x6B2280u); X86_MEM32(ea) = (uint32_t)(0x2122Bu); }
	// 0045A627 call 0x00366943
	X86_PUSH32(0x45A62Cu); sub_00366943(ctx, base);
	// 0045A62C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A62D pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0045A62E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A560, __imp__sub_0045A560)

X86_FUNC(__imp__sub_0045A62F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A62F push 0x4646D5
	{ uint32_t v = (uint32_t)(0x4646D5u); X86_PUSH32(v); }
	// 0045A634 call 0x00366943
	X86_PUSH32(0x45A639u); sub_00366943(ctx, base);
	// 0045A639 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A63A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A62F, __imp__sub_0045A62F)

X86_FUNC(__imp__sub_0045A63B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A63B push 0x464707
	{ uint32_t v = (uint32_t)(0x464707u); X86_PUSH32(v); }
	// 0045A640 call 0x00366943
	X86_PUSH32(0x45A645u); sub_00366943(ctx, base);
	// 0045A645 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A646 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A63B, __imp__sub_0045A63B)

X86_FUNC(__imp__sub_0045A647) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A647 push 0x6B22EC
	{ uint32_t v = (uint32_t)(0x6B22ECu); X86_PUSH32(v); }
	// 0045A64C call [0x004F5164]
	X86_PUSH32(0x45A652u); x86_kernel(ctx, base, 291);
	// 0045A652 push 0x464739
	{ uint32_t v = (uint32_t)(0x464739u); X86_PUSH32(v); }
	// 0045A657 call 0x00366943
	X86_PUSH32(0x45A65Cu); sub_00366943(ctx, base);
	// 0045A65C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A65D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A647, __imp__sub_0045A647)

X86_FUNC(__imp__sub_0045A65E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A65E push 0x46473A
	{ uint32_t v = (uint32_t)(0x46473Au); X86_PUSH32(v); }
	// 0045A663 call 0x00366943
	X86_PUSH32(0x45A668u); sub_00366943(ctx, base);
	// 0045A668 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A669 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A65E, __imp__sub_0045A65E)

X86_FUNC(__imp__sub_0045A66A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A66A push 0x464747
	{ uint32_t v = (uint32_t)(0x464747u); X86_PUSH32(v); }
	// 0045A66F call 0x00366943
	X86_PUSH32(0x45A674u); sub_00366943(ctx, base);
	// 0045A674 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A675 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A66A, __imp__sub_0045A66A)

X86_FUNC(__imp__sub_0045A676) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A676 push 0x464754
	{ uint32_t v = (uint32_t)(0x464754u); X86_PUSH32(v); }
	// 0045A67B call 0x00366943
	X86_PUSH32(0x45A680u); sub_00366943(ctx, base);
	// 0045A680 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A681 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A676, __imp__sub_0045A676)

X86_FUNC(__imp__sub_0045A682) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A682 push 0x464761
	{ uint32_t v = (uint32_t)(0x464761u); X86_PUSH32(v); }
	// 0045A687 call 0x00366943
	X86_PUSH32(0x45A68Cu); sub_00366943(ctx, base);
	// 0045A68C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A68D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A682, __imp__sub_0045A682)

X86_FUNC(__imp__sub_0045A68E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A68E push 0x46476E
	{ uint32_t v = (uint32_t)(0x46476Eu); X86_PUSH32(v); }
	// 0045A693 call 0x00366943
	X86_PUSH32(0x45A698u); sub_00366943(ctx, base);
	// 0045A698 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A699 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A68E, __imp__sub_0045A68E)

X86_FUNC(__imp__sub_0045A69A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A69A push 0x46477B
	{ uint32_t v = (uint32_t)(0x46477Bu); X86_PUSH32(v); }
	// 0045A69F call 0x00366943
	X86_PUSH32(0x45A6A4u); sub_00366943(ctx, base);
	// 0045A6A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A6A5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A69A, __imp__sub_0045A69A)

X86_FUNC(__imp__sub_0045A6A6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A6A6;
loc_0003F350:
	// 0003F350 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0003F351 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 0003F353 lea eax, [esi+0x04]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x4u));
	// 0003F356 push 0x4F64A0
	{ uint32_t v = (uint32_t)(0x4F64A0u); X86_PUSH32(v); }
	// 0003F35B push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0003F35C mov dword ptr [esi], 0x4F6420
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEM32(ea) = (uint32_t)(0x4F6420u); }
	// 0003F362 call 0x00067886
	X86_PUSH32(0x3F367u); sub_00067886(ctx, base);
	// 0003F367 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0003F368 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0003F369 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 0003F36B pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0003F36C ret
	ctx.esp += 4; return;
loc_0045A6A6:
	// 0045A6A6 mov ecx, 0x5E6E20
	{ ctx.ecx = (uint32_t)(0x5E6E20u); }
	// 0045A6AB jmp 0x0003F350
	X86_BARRIER();
	goto loc_0003F350;
}
X86_WEAK_FUNC(sub_0045A6A6, __imp__sub_0045A6A6)

X86_FUNC(__imp__sub_0045A6B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A6B0;
loc_0004449C:
	// 0004449C push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 0004449D mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 0004449F call 0x0003EB58
	X86_PUSH32(0x444A4u); sub_0003EB58(ctx, base);
	// 000444A4 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 000444A6 call 0x00043582
	X86_PUSH32(0x444ABu); sub_00043582(ctx, base);
	// 000444AB call 0x000707D7
	X86_PUSH32(0x444B0u); sub_000707D7(ctx, base);
	// 000444B0 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 000444B2 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 000444B3 ret
	ctx.esp += 4; return;
loc_0045A6B0:
	// 0045A6B0 mov ecx, 0x5E6E1C
	{ ctx.ecx = (uint32_t)(0x5E6E1Cu); }
	// 0045A6B5 jmp 0x0004449C
	X86_BARRIER();
	goto loc_0004449C;
}
X86_WEAK_FUNC(sub_0045A6B0, __imp__sub_0045A6B0)

X86_FUNC(__imp__sub_0045A6BA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A6BA push 0x464785
	{ uint32_t v = (uint32_t)(0x464785u); X86_PUSH32(v); }
	// 0045A6BF call 0x00366943
	X86_PUSH32(0x45A6C4u); sub_00366943(ctx, base);
	// 0045A6C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A6C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A6BA, __imp__sub_0045A6BA)

X86_FUNC(__imp__sub_0045A6C6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045A6C6;
loc_000785D9:
	// 000785D9 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 000785DA mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 000785DC sub esp, 0x28
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x28u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000785DF movss xmm0, dword ptr [0x005054E4]
	{ uint32_t ea = (uint32_t)(0x5054E4u); ctx.xmm[0].u[0] = X86_MEM32(ea); ctx.xmm[0].u[1] = ctx.xmm[0].u[2] = ctx.xmm[0].u[3] = 0; }
	// 000785E7 movss xmm1, dword ptr [0x005A6F20]
	{ uint32_t ea = (uint32_t)(0x5A6F20u); ctx.xmm[1].u[0] = X86_MEM32(ea); ctx.xmm[1].u[1] = ctx.xmm[1].u[2] = ctx.xmm[1].u[3] = 0; }
	// 000785EF push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 000785F0 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 000785F1 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 000785F2 mov ebx, ecx
	{ ctx.ebx = (uint32_t)(ctx.ecx); }
	// 000785F4 movss [ebx], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebx); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 000785F8 movss [ebx+0x04], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x4u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 000785FD movss [ebx+0x08], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x8u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00078602 movss xmm0, dword ptr [0x005054E0]
	{ uint32_t ea = (uint32_t)(0x5054E0u); ctx.xmm[0].u[0] = X86_MEM32(ea); ctx.xmm[0].u[1] = ctx.xmm[0].u[2] = ctx.xmm[0].u[3] = 0; }
	// 0007860A movss [ebx+0x0C], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 0007860F movss [ebx+0x10], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00078614 movss [ebx+0x14], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00078619 xorps xmm0, xmm0
	{ X86Xmm v = ctx.xmm[0]; for (int i = 0; i < 4; i++) { uint32_t a = ctx.xmm[0].u[i], b = v.u[i]; ctx.xmm[0].u[i] = a ^ b; } }
	// 0007861C lea eax, [ebx+0x18]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebx + 0x18u));
	// 0007861F mov ecx, 0x64D6B8
	{ ctx.ecx = (uint32_t)(0x64D6B8u); }
	// 00078624 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 00078626 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 00078628 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 00078629 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 0007862A movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 0007862B movss [ebp-0x10], xmm1
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); X86_MEM32(ea) = ctx.xmm[1].u[0]; }
	// 00078630 movss [ebp-0x0C], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00078635 movss [ebp-0x08], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 0007863A lea edi, [eax+0x0C]
	ctx.edi = (uint32_t)((uint32_t)(ctx.eax + 0xCu));
	// 0007863D lea esi, [ebp-0x10]
	ctx.esi = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 00078640 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 00078641 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 00078642 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 00078643 movss [ebp-0x1C], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00078648 movss [ebp-0x18], xmm1
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); X86_MEM32(ea) = ctx.xmm[1].u[0]; }
	// 0007864D movss [ebp-0x14], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00078652 lea edi, [eax+0x18]
	ctx.edi = (uint32_t)((uint32_t)(ctx.eax + 0x18u));
	// 00078655 lea esi, [ebp-0x1C]
	ctx.esi = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE4u));
	// 00078658 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 00078659 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 0007865A movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 0007865B movss [ebp-0x28], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00078660 movss [ebp-0x24], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00078665 movss [ebp-0x20], xmm1
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE0u); X86_MEM32(ea) = ctx.xmm[1].u[0]; }
	// 0007866A lea edi, [eax+0x24]
	ctx.edi = (uint32_t)((uint32_t)(ctx.eax + 0x24u));
	// 0007866D lea esi, [ebp-0x28]
	ctx.esi = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD8u));
	// 00078670 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 00078671 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 00078672 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 00078673 movss [ebp-0x28], xmm1
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM32(ea) = ctx.xmm[1].u[0]; }
	// 00078678 movss [ebp-0x24], xmm1
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); X86_MEM32(ea) = ctx.xmm[1].u[0]; }
	// 0007867D movss [ebp-0x20], xmm1
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE0u); X86_MEM32(ea) = ctx.xmm[1].u[0]; }
	// 00078682 lea eax, [ebx+0x48]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebx + 0x48u));
	// 00078685 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 00078687 lea esi, [ebp-0x28]
	ctx.esi = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD8u));
	// 0007868A movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 0007868B movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 0007868C movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 0007868D movss [eax+0x0C], xmm0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00078692 mov byte ptr [eax+0x10], 0x05
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM8(ea) = (uint8_t)(0x5u); }
	// 00078696 movss xmm2, dword ptr [0x005A6ED4]
	{ uint32_t ea = (uint32_t)(0x5A6ED4u); ctx.xmm[2].u[0] = X86_MEM32(ea); ctx.xmm[2].u[1] = ctx.xmm[2].u[2] = ctx.xmm[2].u[3] = 0; }
	// 0007869E lea eax, [ebx+0x5C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebx + 0x5Cu));
	// 000786A1 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 000786A3 mov edi, eax
	{ ctx.edi = (uint32_t)(ctx.eax); }
	// 000786A5 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786A6 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786A7 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786A8 movss [ebp-0x28], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 000786AD movss [ebp-0x24], xmm1
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); X86_MEM32(ea) = ctx.xmm[1].u[0]; }
	// 000786B2 movss [ebp-0x20], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE0u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 000786B7 lea edi, [eax+0x0C]
	ctx.edi = (uint32_t)((uint32_t)(ctx.eax + 0xCu));
	// 000786BA lea esi, [ebp-0x28]
	ctx.esi = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFD8u));
	// 000786BD movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786BE movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786BF movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786C0 movss [ebp-0x1C], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 000786C5 movss [ebp-0x18], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 000786CA movss [ebp-0x14], xmm2
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = ctx.xmm[2].u[0]; }
	// 000786CF lea edi, [eax+0x18]
	ctx.edi = (uint32_t)((uint32_t)(ctx.eax + 0x18u));
	// 000786D2 lea esi, [ebp-0x1C]
	ctx.esi = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFE4u));
	// 000786D5 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786D6 movss [ebp-0x10], xmm1
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); X86_MEM32(ea) = ctx.xmm[1].u[0]; }
	// 000786DB movss [ebp-0x0C], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 000786E0 movss [ebp-0x08], xmm0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 000786E5 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786E6 and dword ptr [ebp-0x04], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 000786EA movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786EB lea edi, [eax+0x24]
	ctx.edi = (uint32_t)((uint32_t)(ctx.eax + 0x24u));
	// 000786EE lea esi, [ebp-0x10]
	ctx.esi = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFFF0u));
	// 000786F1 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786F2 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786F3 movsd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = X86_MEM32(ctx.esi); ctx.esi += d; ctx.edi += d; }
	// 000786F4 lea esi, [ebx+0x8C]
	ctx.esi = (uint32_t)((uint32_t)(ctx.ebx + 0x8Cu));
loc_000786FA:
	// 000786FA fild [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); x87_push(ctx, (double)(int32_t)X86_MEM32(ea)); }
	// 000786FD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 000786FE push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 000786FF fadd st0, st0
	{ double s = X87_ST(0); double d = X87_ST(0); X87_ST(0) = (d + s); }
	// 00078701 fmul [0x005054D8]
	{ uint32_t ea = (uint32_t)(0x5054D8u); double s = X86_MEMF64(ea); double d = X87_ST(0); X87_ST(0) = (d * s); }
	// 00078707 fstp [esp]
	{ uint32_t ea = (uint32_t)(ctx.esp); X86_MEMF64(ea) = X87_ST(0); x87_pop(ctx); }
	// 0007870A call 0x000676C2
	X86_PUSH32(0x7870Fu); sub_000676C2(ctx, base);
	// 0007870F inc [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a + 1); X86_MEM32(ea) = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00078712 fstp [esi]
	{ uint32_t ea = (uint32_t)(ctx.esi); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 00078714 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00078715 add esi, 0x04
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00078718 cmp dword ptr [ebp-0x04], 0x4000
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x4000u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0007871F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00078720 jl 0x000786FA
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_000786FA; }
	// 00078722 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00078723 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00078724 mov eax, ebx
	{ ctx.eax = (uint32_t)(ctx.ebx); }
	// 00078726 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00078727 leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 00078728 ret
	ctx.esp += 4; return;
loc_0045A6C6:
	// 0045A6C6 mov ecx, 0x5ED160
	{ ctx.ecx = (uint32_t)(0x5ED160u); }
	// 0045A6CB jmp 0x000785D9
	X86_BARRIER();
	goto loc_000785D9;
}
X86_WEAK_FUNC(sub_0045A6C6, __imp__sub_0045A6C6)

X86_FUNC(__imp__sub_0045A6D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A6D0 push 0x464790
	{ uint32_t v = (uint32_t)(0x464790u); X86_PUSH32(v); }
	// 0045A6D5 call 0x00366943
	X86_PUSH32(0x45A6DAu); sub_00366943(ctx, base);
	// 0045A6DA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A6DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A6D0, __imp__sub_0045A6D0)

X86_FUNC(__imp__sub_0045A6DC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A6DC push 0x4647AD
	{ uint32_t v = (uint32_t)(0x4647ADu); X86_PUSH32(v); }
	// 0045A6E1 call 0x00366943
	X86_PUSH32(0x45A6E6u); sub_00366943(ctx, base);
	// 0045A6E6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A6E7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A6DC, __imp__sub_0045A6DC)

X86_FUNC(__imp__sub_0045A6E8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A6E8 push 0x4647B7
	{ uint32_t v = (uint32_t)(0x4647B7u); X86_PUSH32(v); }
	// 0045A6ED call 0x00366943
	X86_PUSH32(0x45A6F2u); sub_00366943(ctx, base);
	// 0045A6F2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A6F3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A6E8, __imp__sub_0045A6E8)

X86_FUNC(__imp__sub_0045A6F4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A6F4 push 0x4647DF
	{ uint32_t v = (uint32_t)(0x4647DFu); X86_PUSH32(v); }
	// 0045A6F9 call 0x00366943
	X86_PUSH32(0x45A6FEu); sub_00366943(ctx, base);
	// 0045A6FE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A6FF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A6F4, __imp__sub_0045A6F4)

X86_FUNC(__imp__sub_0045A700) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A700 push 0x4647C1
	{ uint32_t v = (uint32_t)(0x4647C1u); X86_PUSH32(v); }
	// 0045A705 call 0x00366943
	X86_PUSH32(0x45A70Au); sub_00366943(ctx, base);
	// 0045A70A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A70B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A700, __imp__sub_0045A700)

X86_FUNC(__imp__sub_0045A70C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A70C push 0x4647CB
	{ uint32_t v = (uint32_t)(0x4647CBu); X86_PUSH32(v); }
	// 0045A711 call 0x00366943
	X86_PUSH32(0x45A716u); sub_00366943(ctx, base);
	// 0045A716 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A717 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A70C, __imp__sub_0045A70C)

X86_FUNC(__imp__sub_0045A718) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A718 push 0x4647D5
	{ uint32_t v = (uint32_t)(0x4647D5u); X86_PUSH32(v); }
	// 0045A71D call 0x00366943
	X86_PUSH32(0x45A722u); sub_00366943(ctx, base);
	// 0045A722 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A723 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A718, __imp__sub_0045A718)

X86_FUNC(__imp__sub_0045A724) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A724 push 0x4647E9
	{ uint32_t v = (uint32_t)(0x4647E9u); X86_PUSH32(v); }
	// 0045A729 call 0x00366943
	X86_PUSH32(0x45A72Eu); sub_00366943(ctx, base);
	// 0045A72E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A72F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A724, __imp__sub_0045A724)

X86_FUNC(__imp__sub_0045A730) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A730 push 0x464806
	{ uint32_t v = (uint32_t)(0x464806u); X86_PUSH32(v); }
	// 0045A735 call 0x00366943
	X86_PUSH32(0x45A73Au); sub_00366943(ctx, base);
	// 0045A73A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A73B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A730, __imp__sub_0045A730)

X86_FUNC(__imp__sub_0045A73C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A73C push 0x5B5BB0
	{ uint32_t v = (uint32_t)(0x5B5BB0u); X86_PUSH32(v); }
	// 0045A741 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045A743 call 0x0006800A
	X86_PUSH32(0x45A748u); sub_0006800A(ctx, base);
	// 0045A748 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A749 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A74A mov [0x00601328], al
	{ uint32_t ea = (uint32_t)(0x601328u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A74F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A73C, __imp__sub_0045A73C)

X86_FUNC(__imp__sub_0045A750) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A750 push 0x5B5BB8
	{ uint32_t v = (uint32_t)(0x5B5BB8u); X86_PUSH32(v); }
	// 0045A755 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0045A757 call 0x0006800A
	X86_PUSH32(0x45A75Cu); sub_0006800A(ctx, base);
	// 0045A75C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A75D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A75E mov [0x00605A60], al
	{ uint32_t ea = (uint32_t)(0x605A60u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A763 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A750, __imp__sub_0045A750)

X86_FUNC(__imp__sub_0045A764) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A764 push 0x5B5BBC
	{ uint32_t v = (uint32_t)(0x5B5BBCu); X86_PUSH32(v); }
	// 0045A769 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0045A76B call 0x0006800A
	X86_PUSH32(0x45A770u); sub_0006800A(ctx, base);
	// 0045A770 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A771 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A772 mov [0x00605A61], al
	{ uint32_t ea = (uint32_t)(0x605A61u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A777 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A764, __imp__sub_0045A764)

X86_FUNC(__imp__sub_0045A778) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A778 push 0x5B5BC0
	{ uint32_t v = (uint32_t)(0x5B5BC0u); X86_PUSH32(v); }
	// 0045A77D push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 0045A77F call 0x0006800A
	X86_PUSH32(0x45A784u); sub_0006800A(ctx, base);
	// 0045A784 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A785 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A786 mov [0x00605A62], al
	{ uint32_t ea = (uint32_t)(0x605A62u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A78B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A778, __imp__sub_0045A778)

X86_FUNC(__imp__sub_0045A78C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A78C push 0x5B5BC4
	{ uint32_t v = (uint32_t)(0x5B5BC4u); X86_PUSH32(v); }
	// 0045A791 push 0x12
	{ uint32_t v = (uint32_t)(0x12u); X86_PUSH32(v); }
	// 0045A793 call 0x0006800A
	X86_PUSH32(0x45A798u); sub_0006800A(ctx, base);
	// 0045A798 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A799 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A79A mov [0x00605A63], al
	{ uint32_t ea = (uint32_t)(0x605A63u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A79F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A78C, __imp__sub_0045A78C)

X86_FUNC(__imp__sub_0045A7A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A7A0 push 0x5B5BC8
	{ uint32_t v = (uint32_t)(0x5B5BC8u); X86_PUSH32(v); }
	// 0045A7A5 push 0x1A
	{ uint32_t v = (uint32_t)(0x1Au); X86_PUSH32(v); }
	// 0045A7A7 call 0x0006800A
	X86_PUSH32(0x45A7ACu); sub_0006800A(ctx, base);
	// 0045A7AC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A7AD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A7AE mov [0x00605A64], al
	{ uint32_t ea = (uint32_t)(0x605A64u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A7B3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A7A0, __imp__sub_0045A7A0)

X86_FUNC(__imp__sub_0045A7B4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A7B4 push 0x5B5BCC
	{ uint32_t v = (uint32_t)(0x5B5BCCu); X86_PUSH32(v); }
	// 0045A7B9 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 0045A7BB call 0x0006800A
	X86_PUSH32(0x45A7C0u); sub_0006800A(ctx, base);
	// 0045A7C0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A7C1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A7C2 mov [0x00605A65], al
	{ uint32_t ea = (uint32_t)(0x605A65u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A7C7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A7B4, __imp__sub_0045A7B4)

X86_FUNC(__imp__sub_0045A7C8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A7C8 push 0x5B5BD0
	{ uint32_t v = (uint32_t)(0x5B5BD0u); X86_PUSH32(v); }
	// 0045A7CD push 0x37
	{ uint32_t v = (uint32_t)(0x37u); X86_PUSH32(v); }
	// 0045A7CF call 0x0006800A
	X86_PUSH32(0x45A7D4u); sub_0006800A(ctx, base);
	// 0045A7D4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A7D5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A7D6 mov [0x00605A66], al
	{ uint32_t ea = (uint32_t)(0x605A66u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A7DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A7C8, __imp__sub_0045A7C8)

X86_FUNC(__imp__sub_0045A7DC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A7DC push 0x5B5BD4
	{ uint32_t v = (uint32_t)(0x5B5BD4u); X86_PUSH32(v); }
	// 0045A7E1 push 0x40
	{ uint32_t v = (uint32_t)(0x40u); X86_PUSH32(v); }
	// 0045A7E3 call 0x0006800A
	X86_PUSH32(0x45A7E8u); sub_0006800A(ctx, base);
	// 0045A7E8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A7E9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A7EA mov [0x00605A67], al
	{ uint32_t ea = (uint32_t)(0x605A67u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A7EF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A7DC, __imp__sub_0045A7DC)

X86_FUNC(__imp__sub_0045A7F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A7F0 push 0x5B5BD8
	{ uint32_t v = (uint32_t)(0x5B5BD8u); X86_PUSH32(v); }
	// 0045A7F5 push 0x41
	{ uint32_t v = (uint32_t)(0x41u); X86_PUSH32(v); }
	// 0045A7F7 call 0x0006800A
	X86_PUSH32(0x45A7FCu); sub_0006800A(ctx, base);
	// 0045A7FC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A7FD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A7FE mov [0x00605A68], al
	{ uint32_t ea = (uint32_t)(0x605A68u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A803 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A7F0, __imp__sub_0045A7F0)

X86_FUNC(__imp__sub_0045A804) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A804 push 0x5B5BDC
	{ uint32_t v = (uint32_t)(0x5B5BDCu); X86_PUSH32(v); }
	// 0045A809 push 0x2D
	{ uint32_t v = (uint32_t)(0x2Du); X86_PUSH32(v); }
	// 0045A80B call 0x0006800A
	X86_PUSH32(0x45A810u); sub_0006800A(ctx, base);
	// 0045A810 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A811 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A812 mov [0x00605A69], al
	{ uint32_t ea = (uint32_t)(0x605A69u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A817 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A804, __imp__sub_0045A804)

X86_FUNC(__imp__sub_0045A818) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A818 push 0x5B5BE0
	{ uint32_t v = (uint32_t)(0x5B5BE0u); X86_PUSH32(v); }
	// 0045A81D push 0x36
	{ uint32_t v = (uint32_t)(0x36u); X86_PUSH32(v); }
	// 0045A81F call 0x0006800A
	X86_PUSH32(0x45A824u); sub_0006800A(ctx, base);
	// 0045A824 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A825 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A826 mov [0x00605A6A], al
	{ uint32_t ea = (uint32_t)(0x605A6Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A82B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A818, __imp__sub_0045A818)

X86_FUNC(__imp__sub_0045A82C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A82C push 0x5B5BE4
	{ uint32_t v = (uint32_t)(0x5B5BE4u); X86_PUSH32(v); }
	// 0045A831 push 0x0B
	{ uint32_t v = (uint32_t)(0xBu); X86_PUSH32(v); }
	// 0045A833 call 0x0006800A
	X86_PUSH32(0x45A838u); sub_0006800A(ctx, base);
	// 0045A838 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A839 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A83A mov [0x00605A6B], al
	{ uint32_t ea = (uint32_t)(0x605A6Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A83F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A82C, __imp__sub_0045A82C)

X86_FUNC(__imp__sub_0045A840) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A840 push 0x5B5BE8
	{ uint32_t v = (uint32_t)(0x5B5BE8u); X86_PUSH32(v); }
	// 0045A845 push 0x29
	{ uint32_t v = (uint32_t)(0x29u); X86_PUSH32(v); }
	// 0045A847 call 0x0006800A
	X86_PUSH32(0x45A84Cu); sub_0006800A(ctx, base);
	// 0045A84C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A84D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A84E mov [0x00605A6C], al
	{ uint32_t ea = (uint32_t)(0x605A6Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A853 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A840, __imp__sub_0045A840)

X86_FUNC(__imp__sub_0045A854) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A854 push 0x5B5BEC
	{ uint32_t v = (uint32_t)(0x5B5BECu); X86_PUSH32(v); }
	// 0045A859 push 0x16
	{ uint32_t v = (uint32_t)(0x16u); X86_PUSH32(v); }
	// 0045A85B call 0x0006800A
	X86_PUSH32(0x45A860u); sub_0006800A(ctx, base);
	// 0045A860 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A861 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A862 mov [0x00605A6D], al
	{ uint32_t ea = (uint32_t)(0x605A6Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A867 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A854, __imp__sub_0045A854)

X86_FUNC(__imp__sub_0045A868) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A868 push 0x5B5BF0
	{ uint32_t v = (uint32_t)(0x5B5BF0u); X86_PUSH32(v); }
	// 0045A86D push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 0045A86F call 0x0006800A
	X86_PUSH32(0x45A874u); sub_0006800A(ctx, base);
	// 0045A874 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A875 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A876 mov [0x00605A6E], al
	{ uint32_t ea = (uint32_t)(0x605A6Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A87B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A868, __imp__sub_0045A868)

X86_FUNC(__imp__sub_0045A87C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A87C push 0x5B5BF4
	{ uint32_t v = (uint32_t)(0x5B5BF4u); X86_PUSH32(v); }
	// 0045A881 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 0045A883 call 0x0006800A
	X86_PUSH32(0x45A888u); sub_0006800A(ctx, base);
	// 0045A888 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A889 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A88A mov [0x00605A6F], al
	{ uint32_t ea = (uint32_t)(0x605A6Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A88F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A87C, __imp__sub_0045A87C)

X86_FUNC(__imp__sub_0045A890) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A890 push 0x5B5BF8
	{ uint32_t v = (uint32_t)(0x5B5BF8u); X86_PUSH32(v); }
	// 0045A895 push 0x0A
	{ uint32_t v = (uint32_t)(0xAu); X86_PUSH32(v); }
	// 0045A897 call 0x0006800A
	X86_PUSH32(0x45A89Cu); sub_0006800A(ctx, base);
	// 0045A89C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A89D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A89E mov [0x00605A70], al
	{ uint32_t ea = (uint32_t)(0x605A70u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A8A3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A890, __imp__sub_0045A890)

X86_FUNC(__imp__sub_0045A8A4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A8A4 push 0x5B5BFC
	{ uint32_t v = (uint32_t)(0x5B5BFCu); X86_PUSH32(v); }
	// 0045A8A9 push 0x06
	{ uint32_t v = (uint32_t)(0x6u); X86_PUSH32(v); }
	// 0045A8AB call 0x0006800A
	X86_PUSH32(0x45A8B0u); sub_0006800A(ctx, base);
	// 0045A8B0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A8B1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A8B2 mov [0x00605A71], al
	{ uint32_t ea = (uint32_t)(0x605A71u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A8B7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A8A4, __imp__sub_0045A8A4)

X86_FUNC(__imp__sub_0045A8B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A8B8 push 0x5B5C00
	{ uint32_t v = (uint32_t)(0x5B5C00u); X86_PUSH32(v); }
	// 0045A8BD push 0x07
	{ uint32_t v = (uint32_t)(0x7u); X86_PUSH32(v); }
	// 0045A8BF call 0x0006800A
	X86_PUSH32(0x45A8C4u); sub_0006800A(ctx, base);
	// 0045A8C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A8C5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A8C6 mov [0x00605A72], al
	{ uint32_t ea = (uint32_t)(0x605A72u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A8CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A8B8, __imp__sub_0045A8B8)

X86_FUNC(__imp__sub_0045A8CC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A8CC push 0x5B5C04
	{ uint32_t v = (uint32_t)(0x5B5C04u); X86_PUSH32(v); }
	// 0045A8D1 push 0x09
	{ uint32_t v = (uint32_t)(0x9u); X86_PUSH32(v); }
	// 0045A8D3 call 0x0006800A
	X86_PUSH32(0x45A8D8u); sub_0006800A(ctx, base);
	// 0045A8D8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A8D9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A8DA mov [0x00605A73], al
	{ uint32_t ea = (uint32_t)(0x605A73u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A8DF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A8CC, __imp__sub_0045A8CC)

X86_FUNC(__imp__sub_0045A8E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A8E0 push 0x5B5C08
	{ uint32_t v = (uint32_t)(0x5B5C08u); X86_PUSH32(v); }
	// 0045A8E5 push 0x0D
	{ uint32_t v = (uint32_t)(0xDu); X86_PUSH32(v); }
	// 0045A8E7 call 0x0006800A
	X86_PUSH32(0x45A8ECu); sub_0006800A(ctx, base);
	// 0045A8EC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A8ED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A8EE mov [0x00605A74], al
	{ uint32_t ea = (uint32_t)(0x605A74u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A8F3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A8E0, __imp__sub_0045A8E0)

X86_FUNC(__imp__sub_0045A8F4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A8F4 push 0x5B5C0C
	{ uint32_t v = (uint32_t)(0x5B5C0Cu); X86_PUSH32(v); }
	// 0045A8F9 push 0x0F
	{ uint32_t v = (uint32_t)(0xFu); X86_PUSH32(v); }
	// 0045A8FB call 0x0006800A
	X86_PUSH32(0x45A900u); sub_0006800A(ctx, base);
	// 0045A900 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A901 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A902 mov [0x00605A75], al
	{ uint32_t ea = (uint32_t)(0x605A75u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A907 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A8F4, __imp__sub_0045A8F4)

X86_FUNC(__imp__sub_0045A908) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A908 push 0x5B5C10
	{ uint32_t v = (uint32_t)(0x5B5C10u); X86_PUSH32(v); }
	// 0045A90D push 0x14
	{ uint32_t v = (uint32_t)(0x14u); X86_PUSH32(v); }
	// 0045A90F call 0x0006800A
	X86_PUSH32(0x45A914u); sub_0006800A(ctx, base);
	// 0045A914 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A915 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A916 mov [0x00605A76], al
	{ uint32_t ea = (uint32_t)(0x605A76u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A91B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A908, __imp__sub_0045A908)

X86_FUNC(__imp__sub_0045A91C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A91C push 0x5B5C14
	{ uint32_t v = (uint32_t)(0x5B5C14u); X86_PUSH32(v); }
	// 0045A921 push 0x17
	{ uint32_t v = (uint32_t)(0x17u); X86_PUSH32(v); }
	// 0045A923 call 0x0006800A
	X86_PUSH32(0x45A928u); sub_0006800A(ctx, base);
	// 0045A928 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A929 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A92A mov [0x00605A77], al
	{ uint32_t ea = (uint32_t)(0x605A77u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A92F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A91C, __imp__sub_0045A91C)

X86_FUNC(__imp__sub_0045A930) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A930 push 0x5B5C18
	{ uint32_t v = (uint32_t)(0x5B5C18u); X86_PUSH32(v); }
	// 0045A935 push 0x19
	{ uint32_t v = (uint32_t)(0x19u); X86_PUSH32(v); }
	// 0045A937 call 0x0006800A
	X86_PUSH32(0x45A93Cu); sub_0006800A(ctx, base);
	// 0045A93C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A93D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A93E mov [0x00605A78], al
	{ uint32_t ea = (uint32_t)(0x605A78u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A943 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A930, __imp__sub_0045A930)

X86_FUNC(__imp__sub_0045A944) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A944 push 0x5B5C1C
	{ uint32_t v = (uint32_t)(0x5B5C1Cu); X86_PUSH32(v); }
	// 0045A949 push 0x1B
	{ uint32_t v = (uint32_t)(0x1Bu); X86_PUSH32(v); }
	// 0045A94B call 0x0006800A
	X86_PUSH32(0x45A950u); sub_0006800A(ctx, base);
	// 0045A950 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A951 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A952 mov [0x00605A79], al
	{ uint32_t ea = (uint32_t)(0x605A79u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A957 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A944, __imp__sub_0045A944)

X86_FUNC(__imp__sub_0045A958) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A958 push 0x5B5C20
	{ uint32_t v = (uint32_t)(0x5B5C20u); X86_PUSH32(v); }
	// 0045A95D push 0x1C
	{ uint32_t v = (uint32_t)(0x1Cu); X86_PUSH32(v); }
	// 0045A95F call 0x0006800A
	X86_PUSH32(0x45A964u); sub_0006800A(ctx, base);
	// 0045A964 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A965 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A966 mov [0x00605A7A], al
	{ uint32_t ea = (uint32_t)(0x605A7Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A96B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A958, __imp__sub_0045A958)

X86_FUNC(__imp__sub_0045A96C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A96C push 0x5B5C24
	{ uint32_t v = (uint32_t)(0x5B5C24u); X86_PUSH32(v); }
	// 0045A971 push 0x38
	{ uint32_t v = (uint32_t)(0x38u); X86_PUSH32(v); }
	// 0045A973 call 0x0006800A
	X86_PUSH32(0x45A978u); sub_0006800A(ctx, base);
	// 0045A978 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A979 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A97A mov [0x00605A7B], al
	{ uint32_t ea = (uint32_t)(0x605A7Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A97F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A96C, __imp__sub_0045A96C)

X86_FUNC(__imp__sub_0045A980) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A980 push 0x5B5C28
	{ uint32_t v = (uint32_t)(0x5B5C28u); X86_PUSH32(v); }
	// 0045A985 push 0x32
	{ uint32_t v = (uint32_t)(0x32u); X86_PUSH32(v); }
	// 0045A987 call 0x0006800A
	X86_PUSH32(0x45A98Cu); sub_0006800A(ctx, base);
	// 0045A98C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A98D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A98E mov [0x00605A7C], al
	{ uint32_t ea = (uint32_t)(0x605A7Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A993 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A980, __imp__sub_0045A980)

X86_FUNC(__imp__sub_0045A994) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A994 push 0x5B5C2C
	{ uint32_t v = (uint32_t)(0x5B5C2Cu); X86_PUSH32(v); }
	// 0045A999 push 0x33
	{ uint32_t v = (uint32_t)(0x33u); X86_PUSH32(v); }
	// 0045A99B call 0x0006800A
	X86_PUSH32(0x45A9A0u); sub_0006800A(ctx, base);
	// 0045A9A0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A9A1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A9A2 mov [0x00605A7D], al
	{ uint32_t ea = (uint32_t)(0x605A7Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A9A7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A994, __imp__sub_0045A994)

X86_FUNC(__imp__sub_0045A9A8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A9A8 push 0x5B5C30
	{ uint32_t v = (uint32_t)(0x5B5C30u); X86_PUSH32(v); }
	// 0045A9AD push 0x1D
	{ uint32_t v = (uint32_t)(0x1Du); X86_PUSH32(v); }
	// 0045A9AF call 0x0006800A
	X86_PUSH32(0x45A9B4u); sub_0006800A(ctx, base);
	// 0045A9B4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A9B5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A9B6 mov [0x00605A7E], al
	{ uint32_t ea = (uint32_t)(0x605A7Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A9BB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A9A8, __imp__sub_0045A9A8)

X86_FUNC(__imp__sub_0045A9BC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A9BC push 0x5B5C34
	{ uint32_t v = (uint32_t)(0x5B5C34u); X86_PUSH32(v); }
	// 0045A9C1 push 0x1E
	{ uint32_t v = (uint32_t)(0x1Eu); X86_PUSH32(v); }
	// 0045A9C3 call 0x0006800A
	X86_PUSH32(0x45A9C8u); sub_0006800A(ctx, base);
	// 0045A9C8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A9C9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A9CA mov [0x00605A7F], al
	{ uint32_t ea = (uint32_t)(0x605A7Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A9CF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A9BC, __imp__sub_0045A9BC)

X86_FUNC(__imp__sub_0045A9D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A9D0 push 0x5B5C38
	{ uint32_t v = (uint32_t)(0x5B5C38u); X86_PUSH32(v); }
	// 0045A9D5 push 0x1F
	{ uint32_t v = (uint32_t)(0x1Fu); X86_PUSH32(v); }
	// 0045A9D7 call 0x0006800A
	X86_PUSH32(0x45A9DCu); sub_0006800A(ctx, base);
	// 0045A9DC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A9DD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A9DE mov [0x00605A80], al
	{ uint32_t ea = (uint32_t)(0x605A80u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A9E3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A9D0, __imp__sub_0045A9D0)

X86_FUNC(__imp__sub_0045A9E4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A9E4 push 0x5B5C3C
	{ uint32_t v = (uint32_t)(0x5B5C3Cu); X86_PUSH32(v); }
	// 0045A9E9 push 0x34
	{ uint32_t v = (uint32_t)(0x34u); X86_PUSH32(v); }
	// 0045A9EB call 0x0006800A
	X86_PUSH32(0x45A9F0u); sub_0006800A(ctx, base);
	// 0045A9F0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A9F1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045A9F2 mov [0x00605A81], al
	{ uint32_t ea = (uint32_t)(0x605A81u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045A9F7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A9E4, __imp__sub_0045A9E4)

X86_FUNC(__imp__sub_0045A9F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045A9F8 push 0x5B5C40
	{ uint32_t v = (uint32_t)(0x5B5C40u); X86_PUSH32(v); }
	// 0045A9FD push 0x44
	{ uint32_t v = (uint32_t)(0x44u); X86_PUSH32(v); }
	// 0045A9FF call 0x0006800A
	X86_PUSH32(0x45AA04u); sub_0006800A(ctx, base);
	// 0045AA04 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA05 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA06 mov [0x00605A82], al
	{ uint32_t ea = (uint32_t)(0x605A82u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AA0B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045A9F8, __imp__sub_0045A9F8)

X86_FUNC(__imp__sub_0045AA0C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AA0C push 0x5B5C44
	{ uint32_t v = (uint32_t)(0x5B5C44u); X86_PUSH32(v); }
	// 0045AA11 push 0x20
	{ uint32_t v = (uint32_t)(0x20u); X86_PUSH32(v); }
	// 0045AA13 call 0x0006800A
	X86_PUSH32(0x45AA18u); sub_0006800A(ctx, base);
	// 0045AA18 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA19 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA1A mov [0x00605A83], al
	{ uint32_t ea = (uint32_t)(0x605A83u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AA1F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AA0C, __imp__sub_0045AA0C)

X86_FUNC(__imp__sub_0045AA20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AA20 push 0x5B5C48
	{ uint32_t v = (uint32_t)(0x5B5C48u); X86_PUSH32(v); }
	// 0045AA25 push 0x21
	{ uint32_t v = (uint32_t)(0x21u); X86_PUSH32(v); }
	// 0045AA27 call 0x0006800A
	X86_PUSH32(0x45AA2Cu); sub_0006800A(ctx, base);
	// 0045AA2C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA2D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA2E mov [0x00605A84], al
	{ uint32_t ea = (uint32_t)(0x605A84u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AA33 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AA20, __imp__sub_0045AA20)

X86_FUNC(__imp__sub_0045AA34) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AA34 push 0x5B5C4C
	{ uint32_t v = (uint32_t)(0x5B5C4Cu); X86_PUSH32(v); }
	// 0045AA39 push 0x24
	{ uint32_t v = (uint32_t)(0x24u); X86_PUSH32(v); }
	// 0045AA3B call 0x0006800A
	X86_PUSH32(0x45AA40u); sub_0006800A(ctx, base);
	// 0045AA40 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA41 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA42 mov [0x00605A85], al
	{ uint32_t ea = (uint32_t)(0x605A85u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AA47 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AA34, __imp__sub_0045AA34)

X86_FUNC(__imp__sub_0045AA48) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AA48 push 0x5B5C50
	{ uint32_t v = (uint32_t)(0x5B5C50u); X86_PUSH32(v); }
	// 0045AA4D push 0x25
	{ uint32_t v = (uint32_t)(0x25u); X86_PUSH32(v); }
	// 0045AA4F call 0x0006800A
	X86_PUSH32(0x45AA54u); sub_0006800A(ctx, base);
	// 0045AA54 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA55 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA56 mov [0x00605A86], al
	{ uint32_t ea = (uint32_t)(0x605A86u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AA5B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AA48, __imp__sub_0045AA48)

X86_FUNC(__imp__sub_0045AA5C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AA5C push 0x5B5C54
	{ uint32_t v = (uint32_t)(0x5B5C54u); X86_PUSH32(v); }
	// 0045AA61 push 0x26
	{ uint32_t v = (uint32_t)(0x26u); X86_PUSH32(v); }
	// 0045AA63 call 0x0006800A
	X86_PUSH32(0x45AA68u); sub_0006800A(ctx, base);
	// 0045AA68 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA69 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA6A mov [0x00605A87], al
	{ uint32_t ea = (uint32_t)(0x605A87u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AA6F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AA5C, __imp__sub_0045AA5C)

X86_FUNC(__imp__sub_0045AA70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AA70 push 0x5B5C58
	{ uint32_t v = (uint32_t)(0x5B5C58u); X86_PUSH32(v); }
	// 0045AA75 push 0x27
	{ uint32_t v = (uint32_t)(0x27u); X86_PUSH32(v); }
	// 0045AA77 call 0x0006800A
	X86_PUSH32(0x45AA7Cu); sub_0006800A(ctx, base);
	// 0045AA7C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA7D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA7E mov [0x00605A88], al
	{ uint32_t ea = (uint32_t)(0x605A88u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AA83 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AA70, __imp__sub_0045AA70)

X86_FUNC(__imp__sub_0045AA84) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AA84 push 0x5B5C5C
	{ uint32_t v = (uint32_t)(0x5B5C5Cu); X86_PUSH32(v); }
	// 0045AA89 push 0x28
	{ uint32_t v = (uint32_t)(0x28u); X86_PUSH32(v); }
	// 0045AA8B call 0x0006800A
	X86_PUSH32(0x45AA90u); sub_0006800A(ctx, base);
	// 0045AA90 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA91 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AA92 mov [0x00605A89], al
	{ uint32_t ea = (uint32_t)(0x605A89u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AA97 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AA84, __imp__sub_0045AA84)

X86_FUNC(__imp__sub_0045AA98) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AA98 push 0x5B5C60
	{ uint32_t v = (uint32_t)(0x5B5C60u); X86_PUSH32(v); }
	// 0045AA9D push 0x2A
	{ uint32_t v = (uint32_t)(0x2Au); X86_PUSH32(v); }
	// 0045AA9F call 0x0006800A
	X86_PUSH32(0x45AAA4u); sub_0006800A(ctx, base);
	// 0045AAA4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AAA5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AAA6 mov [0x00605A8A], al
	{ uint32_t ea = (uint32_t)(0x605A8Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AAAB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AA98, __imp__sub_0045AA98)

X86_FUNC(__imp__sub_0045AAAC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AAAC push 0x5B5C64
	{ uint32_t v = (uint32_t)(0x5B5C64u); X86_PUSH32(v); }
	// 0045AAB1 push 0x2C
	{ uint32_t v = (uint32_t)(0x2Cu); X86_PUSH32(v); }
	// 0045AAB3 call 0x0006800A
	X86_PUSH32(0x45AAB8u); sub_0006800A(ctx, base);
	// 0045AAB8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AAB9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AABA mov [0x00605A8B], al
	{ uint32_t ea = (uint32_t)(0x605A8Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AABF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AAAC, __imp__sub_0045AAAC)

X86_FUNC(__imp__sub_0045AAC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AAC0 push 0x5B5C68
	{ uint32_t v = (uint32_t)(0x5B5C68u); X86_PUSH32(v); }
	// 0045AAC5 push 0x2E
	{ uint32_t v = (uint32_t)(0x2Eu); X86_PUSH32(v); }
	// 0045AAC7 call 0x0006800A
	X86_PUSH32(0x45AACCu); sub_0006800A(ctx, base);
	// 0045AACC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AACD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AACE mov [0x00605A8C], al
	{ uint32_t ea = (uint32_t)(0x605A8Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AAD3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AAC0, __imp__sub_0045AAC0)

X86_FUNC(__imp__sub_0045AAD4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AAD4 push 0x5B5C6C
	{ uint32_t v = (uint32_t)(0x5B5C6Cu); X86_PUSH32(v); }
	// 0045AAD9 push 0x13
	{ uint32_t v = (uint32_t)(0x13u); X86_PUSH32(v); }
	// 0045AADB call 0x0006800A
	X86_PUSH32(0x45AAE0u); sub_0006800A(ctx, base);
	// 0045AAE0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AAE1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AAE2 mov [0x00605A8D], al
	{ uint32_t ea = (uint32_t)(0x605A8Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AAE7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AAD4, __imp__sub_0045AAD4)

X86_FUNC(__imp__sub_0045AAE8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AAE8 push 0x5B5C70
	{ uint32_t v = (uint32_t)(0x5B5C70u); X86_PUSH32(v); }
	// 0045AAED push 0x39
	{ uint32_t v = (uint32_t)(0x39u); X86_PUSH32(v); }
	// 0045AAEF call 0x0006800A
	X86_PUSH32(0x45AAF4u); sub_0006800A(ctx, base);
	// 0045AAF4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AAF5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AAF6 mov [0x00605A8E], al
	{ uint32_t ea = (uint32_t)(0x605A8Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AAFB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AAE8, __imp__sub_0045AAE8)

X86_FUNC(__imp__sub_0045AAFC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AAFC push 0x5B5C74
	{ uint32_t v = (uint32_t)(0x5B5C74u); X86_PUSH32(v); }
	// 0045AB01 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AB03 call 0x0006800A
	X86_PUSH32(0x45AB08u); sub_0006800A(ctx, base);
	// 0045AB08 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB09 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB0A mov [0x00605A8F], al
	{ uint32_t ea = (uint32_t)(0x605A8Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AB0F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AAFC, __imp__sub_0045AAFC)

X86_FUNC(__imp__sub_0045AB10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AB10 push 0x5B5C74
	{ uint32_t v = (uint32_t)(0x5B5C74u); X86_PUSH32(v); }
	// 0045AB15 push 0x3A
	{ uint32_t v = (uint32_t)(0x3Au); X86_PUSH32(v); }
	// 0045AB17 call 0x00068062
	X86_PUSH32(0x45AB1Cu); sub_00068062(ctx, base);
	// 0045AB1C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB1D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB1E mov [0x00605A90], al
	{ uint32_t ea = (uint32_t)(0x605A90u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AB23 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AB10, __imp__sub_0045AB10)

X86_FUNC(__imp__sub_0045AB24) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AB24 push 0x5B5C78
	{ uint32_t v = (uint32_t)(0x5B5C78u); X86_PUSH32(v); }
	// 0045AB29 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AB2B call 0x0006800A
	X86_PUSH32(0x45AB30u); sub_0006800A(ctx, base);
	// 0045AB30 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB31 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB32 mov [0x00605A91], al
	{ uint32_t ea = (uint32_t)(0x605A91u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AB37 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AB24, __imp__sub_0045AB24)

X86_FUNC(__imp__sub_0045AB38) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AB38 push 0x5B5C78
	{ uint32_t v = (uint32_t)(0x5B5C78u); X86_PUSH32(v); }
	// 0045AB3D push 0x3B
	{ uint32_t v = (uint32_t)(0x3Bu); X86_PUSH32(v); }
	// 0045AB3F call 0x00068062
	X86_PUSH32(0x45AB44u); sub_00068062(ctx, base);
	// 0045AB44 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB45 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB46 mov [0x00605A92], al
	{ uint32_t ea = (uint32_t)(0x605A92u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AB4B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AB38, __imp__sub_0045AB38)

X86_FUNC(__imp__sub_0045AB4C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AB4C push 0x5B5C7C
	{ uint32_t v = (uint32_t)(0x5B5C7Cu); X86_PUSH32(v); }
	// 0045AB51 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AB53 call 0x0006800A
	X86_PUSH32(0x45AB58u); sub_0006800A(ctx, base);
	// 0045AB58 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB59 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB5A mov [0x00605A93], al
	{ uint32_t ea = (uint32_t)(0x605A93u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AB5F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AB4C, __imp__sub_0045AB4C)

X86_FUNC(__imp__sub_0045AB60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AB60 push 0x5B5C7C
	{ uint32_t v = (uint32_t)(0x5B5C7Cu); X86_PUSH32(v); }
	// 0045AB65 push 0x3C
	{ uint32_t v = (uint32_t)(0x3Cu); X86_PUSH32(v); }
	// 0045AB67 call 0x00068062
	X86_PUSH32(0x45AB6Cu); sub_00068062(ctx, base);
	// 0045AB6C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB6D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB6E mov [0x00605A94], al
	{ uint32_t ea = (uint32_t)(0x605A94u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AB73 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AB60, __imp__sub_0045AB60)

X86_FUNC(__imp__sub_0045AB74) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AB74 push 0x5B5C80
	{ uint32_t v = (uint32_t)(0x5B5C80u); X86_PUSH32(v); }
	// 0045AB79 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AB7B call 0x0006800A
	X86_PUSH32(0x45AB80u); sub_0006800A(ctx, base);
	// 0045AB80 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB81 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB82 mov [0x00605A95], al
	{ uint32_t ea = (uint32_t)(0x605A95u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AB87 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AB74, __imp__sub_0045AB74)

X86_FUNC(__imp__sub_0045AB88) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AB88 push 0x5B5C80
	{ uint32_t v = (uint32_t)(0x5B5C80u); X86_PUSH32(v); }
	// 0045AB8D push 0x52
	{ uint32_t v = (uint32_t)(0x52u); X86_PUSH32(v); }
	// 0045AB8F call 0x00068062
	X86_PUSH32(0x45AB94u); sub_00068062(ctx, base);
	// 0045AB94 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB95 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AB96 mov [0x00605A96], al
	{ uint32_t ea = (uint32_t)(0x605A96u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AB9B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AB88, __imp__sub_0045AB88)

X86_FUNC(__imp__sub_0045AB9C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AB9C push 0x5B5C84
	{ uint32_t v = (uint32_t)(0x5B5C84u); X86_PUSH32(v); }
	// 0045ABA1 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045ABA3 call 0x0006800A
	X86_PUSH32(0x45ABA8u); sub_0006800A(ctx, base);
	// 0045ABA8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ABA9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ABAA mov [0x00605A97], al
	{ uint32_t ea = (uint32_t)(0x605A97u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ABAF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AB9C, __imp__sub_0045AB9C)

X86_FUNC(__imp__sub_0045ABB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ABB0 push 0x5B5C84
	{ uint32_t v = (uint32_t)(0x5B5C84u); X86_PUSH32(v); }
	// 0045ABB5 push 0x3D
	{ uint32_t v = (uint32_t)(0x3Du); X86_PUSH32(v); }
	// 0045ABB7 call 0x00068062
	X86_PUSH32(0x45ABBCu); sub_00068062(ctx, base);
	// 0045ABBC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ABBD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ABBE mov [0x00605A98], al
	{ uint32_t ea = (uint32_t)(0x605A98u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ABC3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ABB0, __imp__sub_0045ABB0)

X86_FUNC(__imp__sub_0045ABC4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ABC4 push 0x5B5C88
	{ uint32_t v = (uint32_t)(0x5B5C88u); X86_PUSH32(v); }
	// 0045ABC9 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045ABCB call 0x0006800A
	X86_PUSH32(0x45ABD0u); sub_0006800A(ctx, base);
	// 0045ABD0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ABD1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ABD2 mov [0x00605A99], al
	{ uint32_t ea = (uint32_t)(0x605A99u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ABD7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ABC4, __imp__sub_0045ABC4)

X86_FUNC(__imp__sub_0045ABD8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ABD8 push 0x5B5C88
	{ uint32_t v = (uint32_t)(0x5B5C88u); X86_PUSH32(v); }
	// 0045ABDD push 0x3E
	{ uint32_t v = (uint32_t)(0x3Eu); X86_PUSH32(v); }
	// 0045ABDF call 0x00068062
	X86_PUSH32(0x45ABE4u); sub_00068062(ctx, base);
	// 0045ABE4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ABE5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ABE6 mov [0x00605A9A], al
	{ uint32_t ea = (uint32_t)(0x605A9Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ABEB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ABD8, __imp__sub_0045ABD8)

X86_FUNC(__imp__sub_0045ABEC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ABEC push 0x5B5C8C
	{ uint32_t v = (uint32_t)(0x5B5C8Cu); X86_PUSH32(v); }
	// 0045ABF1 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045ABF3 call 0x0006800A
	X86_PUSH32(0x45ABF8u); sub_0006800A(ctx, base);
	// 0045ABF8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ABF9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ABFA mov [0x00605A9B], al
	{ uint32_t ea = (uint32_t)(0x605A9Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ABFF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ABEC, __imp__sub_0045ABEC)

X86_FUNC(__imp__sub_0045AC00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AC00 push 0x5B5C8C
	{ uint32_t v = (uint32_t)(0x5B5C8Cu); X86_PUSH32(v); }
	// 0045AC05 push 0x3F
	{ uint32_t v = (uint32_t)(0x3Fu); X86_PUSH32(v); }
	// 0045AC07 call 0x00068062
	X86_PUSH32(0x45AC0Cu); sub_00068062(ctx, base);
	// 0045AC0C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC0D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC0E mov [0x00605A9C], al
	{ uint32_t ea = (uint32_t)(0x605A9Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AC13 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AC00, __imp__sub_0045AC00)

X86_FUNC(__imp__sub_0045AC14) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AC14 push 0x5B5C90
	{ uint32_t v = (uint32_t)(0x5B5C90u); X86_PUSH32(v); }
	// 0045AC19 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AC1B call 0x0006800A
	X86_PUSH32(0x45AC20u); sub_0006800A(ctx, base);
	// 0045AC20 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC21 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC22 mov [0x00605A9D], al
	{ uint32_t ea = (uint32_t)(0x605A9Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AC27 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AC14, __imp__sub_0045AC14)

X86_FUNC(__imp__sub_0045AC28) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AC28 push 0x5B5C90
	{ uint32_t v = (uint32_t)(0x5B5C90u); X86_PUSH32(v); }
	// 0045AC2D push 0x53
	{ uint32_t v = (uint32_t)(0x53u); X86_PUSH32(v); }
	// 0045AC2F call 0x00068062
	X86_PUSH32(0x45AC34u); sub_00068062(ctx, base);
	// 0045AC34 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC35 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC36 mov [0x00605A9E], al
	{ uint32_t ea = (uint32_t)(0x605A9Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AC3B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AC28, __imp__sub_0045AC28)

X86_FUNC(__imp__sub_0045AC3C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AC3C push 0x5B5C94
	{ uint32_t v = (uint32_t)(0x5B5C94u); X86_PUSH32(v); }
	// 0045AC41 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AC43 call 0x0006800A
	X86_PUSH32(0x45AC48u); sub_0006800A(ctx, base);
	// 0045AC48 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC49 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC4A mov [0x00605A9F], al
	{ uint32_t ea = (uint32_t)(0x605A9Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AC4F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AC3C, __imp__sub_0045AC3C)

X86_FUNC(__imp__sub_0045AC50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AC50 push 0x5B5C94
	{ uint32_t v = (uint32_t)(0x5B5C94u); X86_PUSH32(v); }
	// 0045AC55 push 0x40
	{ uint32_t v = (uint32_t)(0x40u); X86_PUSH32(v); }
	// 0045AC57 call 0x00068062
	X86_PUSH32(0x45AC5Cu); sub_00068062(ctx, base);
	// 0045AC5C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC5D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC5E mov [0x00605AA0], al
	{ uint32_t ea = (uint32_t)(0x605AA0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AC63 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AC50, __imp__sub_0045AC50)

X86_FUNC(__imp__sub_0045AC64) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AC64 push 0x5B5C98
	{ uint32_t v = (uint32_t)(0x5B5C98u); X86_PUSH32(v); }
	// 0045AC69 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AC6B call 0x0006800A
	X86_PUSH32(0x45AC70u); sub_0006800A(ctx, base);
	// 0045AC70 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC71 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC72 mov [0x00605AA1], al
	{ uint32_t ea = (uint32_t)(0x605AA1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AC77 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AC64, __imp__sub_0045AC64)

X86_FUNC(__imp__sub_0045AC78) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AC78 push 0x5B5C98
	{ uint32_t v = (uint32_t)(0x5B5C98u); X86_PUSH32(v); }
	// 0045AC7D push 0x41
	{ uint32_t v = (uint32_t)(0x41u); X86_PUSH32(v); }
	// 0045AC7F call 0x00068062
	X86_PUSH32(0x45AC84u); sub_00068062(ctx, base);
	// 0045AC84 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC85 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC86 mov [0x00605AA2], al
	{ uint32_t ea = (uint32_t)(0x605AA2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AC8B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AC78, __imp__sub_0045AC78)

X86_FUNC(__imp__sub_0045AC8C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AC8C push 0x5B5C9C
	{ uint32_t v = (uint32_t)(0x5B5C9Cu); X86_PUSH32(v); }
	// 0045AC91 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AC93 call 0x0006800A
	X86_PUSH32(0x45AC98u); sub_0006800A(ctx, base);
	// 0045AC98 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC99 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AC9A mov [0x00605AA3], al
	{ uint32_t ea = (uint32_t)(0x605AA3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AC9F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AC8C, __imp__sub_0045AC8C)

X86_FUNC(__imp__sub_0045ACA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ACA0 push 0x5B5C9C
	{ uint32_t v = (uint32_t)(0x5B5C9Cu); X86_PUSH32(v); }
	// 0045ACA5 push 0x42
	{ uint32_t v = (uint32_t)(0x42u); X86_PUSH32(v); }
	// 0045ACA7 call 0x00068062
	X86_PUSH32(0x45ACACu); sub_00068062(ctx, base);
	// 0045ACAC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ACAD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ACAE mov [0x00605AA4], al
	{ uint32_t ea = (uint32_t)(0x605AA4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ACB3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ACA0, __imp__sub_0045ACA0)

X86_FUNC(__imp__sub_0045ACB4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ACB4 push 0x5B5CA0
	{ uint32_t v = (uint32_t)(0x5B5CA0u); X86_PUSH32(v); }
	// 0045ACB9 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045ACBB call 0x0006800A
	X86_PUSH32(0x45ACC0u); sub_0006800A(ctx, base);
	// 0045ACC0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ACC1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ACC2 mov [0x00605AA5], al
	{ uint32_t ea = (uint32_t)(0x605AA5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ACC7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ACB4, __imp__sub_0045ACB4)

X86_FUNC(__imp__sub_0045ACC8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ACC8 push 0x5B5CA0
	{ uint32_t v = (uint32_t)(0x5B5CA0u); X86_PUSH32(v); }
	// 0045ACCD push 0x54
	{ uint32_t v = (uint32_t)(0x54u); X86_PUSH32(v); }
	// 0045ACCF call 0x00068062
	X86_PUSH32(0x45ACD4u); sub_00068062(ctx, base);
	// 0045ACD4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ACD5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ACD6 mov [0x00605AA6], al
	{ uint32_t ea = (uint32_t)(0x605AA6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ACDB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ACC8, __imp__sub_0045ACC8)

X86_FUNC(__imp__sub_0045ACDC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ACDC push 0x5B5CA4
	{ uint32_t v = (uint32_t)(0x5B5CA4u); X86_PUSH32(v); }
	// 0045ACE1 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045ACE3 call 0x0006800A
	X86_PUSH32(0x45ACE8u); sub_0006800A(ctx, base);
	// 0045ACE8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ACE9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ACEA mov [0x00605AA7], al
	{ uint32_t ea = (uint32_t)(0x605AA7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ACEF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ACDC, __imp__sub_0045ACDC)

X86_FUNC(__imp__sub_0045ACF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ACF0 push 0x5B5CA4
	{ uint32_t v = (uint32_t)(0x5B5CA4u); X86_PUSH32(v); }
	// 0045ACF5 push 0x43
	{ uint32_t v = (uint32_t)(0x43u); X86_PUSH32(v); }
	// 0045ACF7 call 0x00068062
	X86_PUSH32(0x45ACFCu); sub_00068062(ctx, base);
	// 0045ACFC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ACFD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ACFE mov [0x00605AA8], al
	{ uint32_t ea = (uint32_t)(0x605AA8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AD03 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ACF0, __imp__sub_0045ACF0)

X86_FUNC(__imp__sub_0045AD04) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AD04 push 0x5B5CA8
	{ uint32_t v = (uint32_t)(0x5B5CA8u); X86_PUSH32(v); }
	// 0045AD09 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AD0B call 0x0006800A
	X86_PUSH32(0x45AD10u); sub_0006800A(ctx, base);
	// 0045AD10 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD11 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD12 mov [0x00605AA9], al
	{ uint32_t ea = (uint32_t)(0x605AA9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AD17 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AD04, __imp__sub_0045AD04)

X86_FUNC(__imp__sub_0045AD18) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AD18 push 0x5B5CA8
	{ uint32_t v = (uint32_t)(0x5B5CA8u); X86_PUSH32(v); }
	// 0045AD1D push 0x44
	{ uint32_t v = (uint32_t)(0x44u); X86_PUSH32(v); }
	// 0045AD1F call 0x00068062
	X86_PUSH32(0x45AD24u); sub_00068062(ctx, base);
	// 0045AD24 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD25 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD26 mov [0x00605AAA], al
	{ uint32_t ea = (uint32_t)(0x605AAAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AD2B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AD18, __imp__sub_0045AD18)

X86_FUNC(__imp__sub_0045AD2C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AD2C push 0x5B5CAC
	{ uint32_t v = (uint32_t)(0x5B5CACu); X86_PUSH32(v); }
	// 0045AD31 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AD33 call 0x0006800A
	X86_PUSH32(0x45AD38u); sub_0006800A(ctx, base);
	// 0045AD38 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD39 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD3A mov [0x00605AAB], al
	{ uint32_t ea = (uint32_t)(0x605AABu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AD3F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AD2C, __imp__sub_0045AD2C)

X86_FUNC(__imp__sub_0045AD40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AD40 push 0x5B5CAC
	{ uint32_t v = (uint32_t)(0x5B5CACu); X86_PUSH32(v); }
	// 0045AD45 push 0x45
	{ uint32_t v = (uint32_t)(0x45u); X86_PUSH32(v); }
	// 0045AD47 call 0x00068062
	X86_PUSH32(0x45AD4Cu); sub_00068062(ctx, base);
	// 0045AD4C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD4D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD4E mov [0x00605AAC], al
	{ uint32_t ea = (uint32_t)(0x605AACu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AD53 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AD40, __imp__sub_0045AD40)

X86_FUNC(__imp__sub_0045AD54) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AD54 push 0x5B5CB0
	{ uint32_t v = (uint32_t)(0x5B5CB0u); X86_PUSH32(v); }
	// 0045AD59 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AD5B call 0x0006800A
	X86_PUSH32(0x45AD60u); sub_0006800A(ctx, base);
	// 0045AD60 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD61 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD62 mov [0x00605AAD], al
	{ uint32_t ea = (uint32_t)(0x605AADu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AD67 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AD54, __imp__sub_0045AD54)

X86_FUNC(__imp__sub_0045AD68) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AD68 push 0x5B5CB0
	{ uint32_t v = (uint32_t)(0x5B5CB0u); X86_PUSH32(v); }
	// 0045AD6D push 0x55
	{ uint32_t v = (uint32_t)(0x55u); X86_PUSH32(v); }
	// 0045AD6F call 0x00068062
	X86_PUSH32(0x45AD74u); sub_00068062(ctx, base);
	// 0045AD74 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD75 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD76 mov [0x00605AAE], al
	{ uint32_t ea = (uint32_t)(0x605AAEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AD7B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AD68, __imp__sub_0045AD68)

X86_FUNC(__imp__sub_0045AD7C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AD7C push 0x5B5CB4
	{ uint32_t v = (uint32_t)(0x5B5CB4u); X86_PUSH32(v); }
	// 0045AD81 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AD83 call 0x0006800A
	X86_PUSH32(0x45AD88u); sub_0006800A(ctx, base);
	// 0045AD88 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD89 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD8A mov [0x00605AAF], al
	{ uint32_t ea = (uint32_t)(0x605AAFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AD8F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AD7C, __imp__sub_0045AD7C)

X86_FUNC(__imp__sub_0045AD90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AD90 push 0x5B5CB4
	{ uint32_t v = (uint32_t)(0x5B5CB4u); X86_PUSH32(v); }
	// 0045AD95 push 0x47
	{ uint32_t v = (uint32_t)(0x47u); X86_PUSH32(v); }
	// 0045AD97 call 0x00068062
	X86_PUSH32(0x45AD9Cu); sub_00068062(ctx, base);
	// 0045AD9C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD9D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AD9E mov [0x00605AB0], al
	{ uint32_t ea = (uint32_t)(0x605AB0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ADA3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AD90, __imp__sub_0045AD90)

X86_FUNC(__imp__sub_0045ADA4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ADA4 push 0x5B5CB8
	{ uint32_t v = (uint32_t)(0x5B5CB8u); X86_PUSH32(v); }
	// 0045ADA9 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045ADAB call 0x0006800A
	X86_PUSH32(0x45ADB0u); sub_0006800A(ctx, base);
	// 0045ADB0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ADB1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ADB2 mov [0x00605AB1], al
	{ uint32_t ea = (uint32_t)(0x605AB1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ADB7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ADA4, __imp__sub_0045ADA4)

X86_FUNC(__imp__sub_0045ADB8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ADB8 push 0x5B5CB8
	{ uint32_t v = (uint32_t)(0x5B5CB8u); X86_PUSH32(v); }
	// 0045ADBD push 0x56
	{ uint32_t v = (uint32_t)(0x56u); X86_PUSH32(v); }
	// 0045ADBF call 0x00068062
	X86_PUSH32(0x45ADC4u); sub_00068062(ctx, base);
	// 0045ADC4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ADC5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ADC6 mov [0x00605AB2], al
	{ uint32_t ea = (uint32_t)(0x605AB2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ADCB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ADB8, __imp__sub_0045ADB8)

X86_FUNC(__imp__sub_0045ADCC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ADCC push 0x5B5CBC
	{ uint32_t v = (uint32_t)(0x5B5CBCu); X86_PUSH32(v); }
	// 0045ADD1 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045ADD3 call 0x0006800A
	X86_PUSH32(0x45ADD8u); sub_0006800A(ctx, base);
	// 0045ADD8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ADD9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ADDA mov [0x00605AB3], al
	{ uint32_t ea = (uint32_t)(0x605AB3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ADDF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ADCC, __imp__sub_0045ADCC)

X86_FUNC(__imp__sub_0045ADE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ADE0 push 0x5B5CBC
	{ uint32_t v = (uint32_t)(0x5B5CBCu); X86_PUSH32(v); }
	// 0045ADE5 push 0x48
	{ uint32_t v = (uint32_t)(0x48u); X86_PUSH32(v); }
	// 0045ADE7 call 0x00068062
	X86_PUSH32(0x45ADECu); sub_00068062(ctx, base);
	// 0045ADEC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ADED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ADEE mov [0x00605AB4], al
	{ uint32_t ea = (uint32_t)(0x605AB4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ADF3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ADE0, __imp__sub_0045ADE0)

X86_FUNC(__imp__sub_0045ADF4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ADF4 push 0x5B5CC0
	{ uint32_t v = (uint32_t)(0x5B5CC0u); X86_PUSH32(v); }
	// 0045ADF9 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045ADFB call 0x0006800A
	X86_PUSH32(0x45AE00u); sub_0006800A(ctx, base);
	// 0045AE00 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE01 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE02 mov [0x00605AB5], al
	{ uint32_t ea = (uint32_t)(0x605AB5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AE07 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ADF4, __imp__sub_0045ADF4)

X86_FUNC(__imp__sub_0045AE08) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AE08 push 0x5B5CC0
	{ uint32_t v = (uint32_t)(0x5B5CC0u); X86_PUSH32(v); }
	// 0045AE0D push 0x57
	{ uint32_t v = (uint32_t)(0x57u); X86_PUSH32(v); }
	// 0045AE0F call 0x00068062
	X86_PUSH32(0x45AE14u); sub_00068062(ctx, base);
	// 0045AE14 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE15 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE16 mov [0x00605AB6], al
	{ uint32_t ea = (uint32_t)(0x605AB6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AE1B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AE08, __imp__sub_0045AE08)

X86_FUNC(__imp__sub_0045AE1C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AE1C push 0x5B5CC4
	{ uint32_t v = (uint32_t)(0x5B5CC4u); X86_PUSH32(v); }
	// 0045AE21 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AE23 call 0x0006800A
	X86_PUSH32(0x45AE28u); sub_0006800A(ctx, base);
	// 0045AE28 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE29 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE2A mov [0x00605AB7], al
	{ uint32_t ea = (uint32_t)(0x605AB7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AE2F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AE1C, __imp__sub_0045AE1C)

X86_FUNC(__imp__sub_0045AE30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AE30 push 0x5B5CC4
	{ uint32_t v = (uint32_t)(0x5B5CC4u); X86_PUSH32(v); }
	// 0045AE35 push 0x49
	{ uint32_t v = (uint32_t)(0x49u); X86_PUSH32(v); }
	// 0045AE37 call 0x00068062
	X86_PUSH32(0x45AE3Cu); sub_00068062(ctx, base);
	// 0045AE3C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE3D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE3E mov [0x00605AB8], al
	{ uint32_t ea = (uint32_t)(0x605AB8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AE43 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AE30, __imp__sub_0045AE30)

X86_FUNC(__imp__sub_0045AE44) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AE44 push 0x5B5CC8
	{ uint32_t v = (uint32_t)(0x5B5CC8u); X86_PUSH32(v); }
	// 0045AE49 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AE4B call 0x0006800A
	X86_PUSH32(0x45AE50u); sub_0006800A(ctx, base);
	// 0045AE50 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE51 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE52 mov [0x00605AB9], al
	{ uint32_t ea = (uint32_t)(0x605AB9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AE57 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AE44, __imp__sub_0045AE44)

X86_FUNC(__imp__sub_0045AE58) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AE58 push 0x5B5CC8
	{ uint32_t v = (uint32_t)(0x5B5CC8u); X86_PUSH32(v); }
	// 0045AE5D push 0x4A
	{ uint32_t v = (uint32_t)(0x4Au); X86_PUSH32(v); }
	// 0045AE5F call 0x00068062
	X86_PUSH32(0x45AE64u); sub_00068062(ctx, base);
	// 0045AE64 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE65 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE66 mov [0x00605ABA], al
	{ uint32_t ea = (uint32_t)(0x605ABAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AE6B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AE58, __imp__sub_0045AE58)

X86_FUNC(__imp__sub_0045AE6C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AE6C push 0x5B5CCC
	{ uint32_t v = (uint32_t)(0x5B5CCCu); X86_PUSH32(v); }
	// 0045AE71 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AE73 call 0x0006800A
	X86_PUSH32(0x45AE78u); sub_0006800A(ctx, base);
	// 0045AE78 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE79 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE7A mov [0x00605ABB], al
	{ uint32_t ea = (uint32_t)(0x605ABBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AE7F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AE6C, __imp__sub_0045AE6C)

X86_FUNC(__imp__sub_0045AE80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AE80 push 0x5B5CCC
	{ uint32_t v = (uint32_t)(0x5B5CCCu); X86_PUSH32(v); }
	// 0045AE85 push 0x4B
	{ uint32_t v = (uint32_t)(0x4Bu); X86_PUSH32(v); }
	// 0045AE87 call 0x00068062
	X86_PUSH32(0x45AE8Cu); sub_00068062(ctx, base);
	// 0045AE8C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE8D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AE8E mov [0x00605ABC], al
	{ uint32_t ea = (uint32_t)(0x605ABCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AE93 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AE80, __imp__sub_0045AE80)

X86_FUNC(__imp__sub_0045AE94) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AE94 push 0x5B5CD0
	{ uint32_t v = (uint32_t)(0x5B5CD0u); X86_PUSH32(v); }
	// 0045AE99 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AE9B call 0x0006800A
	X86_PUSH32(0x45AEA0u); sub_0006800A(ctx, base);
	// 0045AEA0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AEA1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AEA2 mov [0x00605ABD], al
	{ uint32_t ea = (uint32_t)(0x605ABDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AEA7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AE94, __imp__sub_0045AE94)

X86_FUNC(__imp__sub_0045AEA8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AEA8 push 0x5B5CD0
	{ uint32_t v = (uint32_t)(0x5B5CD0u); X86_PUSH32(v); }
	// 0045AEAD push 0x4C
	{ uint32_t v = (uint32_t)(0x4Cu); X86_PUSH32(v); }
	// 0045AEAF call 0x00068062
	X86_PUSH32(0x45AEB4u); sub_00068062(ctx, base);
	// 0045AEB4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AEB5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AEB6 mov [0x00605ABE], al
	{ uint32_t ea = (uint32_t)(0x605ABEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AEBB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AEA8, __imp__sub_0045AEA8)

X86_FUNC(__imp__sub_0045AEBC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AEBC push 0x5B5CD4
	{ uint32_t v = (uint32_t)(0x5B5CD4u); X86_PUSH32(v); }
	// 0045AEC1 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AEC3 call 0x0006800A
	X86_PUSH32(0x45AEC8u); sub_0006800A(ctx, base);
	// 0045AEC8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AEC9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AECA mov [0x00605ABF], al
	{ uint32_t ea = (uint32_t)(0x605ABFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AECF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AEBC, __imp__sub_0045AEBC)

X86_FUNC(__imp__sub_0045AED0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AED0 push 0x5B5CD4
	{ uint32_t v = (uint32_t)(0x5B5CD4u); X86_PUSH32(v); }
	// 0045AED5 push 0x60
	{ uint32_t v = (uint32_t)(0x60u); X86_PUSH32(v); }
	// 0045AED7 call 0x00068062
	X86_PUSH32(0x45AEDCu); sub_00068062(ctx, base);
	// 0045AEDC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AEDD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AEDE mov [0x00605AC0], al
	{ uint32_t ea = (uint32_t)(0x605AC0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AEE3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AED0, __imp__sub_0045AED0)

X86_FUNC(__imp__sub_0045AEE4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AEE4 push 0x5B5CD8
	{ uint32_t v = (uint32_t)(0x5B5CD8u); X86_PUSH32(v); }
	// 0045AEE9 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AEEB call 0x0006800A
	X86_PUSH32(0x45AEF0u); sub_0006800A(ctx, base);
	// 0045AEF0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AEF1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AEF2 mov [0x00605AC1], al
	{ uint32_t ea = (uint32_t)(0x605AC1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AEF7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AEE4, __imp__sub_0045AEE4)

X86_FUNC(__imp__sub_0045AEF8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AEF8 push 0x5B5CD8
	{ uint32_t v = (uint32_t)(0x5B5CD8u); X86_PUSH32(v); }
	// 0045AEFD push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045AEFF call 0x00068062
	X86_PUSH32(0x45AF04u); sub_00068062(ctx, base);
	// 0045AF04 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF05 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF06 mov [0x00605AC2], al
	{ uint32_t ea = (uint32_t)(0x605AC2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AF0B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AEF8, __imp__sub_0045AEF8)

X86_FUNC(__imp__sub_0045AF0C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AF0C push 0x5B5CDC
	{ uint32_t v = (uint32_t)(0x5B5CDCu); X86_PUSH32(v); }
	// 0045AF11 push 0x81
	{ uint32_t v = (uint32_t)(0x81u); X86_PUSH32(v); }
	// 0045AF16 call 0x0006800A
	X86_PUSH32(0x45AF1Bu); sub_0006800A(ctx, base);
	// 0045AF1B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF1C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF1D mov [0x00605AC3], al
	{ uint32_t ea = (uint32_t)(0x605AC3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AF22 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AF0C, __imp__sub_0045AF0C)

X86_FUNC(__imp__sub_0045AF23) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AF23 push 0x5B5CE0
	{ uint32_t v = (uint32_t)(0x5B5CE0u); X86_PUSH32(v); }
	// 0045AF28 push 0xF2
	{ uint32_t v = (uint32_t)(0xF2u); X86_PUSH32(v); }
	// 0045AF2D call 0x0006800A
	X86_PUSH32(0x45AF32u); sub_0006800A(ctx, base);
	// 0045AF32 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF33 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF34 mov [0x00605AC4], al
	{ uint32_t ea = (uint32_t)(0x605AC4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AF39 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AF23, __imp__sub_0045AF23)

X86_FUNC(__imp__sub_0045AF3A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AF3A push 0x5B5CE4
	{ uint32_t v = (uint32_t)(0x5B5CE4u); X86_PUSH32(v); }
	// 0045AF3F push 0xF3
	{ uint32_t v = (uint32_t)(0xF3u); X86_PUSH32(v); }
	// 0045AF44 call 0x0006800A
	X86_PUSH32(0x45AF49u); sub_0006800A(ctx, base);
	// 0045AF49 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF4A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF4B mov [0x00605AC5], al
	{ uint32_t ea = (uint32_t)(0x605AC5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AF50 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AF3A, __imp__sub_0045AF3A)

X86_FUNC(__imp__sub_0045AF51) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AF51 push 0x5B5CE8
	{ uint32_t v = (uint32_t)(0x5B5CE8u); X86_PUSH32(v); }
	// 0045AF56 push 0x82
	{ uint32_t v = (uint32_t)(0x82u); X86_PUSH32(v); }
	// 0045AF5B call 0x0006800A
	X86_PUSH32(0x45AF60u); sub_0006800A(ctx, base);
	// 0045AF60 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF61 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF62 mov [0x00605AC6], al
	{ uint32_t ea = (uint32_t)(0x605AC6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AF67 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AF51, __imp__sub_0045AF51)

X86_FUNC(__imp__sub_0045AF68) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AF68 push 0x5B5CEC
	{ uint32_t v = (uint32_t)(0x5B5CECu); X86_PUSH32(v); }
	// 0045AF6D push 0x83
	{ uint32_t v = (uint32_t)(0x83u); X86_PUSH32(v); }
	// 0045AF72 call 0x0006800A
	X86_PUSH32(0x45AF77u); sub_0006800A(ctx, base);
	// 0045AF77 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF78 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF79 mov [0x00605AC7], al
	{ uint32_t ea = (uint32_t)(0x605AC7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AF7E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AF68, __imp__sub_0045AF68)

X86_FUNC(__imp__sub_0045AF7F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AF7F push 0x5B5CF0
	{ uint32_t v = (uint32_t)(0x5B5CF0u); X86_PUSH32(v); }
	// 0045AF84 push 0x84
	{ uint32_t v = (uint32_t)(0x84u); X86_PUSH32(v); }
	// 0045AF89 call 0x0006800A
	X86_PUSH32(0x45AF8Eu); sub_0006800A(ctx, base);
	// 0045AF8E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF8F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AF90 mov [0x00605AC8], al
	{ uint32_t ea = (uint32_t)(0x605AC8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AF95 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AF7F, __imp__sub_0045AF7F)

X86_FUNC(__imp__sub_0045AF96) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AF96 push 0x5B5CF4
	{ uint32_t v = (uint32_t)(0x5B5CF4u); X86_PUSH32(v); }
	// 0045AF9B push 0x85
	{ uint32_t v = (uint32_t)(0x85u); X86_PUSH32(v); }
	// 0045AFA0 call 0x0006800A
	X86_PUSH32(0x45AFA5u); sub_0006800A(ctx, base);
	// 0045AFA5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AFA6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AFA7 mov [0x00605AC9], al
	{ uint32_t ea = (uint32_t)(0x605AC9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AFAC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AF96, __imp__sub_0045AF96)

X86_FUNC(__imp__sub_0045AFAD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AFAD push 0x5B5CF8
	{ uint32_t v = (uint32_t)(0x5B5CF8u); X86_PUSH32(v); }
	// 0045AFB2 push 0x86
	{ uint32_t v = (uint32_t)(0x86u); X86_PUSH32(v); }
	// 0045AFB7 call 0x0006800A
	X86_PUSH32(0x45AFBCu); sub_0006800A(ctx, base);
	// 0045AFBC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AFBD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AFBE mov [0x00605ACA], al
	{ uint32_t ea = (uint32_t)(0x605ACAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AFC3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AFAD, __imp__sub_0045AFAD)

X86_FUNC(__imp__sub_0045AFC4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AFC4 push 0x5B5CFC
	{ uint32_t v = (uint32_t)(0x5B5CFCu); X86_PUSH32(v); }
	// 0045AFC9 push 0x87
	{ uint32_t v = (uint32_t)(0x87u); X86_PUSH32(v); }
	// 0045AFCE call 0x0006800A
	X86_PUSH32(0x45AFD3u); sub_0006800A(ctx, base);
	// 0045AFD3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AFD4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AFD5 mov [0x00605ACB], al
	{ uint32_t ea = (uint32_t)(0x605ACBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AFDA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AFC4, __imp__sub_0045AFC4)

X86_FUNC(__imp__sub_0045AFDB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AFDB push 0x5B5D00
	{ uint32_t v = (uint32_t)(0x5B5D00u); X86_PUSH32(v); }
	// 0045AFE0 push 0x88
	{ uint32_t v = (uint32_t)(0x88u); X86_PUSH32(v); }
	// 0045AFE5 call 0x0006800A
	X86_PUSH32(0x45AFEAu); sub_0006800A(ctx, base);
	// 0045AFEA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AFEB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045AFEC mov [0x00605ACC], al
	{ uint32_t ea = (uint32_t)(0x605ACCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045AFF1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AFDB, __imp__sub_0045AFDB)

X86_FUNC(__imp__sub_0045AFF2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045AFF2 push 0x5B5D04
	{ uint32_t v = (uint32_t)(0x5B5D04u); X86_PUSH32(v); }
	// 0045AFF7 push 0x89
	{ uint32_t v = (uint32_t)(0x89u); X86_PUSH32(v); }
	// 0045AFFC call 0x0006800A
	X86_PUSH32(0x45B001u); sub_0006800A(ctx, base);
	// 0045B001 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B002 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B003 mov [0x00605ACD], al
	{ uint32_t ea = (uint32_t)(0x605ACDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B008 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045AFF2, __imp__sub_0045AFF2)

X86_FUNC(__imp__sub_0045B009) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B009 push 0x5B5D08
	{ uint32_t v = (uint32_t)(0x5B5D08u); X86_PUSH32(v); }
	// 0045B00E push 0x8A
	{ uint32_t v = (uint32_t)(0x8Au); X86_PUSH32(v); }
	// 0045B013 call 0x0006800A
	X86_PUSH32(0x45B018u); sub_0006800A(ctx, base);
	// 0045B018 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B019 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B01A mov [0x00605ACE], al
	{ uint32_t ea = (uint32_t)(0x605ACEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B01F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B009, __imp__sub_0045B009)

X86_FUNC(__imp__sub_0045B020) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B020 push 0x5B5D0C
	{ uint32_t v = (uint32_t)(0x5B5D0Cu); X86_PUSH32(v); }
	// 0045B025 push 0x8B
	{ uint32_t v = (uint32_t)(0x8Bu); X86_PUSH32(v); }
	// 0045B02A call 0x0006800A
	X86_PUSH32(0x45B02Fu); sub_0006800A(ctx, base);
	// 0045B02F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B030 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B031 mov [0x00605ACF], al
	{ uint32_t ea = (uint32_t)(0x605ACFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B036 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B020, __imp__sub_0045B020)

X86_FUNC(__imp__sub_0045B037) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B037 push 0x5B5D10
	{ uint32_t v = (uint32_t)(0x5B5D10u); X86_PUSH32(v); }
	// 0045B03C push 0x8C
	{ uint32_t v = (uint32_t)(0x8Cu); X86_PUSH32(v); }
	// 0045B041 call 0x0006800A
	X86_PUSH32(0x45B046u); sub_0006800A(ctx, base);
	// 0045B046 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B047 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B048 mov [0x00605AD0], al
	{ uint32_t ea = (uint32_t)(0x605AD0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B04D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B037, __imp__sub_0045B037)

X86_FUNC(__imp__sub_0045B04E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B04E push 0x5B5D14
	{ uint32_t v = (uint32_t)(0x5B5D14u); X86_PUSH32(v); }
	// 0045B053 push 0x8D
	{ uint32_t v = (uint32_t)(0x8Du); X86_PUSH32(v); }
	// 0045B058 call 0x0006800A
	X86_PUSH32(0x45B05Du); sub_0006800A(ctx, base);
	// 0045B05D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B05E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B05F mov [0x00605AD1], al
	{ uint32_t ea = (uint32_t)(0x605AD1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B064 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B04E, __imp__sub_0045B04E)

X86_FUNC(__imp__sub_0045B065) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B065 push 0x5B5D18
	{ uint32_t v = (uint32_t)(0x5B5D18u); X86_PUSH32(v); }
	// 0045B06A push 0xC4
	{ uint32_t v = (uint32_t)(0xC4u); X86_PUSH32(v); }
	// 0045B06F call 0x0006800A
	X86_PUSH32(0x45B074u); sub_0006800A(ctx, base);
	// 0045B074 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B075 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B076 mov [0x00605AD2], al
	{ uint32_t ea = (uint32_t)(0x605AD2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B07B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B065, __imp__sub_0045B065)

X86_FUNC(__imp__sub_0045B07C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B07C push 0x5B5D1C
	{ uint32_t v = (uint32_t)(0x5B5D1Cu); X86_PUSH32(v); }
	// 0045B081 push 0x8F
	{ uint32_t v = (uint32_t)(0x8Fu); X86_PUSH32(v); }
	// 0045B086 call 0x0006800A
	X86_PUSH32(0x45B08Bu); sub_0006800A(ctx, base);
	// 0045B08B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B08C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B08D mov [0x00605AD3], al
	{ uint32_t ea = (uint32_t)(0x605AD3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B092 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B07C, __imp__sub_0045B07C)

X86_FUNC(__imp__sub_0045B093) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B093 push 0x5B5D20
	{ uint32_t v = (uint32_t)(0x5B5D20u); X86_PUSH32(v); }
	// 0045B098 push 0x90
	{ uint32_t v = (uint32_t)(0x90u); X86_PUSH32(v); }
	// 0045B09D call 0x0006800A
	X86_PUSH32(0x45B0A2u); sub_0006800A(ctx, base);
	// 0045B0A2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B0A3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B0A4 mov [0x00605AD4], al
	{ uint32_t ea = (uint32_t)(0x605AD4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B0A9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B093, __imp__sub_0045B093)

X86_FUNC(__imp__sub_0045B0AA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B0AA push 0x5B5D24
	{ uint32_t v = (uint32_t)(0x5B5D24u); X86_PUSH32(v); }
	// 0045B0AF push 0x91
	{ uint32_t v = (uint32_t)(0x91u); X86_PUSH32(v); }
	// 0045B0B4 call 0x0006800A
	X86_PUSH32(0x45B0B9u); sub_0006800A(ctx, base);
	// 0045B0B9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B0BA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B0BB mov [0x00605AD5], al
	{ uint32_t ea = (uint32_t)(0x605AD5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B0C0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B0AA, __imp__sub_0045B0AA)

X86_FUNC(__imp__sub_0045B0C1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B0C1 push 0x5B5D28
	{ uint32_t v = (uint32_t)(0x5B5D28u); X86_PUSH32(v); }
	// 0045B0C6 push 0x92
	{ uint32_t v = (uint32_t)(0x92u); X86_PUSH32(v); }
	// 0045B0CB call 0x0006800A
	X86_PUSH32(0x45B0D0u); sub_0006800A(ctx, base);
	// 0045B0D0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B0D1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B0D2 mov [0x00605AD6], al
	{ uint32_t ea = (uint32_t)(0x605AD6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B0D7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B0C1, __imp__sub_0045B0C1)

X86_FUNC(__imp__sub_0045B0D8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B0D8 push 0x5B5D2C
	{ uint32_t v = (uint32_t)(0x5B5D2Cu); X86_PUSH32(v); }
	// 0045B0DD push 0x93
	{ uint32_t v = (uint32_t)(0x93u); X86_PUSH32(v); }
	// 0045B0E2 call 0x0006800A
	X86_PUSH32(0x45B0E7u); sub_0006800A(ctx, base);
	// 0045B0E7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B0E8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B0E9 mov [0x00605AD7], al
	{ uint32_t ea = (uint32_t)(0x605AD7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B0EE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B0D8, __imp__sub_0045B0D8)

X86_FUNC(__imp__sub_0045B0EF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B0EF push 0x5B5D30
	{ uint32_t v = (uint32_t)(0x5B5D30u); X86_PUSH32(v); }
	// 0045B0F4 push 0x94
	{ uint32_t v = (uint32_t)(0x94u); X86_PUSH32(v); }
	// 0045B0F9 call 0x0006800A
	X86_PUSH32(0x45B0FEu); sub_0006800A(ctx, base);
	// 0045B0FE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B0FF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B100 mov [0x00605AD8], al
	{ uint32_t ea = (uint32_t)(0x605AD8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B105 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B0EF, __imp__sub_0045B0EF)

X86_FUNC(__imp__sub_0045B106) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B106 push 0x5B5D34
	{ uint32_t v = (uint32_t)(0x5B5D34u); X86_PUSH32(v); }
	// 0045B10B push 0x95
	{ uint32_t v = (uint32_t)(0x95u); X86_PUSH32(v); }
	// 0045B110 call 0x0006800A
	X86_PUSH32(0x45B115u); sub_0006800A(ctx, base);
	// 0045B115 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B116 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B117 mov [0x00605AD9], al
	{ uint32_t ea = (uint32_t)(0x605AD9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B11C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B106, __imp__sub_0045B106)

X86_FUNC(__imp__sub_0045B11D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B11D push 0x5B5D38
	{ uint32_t v = (uint32_t)(0x5B5D38u); X86_PUSH32(v); }
	// 0045B122 push 0x96
	{ uint32_t v = (uint32_t)(0x96u); X86_PUSH32(v); }
	// 0045B127 call 0x0006800A
	X86_PUSH32(0x45B12Cu); sub_0006800A(ctx, base);
	// 0045B12C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B12D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B12E mov [0x00605ADA], al
	{ uint32_t ea = (uint32_t)(0x605ADAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B133 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B11D, __imp__sub_0045B11D)

X86_FUNC(__imp__sub_0045B134) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B134 push 0x5B5D3C
	{ uint32_t v = (uint32_t)(0x5B5D3Cu); X86_PUSH32(v); }
	// 0045B139 push 0x97
	{ uint32_t v = (uint32_t)(0x97u); X86_PUSH32(v); }
	// 0045B13E call 0x0006800A
	X86_PUSH32(0x45B143u); sub_0006800A(ctx, base);
	// 0045B143 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B144 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B145 mov [0x00605ADB], al
	{ uint32_t ea = (uint32_t)(0x605ADBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B14A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B134, __imp__sub_0045B134)

X86_FUNC(__imp__sub_0045B14B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B14B push 0x5B5D40
	{ uint32_t v = (uint32_t)(0x5B5D40u); X86_PUSH32(v); }
	// 0045B150 push 0x98
	{ uint32_t v = (uint32_t)(0x98u); X86_PUSH32(v); }
	// 0045B155 call 0x0006800A
	X86_PUSH32(0x45B15Au); sub_0006800A(ctx, base);
	// 0045B15A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B15B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B15C mov [0x00605ADC], al
	{ uint32_t ea = (uint32_t)(0x605ADCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B161 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B14B, __imp__sub_0045B14B)

X86_FUNC(__imp__sub_0045B162) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B162 push 0x5B5D44
	{ uint32_t v = (uint32_t)(0x5B5D44u); X86_PUSH32(v); }
	// 0045B167 push 0x99
	{ uint32_t v = (uint32_t)(0x99u); X86_PUSH32(v); }
	// 0045B16C call 0x0006800A
	X86_PUSH32(0x45B171u); sub_0006800A(ctx, base);
	// 0045B171 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B172 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B173 mov [0x00605ADD], al
	{ uint32_t ea = (uint32_t)(0x605ADDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B178 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B162, __imp__sub_0045B162)

X86_FUNC(__imp__sub_0045B179) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B179 push 0x5B5D48
	{ uint32_t v = (uint32_t)(0x5B5D48u); X86_PUSH32(v); }
	// 0045B17E push 0x9A
	{ uint32_t v = (uint32_t)(0x9Au); X86_PUSH32(v); }
	// 0045B183 call 0x0006800A
	X86_PUSH32(0x45B188u); sub_0006800A(ctx, base);
	// 0045B188 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B189 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B18A mov [0x00605ADE], al
	{ uint32_t ea = (uint32_t)(0x605ADEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B18F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B179, __imp__sub_0045B179)

X86_FUNC(__imp__sub_0045B190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B190 push 0x5B5D4C
	{ uint32_t v = (uint32_t)(0x5B5D4Cu); X86_PUSH32(v); }
	// 0045B195 push 0x9B
	{ uint32_t v = (uint32_t)(0x9Bu); X86_PUSH32(v); }
	// 0045B19A call 0x0006800A
	X86_PUSH32(0x45B19Fu); sub_0006800A(ctx, base);
	// 0045B19F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B1A0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B1A1 mov [0x00605ADF], al
	{ uint32_t ea = (uint32_t)(0x605ADFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B1A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B190, __imp__sub_0045B190)

X86_FUNC(__imp__sub_0045B1A7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B1A7 push 0x5B5D50
	{ uint32_t v = (uint32_t)(0x5B5D50u); X86_PUSH32(v); }
	// 0045B1AC push 0x9C
	{ uint32_t v = (uint32_t)(0x9Cu); X86_PUSH32(v); }
	// 0045B1B1 call 0x0006800A
	X86_PUSH32(0x45B1B6u); sub_0006800A(ctx, base);
	// 0045B1B6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B1B7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B1B8 mov [0x00605AE0], al
	{ uint32_t ea = (uint32_t)(0x605AE0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B1BD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B1A7, __imp__sub_0045B1A7)

X86_FUNC(__imp__sub_0045B1BE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B1BE push 0x5B5D54
	{ uint32_t v = (uint32_t)(0x5B5D54u); X86_PUSH32(v); }
	// 0045B1C3 push 0x9D
	{ uint32_t v = (uint32_t)(0x9Du); X86_PUSH32(v); }
	// 0045B1C8 call 0x0006800A
	X86_PUSH32(0x45B1CDu); sub_0006800A(ctx, base);
	// 0045B1CD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B1CE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B1CF mov [0x00605AE1], al
	{ uint32_t ea = (uint32_t)(0x605AE1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B1D4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B1BE, __imp__sub_0045B1BE)

X86_FUNC(__imp__sub_0045B1D5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B1D5 push 0x5B5D58
	{ uint32_t v = (uint32_t)(0x5B5D58u); X86_PUSH32(v); }
	// 0045B1DA push 0x9E
	{ uint32_t v = (uint32_t)(0x9Eu); X86_PUSH32(v); }
	// 0045B1DF call 0x0006800A
	X86_PUSH32(0x45B1E4u); sub_0006800A(ctx, base);
	// 0045B1E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B1E5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B1E6 mov [0x00605AE2], al
	{ uint32_t ea = (uint32_t)(0x605AE2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B1EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B1D5, __imp__sub_0045B1D5)

X86_FUNC(__imp__sub_0045B1EC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B1EC push 0x5B5D5C
	{ uint32_t v = (uint32_t)(0x5B5D5Cu); X86_PUSH32(v); }
	// 0045B1F1 push 0x9F
	{ uint32_t v = (uint32_t)(0x9Fu); X86_PUSH32(v); }
	// 0045B1F6 call 0x0006800A
	X86_PUSH32(0x45B1FBu); sub_0006800A(ctx, base);
	// 0045B1FB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B1FC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B1FD mov [0x00605AE3], al
	{ uint32_t ea = (uint32_t)(0x605AE3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B202 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B1EC, __imp__sub_0045B1EC)

X86_FUNC(__imp__sub_0045B203) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B203 push 0x5B5D60
	{ uint32_t v = (uint32_t)(0x5B5D60u); X86_PUSH32(v); }
	// 0045B208 push 0xA0
	{ uint32_t v = (uint32_t)(0xA0u); X86_PUSH32(v); }
	// 0045B20D call 0x0006800A
	X86_PUSH32(0x45B212u); sub_0006800A(ctx, base);
	// 0045B212 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B213 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B214 mov [0x00605AE4], al
	{ uint32_t ea = (uint32_t)(0x605AE4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B219 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B203, __imp__sub_0045B203)

X86_FUNC(__imp__sub_0045B21A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B21A push 0x5B5D64
	{ uint32_t v = (uint32_t)(0x5B5D64u); X86_PUSH32(v); }
	// 0045B21F push 0xA1
	{ uint32_t v = (uint32_t)(0xA1u); X86_PUSH32(v); }
	// 0045B224 call 0x0006800A
	X86_PUSH32(0x45B229u); sub_0006800A(ctx, base);
	// 0045B229 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B22A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B22B mov [0x00605AE5], al
	{ uint32_t ea = (uint32_t)(0x605AE5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B230 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B21A, __imp__sub_0045B21A)

X86_FUNC(__imp__sub_0045B231) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B231 push 0x5B5D68
	{ uint32_t v = (uint32_t)(0x5B5D68u); X86_PUSH32(v); }
	// 0045B236 push 0xA2
	{ uint32_t v = (uint32_t)(0xA2u); X86_PUSH32(v); }
	// 0045B23B call 0x0006800A
	X86_PUSH32(0x45B240u); sub_0006800A(ctx, base);
	// 0045B240 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B241 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B242 mov [0x00605AE6], al
	{ uint32_t ea = (uint32_t)(0x605AE6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B247 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B231, __imp__sub_0045B231)

X86_FUNC(__imp__sub_0045B248) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B248 push 0x5B5D6C
	{ uint32_t v = (uint32_t)(0x5B5D6Cu); X86_PUSH32(v); }
	// 0045B24D push 0xA3
	{ uint32_t v = (uint32_t)(0xA3u); X86_PUSH32(v); }
	// 0045B252 call 0x0006800A
	X86_PUSH32(0x45B257u); sub_0006800A(ctx, base);
	// 0045B257 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B258 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B259 mov [0x00605AE7], al
	{ uint32_t ea = (uint32_t)(0x605AE7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B25E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B248, __imp__sub_0045B248)

X86_FUNC(__imp__sub_0045B25F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B25F push 0x5B5D70
	{ uint32_t v = (uint32_t)(0x5B5D70u); X86_PUSH32(v); }
	// 0045B264 push 0xA4
	{ uint32_t v = (uint32_t)(0xA4u); X86_PUSH32(v); }
	// 0045B269 call 0x0006800A
	X86_PUSH32(0x45B26Eu); sub_0006800A(ctx, base);
	// 0045B26E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B26F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B270 mov [0x00605AE8], al
	{ uint32_t ea = (uint32_t)(0x605AE8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B275 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B25F, __imp__sub_0045B25F)

X86_FUNC(__imp__sub_0045B276) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B276 push 0x5B5D74
	{ uint32_t v = (uint32_t)(0x5B5D74u); X86_PUSH32(v); }
	// 0045B27B push 0xA5
	{ uint32_t v = (uint32_t)(0xA5u); X86_PUSH32(v); }
	// 0045B280 call 0x0006800A
	X86_PUSH32(0x45B285u); sub_0006800A(ctx, base);
	// 0045B285 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B286 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B287 mov [0x00605AE9], al
	{ uint32_t ea = (uint32_t)(0x605AE9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B28C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B276, __imp__sub_0045B276)

X86_FUNC(__imp__sub_0045B28D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B28D push 0x5B5D78
	{ uint32_t v = (uint32_t)(0x5B5D78u); X86_PUSH32(v); }
	// 0045B292 push 0xA6
	{ uint32_t v = (uint32_t)(0xA6u); X86_PUSH32(v); }
	// 0045B297 call 0x0006800A
	X86_PUSH32(0x45B29Cu); sub_0006800A(ctx, base);
	// 0045B29C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B29D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B29E mov [0x00605AEA], al
	{ uint32_t ea = (uint32_t)(0x605AEAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B2A3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B28D, __imp__sub_0045B28D)

X86_FUNC(__imp__sub_0045B2A4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B2A4 push 0x5B5D7C
	{ uint32_t v = (uint32_t)(0x5B5D7Cu); X86_PUSH32(v); }
	// 0045B2A9 push 0xA7
	{ uint32_t v = (uint32_t)(0xA7u); X86_PUSH32(v); }
	// 0045B2AE call 0x0006800A
	X86_PUSH32(0x45B2B3u); sub_0006800A(ctx, base);
	// 0045B2B3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B2B4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B2B5 mov [0x00605AEB], al
	{ uint32_t ea = (uint32_t)(0x605AEBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B2BA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B2A4, __imp__sub_0045B2A4)

X86_FUNC(__imp__sub_0045B2BB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B2BB push 0x5B5D80
	{ uint32_t v = (uint32_t)(0x5B5D80u); X86_PUSH32(v); }
	// 0045B2C0 push 0xF9
	{ uint32_t v = (uint32_t)(0xF9u); X86_PUSH32(v); }
	// 0045B2C5 call 0x0006800A
	X86_PUSH32(0x45B2CAu); sub_0006800A(ctx, base);
	// 0045B2CA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B2CB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B2CC mov [0x00605AEC], al
	{ uint32_t ea = (uint32_t)(0x605AECu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B2D1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B2BB, __imp__sub_0045B2BB)

X86_FUNC(__imp__sub_0045B2D2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B2D2 push 0x5B5D84
	{ uint32_t v = (uint32_t)(0x5B5D84u); X86_PUSH32(v); }
	// 0045B2D7 push 0xFA
	{ uint32_t v = (uint32_t)(0xFAu); X86_PUSH32(v); }
	// 0045B2DC call 0x0006800A
	X86_PUSH32(0x45B2E1u); sub_0006800A(ctx, base);
	// 0045B2E1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B2E2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B2E3 mov [0x00605AED], al
	{ uint32_t ea = (uint32_t)(0x605AEDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B2E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B2D2, __imp__sub_0045B2D2)

X86_FUNC(__imp__sub_0045B2E9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B2E9 push 0x5B5D88
	{ uint32_t v = (uint32_t)(0x5B5D88u); X86_PUSH32(v); }
	// 0045B2EE push 0xFB
	{ uint32_t v = (uint32_t)(0xFBu); X86_PUSH32(v); }
	// 0045B2F3 call 0x0006800A
	X86_PUSH32(0x45B2F8u); sub_0006800A(ctx, base);
	// 0045B2F8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B2F9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B2FA mov [0x00605AEE], al
	{ uint32_t ea = (uint32_t)(0x605AEEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B2FF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B2E9, __imp__sub_0045B2E9)

X86_FUNC(__imp__sub_0045B300) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B300 push 0x5B5D8C
	{ uint32_t v = (uint32_t)(0x5B5D8Cu); X86_PUSH32(v); }
	// 0045B305 push 0xA9
	{ uint32_t v = (uint32_t)(0xA9u); X86_PUSH32(v); }
	// 0045B30A call 0x0006800A
	X86_PUSH32(0x45B30Fu); sub_0006800A(ctx, base);
	// 0045B30F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B310 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B311 mov [0x00605AEF], al
	{ uint32_t ea = (uint32_t)(0x605AEFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B316 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B300, __imp__sub_0045B300)

X86_FUNC(__imp__sub_0045B317) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B317 push 0x5B5D90
	{ uint32_t v = (uint32_t)(0x5B5D90u); X86_PUSH32(v); }
	// 0045B31C push 0xAA
	{ uint32_t v = (uint32_t)(0xAAu); X86_PUSH32(v); }
	// 0045B321 call 0x0006800A
	X86_PUSH32(0x45B326u); sub_0006800A(ctx, base);
	// 0045B326 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B327 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B328 mov [0x00605AF0], al
	{ uint32_t ea = (uint32_t)(0x605AF0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B32D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B317, __imp__sub_0045B317)

X86_FUNC(__imp__sub_0045B32E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B32E push 0x5B5D94
	{ uint32_t v = (uint32_t)(0x5B5D94u); X86_PUSH32(v); }
	// 0045B333 push 0xAB
	{ uint32_t v = (uint32_t)(0xABu); X86_PUSH32(v); }
	// 0045B338 call 0x0006800A
	X86_PUSH32(0x45B33Du); sub_0006800A(ctx, base);
	// 0045B33D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B33E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B33F mov [0x00605AF1], al
	{ uint32_t ea = (uint32_t)(0x605AF1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B344 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B32E, __imp__sub_0045B32E)

X86_FUNC(__imp__sub_0045B345) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B345 push 0x5B5D98
	{ uint32_t v = (uint32_t)(0x5B5D98u); X86_PUSH32(v); }
	// 0045B34A push 0xAC
	{ uint32_t v = (uint32_t)(0xACu); X86_PUSH32(v); }
	// 0045B34F call 0x0006800A
	X86_PUSH32(0x45B354u); sub_0006800A(ctx, base);
	// 0045B354 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B355 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B356 mov [0x00605AF2], al
	{ uint32_t ea = (uint32_t)(0x605AF2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B35B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B345, __imp__sub_0045B345)

X86_FUNC(__imp__sub_0045B35C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B35C push 0x5B5D9C
	{ uint32_t v = (uint32_t)(0x5B5D9Cu); X86_PUSH32(v); }
	// 0045B361 push 0xAD
	{ uint32_t v = (uint32_t)(0xADu); X86_PUSH32(v); }
	// 0045B366 call 0x0006800A
	X86_PUSH32(0x45B36Bu); sub_0006800A(ctx, base);
	// 0045B36B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B36C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B36D mov [0x00605AF3], al
	{ uint32_t ea = (uint32_t)(0x605AF3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B372 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B35C, __imp__sub_0045B35C)

X86_FUNC(__imp__sub_0045B373) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B373 push 0x5B5DA0
	{ uint32_t v = (uint32_t)(0x5B5DA0u); X86_PUSH32(v); }
	// 0045B378 push 0xAE
	{ uint32_t v = (uint32_t)(0xAEu); X86_PUSH32(v); }
	// 0045B37D call 0x0006800A
	X86_PUSH32(0x45B382u); sub_0006800A(ctx, base);
	// 0045B382 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B383 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B384 mov [0x00605AF4], al
	{ uint32_t ea = (uint32_t)(0x605AF4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B389 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B373, __imp__sub_0045B373)

X86_FUNC(__imp__sub_0045B38A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B38A push 0x5B5DA4
	{ uint32_t v = (uint32_t)(0x5B5DA4u); X86_PUSH32(v); }
	// 0045B38F push 0xAF
	{ uint32_t v = (uint32_t)(0xAFu); X86_PUSH32(v); }
	// 0045B394 call 0x0006800A
	X86_PUSH32(0x45B399u); sub_0006800A(ctx, base);
	// 0045B399 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B39A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B39B mov [0x00605AF5], al
	{ uint32_t ea = (uint32_t)(0x605AF5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B3A0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B38A, __imp__sub_0045B38A)

X86_FUNC(__imp__sub_0045B3A1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B3A1 push 0x5B5DA8
	{ uint32_t v = (uint32_t)(0x5B5DA8u); X86_PUSH32(v); }
	// 0045B3A6 push 0xB0
	{ uint32_t v = (uint32_t)(0xB0u); X86_PUSH32(v); }
	// 0045B3AB call 0x0006800A
	X86_PUSH32(0x45B3B0u); sub_0006800A(ctx, base);
	// 0045B3B0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B3B1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B3B2 mov [0x00605AF6], al
	{ uint32_t ea = (uint32_t)(0x605AF6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B3B7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B3A1, __imp__sub_0045B3A1)

X86_FUNC(__imp__sub_0045B3B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B3B8 push 0x5B5DAC
	{ uint32_t v = (uint32_t)(0x5B5DACu); X86_PUSH32(v); }
	// 0045B3BD push 0xB1
	{ uint32_t v = (uint32_t)(0xB1u); X86_PUSH32(v); }
	// 0045B3C2 call 0x0006800A
	X86_PUSH32(0x45B3C7u); sub_0006800A(ctx, base);
	// 0045B3C7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B3C8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B3C9 mov [0x00605AF7], al
	{ uint32_t ea = (uint32_t)(0x605AF7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B3CE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B3B8, __imp__sub_0045B3B8)

X86_FUNC(__imp__sub_0045B3CF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B3CF push 0x5B5DB0
	{ uint32_t v = (uint32_t)(0x5B5DB0u); X86_PUSH32(v); }
	// 0045B3D4 push 0xB2
	{ uint32_t v = (uint32_t)(0xB2u); X86_PUSH32(v); }
	// 0045B3D9 call 0x0006800A
	X86_PUSH32(0x45B3DEu); sub_0006800A(ctx, base);
	// 0045B3DE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B3DF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B3E0 mov [0x00605AF8], al
	{ uint32_t ea = (uint32_t)(0x605AF8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B3E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B3CF, __imp__sub_0045B3CF)

X86_FUNC(__imp__sub_0045B3E6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B3E6 push 0x5B5DB4
	{ uint32_t v = (uint32_t)(0x5B5DB4u); X86_PUSH32(v); }
	// 0045B3EB push 0xB3
	{ uint32_t v = (uint32_t)(0xB3u); X86_PUSH32(v); }
	// 0045B3F0 call 0x0006800A
	X86_PUSH32(0x45B3F5u); sub_0006800A(ctx, base);
	// 0045B3F5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B3F6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B3F7 mov [0x00605AF9], al
	{ uint32_t ea = (uint32_t)(0x605AF9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B3FC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B3E6, __imp__sub_0045B3E6)

X86_FUNC(__imp__sub_0045B3FD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B3FD push 0x5B5DB8
	{ uint32_t v = (uint32_t)(0x5B5DB8u); X86_PUSH32(v); }
	// 0045B402 push 0xB4
	{ uint32_t v = (uint32_t)(0xB4u); X86_PUSH32(v); }
	// 0045B407 call 0x0006800A
	X86_PUSH32(0x45B40Cu); sub_0006800A(ctx, base);
	// 0045B40C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B40D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B40E mov [0x00605AFA], al
	{ uint32_t ea = (uint32_t)(0x605AFAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B413 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B3FD, __imp__sub_0045B3FD)

X86_FUNC(__imp__sub_0045B414) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B414 push 0x5B5DBC
	{ uint32_t v = (uint32_t)(0x5B5DBCu); X86_PUSH32(v); }
	// 0045B419 push 0xB5
	{ uint32_t v = (uint32_t)(0xB5u); X86_PUSH32(v); }
	// 0045B41E call 0x0006800A
	X86_PUSH32(0x45B423u); sub_0006800A(ctx, base);
	// 0045B423 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B424 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B425 mov [0x00605AFB], al
	{ uint32_t ea = (uint32_t)(0x605AFBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B42A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B414, __imp__sub_0045B414)

X86_FUNC(__imp__sub_0045B42B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B42B push 0x5B5DC0
	{ uint32_t v = (uint32_t)(0x5B5DC0u); X86_PUSH32(v); }
	// 0045B430 push 0xD2
	{ uint32_t v = (uint32_t)(0xD2u); X86_PUSH32(v); }
	// 0045B435 call 0x0006800A
	X86_PUSH32(0x45B43Au); sub_0006800A(ctx, base);
	// 0045B43A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B43B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B43C mov [0x00605AFC], al
	{ uint32_t ea = (uint32_t)(0x605AFCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B441 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B42B, __imp__sub_0045B42B)

X86_FUNC(__imp__sub_0045B442) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B442 push 0x5B5DC4
	{ uint32_t v = (uint32_t)(0x5B5DC4u); X86_PUSH32(v); }
	// 0045B447 push 0xB6
	{ uint32_t v = (uint32_t)(0xB6u); X86_PUSH32(v); }
	// 0045B44C call 0x0006800A
	X86_PUSH32(0x45B451u); sub_0006800A(ctx, base);
	// 0045B451 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B452 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B453 mov [0x00605AFD], al
	{ uint32_t ea = (uint32_t)(0x605AFDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B458 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B442, __imp__sub_0045B442)

X86_FUNC(__imp__sub_0045B459) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B459 push 0x5B5DC8
	{ uint32_t v = (uint32_t)(0x5B5DC8u); X86_PUSH32(v); }
	// 0045B45E push 0xB7
	{ uint32_t v = (uint32_t)(0xB7u); X86_PUSH32(v); }
	// 0045B463 call 0x0006800A
	X86_PUSH32(0x45B468u); sub_0006800A(ctx, base);
	// 0045B468 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B469 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B46A mov [0x00605AFE], al
	{ uint32_t ea = (uint32_t)(0x605AFEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B46F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B459, __imp__sub_0045B459)

X86_FUNC(__imp__sub_0045B470) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B470 push 0x5B5DCC
	{ uint32_t v = (uint32_t)(0x5B5DCCu); X86_PUSH32(v); }
	// 0045B475 push 0xB8
	{ uint32_t v = (uint32_t)(0xB8u); X86_PUSH32(v); }
	// 0045B47A call 0x0006800A
	X86_PUSH32(0x45B47Fu); sub_0006800A(ctx, base);
	// 0045B47F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B480 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B481 mov [0x00605AFF], al
	{ uint32_t ea = (uint32_t)(0x605AFFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B486 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B470, __imp__sub_0045B470)

X86_FUNC(__imp__sub_0045B487) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B487 push 0x5B5DD0
	{ uint32_t v = (uint32_t)(0x5B5DD0u); X86_PUSH32(v); }
	// 0045B48C push 0xB9
	{ uint32_t v = (uint32_t)(0xB9u); X86_PUSH32(v); }
	// 0045B491 call 0x0006800A
	X86_PUSH32(0x45B496u); sub_0006800A(ctx, base);
	// 0045B496 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B497 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B498 mov [0x00605B00], al
	{ uint32_t ea = (uint32_t)(0x605B00u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B49D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B487, __imp__sub_0045B487)

X86_FUNC(__imp__sub_0045B49E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B49E push 0x5B5DD4
	{ uint32_t v = (uint32_t)(0x5B5DD4u); X86_PUSH32(v); }
	// 0045B4A3 push 0xBA
	{ uint32_t v = (uint32_t)(0xBAu); X86_PUSH32(v); }
	// 0045B4A8 call 0x0006800A
	X86_PUSH32(0x45B4ADu); sub_0006800A(ctx, base);
	// 0045B4AD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B4AE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B4AF mov [0x00605B01], al
	{ uint32_t ea = (uint32_t)(0x605B01u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B4B4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B49E, __imp__sub_0045B49E)

X86_FUNC(__imp__sub_0045B4B5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B4B5 push 0x5B5DD8
	{ uint32_t v = (uint32_t)(0x5B5DD8u); X86_PUSH32(v); }
	// 0045B4BA push 0xBB
	{ uint32_t v = (uint32_t)(0xBBu); X86_PUSH32(v); }
	// 0045B4BF call 0x0006800A
	X86_PUSH32(0x45B4C4u); sub_0006800A(ctx, base);
	// 0045B4C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B4C5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B4C6 mov [0x00605B02], al
	{ uint32_t ea = (uint32_t)(0x605B02u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B4CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B4B5, __imp__sub_0045B4B5)

X86_FUNC(__imp__sub_0045B4CC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B4CC push 0x5B5DDC
	{ uint32_t v = (uint32_t)(0x5B5DDCu); X86_PUSH32(v); }
	// 0045B4D1 push 0xBC
	{ uint32_t v = (uint32_t)(0xBCu); X86_PUSH32(v); }
	// 0045B4D6 call 0x0006800A
	X86_PUSH32(0x45B4DBu); sub_0006800A(ctx, base);
	// 0045B4DB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B4DC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B4DD mov [0x00605B03], al
	{ uint32_t ea = (uint32_t)(0x605B03u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B4E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B4CC, __imp__sub_0045B4CC)

X86_FUNC(__imp__sub_0045B4E3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B4E3 push 0x5B5DE0
	{ uint32_t v = (uint32_t)(0x5B5DE0u); X86_PUSH32(v); }
	// 0045B4E8 push 0xBD
	{ uint32_t v = (uint32_t)(0xBDu); X86_PUSH32(v); }
	// 0045B4ED call 0x0006800A
	X86_PUSH32(0x45B4F2u); sub_0006800A(ctx, base);
	// 0045B4F2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B4F3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B4F4 mov [0x00605B04], al
	{ uint32_t ea = (uint32_t)(0x605B04u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B4F9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B4E3, __imp__sub_0045B4E3)

X86_FUNC(__imp__sub_0045B4FA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B4FA push 0x5B5DE4
	{ uint32_t v = (uint32_t)(0x5B5DE4u); X86_PUSH32(v); }
	// 0045B4FF push 0xBE
	{ uint32_t v = (uint32_t)(0xBEu); X86_PUSH32(v); }
	// 0045B504 call 0x0006800A
	X86_PUSH32(0x45B509u); sub_0006800A(ctx, base);
	// 0045B509 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B50A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B50B mov [0x00605B05], al
	{ uint32_t ea = (uint32_t)(0x605B05u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B510 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B4FA, __imp__sub_0045B4FA)

X86_FUNC(__imp__sub_0045B511) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B511 push 0x5B5DE8
	{ uint32_t v = (uint32_t)(0x5B5DE8u); X86_PUSH32(v); }
	// 0045B516 push 0x5DE
	{ uint32_t v = (uint32_t)(0x5DEu); X86_PUSH32(v); }
	// 0045B51B call 0x0006800A
	X86_PUSH32(0x45B520u); sub_0006800A(ctx, base);
	// 0045B520 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B521 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B522 mov [0x00605B06], al
	{ uint32_t ea = (uint32_t)(0x605B06u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B527 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B511, __imp__sub_0045B511)

X86_FUNC(__imp__sub_0045B528) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B528 push 0x5B5DEC
	{ uint32_t v = (uint32_t)(0x5B5DECu); X86_PUSH32(v); }
	// 0045B52D push 0x44F
	{ uint32_t v = (uint32_t)(0x44Fu); X86_PUSH32(v); }
	// 0045B532 call 0x0006800A
	X86_PUSH32(0x45B537u); sub_0006800A(ctx, base);
	// 0045B537 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B538 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B539 mov [0x00605B07], al
	{ uint32_t ea = (uint32_t)(0x605B07u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B53E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B528, __imp__sub_0045B528)

X86_FUNC(__imp__sub_0045B53F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B53F push 0x5B5DF0
	{ uint32_t v = (uint32_t)(0x5B5DF0u); X86_PUSH32(v); }
	// 0045B544 push 0x516
	{ uint32_t v = (uint32_t)(0x516u); X86_PUSH32(v); }
	// 0045B549 call 0x0006800A
	X86_PUSH32(0x45B54Eu); sub_0006800A(ctx, base);
	// 0045B54E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B54F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B550 mov [0x00605B08], al
	{ uint32_t ea = (uint32_t)(0x605B08u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B555 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B53F, __imp__sub_0045B53F)

X86_FUNC(__imp__sub_0045B556) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B556 push 0x5B5DF4
	{ uint32_t v = (uint32_t)(0x5B5DF4u); X86_PUSH32(v); }
	// 0045B55B push 0x46E
	{ uint32_t v = (uint32_t)(0x46Eu); X86_PUSH32(v); }
	// 0045B560 call 0x0006800A
	X86_PUSH32(0x45B565u); sub_0006800A(ctx, base);
	// 0045B565 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B566 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B567 mov [0x00605B09], al
	{ uint32_t ea = (uint32_t)(0x605B09u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B56C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B556, __imp__sub_0045B556)

X86_FUNC(__imp__sub_0045B56D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B56D push 0x5B5DF8
	{ uint32_t v = (uint32_t)(0x5B5DF8u); X86_PUSH32(v); }
	// 0045B572 push 0x46F
	{ uint32_t v = (uint32_t)(0x46Fu); X86_PUSH32(v); }
	// 0045B577 call 0x0006800A
	X86_PUSH32(0x45B57Cu); sub_0006800A(ctx, base);
	// 0045B57C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B57D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B57E mov [0x00605B0A], al
	{ uint32_t ea = (uint32_t)(0x605B0Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B583 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B56D, __imp__sub_0045B56D)

X86_FUNC(__imp__sub_0045B584) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B584 push 0x5B5DFC
	{ uint32_t v = (uint32_t)(0x5B5DFCu); X86_PUSH32(v); }
	// 0045B589 push 0x470
	{ uint32_t v = (uint32_t)(0x470u); X86_PUSH32(v); }
	// 0045B58E call 0x0006800A
	X86_PUSH32(0x45B593u); sub_0006800A(ctx, base);
	// 0045B593 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B594 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B595 mov [0x00605B0B], al
	{ uint32_t ea = (uint32_t)(0x605B0Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B59A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B584, __imp__sub_0045B584)

X86_FUNC(__imp__sub_0045B59B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B59B push 0x5B5E00
	{ uint32_t v = (uint32_t)(0x5B5E00u); X86_PUSH32(v); }
	// 0045B5A0 push 0xBF
	{ uint32_t v = (uint32_t)(0xBFu); X86_PUSH32(v); }
	// 0045B5A5 call 0x0006800A
	X86_PUSH32(0x45B5AAu); sub_0006800A(ctx, base);
	// 0045B5AA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B5AB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B5AC mov [0x00605B0C], al
	{ uint32_t ea = (uint32_t)(0x605B0Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B5B1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B59B, __imp__sub_0045B59B)

X86_FUNC(__imp__sub_0045B5B2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B5B2 push 0x5B5E04
	{ uint32_t v = (uint32_t)(0x5B5E04u); X86_PUSH32(v); }
	// 0045B5B7 push 0xC0
	{ uint32_t v = (uint32_t)(0xC0u); X86_PUSH32(v); }
	// 0045B5BC call 0x0006800A
	X86_PUSH32(0x45B5C1u); sub_0006800A(ctx, base);
	// 0045B5C1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B5C2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B5C3 mov [0x00605B0D], al
	{ uint32_t ea = (uint32_t)(0x605B0Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B5C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B5B2, __imp__sub_0045B5B2)

X86_FUNC(__imp__sub_0045B5C9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B5C9 push 0x5B5E08
	{ uint32_t v = (uint32_t)(0x5B5E08u); X86_PUSH32(v); }
	// 0045B5CE push 0xC1
	{ uint32_t v = (uint32_t)(0xC1u); X86_PUSH32(v); }
	// 0045B5D3 call 0x0006800A
	X86_PUSH32(0x45B5D8u); sub_0006800A(ctx, base);
	// 0045B5D8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B5D9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B5DA mov [0x00605B0E], al
	{ uint32_t ea = (uint32_t)(0x605B0Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B5DF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B5C9, __imp__sub_0045B5C9)

X86_FUNC(__imp__sub_0045B5E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B5E0 push 0x5B5E0C
	{ uint32_t v = (uint32_t)(0x5B5E0Cu); X86_PUSH32(v); }
	// 0045B5E5 push 0xC2
	{ uint32_t v = (uint32_t)(0xC2u); X86_PUSH32(v); }
	// 0045B5EA call 0x0006800A
	X86_PUSH32(0x45B5EFu); sub_0006800A(ctx, base);
	// 0045B5EF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B5F0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B5F1 mov [0x00605B0F], al
	{ uint32_t ea = (uint32_t)(0x605B0Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B5F6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B5E0, __imp__sub_0045B5E0)

X86_FUNC(__imp__sub_0045B5F7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B5F7 push 0x5B5E10
	{ uint32_t v = (uint32_t)(0x5B5E10u); X86_PUSH32(v); }
	// 0045B5FC push 0xC3
	{ uint32_t v = (uint32_t)(0xC3u); X86_PUSH32(v); }
	// 0045B601 call 0x0006800A
	X86_PUSH32(0x45B606u); sub_0006800A(ctx, base);
	// 0045B606 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B607 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B608 mov [0x00605B10], al
	{ uint32_t ea = (uint32_t)(0x605B10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B60D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B5F7, __imp__sub_0045B5F7)

X86_FUNC(__imp__sub_0045B60E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B60E push 0x5B5E14
	{ uint32_t v = (uint32_t)(0x5B5E14u); X86_PUSH32(v); }
	// 0045B613 push 0xC5
	{ uint32_t v = (uint32_t)(0xC5u); X86_PUSH32(v); }
	// 0045B618 call 0x0006800A
	X86_PUSH32(0x45B61Du); sub_0006800A(ctx, base);
	// 0045B61D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B61E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B61F mov [0x00605B11], al
	{ uint32_t ea = (uint32_t)(0x605B11u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B624 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B60E, __imp__sub_0045B60E)

X86_FUNC(__imp__sub_0045B625) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B625 push 0x5B5E18
	{ uint32_t v = (uint32_t)(0x5B5E18u); X86_PUSH32(v); }
	// 0045B62A push 0xF4
	{ uint32_t v = (uint32_t)(0xF4u); X86_PUSH32(v); }
	// 0045B62F call 0x0006800A
	X86_PUSH32(0x45B634u); sub_0006800A(ctx, base);
	// 0045B634 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B635 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B636 mov [0x00605B12], al
	{ uint32_t ea = (uint32_t)(0x605B12u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B63B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B625, __imp__sub_0045B625)

X86_FUNC(__imp__sub_0045B63C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B63C push 0x5B5E1C
	{ uint32_t v = (uint32_t)(0x5B5E1Cu); X86_PUSH32(v); }
	// 0045B641 push 0xF5
	{ uint32_t v = (uint32_t)(0xF5u); X86_PUSH32(v); }
	// 0045B646 call 0x0006800A
	X86_PUSH32(0x45B64Bu); sub_0006800A(ctx, base);
	// 0045B64B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B64C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B64D mov [0x00605B13], al
	{ uint32_t ea = (uint32_t)(0x605B13u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B652 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B63C, __imp__sub_0045B63C)

X86_FUNC(__imp__sub_0045B653) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B653 push 0x5B5E20
	{ uint32_t v = (uint32_t)(0x5B5E20u); X86_PUSH32(v); }
	// 0045B658 push 0xF6
	{ uint32_t v = (uint32_t)(0xF6u); X86_PUSH32(v); }
	// 0045B65D call 0x0006800A
	X86_PUSH32(0x45B662u); sub_0006800A(ctx, base);
	// 0045B662 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B663 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B664 mov [0x00605B14], al
	{ uint32_t ea = (uint32_t)(0x605B14u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B669 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B653, __imp__sub_0045B653)

X86_FUNC(__imp__sub_0045B66A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B66A push 0x5B5E24
	{ uint32_t v = (uint32_t)(0x5B5E24u); X86_PUSH32(v); }
	// 0045B66F push 0xF7
	{ uint32_t v = (uint32_t)(0xF7u); X86_PUSH32(v); }
	// 0045B674 call 0x0006800A
	X86_PUSH32(0x45B679u); sub_0006800A(ctx, base);
	// 0045B679 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B67A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B67B mov [0x00605B15], al
	{ uint32_t ea = (uint32_t)(0x605B15u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B680 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B66A, __imp__sub_0045B66A)

X86_FUNC(__imp__sub_0045B681) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B681 push 0x5B5E28
	{ uint32_t v = (uint32_t)(0x5B5E28u); X86_PUSH32(v); }
	// 0045B686 push 0xF8
	{ uint32_t v = (uint32_t)(0xF8u); X86_PUSH32(v); }
	// 0045B68B call 0x0006800A
	X86_PUSH32(0x45B690u); sub_0006800A(ctx, base);
	// 0045B690 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B691 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B692 mov [0x00605B16], al
	{ uint32_t ea = (uint32_t)(0x605B16u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B697 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B681, __imp__sub_0045B681)

X86_FUNC(__imp__sub_0045B698) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B698 push 0x5B5E2C
	{ uint32_t v = (uint32_t)(0x5B5E2Cu); X86_PUSH32(v); }
	// 0045B69D push 0x22
	{ uint32_t v = (uint32_t)(0x22u); X86_PUSH32(v); }
	// 0045B69F call 0x0006800A
	X86_PUSH32(0x45B6A4u); sub_0006800A(ctx, base);
	// 0045B6A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B6A5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B6A6 mov [0x00605B17], al
	{ uint32_t ea = (uint32_t)(0x605B17u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B6AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B698, __imp__sub_0045B698)

X86_FUNC(__imp__sub_0045B6AC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B6AC push 0x5B5E30
	{ uint32_t v = (uint32_t)(0x5B5E30u); X86_PUSH32(v); }
	// 0045B6B1 push 0x23
	{ uint32_t v = (uint32_t)(0x23u); X86_PUSH32(v); }
	// 0045B6B3 call 0x0006800A
	X86_PUSH32(0x45B6B8u); sub_0006800A(ctx, base);
	// 0045B6B8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B6B9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B6BA mov [0x00605B18], al
	{ uint32_t ea = (uint32_t)(0x605B18u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B6BF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B6AC, __imp__sub_0045B6AC)

X86_FUNC(__imp__sub_0045B6C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B6C0 push 0x5B5E34
	{ uint32_t v = (uint32_t)(0x5B5E34u); X86_PUSH32(v); }
	// 0045B6C5 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045B6C7 call 0x0006800A
	X86_PUSH32(0x45B6CCu); sub_0006800A(ctx, base);
	// 0045B6CC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B6CD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B6CE mov [0x00605B19], al
	{ uint32_t ea = (uint32_t)(0x605B19u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B6D3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B6C0, __imp__sub_0045B6C0)

X86_FUNC(__imp__sub_0045B6D4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B6D4 push 0x5B5E34
	{ uint32_t v = (uint32_t)(0x5B5E34u); X86_PUSH32(v); }
	// 0045B6D9 push 0x4D
	{ uint32_t v = (uint32_t)(0x4Du); X86_PUSH32(v); }
	// 0045B6DB call 0x00068062
	X86_PUSH32(0x45B6E0u); sub_00068062(ctx, base);
	// 0045B6E0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B6E1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B6E2 mov [0x00605B1A], al
	{ uint32_t ea = (uint32_t)(0x605B1Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B6E7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B6D4, __imp__sub_0045B6D4)

X86_FUNC(__imp__sub_0045B6E8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B6E8 push 0x5B5E38
	{ uint32_t v = (uint32_t)(0x5B5E38u); X86_PUSH32(v); }
	// 0045B6ED push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045B6EF call 0x0006800A
	X86_PUSH32(0x45B6F4u); sub_0006800A(ctx, base);
	// 0045B6F4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B6F5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B6F6 mov [0x00605B1B], al
	{ uint32_t ea = (uint32_t)(0x605B1Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B6FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B6E8, __imp__sub_0045B6E8)

X86_FUNC(__imp__sub_0045B6FC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B6FC push 0x5B5E38
	{ uint32_t v = (uint32_t)(0x5B5E38u); X86_PUSH32(v); }
	// 0045B701 push 0x4E
	{ uint32_t v = (uint32_t)(0x4Eu); X86_PUSH32(v); }
	// 0045B703 call 0x00068062
	X86_PUSH32(0x45B708u); sub_00068062(ctx, base);
	// 0045B708 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B709 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B70A mov [0x00605B1C], al
	{ uint32_t ea = (uint32_t)(0x605B1Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B70F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B6FC, __imp__sub_0045B6FC)

X86_FUNC(__imp__sub_0045B710) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B710 push 0x5B5E3C
	{ uint32_t v = (uint32_t)(0x5B5E3Cu); X86_PUSH32(v); }
	// 0045B715 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045B717 call 0x0006800A
	X86_PUSH32(0x45B71Cu); sub_0006800A(ctx, base);
	// 0045B71C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B71D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B71E mov [0x00605B1D], al
	{ uint32_t ea = (uint32_t)(0x605B1Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B723 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B710, __imp__sub_0045B710)

X86_FUNC(__imp__sub_0045B724) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B724 push 0x5B5E3C
	{ uint32_t v = (uint32_t)(0x5B5E3Cu); X86_PUSH32(v); }
	// 0045B729 push 0x4F
	{ uint32_t v = (uint32_t)(0x4Fu); X86_PUSH32(v); }
	// 0045B72B call 0x00068062
	X86_PUSH32(0x45B730u); sub_00068062(ctx, base);
	// 0045B730 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B731 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B732 mov [0x00605B1E], al
	{ uint32_t ea = (uint32_t)(0x605B1Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B737 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B724, __imp__sub_0045B724)

X86_FUNC(__imp__sub_0045B738) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B738 push 0x5B5E40
	{ uint32_t v = (uint32_t)(0x5B5E40u); X86_PUSH32(v); }
	// 0045B73D push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045B73F call 0x0006800A
	X86_PUSH32(0x45B744u); sub_0006800A(ctx, base);
	// 0045B744 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B745 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B746 mov [0x00605B1F], al
	{ uint32_t ea = (uint32_t)(0x605B1Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B74B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B738, __imp__sub_0045B738)

X86_FUNC(__imp__sub_0045B74C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B74C push 0x5B5E40
	{ uint32_t v = (uint32_t)(0x5B5E40u); X86_PUSH32(v); }
	// 0045B751 push 0x58
	{ uint32_t v = (uint32_t)(0x58u); X86_PUSH32(v); }
	// 0045B753 call 0x00068062
	X86_PUSH32(0x45B758u); sub_00068062(ctx, base);
	// 0045B758 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B759 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B75A mov [0x00605B20], al
	{ uint32_t ea = (uint32_t)(0x605B20u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B75F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B74C, __imp__sub_0045B74C)

X86_FUNC(__imp__sub_0045B760) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B760 push 0x5B5E44
	{ uint32_t v = (uint32_t)(0x5B5E44u); X86_PUSH32(v); }
	// 0045B765 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045B767 call 0x0006800A
	X86_PUSH32(0x45B76Cu); sub_0006800A(ctx, base);
	// 0045B76C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B76D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B76E mov [0x00605B21], al
	{ uint32_t ea = (uint32_t)(0x605B21u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B773 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B760, __imp__sub_0045B760)

X86_FUNC(__imp__sub_0045B774) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B774 push 0x5B5E44
	{ uint32_t v = (uint32_t)(0x5B5E44u); X86_PUSH32(v); }
	// 0045B779 push 0x50
	{ uint32_t v = (uint32_t)(0x50u); X86_PUSH32(v); }
	// 0045B77B call 0x00068062
	X86_PUSH32(0x45B780u); sub_00068062(ctx, base);
	// 0045B780 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B781 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B782 mov [0x00605B22], al
	{ uint32_t ea = (uint32_t)(0x605B22u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B787 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B774, __imp__sub_0045B774)

X86_FUNC(__imp__sub_0045B788) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B788 push 0x5B5E48
	{ uint32_t v = (uint32_t)(0x5B5E48u); X86_PUSH32(v); }
	// 0045B78D push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045B78F call 0x0006800A
	X86_PUSH32(0x45B794u); sub_0006800A(ctx, base);
	// 0045B794 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B795 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B796 mov [0x00605B23], al
	{ uint32_t ea = (uint32_t)(0x605B23u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B79B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B788, __imp__sub_0045B788)

X86_FUNC(__imp__sub_0045B79C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B79C push 0x5B5E48
	{ uint32_t v = (uint32_t)(0x5B5E48u); X86_PUSH32(v); }
	// 0045B7A1 push 0x51
	{ uint32_t v = (uint32_t)(0x51u); X86_PUSH32(v); }
	// 0045B7A3 call 0x00068062
	X86_PUSH32(0x45B7A8u); sub_00068062(ctx, base);
	// 0045B7A8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B7A9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B7AA mov [0x00605B24], al
	{ uint32_t ea = (uint32_t)(0x605B24u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B7AF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B79C, __imp__sub_0045B79C)

X86_FUNC(__imp__sub_0045B7B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B7B0 push 0x5B5E4C
	{ uint32_t v = (uint32_t)(0x5B5E4Cu); X86_PUSH32(v); }
	// 0045B7B5 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045B7B7 call 0x0006800A
	X86_PUSH32(0x45B7BCu); sub_0006800A(ctx, base);
	// 0045B7BC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B7BD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B7BE mov [0x00605B25], al
	{ uint32_t ea = (uint32_t)(0x605B25u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B7C3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B7B0, __imp__sub_0045B7B0)

X86_FUNC(__imp__sub_0045B7C4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B7C4 push 0x5B5E4C
	{ uint32_t v = (uint32_t)(0x5B5E4Cu); X86_PUSH32(v); }
	// 0045B7C9 push 0x39
	{ uint32_t v = (uint32_t)(0x39u); X86_PUSH32(v); }
	// 0045B7CB call 0x00068062
	X86_PUSH32(0x45B7D0u); sub_00068062(ctx, base);
	// 0045B7D0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B7D1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B7D2 mov [0x00605B26], al
	{ uint32_t ea = (uint32_t)(0x605B26u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B7D7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B7C4, __imp__sub_0045B7C4)

X86_FUNC(__imp__sub_0045B7D8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B7D8 push 0x5B5E50
	{ uint32_t v = (uint32_t)(0x5B5E50u); X86_PUSH32(v); }
	// 0045B7DD push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045B7DF call 0x0006800A
	X86_PUSH32(0x45B7E4u); sub_0006800A(ctx, base);
	// 0045B7E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B7E5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B7E6 mov [0x00605B27], al
	{ uint32_t ea = (uint32_t)(0x605B27u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B7EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B7D8, __imp__sub_0045B7D8)

X86_FUNC(__imp__sub_0045B7EC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B7EC push 0x5B5E50
	{ uint32_t v = (uint32_t)(0x5B5E50u); X86_PUSH32(v); }
	// 0045B7F1 push 0x59
	{ uint32_t v = (uint32_t)(0x59u); X86_PUSH32(v); }
	// 0045B7F3 call 0x00068062
	X86_PUSH32(0x45B7F8u); sub_00068062(ctx, base);
	// 0045B7F8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B7F9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B7FA mov [0x00605B28], al
	{ uint32_t ea = (uint32_t)(0x605B28u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B7FF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B7EC, __imp__sub_0045B7EC)

X86_FUNC(__imp__sub_0045B800) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B800 push 0x5B5E54
	{ uint32_t v = (uint32_t)(0x5B5E54u); X86_PUSH32(v); }
	// 0045B805 push 0xD3
	{ uint32_t v = (uint32_t)(0xD3u); X86_PUSH32(v); }
	// 0045B80A call 0x0006800A
	X86_PUSH32(0x45B80Fu); sub_0006800A(ctx, base);
	// 0045B80F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B810 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B811 mov [0x00605B29], al
	{ uint32_t ea = (uint32_t)(0x605B29u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B816 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B800, __imp__sub_0045B800)

X86_FUNC(__imp__sub_0045B817) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B817 push 0x5B5E58
	{ uint32_t v = (uint32_t)(0x5B5E58u); X86_PUSH32(v); }
	// 0045B81C push 0xD4
	{ uint32_t v = (uint32_t)(0xD4u); X86_PUSH32(v); }
	// 0045B821 call 0x0006800A
	X86_PUSH32(0x45B826u); sub_0006800A(ctx, base);
	// 0045B826 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B827 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B828 mov [0x00605B2A], al
	{ uint32_t ea = (uint32_t)(0x605B2Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B82D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B817, __imp__sub_0045B817)

X86_FUNC(__imp__sub_0045B82E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B82E push 0x5B5E5C
	{ uint32_t v = (uint32_t)(0x5B5E5Cu); X86_PUSH32(v); }
	// 0045B833 push 0xD5
	{ uint32_t v = (uint32_t)(0xD5u); X86_PUSH32(v); }
	// 0045B838 call 0x0006800A
	X86_PUSH32(0x45B83Du); sub_0006800A(ctx, base);
	// 0045B83D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B83E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B83F mov [0x00605B2B], al
	{ uint32_t ea = (uint32_t)(0x605B2Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B844 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B82E, __imp__sub_0045B82E)

X86_FUNC(__imp__sub_0045B845) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B845 push 0x5B5E60
	{ uint32_t v = (uint32_t)(0x5B5E60u); X86_PUSH32(v); }
	// 0045B84A push 0x128
	{ uint32_t v = (uint32_t)(0x128u); X86_PUSH32(v); }
	// 0045B84F call 0x0006800A
	X86_PUSH32(0x45B854u); sub_0006800A(ctx, base);
	// 0045B854 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B855 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B856 mov [0x00605B2C], al
	{ uint32_t ea = (uint32_t)(0x605B2Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B85B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B845, __imp__sub_0045B845)

X86_FUNC(__imp__sub_0045B85C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B85C push 0x5B5E64
	{ uint32_t v = (uint32_t)(0x5B5E64u); X86_PUSH32(v); }
	// 0045B861 push 0xD6
	{ uint32_t v = (uint32_t)(0xD6u); X86_PUSH32(v); }
	// 0045B866 call 0x0006800A
	X86_PUSH32(0x45B86Bu); sub_0006800A(ctx, base);
	// 0045B86B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B86C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B86D mov [0x00605B2D], al
	{ uint32_t ea = (uint32_t)(0x605B2Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B872 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B85C, __imp__sub_0045B85C)

X86_FUNC(__imp__sub_0045B873) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B873 push 0x5B5E68
	{ uint32_t v = (uint32_t)(0x5B5E68u); X86_PUSH32(v); }
	// 0045B878 push 0xD7
	{ uint32_t v = (uint32_t)(0xD7u); X86_PUSH32(v); }
	// 0045B87D call 0x0006800A
	X86_PUSH32(0x45B882u); sub_0006800A(ctx, base);
	// 0045B882 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B883 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B884 mov [0x00605B2E], al
	{ uint32_t ea = (uint32_t)(0x605B2Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B889 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B873, __imp__sub_0045B873)

X86_FUNC(__imp__sub_0045B88A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B88A push 0x5B5E6C
	{ uint32_t v = (uint32_t)(0x5B5E6Cu); X86_PUSH32(v); }
	// 0045B88F push 0xD8
	{ uint32_t v = (uint32_t)(0xD8u); X86_PUSH32(v); }
	// 0045B894 call 0x0006800A
	X86_PUSH32(0x45B899u); sub_0006800A(ctx, base);
	// 0045B899 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B89A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B89B mov [0x00605B2F], al
	{ uint32_t ea = (uint32_t)(0x605B2Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B8A0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B88A, __imp__sub_0045B88A)

X86_FUNC(__imp__sub_0045B8A1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B8A1 push 0x5B5E70
	{ uint32_t v = (uint32_t)(0x5B5E70u); X86_PUSH32(v); }
	// 0045B8A6 push 0x113
	{ uint32_t v = (uint32_t)(0x113u); X86_PUSH32(v); }
	// 0045B8AB call 0x0006800A
	X86_PUSH32(0x45B8B0u); sub_0006800A(ctx, base);
	// 0045B8B0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B8B1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B8B2 mov [0x00605B30], al
	{ uint32_t ea = (uint32_t)(0x605B30u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B8B7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B8A1, __imp__sub_0045B8A1)

X86_FUNC(__imp__sub_0045B8B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B8B8 push 0x5B5E74
	{ uint32_t v = (uint32_t)(0x5B5E74u); X86_PUSH32(v); }
	// 0045B8BD push 0x114
	{ uint32_t v = (uint32_t)(0x114u); X86_PUSH32(v); }
	// 0045B8C2 call 0x0006800A
	X86_PUSH32(0x45B8C7u); sub_0006800A(ctx, base);
	// 0045B8C7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B8C8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B8C9 mov [0x00605B31], al
	{ uint32_t ea = (uint32_t)(0x605B31u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B8CE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B8B8, __imp__sub_0045B8B8)

X86_FUNC(__imp__sub_0045B8CF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B8CF push 0x5B5E78
	{ uint32_t v = (uint32_t)(0x5B5E78u); X86_PUSH32(v); }
	// 0045B8D4 push 0xD9
	{ uint32_t v = (uint32_t)(0xD9u); X86_PUSH32(v); }
	// 0045B8D9 call 0x0006800A
	X86_PUSH32(0x45B8DEu); sub_0006800A(ctx, base);
	// 0045B8DE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B8DF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B8E0 mov [0x00605B32], al
	{ uint32_t ea = (uint32_t)(0x605B32u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B8E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B8CF, __imp__sub_0045B8CF)

X86_FUNC(__imp__sub_0045B8E6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B8E6 push 0x5B5E7C
	{ uint32_t v = (uint32_t)(0x5B5E7Cu); X86_PUSH32(v); }
	// 0045B8EB push 0xDA
	{ uint32_t v = (uint32_t)(0xDAu); X86_PUSH32(v); }
	// 0045B8F0 call 0x0006800A
	X86_PUSH32(0x45B8F5u); sub_0006800A(ctx, base);
	// 0045B8F5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B8F6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B8F7 mov [0x00605B33], al
	{ uint32_t ea = (uint32_t)(0x605B33u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B8FC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B8E6, __imp__sub_0045B8E6)

X86_FUNC(__imp__sub_0045B8FD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B8FD push 0x5B5E80
	{ uint32_t v = (uint32_t)(0x5B5E80u); X86_PUSH32(v); }
	// 0045B902 push 0xDB
	{ uint32_t v = (uint32_t)(0xDBu); X86_PUSH32(v); }
	// 0045B907 call 0x0006800A
	X86_PUSH32(0x45B90Cu); sub_0006800A(ctx, base);
	// 0045B90C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B90D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B90E mov [0x00605B34], al
	{ uint32_t ea = (uint32_t)(0x605B34u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B913 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B8FD, __imp__sub_0045B8FD)

X86_FUNC(__imp__sub_0045B914) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B914 push 0x5B5E84
	{ uint32_t v = (uint32_t)(0x5B5E84u); X86_PUSH32(v); }
	// 0045B919 push 0xDC
	{ uint32_t v = (uint32_t)(0xDCu); X86_PUSH32(v); }
	// 0045B91E call 0x0006800A
	X86_PUSH32(0x45B923u); sub_0006800A(ctx, base);
	// 0045B923 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B924 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B925 mov [0x00605B35], al
	{ uint32_t ea = (uint32_t)(0x605B35u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B92A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B914, __imp__sub_0045B914)

X86_FUNC(__imp__sub_0045B92B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B92B push 0x5B5E88
	{ uint32_t v = (uint32_t)(0x5B5E88u); X86_PUSH32(v); }
	// 0045B930 push 0xDD
	{ uint32_t v = (uint32_t)(0xDDu); X86_PUSH32(v); }
	// 0045B935 call 0x0006800A
	X86_PUSH32(0x45B93Au); sub_0006800A(ctx, base);
	// 0045B93A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B93B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B93C mov [0x00605B36], al
	{ uint32_t ea = (uint32_t)(0x605B36u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B941 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B92B, __imp__sub_0045B92B)

X86_FUNC(__imp__sub_0045B942) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B942 push 0x5B5E8C
	{ uint32_t v = (uint32_t)(0x5B5E8Cu); X86_PUSH32(v); }
	// 0045B947 push 0x129
	{ uint32_t v = (uint32_t)(0x129u); X86_PUSH32(v); }
	// 0045B94C call 0x0006800A
	X86_PUSH32(0x45B951u); sub_0006800A(ctx, base);
	// 0045B951 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B952 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B953 mov [0x00605B37], al
	{ uint32_t ea = (uint32_t)(0x605B37u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B958 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B942, __imp__sub_0045B942)

X86_FUNC(__imp__sub_0045B959) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B959 push 0x5B5E90
	{ uint32_t v = (uint32_t)(0x5B5E90u); X86_PUSH32(v); }
	// 0045B95E push 0xDE
	{ uint32_t v = (uint32_t)(0xDEu); X86_PUSH32(v); }
	// 0045B963 call 0x0006800A
	X86_PUSH32(0x45B968u); sub_0006800A(ctx, base);
	// 0045B968 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B969 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B96A mov [0x00605B38], al
	{ uint32_t ea = (uint32_t)(0x605B38u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B96F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B959, __imp__sub_0045B959)

X86_FUNC(__imp__sub_0045B970) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B970 push 0x5B5E94
	{ uint32_t v = (uint32_t)(0x5B5E94u); X86_PUSH32(v); }
	// 0045B975 push 0xDF
	{ uint32_t v = (uint32_t)(0xDFu); X86_PUSH32(v); }
	// 0045B97A call 0x0006800A
	X86_PUSH32(0x45B97Fu); sub_0006800A(ctx, base);
	// 0045B97F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B980 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B981 mov [0x00605B39], al
	{ uint32_t ea = (uint32_t)(0x605B39u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B986 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B970, __imp__sub_0045B970)

X86_FUNC(__imp__sub_0045B987) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B987 push 0x5B5E98
	{ uint32_t v = (uint32_t)(0x5B5E98u); X86_PUSH32(v); }
	// 0045B98C push 0xE0
	{ uint32_t v = (uint32_t)(0xE0u); X86_PUSH32(v); }
	// 0045B991 call 0x0006800A
	X86_PUSH32(0x45B996u); sub_0006800A(ctx, base);
	// 0045B996 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B997 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B998 mov [0x00605B3A], al
	{ uint32_t ea = (uint32_t)(0x605B3Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B99D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B987, __imp__sub_0045B987)

X86_FUNC(__imp__sub_0045B99E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B99E push 0x5B5E9C
	{ uint32_t v = (uint32_t)(0x5B5E9Cu); X86_PUSH32(v); }
	// 0045B9A3 push 0xE1
	{ uint32_t v = (uint32_t)(0xE1u); X86_PUSH32(v); }
	// 0045B9A8 call 0x0006800A
	X86_PUSH32(0x45B9ADu); sub_0006800A(ctx, base);
	// 0045B9AD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B9AE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B9AF mov [0x00605B3B], al
	{ uint32_t ea = (uint32_t)(0x605B3Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B9B4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B99E, __imp__sub_0045B99E)

X86_FUNC(__imp__sub_0045B9B5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B9B5 push 0x5B5EA0
	{ uint32_t v = (uint32_t)(0x5B5EA0u); X86_PUSH32(v); }
	// 0045B9BA push 0xE4
	{ uint32_t v = (uint32_t)(0xE4u); X86_PUSH32(v); }
	// 0045B9BF call 0x0006800A
	X86_PUSH32(0x45B9C4u); sub_0006800A(ctx, base);
	// 0045B9C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B9C5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B9C6 mov [0x00605B3C], al
	{ uint32_t ea = (uint32_t)(0x605B3Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B9CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B9B5, __imp__sub_0045B9B5)

X86_FUNC(__imp__sub_0045B9CC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B9CC push 0x5B5EA4
	{ uint32_t v = (uint32_t)(0x5B5EA4u); X86_PUSH32(v); }
	// 0045B9D1 push 0xE2
	{ uint32_t v = (uint32_t)(0xE2u); X86_PUSH32(v); }
	// 0045B9D6 call 0x0006800A
	X86_PUSH32(0x45B9DBu); sub_0006800A(ctx, base);
	// 0045B9DB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B9DC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B9DD mov [0x00605B3D], al
	{ uint32_t ea = (uint32_t)(0x605B3Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B9E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B9CC, __imp__sub_0045B9CC)

X86_FUNC(__imp__sub_0045B9E3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B9E3 push 0x5B5EA8
	{ uint32_t v = (uint32_t)(0x5B5EA8u); X86_PUSH32(v); }
	// 0045B9E8 push 0xE3
	{ uint32_t v = (uint32_t)(0xE3u); X86_PUSH32(v); }
	// 0045B9ED call 0x0006800A
	X86_PUSH32(0x45B9F2u); sub_0006800A(ctx, base);
	// 0045B9F2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B9F3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045B9F4 mov [0x00605B3E], al
	{ uint32_t ea = (uint32_t)(0x605B3Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045B9F9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B9E3, __imp__sub_0045B9E3)

X86_FUNC(__imp__sub_0045B9FA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045B9FA push 0x5B5EAC
	{ uint32_t v = (uint32_t)(0x5B5EACu); X86_PUSH32(v); }
	// 0045B9FF push 0xFC
	{ uint32_t v = (uint32_t)(0xFCu); X86_PUSH32(v); }
	// 0045BA04 call 0x0006800A
	X86_PUSH32(0x45BA09u); sub_0006800A(ctx, base);
	// 0045BA09 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA0A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA0B mov [0x00605B3F], al
	{ uint32_t ea = (uint32_t)(0x605B3Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BA10 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045B9FA, __imp__sub_0045B9FA)

X86_FUNC(__imp__sub_0045BA11) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BA11 push 0x5B5EB0
	{ uint32_t v = (uint32_t)(0x5B5EB0u); X86_PUSH32(v); }
	// 0045BA16 push 0x140
	{ uint32_t v = (uint32_t)(0x140u); X86_PUSH32(v); }
	// 0045BA1B call 0x0006800A
	X86_PUSH32(0x45BA20u); sub_0006800A(ctx, base);
	// 0045BA20 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA21 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA22 mov [0x00605B40], al
	{ uint32_t ea = (uint32_t)(0x605B40u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BA27 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BA11, __imp__sub_0045BA11)

X86_FUNC(__imp__sub_0045BA28) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BA28 push 0x5B5EB4
	{ uint32_t v = (uint32_t)(0x5B5EB4u); X86_PUSH32(v); }
	// 0045BA2D push 0x12C
	{ uint32_t v = (uint32_t)(0x12Cu); X86_PUSH32(v); }
	// 0045BA32 call 0x0006800A
	X86_PUSH32(0x45BA37u); sub_0006800A(ctx, base);
	// 0045BA37 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA38 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA39 mov [0x00605B41], al
	{ uint32_t ea = (uint32_t)(0x605B41u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BA3E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BA28, __imp__sub_0045BA28)

X86_FUNC(__imp__sub_0045BA3F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BA3F push 0x5B5EB8
	{ uint32_t v = (uint32_t)(0x5B5EB8u); X86_PUSH32(v); }
	// 0045BA44 push 0x8E
	{ uint32_t v = (uint32_t)(0x8Eu); X86_PUSH32(v); }
	// 0045BA49 call 0x0006800A
	X86_PUSH32(0x45BA4Eu); sub_0006800A(ctx, base);
	// 0045BA4E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA4F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA50 mov [0x00605B42], al
	{ uint32_t ea = (uint32_t)(0x605B42u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BA55 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BA3F, __imp__sub_0045BA3F)

X86_FUNC(__imp__sub_0045BA56) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BA56 push 0x5B5EBC
	{ uint32_t v = (uint32_t)(0x5B5EBCu); X86_PUSH32(v); }
	// 0045BA5B push 0xCB
	{ uint32_t v = (uint32_t)(0xCBu); X86_PUSH32(v); }
	// 0045BA60 call 0x0006800A
	X86_PUSH32(0x45BA65u); sub_0006800A(ctx, base);
	// 0045BA65 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA66 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA67 mov [0x00605B43], al
	{ uint32_t ea = (uint32_t)(0x605B43u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BA6C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BA56, __imp__sub_0045BA56)

X86_FUNC(__imp__sub_0045BA6D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BA6D push 0x5B5EC0
	{ uint32_t v = (uint32_t)(0x5B5EC0u); X86_PUSH32(v); }
	// 0045BA72 push 0x11F
	{ uint32_t v = (uint32_t)(0x11Fu); X86_PUSH32(v); }
	// 0045BA77 call 0x0006800A
	X86_PUSH32(0x45BA7Cu); sub_0006800A(ctx, base);
	// 0045BA7C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA7D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA7E mov [0x00605B44], al
	{ uint32_t ea = (uint32_t)(0x605B44u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BA83 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BA6D, __imp__sub_0045BA6D)

X86_FUNC(__imp__sub_0045BA84) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BA84 push 0x5B5EC4
	{ uint32_t v = (uint32_t)(0x5B5EC4u); X86_PUSH32(v); }
	// 0045BA89 push 0x120
	{ uint32_t v = (uint32_t)(0x120u); X86_PUSH32(v); }
	// 0045BA8E call 0x0006800A
	X86_PUSH32(0x45BA93u); sub_0006800A(ctx, base);
	// 0045BA93 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA94 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BA95 mov [0x00605B45], al
	{ uint32_t ea = (uint32_t)(0x605B45u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BA9A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BA84, __imp__sub_0045BA84)

X86_FUNC(__imp__sub_0045BA9B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BA9B push 0x5B5EC8
	{ uint32_t v = (uint32_t)(0x5B5EC8u); X86_PUSH32(v); }
	// 0045BAA0 push 0x121
	{ uint32_t v = (uint32_t)(0x121u); X86_PUSH32(v); }
	// 0045BAA5 call 0x0006800A
	X86_PUSH32(0x45BAAAu); sub_0006800A(ctx, base);
	// 0045BAAA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BAAB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BAAC mov [0x00605B46], al
	{ uint32_t ea = (uint32_t)(0x605B46u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BAB1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BA9B, __imp__sub_0045BA9B)

X86_FUNC(__imp__sub_0045BAB2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BAB2 push 0x5B5ECC
	{ uint32_t v = (uint32_t)(0x5B5ECCu); X86_PUSH32(v); }
	// 0045BAB7 push 0x122
	{ uint32_t v = (uint32_t)(0x122u); X86_PUSH32(v); }
	// 0045BABC call 0x0006800A
	X86_PUSH32(0x45BAC1u); sub_0006800A(ctx, base);
	// 0045BAC1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BAC2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BAC3 mov [0x00605B47], al
	{ uint32_t ea = (uint32_t)(0x605B47u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BAC8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BAB2, __imp__sub_0045BAB2)

X86_FUNC(__imp__sub_0045BAC9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BAC9 push 0x5B5ED0
	{ uint32_t v = (uint32_t)(0x5B5ED0u); X86_PUSH32(v); }
	// 0045BACE push 0x123
	{ uint32_t v = (uint32_t)(0x123u); X86_PUSH32(v); }
	// 0045BAD3 call 0x0006800A
	X86_PUSH32(0x45BAD8u); sub_0006800A(ctx, base);
	// 0045BAD8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BAD9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BADA mov [0x00605B48], al
	{ uint32_t ea = (uint32_t)(0x605B48u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BADF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BAC9, __imp__sub_0045BAC9)

X86_FUNC(__imp__sub_0045BAE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BAE0 push 0x5B5ED4
	{ uint32_t v = (uint32_t)(0x5B5ED4u); X86_PUSH32(v); }
	// 0045BAE5 push 0x13C
	{ uint32_t v = (uint32_t)(0x13Cu); X86_PUSH32(v); }
	// 0045BAEA call 0x0006800A
	X86_PUSH32(0x45BAEFu); sub_0006800A(ctx, base);
	// 0045BAEF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BAF0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BAF1 mov [0x00605B49], al
	{ uint32_t ea = (uint32_t)(0x605B49u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BAF6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BAE0, __imp__sub_0045BAE0)

X86_FUNC(__imp__sub_0045BAF7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BAF7 push 0x5B5ED8
	{ uint32_t v = (uint32_t)(0x5B5ED8u); X86_PUSH32(v); }
	// 0045BAFC push 0x13D
	{ uint32_t v = (uint32_t)(0x13Du); X86_PUSH32(v); }
	// 0045BB01 call 0x0006800A
	X86_PUSH32(0x45BB06u); sub_0006800A(ctx, base);
	// 0045BB06 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB07 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB08 mov [0x00605B4A], al
	{ uint32_t ea = (uint32_t)(0x605B4Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BB0D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BAF7, __imp__sub_0045BAF7)

X86_FUNC(__imp__sub_0045BB0E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BB0E push 0x5B5EDC
	{ uint32_t v = (uint32_t)(0x5B5EDCu); X86_PUSH32(v); }
	// 0045BB13 push 0x13E
	{ uint32_t v = (uint32_t)(0x13Eu); X86_PUSH32(v); }
	// 0045BB18 call 0x0006800A
	X86_PUSH32(0x45BB1Du); sub_0006800A(ctx, base);
	// 0045BB1D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB1E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB1F mov [0x00605B4B], al
	{ uint32_t ea = (uint32_t)(0x605B4Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BB24 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BB0E, __imp__sub_0045BB0E)

X86_FUNC(__imp__sub_0045BB25) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BB25 push 0x5B5EE0
	{ uint32_t v = (uint32_t)(0x5B5EE0u); X86_PUSH32(v); }
	// 0045BB2A push 0x13F
	{ uint32_t v = (uint32_t)(0x13Fu); X86_PUSH32(v); }
	// 0045BB2F call 0x0006800A
	X86_PUSH32(0x45BB34u); sub_0006800A(ctx, base);
	// 0045BB34 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB35 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB36 mov [0x00605B4C], al
	{ uint32_t ea = (uint32_t)(0x605B4Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BB3B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BB25, __imp__sub_0045BB25)

X86_FUNC(__imp__sub_0045BB3C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BB3C push 0x5B5EE4
	{ uint32_t v = (uint32_t)(0x5B5EE4u); X86_PUSH32(v); }
	// 0045BB41 push 0xE5
	{ uint32_t v = (uint32_t)(0xE5u); X86_PUSH32(v); }
	// 0045BB46 call 0x0006800A
	X86_PUSH32(0x45BB4Bu); sub_0006800A(ctx, base);
	// 0045BB4B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB4C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB4D mov [0x00605B4D], al
	{ uint32_t ea = (uint32_t)(0x605B4Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BB52 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BB3C, __imp__sub_0045BB3C)

X86_FUNC(__imp__sub_0045BB53) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BB53 push 0x5B5EE8
	{ uint32_t v = (uint32_t)(0x5B5EE8u); X86_PUSH32(v); }
	// 0045BB58 push 0xE6
	{ uint32_t v = (uint32_t)(0xE6u); X86_PUSH32(v); }
	// 0045BB5D call 0x0006800A
	X86_PUSH32(0x45BB62u); sub_0006800A(ctx, base);
	// 0045BB62 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB63 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB64 mov [0x00605B4E], al
	{ uint32_t ea = (uint32_t)(0x605B4Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BB69 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BB53, __imp__sub_0045BB53)

X86_FUNC(__imp__sub_0045BB6A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BB6A push 0x5B5EEC
	{ uint32_t v = (uint32_t)(0x5B5EECu); X86_PUSH32(v); }
	// 0045BB6F push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045BB71 call 0x0006800A
	X86_PUSH32(0x45BB76u); sub_0006800A(ctx, base);
	// 0045BB76 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB77 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB78 mov [0x00605B4F], al
	{ uint32_t ea = (uint32_t)(0x605B4Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BB7D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BB6A, __imp__sub_0045BB6A)

X86_FUNC(__imp__sub_0045BB7E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BB7E push 0x5B5EF0
	{ uint32_t v = (uint32_t)(0x5B5EF0u); X86_PUSH32(v); }
	// 0045BB83 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045BB85 call 0x0006800A
	X86_PUSH32(0x45BB8Au); sub_0006800A(ctx, base);
	// 0045BB8A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB8B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB8C mov [0x00605B50], al
	{ uint32_t ea = (uint32_t)(0x605B50u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BB91 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BB7E, __imp__sub_0045BB7E)

X86_FUNC(__imp__sub_0045BB92) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BB92 push 0x5B5EF4
	{ uint32_t v = (uint32_t)(0x5B5EF4u); X86_PUSH32(v); }
	// 0045BB97 push 0x0E
	{ uint32_t v = (uint32_t)(0xEu); X86_PUSH32(v); }
	// 0045BB99 call 0x0006800A
	X86_PUSH32(0x45BB9Eu); sub_0006800A(ctx, base);
	// 0045BB9E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BB9F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BBA0 mov [0x00605B51], al
	{ uint32_t ea = (uint32_t)(0x605B51u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BBA5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BB92, __imp__sub_0045BB92)

X86_FUNC(__imp__sub_0045BBA6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BBA6 push 0x5B5EF8
	{ uint32_t v = (uint32_t)(0x5B5EF8u); X86_PUSH32(v); }
	// 0045BBAB push 0x70
	{ uint32_t v = (uint32_t)(0x70u); X86_PUSH32(v); }
	// 0045BBAD call 0x0006800A
	X86_PUSH32(0x45BBB2u); sub_0006800A(ctx, base);
	// 0045BBB2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BBB3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BBB4 mov [0x00605B52], al
	{ uint32_t ea = (uint32_t)(0x605B52u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BBB9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BBA6, __imp__sub_0045BBA6)

X86_FUNC(__imp__sub_0045BBBA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BBBA push 0x5B5EFC
	{ uint32_t v = (uint32_t)(0x5B5EFCu); X86_PUSH32(v); }
	// 0045BBBF push 0xA8
	{ uint32_t v = (uint32_t)(0xA8u); X86_PUSH32(v); }
	// 0045BBC4 call 0x0006800A
	X86_PUSH32(0x45BBC9u); sub_0006800A(ctx, base);
	// 0045BBC9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BBCA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BBCB mov [0x00605B53], al
	{ uint32_t ea = (uint32_t)(0x605B53u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BBD0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BBBA, __imp__sub_0045BBBA)

X86_FUNC(__imp__sub_0045BBD1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BBD1 push 0x5B5F00
	{ uint32_t v = (uint32_t)(0x5B5F00u); X86_PUSH32(v); }
	// 0045BBD6 push 0x73
	{ uint32_t v = (uint32_t)(0x73u); X86_PUSH32(v); }
	// 0045BBD8 call 0x0006800A
	X86_PUSH32(0x45BBDDu); sub_0006800A(ctx, base);
	// 0045BBDD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BBDE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BBDF mov [0x00605B54], al
	{ uint32_t ea = (uint32_t)(0x605B54u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BBE4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BBD1, __imp__sub_0045BBD1)

X86_FUNC(__imp__sub_0045BBE5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BBE5 push 0x5B5F04
	{ uint32_t v = (uint32_t)(0x5B5F04u); X86_PUSH32(v); }
	// 0045BBEA push 0x74
	{ uint32_t v = (uint32_t)(0x74u); X86_PUSH32(v); }
	// 0045BBEC call 0x0006800A
	X86_PUSH32(0x45BBF1u); sub_0006800A(ctx, base);
	// 0045BBF1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BBF2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BBF3 mov [0x00605B55], al
	{ uint32_t ea = (uint32_t)(0x605B55u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BBF8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BBE5, __imp__sub_0045BBE5)

X86_FUNC(__imp__sub_0045BBF9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BBF9 push 0x5B5F08
	{ uint32_t v = (uint32_t)(0x5B5F08u); X86_PUSH32(v); }
	// 0045BBFE push 0x78
	{ uint32_t v = (uint32_t)(0x78u); X86_PUSH32(v); }
	// 0045BC00 call 0x0006800A
	X86_PUSH32(0x45BC05u); sub_0006800A(ctx, base);
	// 0045BC05 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC06 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC07 mov [0x00605B56], al
	{ uint32_t ea = (uint32_t)(0x605B56u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BC0C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BBF9, __imp__sub_0045BBF9)

X86_FUNC(__imp__sub_0045BC0D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BC0D push 0x5B5F0C
	{ uint32_t v = (uint32_t)(0x5B5F0Cu); X86_PUSH32(v); }
	// 0045BC12 push 0x79
	{ uint32_t v = (uint32_t)(0x79u); X86_PUSH32(v); }
	// 0045BC14 call 0x0006800A
	X86_PUSH32(0x45BC19u); sub_0006800A(ctx, base);
	// 0045BC19 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC1A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC1B mov [0x00605B57], al
	{ uint32_t ea = (uint32_t)(0x605B57u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BC20 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BC0D, __imp__sub_0045BC0D)

X86_FUNC(__imp__sub_0045BC21) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BC21 push 0x5B5F10
	{ uint32_t v = (uint32_t)(0x5B5F10u); X86_PUSH32(v); }
	// 0045BC26 push 0x7A
	{ uint32_t v = (uint32_t)(0x7Au); X86_PUSH32(v); }
	// 0045BC28 call 0x0006800A
	X86_PUSH32(0x45BC2Du); sub_0006800A(ctx, base);
	// 0045BC2D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC2E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC2F mov [0x00605B58], al
	{ uint32_t ea = (uint32_t)(0x605B58u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BC34 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BC21, __imp__sub_0045BC21)

X86_FUNC(__imp__sub_0045BC35) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BC35 push 0x5B5F14
	{ uint32_t v = (uint32_t)(0x5B5F14u); X86_PUSH32(v); }
	// 0045BC3A push 0x7B
	{ uint32_t v = (uint32_t)(0x7Bu); X86_PUSH32(v); }
	// 0045BC3C call 0x0006800A
	X86_PUSH32(0x45BC41u); sub_0006800A(ctx, base);
	// 0045BC41 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC42 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC43 mov [0x00605B59], al
	{ uint32_t ea = (uint32_t)(0x605B59u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BC48 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BC35, __imp__sub_0045BC35)

X86_FUNC(__imp__sub_0045BC49) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BC49 push 0x5B5F18
	{ uint32_t v = (uint32_t)(0x5B5F18u); X86_PUSH32(v); }
	// 0045BC4E push 0x7C
	{ uint32_t v = (uint32_t)(0x7Cu); X86_PUSH32(v); }
	// 0045BC50 call 0x0006800A
	X86_PUSH32(0x45BC55u); sub_0006800A(ctx, base);
	// 0045BC55 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC56 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC57 mov [0x00605B5A], al
	{ uint32_t ea = (uint32_t)(0x605B5Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BC5C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BC49, __imp__sub_0045BC49)

X86_FUNC(__imp__sub_0045BC5D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BC5D push 0x5B5F1C
	{ uint32_t v = (uint32_t)(0x5B5F1Cu); X86_PUSH32(v); }
	// 0045BC62 push 0x7D
	{ uint32_t v = (uint32_t)(0x7Du); X86_PUSH32(v); }
	// 0045BC64 call 0x0006800A
	X86_PUSH32(0x45BC69u); sub_0006800A(ctx, base);
	// 0045BC69 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC6A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC6B mov [0x00605B5B], al
	{ uint32_t ea = (uint32_t)(0x605B5Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BC70 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BC5D, __imp__sub_0045BC5D)

X86_FUNC(__imp__sub_0045BC71) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BC71 push 0x5B5F20
	{ uint32_t v = (uint32_t)(0x5B5F20u); X86_PUSH32(v); }
	// 0045BC76 push 0x7E
	{ uint32_t v = (uint32_t)(0x7Eu); X86_PUSH32(v); }
	// 0045BC78 call 0x0006800A
	X86_PUSH32(0x45BC7Du); sub_0006800A(ctx, base);
	// 0045BC7D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC7E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC7F mov [0x00605B5C], al
	{ uint32_t ea = (uint32_t)(0x605B5Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BC84 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BC71, __imp__sub_0045BC71)

X86_FUNC(__imp__sub_0045BC85) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BC85 push 0x5B5F24
	{ uint32_t v = (uint32_t)(0x5B5F24u); X86_PUSH32(v); }
	// 0045BC8A push 0x7F
	{ uint32_t v = (uint32_t)(0x7Fu); X86_PUSH32(v); }
	// 0045BC8C call 0x0006800A
	X86_PUSH32(0x45BC91u); sub_0006800A(ctx, base);
	// 0045BC91 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC92 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BC93 mov [0x00605B5D], al
	{ uint32_t ea = (uint32_t)(0x605B5Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BC98 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BC85, __imp__sub_0045BC85)

X86_FUNC(__imp__sub_0045BC99) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BC99 push 0x5B5F28
	{ uint32_t v = (uint32_t)(0x5B5F28u); X86_PUSH32(v); }
	// 0045BC9E push 0x80
	{ uint32_t v = (uint32_t)(0x80u); X86_PUSH32(v); }
	// 0045BCA3 call 0x0006800A
	X86_PUSH32(0x45BCA8u); sub_0006800A(ctx, base);
	// 0045BCA8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BCA9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BCAA mov [0x00605B5E], al
	{ uint32_t ea = (uint32_t)(0x605B5Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BCAF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BC99, __imp__sub_0045BC99)

X86_FUNC(__imp__sub_0045BCB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BCB0 push 0x5B5F2C
	{ uint32_t v = (uint32_t)(0x5B5F2Cu); X86_PUSH32(v); }
	// 0045BCB5 push 0xEA
	{ uint32_t v = (uint32_t)(0xEAu); X86_PUSH32(v); }
	// 0045BCBA call 0x0006800A
	X86_PUSH32(0x45BCBFu); sub_0006800A(ctx, base);
	// 0045BCBF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BCC0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BCC1 mov [0x00605B5F], al
	{ uint32_t ea = (uint32_t)(0x605B5Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BCC6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BCB0, __imp__sub_0045BCB0)

X86_FUNC(__imp__sub_0045BCC7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BCC7 push 0x5B5F30
	{ uint32_t v = (uint32_t)(0x5B5F30u); X86_PUSH32(v); }
	// 0045BCCC push 0xEB
	{ uint32_t v = (uint32_t)(0xEBu); X86_PUSH32(v); }
	// 0045BCD1 call 0x0006800A
	X86_PUSH32(0x45BCD6u); sub_0006800A(ctx, base);
	// 0045BCD6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BCD7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BCD8 mov [0x00605B60], al
	{ uint32_t ea = (uint32_t)(0x605B60u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BCDD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BCC7, __imp__sub_0045BCC7)

X86_FUNC(__imp__sub_0045BCDE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BCDE push 0x5B5F34
	{ uint32_t v = (uint32_t)(0x5B5F34u); X86_PUSH32(v); }
	// 0045BCE3 push 0xEC
	{ uint32_t v = (uint32_t)(0xECu); X86_PUSH32(v); }
	// 0045BCE8 call 0x0006800A
	X86_PUSH32(0x45BCEDu); sub_0006800A(ctx, base);
	// 0045BCED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BCEE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BCEF mov [0x00605B61], al
	{ uint32_t ea = (uint32_t)(0x605B61u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BCF4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BCDE, __imp__sub_0045BCDE)

X86_FUNC(__imp__sub_0045BCF5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BCF5 push 0x5B5F38
	{ uint32_t v = (uint32_t)(0x5B5F38u); X86_PUSH32(v); }
	// 0045BCFA push 0xED
	{ uint32_t v = (uint32_t)(0xEDu); X86_PUSH32(v); }
	// 0045BCFF call 0x0006800A
	X86_PUSH32(0x45BD04u); sub_0006800A(ctx, base);
	// 0045BD04 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD05 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD06 mov [0x00605B62], al
	{ uint32_t ea = (uint32_t)(0x605B62u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BD0B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BCF5, __imp__sub_0045BCF5)

X86_FUNC(__imp__sub_0045BD0C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BD0C push 0x5B5F3C
	{ uint32_t v = (uint32_t)(0x5B5F3Cu); X86_PUSH32(v); }
	// 0045BD11 push 0x43
	{ uint32_t v = (uint32_t)(0x43u); X86_PUSH32(v); }
	// 0045BD13 call 0x0006800A
	X86_PUSH32(0x45BD18u); sub_0006800A(ctx, base);
	// 0045BD18 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD19 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD1A mov [0x00605B63], al
	{ uint32_t ea = (uint32_t)(0x605B63u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BD1F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BD0C, __imp__sub_0045BD0C)

X86_FUNC(__imp__sub_0045BD20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BD20 push 0x5B5F40
	{ uint32_t v = (uint32_t)(0x5B5F40u); X86_PUSH32(v); }
	// 0045BD25 push 0x21C
	{ uint32_t v = (uint32_t)(0x21Cu); X86_PUSH32(v); }
	// 0045BD2A call 0x0006800A
	X86_PUSH32(0x45BD2Fu); sub_0006800A(ctx, base);
	// 0045BD2F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD30 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD31 mov [0x00605B64], al
	{ uint32_t ea = (uint32_t)(0x605B64u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BD36 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BD20, __imp__sub_0045BD20)

X86_FUNC(__imp__sub_0045BD37) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BD37 push 0x5B5F44
	{ uint32_t v = (uint32_t)(0x5B5F44u); X86_PUSH32(v); }
	// 0045BD3C push 0xFE
	{ uint32_t v = (uint32_t)(0xFEu); X86_PUSH32(v); }
	// 0045BD41 call 0x0006800A
	X86_PUSH32(0x45BD46u); sub_0006800A(ctx, base);
	// 0045BD46 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD47 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD48 mov [0x00605B65], al
	{ uint32_t ea = (uint32_t)(0x605B65u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BD4D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BD37, __imp__sub_0045BD37)

X86_FUNC(__imp__sub_0045BD4E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BD4E push 0x5B5F48
	{ uint32_t v = (uint32_t)(0x5B5F48u); X86_PUSH32(v); }
	// 0045BD53 push 0xFF
	{ uint32_t v = (uint32_t)(0xFFu); X86_PUSH32(v); }
	// 0045BD58 call 0x0006800A
	X86_PUSH32(0x45BD5Du); sub_0006800A(ctx, base);
	// 0045BD5D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD5E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD5F mov [0x00605B66], al
	{ uint32_t ea = (uint32_t)(0x605B66u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BD64 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BD4E, __imp__sub_0045BD4E)

X86_FUNC(__imp__sub_0045BD65) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BD65 push 0x5B5F4C
	{ uint32_t v = (uint32_t)(0x5B5F4Cu); X86_PUSH32(v); }
	// 0045BD6A push 0x72
	{ uint32_t v = (uint32_t)(0x72u); X86_PUSH32(v); }
	// 0045BD6C call 0x0006800A
	X86_PUSH32(0x45BD71u); sub_0006800A(ctx, base);
	// 0045BD71 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD72 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD73 mov [0x00605B67], al
	{ uint32_t ea = (uint32_t)(0x605B67u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BD78 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BD65, __imp__sub_0045BD65)

X86_FUNC(__imp__sub_0045BD79) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BD79 push 0x5B5F50
	{ uint32_t v = (uint32_t)(0x5B5F50u); X86_PUSH32(v); }
	// 0045BD7E push 0x77
	{ uint32_t v = (uint32_t)(0x77u); X86_PUSH32(v); }
	// 0045BD80 call 0x0006800A
	X86_PUSH32(0x45BD85u); sub_0006800A(ctx, base);
	// 0045BD85 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD86 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD87 mov [0x00605B68], al
	{ uint32_t ea = (uint32_t)(0x605B68u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BD8C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BD79, __imp__sub_0045BD79)

X86_FUNC(__imp__sub_0045BD8D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BD8D push 0x5B5F54
	{ uint32_t v = (uint32_t)(0x5B5F54u); X86_PUSH32(v); }
	// 0045BD92 push 0xE7
	{ uint32_t v = (uint32_t)(0xE7u); X86_PUSH32(v); }
	// 0045BD97 call 0x0006800A
	X86_PUSH32(0x45BD9Cu); sub_0006800A(ctx, base);
	// 0045BD9C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD9D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BD9E mov [0x00605B69], al
	{ uint32_t ea = (uint32_t)(0x605B69u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BDA3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BD8D, __imp__sub_0045BD8D)

X86_FUNC(__imp__sub_0045BDA4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BDA4 push 0x5B5F58
	{ uint32_t v = (uint32_t)(0x5B5F58u); X86_PUSH32(v); }
	// 0045BDA9 push 0xE8
	{ uint32_t v = (uint32_t)(0xE8u); X86_PUSH32(v); }
	// 0045BDAE call 0x0006800A
	X86_PUSH32(0x45BDB3u); sub_0006800A(ctx, base);
	// 0045BDB3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BDB4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BDB5 mov [0x00605B6A], al
	{ uint32_t ea = (uint32_t)(0x605B6Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BDBA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BDA4, __imp__sub_0045BDA4)

X86_FUNC(__imp__sub_0045BDBB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BDBB push 0x5B5F5C
	{ uint32_t v = (uint32_t)(0x5B5F5Cu); X86_PUSH32(v); }
	// 0045BDC0 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045BDC2 call 0x0006800A
	X86_PUSH32(0x45BDC7u); sub_0006800A(ctx, base);
	// 0045BDC7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BDC8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BDC9 mov [0x00605B6B], al
	{ uint32_t ea = (uint32_t)(0x605B6Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BDCE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BDBB, __imp__sub_0045BDBB)

X86_FUNC(__imp__sub_0045BDCF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BDCF push 0x5B5F60
	{ uint32_t v = (uint32_t)(0x5B5F60u); X86_PUSH32(v); }
	// 0045BDD4 push 0x60
	{ uint32_t v = (uint32_t)(0x60u); X86_PUSH32(v); }
	// 0045BDD6 call 0x0006800A
	X86_PUSH32(0x45BDDBu); sub_0006800A(ctx, base);
	// 0045BDDB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BDDC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BDDD mov [0x00605B6C], al
	{ uint32_t ea = (uint32_t)(0x605B6Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BDE2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BDCF, __imp__sub_0045BDCF)

X86_FUNC(__imp__sub_0045BDE3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BDE3 push 0x5B5F64
	{ uint32_t v = (uint32_t)(0x5B5F64u); X86_PUSH32(v); }
	// 0045BDE8 push 0x61
	{ uint32_t v = (uint32_t)(0x61u); X86_PUSH32(v); }
	// 0045BDEA call 0x0006800A
	X86_PUSH32(0x45BDEFu); sub_0006800A(ctx, base);
	// 0045BDEF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BDF0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BDF1 mov [0x00605B6D], al
	{ uint32_t ea = (uint32_t)(0x605B6Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BDF6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BDE3, __imp__sub_0045BDE3)

X86_FUNC(__imp__sub_0045BDF7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BDF7 push 0x5B5F68
	{ uint32_t v = (uint32_t)(0x5B5F68u); X86_PUSH32(v); }
	// 0045BDFC push 0x62
	{ uint32_t v = (uint32_t)(0x62u); X86_PUSH32(v); }
	// 0045BDFE call 0x0006800A
	X86_PUSH32(0x45BE03u); sub_0006800A(ctx, base);
	// 0045BE03 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE04 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE05 mov [0x00605B6E], al
	{ uint32_t ea = (uint32_t)(0x605B6Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BE0A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BDF7, __imp__sub_0045BDF7)

X86_FUNC(__imp__sub_0045BE0B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BE0B push 0x5B5F6C
	{ uint32_t v = (uint32_t)(0x5B5F6Cu); X86_PUSH32(v); }
	// 0045BE10 push 0x63
	{ uint32_t v = (uint32_t)(0x63u); X86_PUSH32(v); }
	// 0045BE12 call 0x0006800A
	X86_PUSH32(0x45BE17u); sub_0006800A(ctx, base);
	// 0045BE17 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE18 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE19 mov [0x00605B6F], al
	{ uint32_t ea = (uint32_t)(0x605B6Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BE1E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BE0B, __imp__sub_0045BE0B)

X86_FUNC(__imp__sub_0045BE1F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BE1F push 0x5B5F70
	{ uint32_t v = (uint32_t)(0x5B5F70u); X86_PUSH32(v); }
	// 0045BE24 push 0x64
	{ uint32_t v = (uint32_t)(0x64u); X86_PUSH32(v); }
	// 0045BE26 call 0x0006800A
	X86_PUSH32(0x45BE2Bu); sub_0006800A(ctx, base);
	// 0045BE2B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE2C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE2D mov [0x00605B70], al
	{ uint32_t ea = (uint32_t)(0x605B70u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BE32 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BE1F, __imp__sub_0045BE1F)

X86_FUNC(__imp__sub_0045BE33) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BE33 push 0x5B5F74
	{ uint32_t v = (uint32_t)(0x5B5F74u); X86_PUSH32(v); }
	// 0045BE38 push 0x65
	{ uint32_t v = (uint32_t)(0x65u); X86_PUSH32(v); }
	// 0045BE3A call 0x0006800A
	X86_PUSH32(0x45BE3Fu); sub_0006800A(ctx, base);
	// 0045BE3F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE40 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE41 mov [0x00605B71], al
	{ uint32_t ea = (uint32_t)(0x605B71u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BE46 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BE33, __imp__sub_0045BE33)

X86_FUNC(__imp__sub_0045BE47) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BE47 push 0x5B5F78
	{ uint32_t v = (uint32_t)(0x5B5F78u); X86_PUSH32(v); }
	// 0045BE4C push 0x66
	{ uint32_t v = (uint32_t)(0x66u); X86_PUSH32(v); }
	// 0045BE4E call 0x0006800A
	X86_PUSH32(0x45BE53u); sub_0006800A(ctx, base);
	// 0045BE53 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE54 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE55 mov [0x00605B72], al
	{ uint32_t ea = (uint32_t)(0x605B72u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BE5A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BE47, __imp__sub_0045BE47)

X86_FUNC(__imp__sub_0045BE5B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BE5B push 0x5B5F7C
	{ uint32_t v = (uint32_t)(0x5B5F7Cu); X86_PUSH32(v); }
	// 0045BE60 push 0x67
	{ uint32_t v = (uint32_t)(0x67u); X86_PUSH32(v); }
	// 0045BE62 call 0x0006800A
	X86_PUSH32(0x45BE67u); sub_0006800A(ctx, base);
	// 0045BE67 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE68 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE69 mov [0x00605B73], al
	{ uint32_t ea = (uint32_t)(0x605B73u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BE6E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BE5B, __imp__sub_0045BE5B)

X86_FUNC(__imp__sub_0045BE6F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BE6F push 0x5B5F80
	{ uint32_t v = (uint32_t)(0x5B5F80u); X86_PUSH32(v); }
	// 0045BE74 push 0x68
	{ uint32_t v = (uint32_t)(0x68u); X86_PUSH32(v); }
	// 0045BE76 call 0x0006800A
	X86_PUSH32(0x45BE7Bu); sub_0006800A(ctx, base);
	// 0045BE7B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE7C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE7D mov [0x00605B74], al
	{ uint32_t ea = (uint32_t)(0x605B74u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BE82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BE6F, __imp__sub_0045BE6F)

X86_FUNC(__imp__sub_0045BE83) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BE83 push 0x5B5F84
	{ uint32_t v = (uint32_t)(0x5B5F84u); X86_PUSH32(v); }
	// 0045BE88 push 0x69
	{ uint32_t v = (uint32_t)(0x69u); X86_PUSH32(v); }
	// 0045BE8A call 0x0006800A
	X86_PUSH32(0x45BE8Fu); sub_0006800A(ctx, base);
	// 0045BE8F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE90 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BE91 mov [0x00605B75], al
	{ uint32_t ea = (uint32_t)(0x605B75u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BE96 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BE83, __imp__sub_0045BE83)

X86_FUNC(__imp__sub_0045BE97) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BE97 push 0x5B5F88
	{ uint32_t v = (uint32_t)(0x5B5F88u); X86_PUSH32(v); }
	// 0045BE9C push 0x6A
	{ uint32_t v = (uint32_t)(0x6Au); X86_PUSH32(v); }
	// 0045BE9E call 0x0006800A
	X86_PUSH32(0x45BEA3u); sub_0006800A(ctx, base);
	// 0045BEA3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BEA4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BEA5 mov [0x00605B76], al
	{ uint32_t ea = (uint32_t)(0x605B76u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BEAA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BE97, __imp__sub_0045BE97)

X86_FUNC(__imp__sub_0045BEAB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BEAB push 0x5B5F8C
	{ uint32_t v = (uint32_t)(0x5B5F8Cu); X86_PUSH32(v); }
	// 0045BEB0 push 0x6B
	{ uint32_t v = (uint32_t)(0x6Bu); X86_PUSH32(v); }
	// 0045BEB2 call 0x0006800A
	X86_PUSH32(0x45BEB7u); sub_0006800A(ctx, base);
	// 0045BEB7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BEB8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BEB9 mov [0x00605B77], al
	{ uint32_t ea = (uint32_t)(0x605B77u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BEBE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BEAB, __imp__sub_0045BEAB)

X86_FUNC(__imp__sub_0045BEBF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BEBF push 0x5B5F90
	{ uint32_t v = (uint32_t)(0x5B5F90u); X86_PUSH32(v); }
	// 0045BEC4 push 0x6C
	{ uint32_t v = (uint32_t)(0x6Cu); X86_PUSH32(v); }
	// 0045BEC6 call 0x0006800A
	X86_PUSH32(0x45BECBu); sub_0006800A(ctx, base);
	// 0045BECB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BECC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BECD mov [0x00605B78], al
	{ uint32_t ea = (uint32_t)(0x605B78u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BED2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BEBF, __imp__sub_0045BEBF)

X86_FUNC(__imp__sub_0045BED3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BED3 push 0x5B5F94
	{ uint32_t v = (uint32_t)(0x5B5F94u); X86_PUSH32(v); }
	// 0045BED8 push 0x6D
	{ uint32_t v = (uint32_t)(0x6Du); X86_PUSH32(v); }
	// 0045BEDA call 0x0006800A
	X86_PUSH32(0x45BEDFu); sub_0006800A(ctx, base);
	// 0045BEDF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BEE0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BEE1 mov [0x00605B79], al
	{ uint32_t ea = (uint32_t)(0x605B79u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BEE6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BED3, __imp__sub_0045BED3)

X86_FUNC(__imp__sub_0045BEE7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BEE7 push 0x5B5F98
	{ uint32_t v = (uint32_t)(0x5B5F98u); X86_PUSH32(v); }
	// 0045BEEC push 0x6E
	{ uint32_t v = (uint32_t)(0x6Eu); X86_PUSH32(v); }
	// 0045BEEE call 0x0006800A
	X86_PUSH32(0x45BEF3u); sub_0006800A(ctx, base);
	// 0045BEF3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BEF4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BEF5 mov [0x00605B7A], al
	{ uint32_t ea = (uint32_t)(0x605B7Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BEFA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BEE7, __imp__sub_0045BEE7)

X86_FUNC(__imp__sub_0045BEFB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BEFB push 0x5B5F9C
	{ uint32_t v = (uint32_t)(0x5B5F9Cu); X86_PUSH32(v); }
	// 0045BF00 push 0x6F
	{ uint32_t v = (uint32_t)(0x6Fu); X86_PUSH32(v); }
	// 0045BF02 call 0x0006800A
	X86_PUSH32(0x45BF07u); sub_0006800A(ctx, base);
	// 0045BF07 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF08 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF09 mov [0x00605B7B], al
	{ uint32_t ea = (uint32_t)(0x605B7Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BF0E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BEFB, __imp__sub_0045BEFB)

X86_FUNC(__imp__sub_0045BF0F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BF0F push 0x5B5FA0
	{ uint32_t v = (uint32_t)(0x5B5FA0u); X86_PUSH32(v); }
	// 0045BF14 push 0x11
	{ uint32_t v = (uint32_t)(0x11u); X86_PUSH32(v); }
	// 0045BF16 call 0x0006800A
	X86_PUSH32(0x45BF1Bu); sub_0006800A(ctx, base);
	// 0045BF1B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF1C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF1D mov [0x00605B7C], al
	{ uint32_t ea = (uint32_t)(0x605B7Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BF22 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BF0F, __imp__sub_0045BF0F)

X86_FUNC(__imp__sub_0045BF23) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BF23 push 0x5B5FA4
	{ uint32_t v = (uint32_t)(0x5B5FA4u); X86_PUSH32(v); }
	// 0045BF28 push 0x102
	{ uint32_t v = (uint32_t)(0x102u); X86_PUSH32(v); }
	// 0045BF2D call 0x0006800A
	X86_PUSH32(0x45BF32u); sub_0006800A(ctx, base);
	// 0045BF32 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF33 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF34 mov [0x00605B7D], al
	{ uint32_t ea = (uint32_t)(0x605B7Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BF39 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BF23, __imp__sub_0045BF23)

X86_FUNC(__imp__sub_0045BF3A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BF3A push 0x5B5FA8
	{ uint32_t v = (uint32_t)(0x5B5FA8u); X86_PUSH32(v); }
	// 0045BF3F push 0x71
	{ uint32_t v = (uint32_t)(0x71u); X86_PUSH32(v); }
	// 0045BF41 call 0x0006800A
	X86_PUSH32(0x45BF46u); sub_0006800A(ctx, base);
	// 0045BF46 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF47 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF48 mov [0x00605B7E], al
	{ uint32_t ea = (uint32_t)(0x605B7Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BF4D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BF3A, __imp__sub_0045BF3A)

X86_FUNC(__imp__sub_0045BF4E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BF4E push 0x5B5FAC
	{ uint32_t v = (uint32_t)(0x5B5FACu); X86_PUSH32(v); }
	// 0045BF53 push 0x75
	{ uint32_t v = (uint32_t)(0x75u); X86_PUSH32(v); }
	// 0045BF55 call 0x0006800A
	X86_PUSH32(0x45BF5Au); sub_0006800A(ctx, base);
	// 0045BF5A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF5B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF5C mov [0x00605B7F], al
	{ uint32_t ea = (uint32_t)(0x605B7Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BF61 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BF4E, __imp__sub_0045BF4E)

X86_FUNC(__imp__sub_0045BF62) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BF62 push 0x5B5FB0
	{ uint32_t v = (uint32_t)(0x5B5FB0u); X86_PUSH32(v); }
	// 0045BF67 push 0x76
	{ uint32_t v = (uint32_t)(0x76u); X86_PUSH32(v); }
	// 0045BF69 call 0x0006800A
	X86_PUSH32(0x45BF6Eu); sub_0006800A(ctx, base);
	// 0045BF6E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF6F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF70 mov [0x00605B80], al
	{ uint32_t ea = (uint32_t)(0x605B80u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BF75 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BF62, __imp__sub_0045BF62)

X86_FUNC(__imp__sub_0045BF76) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BF76 push 0x5B5FB4
	{ uint32_t v = (uint32_t)(0x5B5FB4u); X86_PUSH32(v); }
	// 0045BF7B push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045BF7D call 0x0006800A
	X86_PUSH32(0x45BF82u); sub_0006800A(ctx, base);
	// 0045BF82 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF83 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF84 mov [0x00605B81], al
	{ uint32_t ea = (uint32_t)(0x605B81u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BF89 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BF76, __imp__sub_0045BF76)

X86_FUNC(__imp__sub_0045BF8A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BF8A push 0x5B5FB8
	{ uint32_t v = (uint32_t)(0x5B5FB8u); X86_PUSH32(v); }
	// 0045BF8F push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045BF91 call 0x0006800A
	X86_PUSH32(0x45BF96u); sub_0006800A(ctx, base);
	// 0045BF96 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF97 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BF98 mov [0x00605B82], al
	{ uint32_t ea = (uint32_t)(0x605B82u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BF9D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BF8A, __imp__sub_0045BF8A)

X86_FUNC(__imp__sub_0045BF9E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BF9E push 0x5B5FBC
	{ uint32_t v = (uint32_t)(0x5B5FBCu); X86_PUSH32(v); }
	// 0045BFA3 push 0x218
	{ uint32_t v = (uint32_t)(0x218u); X86_PUSH32(v); }
	// 0045BFA8 call 0x0006800A
	X86_PUSH32(0x45BFADu); sub_0006800A(ctx, base);
	// 0045BFAD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BFAE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BFAF mov [0x00605B83], al
	{ uint32_t ea = (uint32_t)(0x605B83u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BFB4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BF9E, __imp__sub_0045BF9E)

X86_FUNC(__imp__sub_0045BFB5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BFB5 push 0x5B5FC0
	{ uint32_t v = (uint32_t)(0x5B5FC0u); X86_PUSH32(v); }
	// 0045BFBA push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045BFBC call 0x0006800A
	X86_PUSH32(0x45BFC1u); sub_0006800A(ctx, base);
	// 0045BFC1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BFC2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BFC3 mov [0x00605B84], al
	{ uint32_t ea = (uint32_t)(0x605B84u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BFC8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BFB5, __imp__sub_0045BFB5)

X86_FUNC(__imp__sub_0045BFC9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BFC9 push 0x5B5FC4
	{ uint32_t v = (uint32_t)(0x5B5FC4u); X86_PUSH32(v); }
	// 0045BFCE push 0x21F
	{ uint32_t v = (uint32_t)(0x21Fu); X86_PUSH32(v); }
	// 0045BFD3 call 0x0006800A
	X86_PUSH32(0x45BFD8u); sub_0006800A(ctx, base);
	// 0045BFD8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BFD9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BFDA mov [0x00605B85], al
	{ uint32_t ea = (uint32_t)(0x605B85u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BFDF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BFC9, __imp__sub_0045BFC9)

X86_FUNC(__imp__sub_0045BFE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BFE0 push 0x5B5FC8
	{ uint32_t v = (uint32_t)(0x5B5FC8u); X86_PUSH32(v); }
	// 0045BFE5 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045BFE7 call 0x0006800A
	X86_PUSH32(0x45BFECu); sub_0006800A(ctx, base);
	// 0045BFEC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BFED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045BFEE mov [0x00605B86], al
	{ uint32_t ea = (uint32_t)(0x605B86u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045BFF3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BFE0, __imp__sub_0045BFE0)

X86_FUNC(__imp__sub_0045BFF4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045BFF4 push 0x5B5FCC
	{ uint32_t v = (uint32_t)(0x5B5FCCu); X86_PUSH32(v); }
	// 0045BFF9 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045BFFB call 0x0006800A
	X86_PUSH32(0x45C000u); sub_0006800A(ctx, base);
	// 0045C000 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C001 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C002 mov [0x00605B87], al
	{ uint32_t ea = (uint32_t)(0x605B87u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C007 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045BFF4, __imp__sub_0045BFF4)

X86_FUNC(__imp__sub_0045C008) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C008 push 0x5B5FD0
	{ uint32_t v = (uint32_t)(0x5B5FD0u); X86_PUSH32(v); }
	// 0045C00D push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0045C00F call 0x0006800A
	X86_PUSH32(0x45C014u); sub_0006800A(ctx, base);
	// 0045C014 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C015 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C016 mov [0x00605B88], al
	{ uint32_t ea = (uint32_t)(0x605B88u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C01B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C008, __imp__sub_0045C008)

X86_FUNC(__imp__sub_0045C01C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C01C push 0x5B5FD4
	{ uint32_t v = (uint32_t)(0x5B5FD4u); X86_PUSH32(v); }
	// 0045C021 push 0x119
	{ uint32_t v = (uint32_t)(0x119u); X86_PUSH32(v); }
	// 0045C026 call 0x0006800A
	X86_PUSH32(0x45C02Bu); sub_0006800A(ctx, base);
	// 0045C02B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C02C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C02D mov [0x00605B89], al
	{ uint32_t ea = (uint32_t)(0x605B89u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C032 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C01C, __imp__sub_0045C01C)

X86_FUNC(__imp__sub_0045C033) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C033 push 0x5B5FD8
	{ uint32_t v = (uint32_t)(0x5B5FD8u); X86_PUSH32(v); }
	// 0045C038 push 0x11C
	{ uint32_t v = (uint32_t)(0x11Cu); X86_PUSH32(v); }
	// 0045C03D call 0x0006800A
	X86_PUSH32(0x45C042u); sub_0006800A(ctx, base);
	// 0045C042 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C043 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C044 mov [0x00605B8A], al
	{ uint32_t ea = (uint32_t)(0x605B8Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C049 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C033, __imp__sub_0045C033)

X86_FUNC(__imp__sub_0045C04A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C04A push 0x5B5FDC
	{ uint32_t v = (uint32_t)(0x5B5FDCu); X86_PUSH32(v); }
	// 0045C04F push 0x12F
	{ uint32_t v = (uint32_t)(0x12Fu); X86_PUSH32(v); }
	// 0045C054 call 0x0006800A
	X86_PUSH32(0x45C059u); sub_0006800A(ctx, base);
	// 0045C059 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C05A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C05B mov [0x00605B8B], al
	{ uint32_t ea = (uint32_t)(0x605B8Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C060 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C04A, __imp__sub_0045C04A)

X86_FUNC(__imp__sub_0045C061) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C061 push 0x5B5FE0
	{ uint32_t v = (uint32_t)(0x5B5FE0u); X86_PUSH32(v); }
	// 0045C066 push 0x2F
	{ uint32_t v = (uint32_t)(0x2Fu); X86_PUSH32(v); }
	// 0045C068 call 0x0006800A
	X86_PUSH32(0x45C06Du); sub_0006800A(ctx, base);
	// 0045C06D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C06E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C06F mov [0x00605B8C], al
	{ uint32_t ea = (uint32_t)(0x605B8Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C074 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C061, __imp__sub_0045C061)

X86_FUNC(__imp__sub_0045C075) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C075 push 0x5B5FE4
	{ uint32_t v = (uint32_t)(0x5B5FE4u); X86_PUSH32(v); }
	// 0045C07A push 0x5F4
	{ uint32_t v = (uint32_t)(0x5F4u); X86_PUSH32(v); }
	// 0045C07F call 0x0006800A
	X86_PUSH32(0x45C084u); sub_0006800A(ctx, base);
	// 0045C084 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C085 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C086 mov [0x00605B8D], al
	{ uint32_t ea = (uint32_t)(0x605B8Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C08B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C075, __imp__sub_0045C075)

X86_FUNC(__imp__sub_0045C08C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C08C push 0x5B5FE8
	{ uint32_t v = (uint32_t)(0x5B5FE8u); X86_PUSH32(v); }
	// 0045C091 push 0x5F5
	{ uint32_t v = (uint32_t)(0x5F5u); X86_PUSH32(v); }
	// 0045C096 call 0x0006800A
	X86_PUSH32(0x45C09Bu); sub_0006800A(ctx, base);
	// 0045C09B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C09C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C09D mov [0x00605B8E], al
	{ uint32_t ea = (uint32_t)(0x605B8Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C0A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C08C, __imp__sub_0045C08C)

X86_FUNC(__imp__sub_0045C0A3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C0A3 push 0x5B5FEC
	{ uint32_t v = (uint32_t)(0x5B5FECu); X86_PUSH32(v); }
	// 0045C0A8 push 0x5F6
	{ uint32_t v = (uint32_t)(0x5F6u); X86_PUSH32(v); }
	// 0045C0AD call 0x0006800A
	X86_PUSH32(0x45C0B2u); sub_0006800A(ctx, base);
	// 0045C0B2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C0B3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C0B4 mov [0x00605B8F], al
	{ uint32_t ea = (uint32_t)(0x605B8Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C0B9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C0A3, __imp__sub_0045C0A3)

X86_FUNC(__imp__sub_0045C0BA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C0BA push 0x464823
	{ uint32_t v = (uint32_t)(0x464823u); X86_PUSH32(v); }
	// 0045C0BF call 0x00366943
	X86_PUSH32(0x45C0C4u); sub_00366943(ctx, base);
	// 0045C0C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C0C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C0BA, __imp__sub_0045C0BA)

X86_FUNC(__imp__sub_0045C0C6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C0C6 push 0x46482D
	{ uint32_t v = (uint32_t)(0x46482Du); X86_PUSH32(v); }
	// 0045C0CB call 0x00366943
	X86_PUSH32(0x45C0D0u); sub_00366943(ctx, base);
	// 0045C0D0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C0D1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C0C6, __imp__sub_0045C0C6)

X86_FUNC(__imp__sub_0045C0D2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C0D2 mov dword ptr [0x0062A4C8], 0x62A4B0
	{ uint32_t ea = (uint32_t)(0x62A4C8u); X86_MEM32(ea) = (uint32_t)(0x62A4B0u); }
	// 0045C0DC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C0D2, __imp__sub_0045C0D2)

X86_FUNC(__imp__sub_0045C0DD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C0DD push 0x464837
	{ uint32_t v = (uint32_t)(0x464837u); X86_PUSH32(v); }
	// 0045C0E2 call 0x00366943
	X86_PUSH32(0x45C0E7u); sub_00366943(ctx, base);
	// 0045C0E7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C0E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C0DD, __imp__sub_0045C0DD)

X86_FUNC(__imp__sub_0045C0E9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_0045C0E9;
loc_00071217:
	// 00071217 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 00071218 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00071219 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 0007121A mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 0007121C xor esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a ^ b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0007121E mov edi, 0x62A5D8
	{ ctx.edi = (uint32_t)(0x62A5D8u); }
loc_00071223:
	// 00071223 mov edx, esi
	{ ctx.edx = (uint32_t)(ctx.esi); }
	// 00071225 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 00071227 shl edx, 0x18
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t c = (uint32_t)(0x18u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.edx = (uint32_t)(r); } }
	// 0007122A pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
loc_0007122B:
	// 0007122B test edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0007122D jns 0x00071239
	if (((int32_t)(ca & cb)) >= 0) { goto loc_00071239; }
	// 0007122F add edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00071231 xor edx, 0x4C11DB7
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x4C11DB7u); uint32_t r = (uint32_t)(a ^ b); ctx.edx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00071237 jmp 0x0007123B
	goto loc_0007123B;
loc_00071239:
	// 00071239 shl edx, 0x01
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t c = (uint32_t)(0x1u) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.edx = (uint32_t)(r); } }
loc_0007123B:
	// 0007123B dec ebx
	{ uint32_t a = (uint32_t)(ctx.ebx);  uint32_t r = (uint32_t)(a - 1); ctx.ebx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0007123C jnz 0x0007122B
	if (!zf) { X86_BARRIER(); goto loc_0007122B; }
	// 0007123E mov [edi], edx
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00071240 inc esi
	{ uint32_t a = (uint32_t)(ctx.esi);  uint32_t r = (uint32_t)(a + 1); ctx.esi = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00071241 add edi, 0x04
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00071244 cmp esi, 0x100
	{ uint32_t a = (uint32_t)(ctx.esi), b = (uint32_t)(0x100u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0007124A jb 0x00071223
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_00071223; }
	// 0007124C pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 0007124D pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 0007124E pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 0007124F ret
	ctx.esp += 4; return;
loc_0045C0E9:
	// 0045C0E9 mov ecx, 0x62CA18
	{ ctx.ecx = (uint32_t)(0x62CA18u); }
	// 0045C0EE jmp 0x00071217
	X86_BARRIER();
	goto loc_00071217;
}
X86_WEAK_FUNC(sub_0045C0E9, __imp__sub_0045C0E9)

X86_FUNC(__imp__sub_0045C0F3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C0F3 call [0x005B6038]
	{ uint32_t t = X86_MEM32((uint32_t)(0x5B6038u)); X86_PUSH32(0x45C0F9u); x86_icall(ctx, base, t); }
	// 0045C0F9 mov [0x0064D230], eax
	{ uint32_t ea = (uint32_t)(0x64D230u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0045C0FE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C0F3, __imp__sub_0045C0F3)

X86_FUNC(__imp__sub_0045C0FF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C0FF push 0x464841
	{ uint32_t v = (uint32_t)(0x464841u); X86_PUSH32(v); }
	// 0045C104 call 0x00366943
	X86_PUSH32(0x45C109u); sub_00366943(ctx, base);
	// 0045C109 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C10A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C0FF, __imp__sub_0045C0FF)

X86_FUNC(__imp__sub_0045C10B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C10B push 0x46484B
	{ uint32_t v = (uint32_t)(0x46484Bu); X86_PUSH32(v); }
	// 0045C110 call 0x00366943
	X86_PUSH32(0x45C115u); sub_00366943(ctx, base);
	// 0045C115 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C116 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C10B, __imp__sub_0045C10B)

X86_FUNC(__imp__sub_0045C117) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C117 push 0x46485F
	{ uint32_t v = (uint32_t)(0x46485Fu); X86_PUSH32(v); }
	// 0045C11C call 0x00366943
	X86_PUSH32(0x45C121u); sub_00366943(ctx, base);
	// 0045C121 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C122 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C117, __imp__sub_0045C117)

X86_FUNC(__imp__sub_0045C123) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C123 fld [0x00505528]
	{ uint32_t ea = (uint32_t)(0x505528u); x87_push(ctx, X86_MEMF64(ea)); }
	// 0045C129 push 0x464860
	{ uint32_t v = (uint32_t)(0x464860u); X86_PUSH32(v); }
	// 0045C12E fcos
	{ X87_ST(0) = std::cos(X87_ST(0)); ctx.fsw &= ~0x400; }
	// 0045C130 fst [0x005B6A54]
	{ uint32_t ea = (uint32_t)(0x5B6A54u); X86_MEMF32(ea) = (float)X87_ST(0); }
	// 0045C136 fld [0x00505528]
	{ uint32_t ea = (uint32_t)(0x505528u); x87_push(ctx, X86_MEMF64(ea)); }
	// 0045C13C fsin
	{ X87_ST(0) = std::sin(X87_ST(0)); ctx.fsw &= ~0x400; }
	// 0045C13E fst [0x005B6A58]
	{ uint32_t ea = (uint32_t)(0x5B6A58u); X86_MEMF32(ea) = (float)X87_ST(0); }
	// 0045C144 fchs
	{ X87_ST(0) = -X87_ST(0); }
	// 0045C146 fstp [0x005B6A64]
	{ uint32_t ea = (uint32_t)(0x5B6A64u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0045C14C fstp [0x005B6A68]
	{ uint32_t ea = (uint32_t)(0x5B6A68u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0045C152 call 0x00366943
	X86_PUSH32(0x45C157u); sub_00366943(ctx, base);
	// 0045C157 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C158 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C123, __imp__sub_0045C123)

X86_FUNC(__imp__sub_0045C159) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C159 fld [0x00505528]
	{ uint32_t ea = (uint32_t)(0x505528u); x87_push(ctx, X86_MEMF64(ea)); }
	// 0045C15F push 0x464861
	{ uint32_t v = (uint32_t)(0x464861u); X86_PUSH32(v); }
	// 0045C164 fcos
	{ X87_ST(0) = std::cos(X87_ST(0)); ctx.fsw &= ~0x400; }
	// 0045C166 fst [0x005B6A80]
	{ uint32_t ea = (uint32_t)(0x5B6A80u); X86_MEMF32(ea) = (float)X87_ST(0); }
	// 0045C16C fld [0x00505528]
	{ uint32_t ea = (uint32_t)(0x505528u); x87_push(ctx, X86_MEMF64(ea)); }
	// 0045C172 fsin
	{ X87_ST(0) = std::sin(X87_ST(0)); ctx.fsw &= ~0x400; }
	// 0045C174 fld st0
	{ double v = X87_ST(0); x87_push(ctx, v); }
	// 0045C176 fchs
	{ X87_ST(0) = -X87_ST(0); }
	// 0045C178 fstp [0x005B6A88]
	{ uint32_t ea = (uint32_t)(0x5B6A88u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0045C17E fstp [0x005B6AA0]
	{ uint32_t ea = (uint32_t)(0x5B6AA0u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0045C184 fstp [0x005B6AA8]
	{ uint32_t ea = (uint32_t)(0x5B6AA8u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0045C18A call 0x00366943
	X86_PUSH32(0x45C18Fu); sub_00366943(ctx, base);
	// 0045C18F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C190 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C159, __imp__sub_0045C159)

X86_FUNC(__imp__sub_0045C191) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C191 fld [0x00505528]
	{ uint32_t ea = (uint32_t)(0x505528u); x87_push(ctx, X86_MEMF64(ea)); }
	// 0045C197 push 0x464862
	{ uint32_t v = (uint32_t)(0x464862u); X86_PUSH32(v); }
	// 0045C19C fcos
	{ X87_ST(0) = std::cos(X87_ST(0)); ctx.fsw &= ~0x400; }
	// 0045C19E fst [0x005B6AC0]
	{ uint32_t ea = (uint32_t)(0x5B6AC0u); X86_MEMF32(ea) = (float)X87_ST(0); }
	// 0045C1A4 fld [0x00505528]
	{ uint32_t ea = (uint32_t)(0x505528u); x87_push(ctx, X86_MEMF64(ea)); }
	// 0045C1AA fsin
	{ X87_ST(0) = std::sin(X87_ST(0)); ctx.fsw &= ~0x400; }
	// 0045C1AC fst [0x005B6AC4]
	{ uint32_t ea = (uint32_t)(0x5B6AC4u); X86_MEMF32(ea) = (float)X87_ST(0); }
	// 0045C1B2 fchs
	{ X87_ST(0) = -X87_ST(0); }
	// 0045C1B4 fstp [0x005B6AD0]
	{ uint32_t ea = (uint32_t)(0x5B6AD0u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0045C1BA fstp [0x005B6AD4]
	{ uint32_t ea = (uint32_t)(0x5B6AD4u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 0045C1C0 call 0x00366943
	X86_PUSH32(0x45C1C5u); sub_00366943(ctx, base);
	// 0045C1C5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C1C6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C191, __imp__sub_0045C191)

X86_FUNC(__imp__sub_0045C1C7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C1C7 mov ecx, 0x64D8A0
	{ ctx.ecx = (uint32_t)(0x64D8A0u); }
	// 0045C1CC call 0x0009F0DA
	X86_PUSH32(0x45C1D1u); sub_0009F0DA(ctx, base);
	// 0045C1D1 push 0x464863
	{ uint32_t v = (uint32_t)(0x464863u); X86_PUSH32(v); }
	// 0045C1D6 call 0x00366943
	X86_PUSH32(0x45C1DBu); sub_00366943(ctx, base);
	// 0045C1DB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C1DC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C1C7, __imp__sub_0045C1C7)

X86_FUNC(__imp__sub_0045C1DD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C1DD push 0x5B6B08
	{ uint32_t v = (uint32_t)(0x5B6B08u); X86_PUSH32(v); }
	// 0045C1E2 push 0x96F
	{ uint32_t v = (uint32_t)(0x96Fu); X86_PUSH32(v); }
	// 0045C1E7 call 0x0006800A
	X86_PUSH32(0x45C1ECu); sub_0006800A(ctx, base);
	// 0045C1EC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C1ED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C1EE mov [0x0064D900], al
	{ uint32_t ea = (uint32_t)(0x64D900u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C1F3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C1DD, __imp__sub_0045C1DD)

X86_FUNC(__imp__sub_0045C1F4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C1F4 push 0x5B6B0C
	{ uint32_t v = (uint32_t)(0x5B6B0Cu); X86_PUSH32(v); }
	// 0045C1F9 push 0x53C
	{ uint32_t v = (uint32_t)(0x53Cu); X86_PUSH32(v); }
	// 0045C1FE call 0x0006800A
	X86_PUSH32(0x45C203u); sub_0006800A(ctx, base);
	// 0045C203 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C204 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C205 mov [0x0064D901], al
	{ uint32_t ea = (uint32_t)(0x64D901u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C20A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C1F4, __imp__sub_0045C1F4)

X86_FUNC(__imp__sub_0045C20B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C20B push 0x5B6B10
	{ uint32_t v = (uint32_t)(0x5B6B10u); X86_PUSH32(v); }
	// 0045C210 push 0x64C
	{ uint32_t v = (uint32_t)(0x64Cu); X86_PUSH32(v); }
	// 0045C215 call 0x0006800A
	X86_PUSH32(0x45C21Au); sub_0006800A(ctx, base);
	// 0045C21A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C21B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C21C mov [0x0064D902], al
	{ uint32_t ea = (uint32_t)(0x64D902u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C221 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C20B, __imp__sub_0045C20B)

X86_FUNC(__imp__sub_0045C222) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C222 push 0x5B6B14
	{ uint32_t v = (uint32_t)(0x5B6B14u); X86_PUSH32(v); }
	// 0045C227 push 0x699
	{ uint32_t v = (uint32_t)(0x699u); X86_PUSH32(v); }
	// 0045C22C call 0x0006800A
	X86_PUSH32(0x45C231u); sub_0006800A(ctx, base);
	// 0045C231 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C232 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C233 mov [0x0064D903], al
	{ uint32_t ea = (uint32_t)(0x64D903u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C238 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C222, __imp__sub_0045C222)

X86_FUNC(__imp__sub_0045C239) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C239 push 0x5B6B18
	{ uint32_t v = (uint32_t)(0x5B6B18u); X86_PUSH32(v); }
	// 0045C23E push 0x6A0
	{ uint32_t v = (uint32_t)(0x6A0u); X86_PUSH32(v); }
	// 0045C243 call 0x0006800A
	X86_PUSH32(0x45C248u); sub_0006800A(ctx, base);
	// 0045C248 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C249 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C24A mov [0x0064D904], al
	{ uint32_t ea = (uint32_t)(0x64D904u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C24F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C239, __imp__sub_0045C239)

X86_FUNC(__imp__sub_0045C250) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C250 push 0x5B6B1C
	{ uint32_t v = (uint32_t)(0x5B6B1Cu); X86_PUSH32(v); }
	// 0045C255 push 0x535
	{ uint32_t v = (uint32_t)(0x535u); X86_PUSH32(v); }
	// 0045C25A call 0x0006800A
	X86_PUSH32(0x45C25Fu); sub_0006800A(ctx, base);
	// 0045C25F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C260 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C261 mov [0x0064D905], al
	{ uint32_t ea = (uint32_t)(0x64D905u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C266 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C250, __imp__sub_0045C250)

X86_FUNC(__imp__sub_0045C267) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C267 push 0x5B6B20
	{ uint32_t v = (uint32_t)(0x5B6B20u); X86_PUSH32(v); }
	// 0045C26C push 0x64D
	{ uint32_t v = (uint32_t)(0x64Du); X86_PUSH32(v); }
	// 0045C271 call 0x0006800A
	X86_PUSH32(0x45C276u); sub_0006800A(ctx, base);
	// 0045C276 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C277 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C278 mov [0x0064D906], al
	{ uint32_t ea = (uint32_t)(0x64D906u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C27D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C267, __imp__sub_0045C267)

X86_FUNC(__imp__sub_0045C27E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C27E push 0x5B6B24
	{ uint32_t v = (uint32_t)(0x5B6B24u); X86_PUSH32(v); }
	// 0045C283 push 0x586
	{ uint32_t v = (uint32_t)(0x586u); X86_PUSH32(v); }
	// 0045C288 call 0x0006800A
	X86_PUSH32(0x45C28Du); sub_0006800A(ctx, base);
	// 0045C28D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C28E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C28F mov [0x0064D907], al
	{ uint32_t ea = (uint32_t)(0x64D907u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C294 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C27E, __imp__sub_0045C27E)

X86_FUNC(__imp__sub_0045C295) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C295 push 0x5B6B28
	{ uint32_t v = (uint32_t)(0x5B6B28u); X86_PUSH32(v); }
	// 0045C29A push 0xE59
	{ uint32_t v = (uint32_t)(0xE59u); X86_PUSH32(v); }
	// 0045C29F call 0x0006800A
	X86_PUSH32(0x45C2A4u); sub_0006800A(ctx, base);
	// 0045C2A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C2A5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C2A6 mov [0x0064D908], al
	{ uint32_t ea = (uint32_t)(0x64D908u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C2AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C295, __imp__sub_0045C295)

X86_FUNC(__imp__sub_0045C2AC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C2AC push 0x5B6B2C
	{ uint32_t v = (uint32_t)(0x5B6B2Cu); X86_PUSH32(v); }
	// 0045C2B1 push 0x8BA
	{ uint32_t v = (uint32_t)(0x8BAu); X86_PUSH32(v); }
	// 0045C2B6 call 0x0006800A
	X86_PUSH32(0x45C2BBu); sub_0006800A(ctx, base);
	// 0045C2BB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C2BC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C2BD mov [0x0064D909], al
	{ uint32_t ea = (uint32_t)(0x64D909u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C2C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C2AC, __imp__sub_0045C2AC)

X86_FUNC(__imp__sub_0045C2C3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C2C3 push 0x5B6B30
	{ uint32_t v = (uint32_t)(0x5B6B30u); X86_PUSH32(v); }
	// 0045C2C8 push 0x53A
	{ uint32_t v = (uint32_t)(0x53Au); X86_PUSH32(v); }
	// 0045C2CD call 0x0006800A
	X86_PUSH32(0x45C2D2u); sub_0006800A(ctx, base);
	// 0045C2D2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C2D3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C2D4 mov [0x0064D90A], al
	{ uint32_t ea = (uint32_t)(0x64D90Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C2D9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C2C3, __imp__sub_0045C2C3)

X86_FUNC(__imp__sub_0045C2DA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C2DA push 0x4648F8
	{ uint32_t v = (uint32_t)(0x4648F8u); X86_PUSH32(v); }
	// 0045C2DF call 0x00366943
	X86_PUSH32(0x45C2E4u); sub_00366943(ctx, base);
	// 0045C2E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C2E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C2DA, __imp__sub_0045C2DA)

X86_FUNC(__imp__sub_0045C2E6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C2E6 push 0x464915
	{ uint32_t v = (uint32_t)(0x464915u); X86_PUSH32(v); }
	// 0045C2EB call 0x00366943
	X86_PUSH32(0x45C2F0u); sub_00366943(ctx, base);
	// 0045C2F0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C2F1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C2E6, __imp__sub_0045C2E6)

X86_FUNC(__imp__sub_0045C2F2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C2F2 push 0x5B6B88
	{ uint32_t v = (uint32_t)(0x5B6B88u); X86_PUSH32(v); }
	// 0045C2F7 push 0xBC5
	{ uint32_t v = (uint32_t)(0xBC5u); X86_PUSH32(v); }
	// 0045C2FC call 0x0006800A
	X86_PUSH32(0x45C301u); sub_0006800A(ctx, base);
	// 0045C301 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C302 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C303 mov [0x0064E74C], al
	{ uint32_t ea = (uint32_t)(0x64E74Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C308 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C2F2, __imp__sub_0045C2F2)

X86_FUNC(__imp__sub_0045C309) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C309 push 0x5B6B8C
	{ uint32_t v = (uint32_t)(0x5B6B8Cu); X86_PUSH32(v); }
	// 0045C30E push 0x515
	{ uint32_t v = (uint32_t)(0x515u); X86_PUSH32(v); }
	// 0045C313 call 0x0006800A
	X86_PUSH32(0x45C318u); sub_0006800A(ctx, base);
	// 0045C318 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C319 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C31A mov [0x0064E74D], al
	{ uint32_t ea = (uint32_t)(0x64E74Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C31F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C309, __imp__sub_0045C309)

X86_FUNC(__imp__sub_0045C320) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C320 push 0x5B6B90
	{ uint32_t v = (uint32_t)(0x5B6B90u); X86_PUSH32(v); }
	// 0045C325 push 0xBB8
	{ uint32_t v = (uint32_t)(0xBB8u); X86_PUSH32(v); }
	// 0045C32A call 0x0006800A
	X86_PUSH32(0x45C32Fu); sub_0006800A(ctx, base);
	// 0045C32F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C330 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C331 mov [0x0064E74E], al
	{ uint32_t ea = (uint32_t)(0x64E74Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C336 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C320, __imp__sub_0045C320)

X86_FUNC(__imp__sub_0045C337) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C337 push 0x5B6B94
	{ uint32_t v = (uint32_t)(0x5B6B94u); X86_PUSH32(v); }
	// 0045C33C push 0xBB9
	{ uint32_t v = (uint32_t)(0xBB9u); X86_PUSH32(v); }
	// 0045C341 call 0x0006800A
	X86_PUSH32(0x45C346u); sub_0006800A(ctx, base);
	// 0045C346 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C347 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C348 mov [0x0064E74F], al
	{ uint32_t ea = (uint32_t)(0x64E74Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C34D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C337, __imp__sub_0045C337)

X86_FUNC(__imp__sub_0045C34E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C34E push 0x5B6B98
	{ uint32_t v = (uint32_t)(0x5B6B98u); X86_PUSH32(v); }
	// 0045C353 push 0xBBA
	{ uint32_t v = (uint32_t)(0xBBAu); X86_PUSH32(v); }
	// 0045C358 call 0x0006800A
	X86_PUSH32(0x45C35Du); sub_0006800A(ctx, base);
	// 0045C35D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C35E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C35F mov [0x0064E750], al
	{ uint32_t ea = (uint32_t)(0x64E750u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C364 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C34E, __imp__sub_0045C34E)

X86_FUNC(__imp__sub_0045C365) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C365 push 0x5B6B9C
	{ uint32_t v = (uint32_t)(0x5B6B9Cu); X86_PUSH32(v); }
	// 0045C36A push 0xBBB
	{ uint32_t v = (uint32_t)(0xBBBu); X86_PUSH32(v); }
	// 0045C36F call 0x0006800A
	X86_PUSH32(0x45C374u); sub_0006800A(ctx, base);
	// 0045C374 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C375 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C376 mov [0x0064E751], al
	{ uint32_t ea = (uint32_t)(0x64E751u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C37B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C365, __imp__sub_0045C365)

X86_FUNC(__imp__sub_0045C37C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C37C push 0x5B6BA0
	{ uint32_t v = (uint32_t)(0x5B6BA0u); X86_PUSH32(v); }
	// 0045C381 push 0x5E4
	{ uint32_t v = (uint32_t)(0x5E4u); X86_PUSH32(v); }
	// 0045C386 call 0x0006800A
	X86_PUSH32(0x45C38Bu); sub_0006800A(ctx, base);
	// 0045C38B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C38C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C38D mov [0x0064E752], al
	{ uint32_t ea = (uint32_t)(0x64E752u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C392 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C37C, __imp__sub_0045C37C)

X86_FUNC(__imp__sub_0045C393) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C393 push 0x5B6BA4
	{ uint32_t v = (uint32_t)(0x5B6BA4u); X86_PUSH32(v); }
	// 0045C398 push 0xBBD
	{ uint32_t v = (uint32_t)(0xBBDu); X86_PUSH32(v); }
	// 0045C39D call 0x0006800A
	X86_PUSH32(0x45C3A2u); sub_0006800A(ctx, base);
	// 0045C3A2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C3A3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C3A4 mov [0x0064E753], al
	{ uint32_t ea = (uint32_t)(0x64E753u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C3A9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C393, __imp__sub_0045C393)

X86_FUNC(__imp__sub_0045C3AA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C3AA push 0x5B6BA8
	{ uint32_t v = (uint32_t)(0x5B6BA8u); X86_PUSH32(v); }
	// 0045C3AF push 0xBBE
	{ uint32_t v = (uint32_t)(0xBBEu); X86_PUSH32(v); }
	// 0045C3B4 call 0x0006800A
	X86_PUSH32(0x45C3B9u); sub_0006800A(ctx, base);
	// 0045C3B9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C3BA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C3BB mov [0x0064E754], al
	{ uint32_t ea = (uint32_t)(0x64E754u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C3C0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C3AA, __imp__sub_0045C3AA)

X86_FUNC(__imp__sub_0045C3C1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C3C1 push 0x5B6BAC
	{ uint32_t v = (uint32_t)(0x5B6BACu); X86_PUSH32(v); }
	// 0045C3C6 push 0xBBF
	{ uint32_t v = (uint32_t)(0xBBFu); X86_PUSH32(v); }
	// 0045C3CB call 0x0006800A
	X86_PUSH32(0x45C3D0u); sub_0006800A(ctx, base);
	// 0045C3D0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C3D1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C3D2 mov [0x0064E755], al
	{ uint32_t ea = (uint32_t)(0x64E755u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C3D7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C3C1, __imp__sub_0045C3C1)

X86_FUNC(__imp__sub_0045C3D8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C3D8 push 0x5B6BB0
	{ uint32_t v = (uint32_t)(0x5B6BB0u); X86_PUSH32(v); }
	// 0045C3DD push 0xBC0
	{ uint32_t v = (uint32_t)(0xBC0u); X86_PUSH32(v); }
	// 0045C3E2 call 0x0006800A
	X86_PUSH32(0x45C3E7u); sub_0006800A(ctx, base);
	// 0045C3E7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C3E8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C3E9 mov [0x0064E756], al
	{ uint32_t ea = (uint32_t)(0x64E756u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C3EE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C3D8, __imp__sub_0045C3D8)

X86_FUNC(__imp__sub_0045C3EF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C3EF push 0x5B6BB4
	{ uint32_t v = (uint32_t)(0x5B6BB4u); X86_PUSH32(v); }
	// 0045C3F4 push 0xBC1
	{ uint32_t v = (uint32_t)(0xBC1u); X86_PUSH32(v); }
	// 0045C3F9 call 0x0006800A
	X86_PUSH32(0x45C3FEu); sub_0006800A(ctx, base);
	// 0045C3FE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C3FF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C400 mov [0x0064E757], al
	{ uint32_t ea = (uint32_t)(0x64E757u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C405 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C3EF, __imp__sub_0045C3EF)

X86_FUNC(__imp__sub_0045C406) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C406 push 0x5B6BB8
	{ uint32_t v = (uint32_t)(0x5B6BB8u); X86_PUSH32(v); }
	// 0045C40B push 0xBC3
	{ uint32_t v = (uint32_t)(0xBC3u); X86_PUSH32(v); }
	// 0045C410 call 0x0006800A
	X86_PUSH32(0x45C415u); sub_0006800A(ctx, base);
	// 0045C415 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C416 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C417 mov [0x0064E758], al
	{ uint32_t ea = (uint32_t)(0x64E758u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C41C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C406, __imp__sub_0045C406)

X86_FUNC(__imp__sub_0045C41D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C41D push 0x5B6BBC
	{ uint32_t v = (uint32_t)(0x5B6BBCu); X86_PUSH32(v); }
	// 0045C422 push 0xBC4
	{ uint32_t v = (uint32_t)(0xBC4u); X86_PUSH32(v); }
	// 0045C427 call 0x0006800A
	X86_PUSH32(0x45C42Cu); sub_0006800A(ctx, base);
	// 0045C42C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C42D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C42E mov [0x0064E759], al
	{ uint32_t ea = (uint32_t)(0x64E759u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C433 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C41D, __imp__sub_0045C41D)

X86_FUNC(__imp__sub_0045C434) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C434 push 0x5B6BC0
	{ uint32_t v = (uint32_t)(0x5B6BC0u); X86_PUSH32(v); }
	// 0045C439 push 0x518
	{ uint32_t v = (uint32_t)(0x518u); X86_PUSH32(v); }
	// 0045C43E call 0x0006800A
	X86_PUSH32(0x45C443u); sub_0006800A(ctx, base);
	// 0045C443 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C444 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C445 mov [0x0064E75A], al
	{ uint32_t ea = (uint32_t)(0x64E75Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C44A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C434, __imp__sub_0045C434)

X86_FUNC(__imp__sub_0045C44B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C44B push 0x5B6BC4
	{ uint32_t v = (uint32_t)(0x5B6BC4u); X86_PUSH32(v); }
	// 0045C450 push 0x51F
	{ uint32_t v = (uint32_t)(0x51Fu); X86_PUSH32(v); }
	// 0045C455 call 0x0006800A
	X86_PUSH32(0x45C45Au); sub_0006800A(ctx, base);
	// 0045C45A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C45B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C45C mov [0x0064E75B], al
	{ uint32_t ea = (uint32_t)(0x64E75Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C461 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C44B, __imp__sub_0045C44B)

X86_FUNC(__imp__sub_0045C462) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C462 push 0x5B6BC8
	{ uint32_t v = (uint32_t)(0x5B6BC8u); X86_PUSH32(v); }
	// 0045C467 push 0x527
	{ uint32_t v = (uint32_t)(0x527u); X86_PUSH32(v); }
	// 0045C46C call 0x0006800A
	X86_PUSH32(0x45C471u); sub_0006800A(ctx, base);
	// 0045C471 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C472 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C473 mov [0x0064E75C], al
	{ uint32_t ea = (uint32_t)(0x64E75Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C478 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C462, __imp__sub_0045C462)

X86_FUNC(__imp__sub_0045C479) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C479 push 0x5B6BCC
	{ uint32_t v = (uint32_t)(0x5B6BCCu); X86_PUSH32(v); }
	// 0045C47E push 0x528
	{ uint32_t v = (uint32_t)(0x528u); X86_PUSH32(v); }
	// 0045C483 call 0x0006800A
	X86_PUSH32(0x45C488u); sub_0006800A(ctx, base);
	// 0045C488 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C489 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C48A mov [0x0064E75D], al
	{ uint32_t ea = (uint32_t)(0x64E75Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C48F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C479, __imp__sub_0045C479)

X86_FUNC(__imp__sub_0045C490) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C490 push 0x5B6C58
	{ uint32_t v = (uint32_t)(0x5B6C58u); X86_PUSH32(v); }
	// 0045C495 push 0x4C1
	{ uint32_t v = (uint32_t)(0x4C1u); X86_PUSH32(v); }
	// 0045C49A call 0x0006800A
	X86_PUSH32(0x45C49Fu); sub_0006800A(ctx, base);
	// 0045C49F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C4A0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C4A1 mov [0x0064EB00], al
	{ uint32_t ea = (uint32_t)(0x64EB00u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C4A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C490, __imp__sub_0045C490)

X86_FUNC(__imp__sub_0045C4A7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C4A7 push 0x5B6C5C
	{ uint32_t v = (uint32_t)(0x5B6C5Cu); X86_PUSH32(v); }
	// 0045C4AC push 0x4C0
	{ uint32_t v = (uint32_t)(0x4C0u); X86_PUSH32(v); }
	// 0045C4B1 call 0x0006800A
	X86_PUSH32(0x45C4B6u); sub_0006800A(ctx, base);
	// 0045C4B6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C4B7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C4B8 mov [0x0064EB01], al
	{ uint32_t ea = (uint32_t)(0x64EB01u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C4BD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C4A7, __imp__sub_0045C4A7)

X86_FUNC(__imp__sub_0045C4BE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C4BE push 0x5B6C60
	{ uint32_t v = (uint32_t)(0x5B6C60u); X86_PUSH32(v); }
	// 0045C4C3 push 0x4BF
	{ uint32_t v = (uint32_t)(0x4BFu); X86_PUSH32(v); }
	// 0045C4C8 call 0x0006800A
	X86_PUSH32(0x45C4CDu); sub_0006800A(ctx, base);
	// 0045C4CD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C4CE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C4CF mov [0x0064EB02], al
	{ uint32_t ea = (uint32_t)(0x64EB02u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C4D4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C4BE, __imp__sub_0045C4BE)

X86_FUNC(__imp__sub_0045C4D5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C4D5 push 0x5B6C64
	{ uint32_t v = (uint32_t)(0x5B6C64u); X86_PUSH32(v); }
	// 0045C4DA push 0x4BE
	{ uint32_t v = (uint32_t)(0x4BEu); X86_PUSH32(v); }
	// 0045C4DF call 0x0006800A
	X86_PUSH32(0x45C4E4u); sub_0006800A(ctx, base);
	// 0045C4E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C4E5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C4E6 mov [0x0064EB03], al
	{ uint32_t ea = (uint32_t)(0x64EB03u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C4EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C4D5, __imp__sub_0045C4D5)

X86_FUNC(__imp__sub_0045C4EC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C4EC push 0x5B6C68
	{ uint32_t v = (uint32_t)(0x5B6C68u); X86_PUSH32(v); }
	// 0045C4F1 push 0x4BD
	{ uint32_t v = (uint32_t)(0x4BDu); X86_PUSH32(v); }
	// 0045C4F6 call 0x0006800A
	X86_PUSH32(0x45C4FBu); sub_0006800A(ctx, base);
	// 0045C4FB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C4FC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C4FD mov [0x0064EB04], al
	{ uint32_t ea = (uint32_t)(0x64EB04u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C502 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C4EC, __imp__sub_0045C4EC)

X86_FUNC(__imp__sub_0045C503) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C503 push 0x5B6C6C
	{ uint32_t v = (uint32_t)(0x5B6C6Cu); X86_PUSH32(v); }
	// 0045C508 push 0x4BC
	{ uint32_t v = (uint32_t)(0x4BCu); X86_PUSH32(v); }
	// 0045C50D call 0x0006800A
	X86_PUSH32(0x45C512u); sub_0006800A(ctx, base);
	// 0045C512 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C513 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C514 mov [0x0064EB05], al
	{ uint32_t ea = (uint32_t)(0x64EB05u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C519 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C503, __imp__sub_0045C503)

X86_FUNC(__imp__sub_0045C51A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C51A push 0x5B6C70
	{ uint32_t v = (uint32_t)(0x5B6C70u); X86_PUSH32(v); }
	// 0045C51F push 0x4BB
	{ uint32_t v = (uint32_t)(0x4BBu); X86_PUSH32(v); }
	// 0045C524 call 0x0006800A
	X86_PUSH32(0x45C529u); sub_0006800A(ctx, base);
	// 0045C529 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C52A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C52B mov [0x0064EB06], al
	{ uint32_t ea = (uint32_t)(0x64EB06u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C530 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C51A, __imp__sub_0045C51A)

X86_FUNC(__imp__sub_0045C531) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C531 push 0x5B6C74
	{ uint32_t v = (uint32_t)(0x5B6C74u); X86_PUSH32(v); }
	// 0045C536 push 0x4BA
	{ uint32_t v = (uint32_t)(0x4BAu); X86_PUSH32(v); }
	// 0045C53B call 0x0006800A
	X86_PUSH32(0x45C540u); sub_0006800A(ctx, base);
	// 0045C540 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C541 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C542 mov [0x0064EB07], al
	{ uint32_t ea = (uint32_t)(0x64EB07u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C547 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C531, __imp__sub_0045C531)

X86_FUNC(__imp__sub_0045C548) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C548 push 0x5B6C78
	{ uint32_t v = (uint32_t)(0x5B6C78u); X86_PUSH32(v); }
	// 0045C54D push 0x7F8
	{ uint32_t v = (uint32_t)(0x7F8u); X86_PUSH32(v); }
	// 0045C552 call 0x0006800A
	X86_PUSH32(0x45C557u); sub_0006800A(ctx, base);
	// 0045C557 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C558 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C559 mov [0x0064EB08], al
	{ uint32_t ea = (uint32_t)(0x64EB08u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C55E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C548, __imp__sub_0045C548)

X86_FUNC(__imp__sub_0045C55F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C55F push 0x5B6C7C
	{ uint32_t v = (uint32_t)(0x5B6C7Cu); X86_PUSH32(v); }
	// 0045C564 push 0x503
	{ uint32_t v = (uint32_t)(0x503u); X86_PUSH32(v); }
	// 0045C569 call 0x0006800A
	X86_PUSH32(0x45C56Eu); sub_0006800A(ctx, base);
	// 0045C56E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C56F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C570 mov [0x0064EB09], al
	{ uint32_t ea = (uint32_t)(0x64EB09u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C575 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C55F, __imp__sub_0045C55F)

X86_FUNC(__imp__sub_0045C576) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C576 push 0x5B6C80
	{ uint32_t v = (uint32_t)(0x5B6C80u); X86_PUSH32(v); }
	// 0045C57B push 0x502
	{ uint32_t v = (uint32_t)(0x502u); X86_PUSH32(v); }
	// 0045C580 call 0x0006800A
	X86_PUSH32(0x45C585u); sub_0006800A(ctx, base);
	// 0045C585 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C586 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C587 mov [0x0064EB0A], al
	{ uint32_t ea = (uint32_t)(0x64EB0Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C58C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C576, __imp__sub_0045C576)

X86_FUNC(__imp__sub_0045C58D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C58D push 0x5B6C84
	{ uint32_t v = (uint32_t)(0x5B6C84u); X86_PUSH32(v); }
	// 0045C592 push 0x501
	{ uint32_t v = (uint32_t)(0x501u); X86_PUSH32(v); }
	// 0045C597 call 0x0006800A
	X86_PUSH32(0x45C59Cu); sub_0006800A(ctx, base);
	// 0045C59C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C59D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C59E mov [0x0064EB0B], al
	{ uint32_t ea = (uint32_t)(0x64EB0Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C5A3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C58D, __imp__sub_0045C58D)

X86_FUNC(__imp__sub_0045C5A4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C5A4 push 0x5B6C88
	{ uint32_t v = (uint32_t)(0x5B6C88u); X86_PUSH32(v); }
	// 0045C5A9 push 0x4EB
	{ uint32_t v = (uint32_t)(0x4EBu); X86_PUSH32(v); }
	// 0045C5AE call 0x0006800A
	X86_PUSH32(0x45C5B3u); sub_0006800A(ctx, base);
	// 0045C5B3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C5B4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C5B5 mov [0x0064EB0C], al
	{ uint32_t ea = (uint32_t)(0x64EB0Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C5BA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C5A4, __imp__sub_0045C5A4)

X86_FUNC(__imp__sub_0045C5BB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C5BB push 0x5B6C8C
	{ uint32_t v = (uint32_t)(0x5B6C8Cu); X86_PUSH32(v); }
	// 0045C5C0 push 0x4EA
	{ uint32_t v = (uint32_t)(0x4EAu); X86_PUSH32(v); }
	// 0045C5C5 call 0x0006800A
	X86_PUSH32(0x45C5CAu); sub_0006800A(ctx, base);
	// 0045C5CA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C5CB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C5CC mov [0x0064EB0D], al
	{ uint32_t ea = (uint32_t)(0x64EB0Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C5D1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C5BB, __imp__sub_0045C5BB)

X86_FUNC(__imp__sub_0045C5D2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C5D2 push 0x5B6C90
	{ uint32_t v = (uint32_t)(0x5B6C90u); X86_PUSH32(v); }
	// 0045C5D7 push 0x4E9
	{ uint32_t v = (uint32_t)(0x4E9u); X86_PUSH32(v); }
	// 0045C5DC call 0x0006800A
	X86_PUSH32(0x45C5E1u); sub_0006800A(ctx, base);
	// 0045C5E1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C5E2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C5E3 mov [0x0064EB0E], al
	{ uint32_t ea = (uint32_t)(0x64EB0Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C5E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C5D2, __imp__sub_0045C5D2)

X86_FUNC(__imp__sub_0045C5E9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C5E9 push 0x5B6C94
	{ uint32_t v = (uint32_t)(0x5B6C94u); X86_PUSH32(v); }
	// 0045C5EE push 0x4E8
	{ uint32_t v = (uint32_t)(0x4E8u); X86_PUSH32(v); }
	// 0045C5F3 call 0x0006800A
	X86_PUSH32(0x45C5F8u); sub_0006800A(ctx, base);
	// 0045C5F8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C5F9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C5FA mov [0x0064EB0F], al
	{ uint32_t ea = (uint32_t)(0x64EB0Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C5FF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C5E9, __imp__sub_0045C5E9)

X86_FUNC(__imp__sub_0045C600) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C600 push 0x5B6C98
	{ uint32_t v = (uint32_t)(0x5B6C98u); X86_PUSH32(v); }
	// 0045C605 push 0x4E7
	{ uint32_t v = (uint32_t)(0x4E7u); X86_PUSH32(v); }
	// 0045C60A call 0x0006800A
	X86_PUSH32(0x45C60Fu); sub_0006800A(ctx, base);
	// 0045C60F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C610 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C611 mov [0x0064EB10], al
	{ uint32_t ea = (uint32_t)(0x64EB10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C616 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C600, __imp__sub_0045C600)

X86_FUNC(__imp__sub_0045C617) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C617 push 0x5B6C9C
	{ uint32_t v = (uint32_t)(0x5B6C9Cu); X86_PUSH32(v); }
	// 0045C61C push 0x4E5
	{ uint32_t v = (uint32_t)(0x4E5u); X86_PUSH32(v); }
	// 0045C621 call 0x0006800A
	X86_PUSH32(0x45C626u); sub_0006800A(ctx, base);
	// 0045C626 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C627 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C628 mov [0x0064EB11], al
	{ uint32_t ea = (uint32_t)(0x64EB11u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C62D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C617, __imp__sub_0045C617)

X86_FUNC(__imp__sub_0045C62E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C62E push 0x5B6CA0
	{ uint32_t v = (uint32_t)(0x5B6CA0u); X86_PUSH32(v); }
	// 0045C633 push 0x4E4
	{ uint32_t v = (uint32_t)(0x4E4u); X86_PUSH32(v); }
	// 0045C638 call 0x0006800A
	X86_PUSH32(0x45C63Du); sub_0006800A(ctx, base);
	// 0045C63D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C63E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C63F mov [0x0064EB12], al
	{ uint32_t ea = (uint32_t)(0x64EB12u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C644 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C62E, __imp__sub_0045C62E)

X86_FUNC(__imp__sub_0045C645) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C645 push 0x5B6CA4
	{ uint32_t v = (uint32_t)(0x5B6CA4u); X86_PUSH32(v); }
	// 0045C64A push 0x7FE
	{ uint32_t v = (uint32_t)(0x7FEu); X86_PUSH32(v); }
	// 0045C64F call 0x0006800A
	X86_PUSH32(0x45C654u); sub_0006800A(ctx, base);
	// 0045C654 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C655 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C656 mov [0x0064EB13], al
	{ uint32_t ea = (uint32_t)(0x64EB13u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C65B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C645, __imp__sub_0045C645)

X86_FUNC(__imp__sub_0045C65C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C65C push 0x5B6CA8
	{ uint32_t v = (uint32_t)(0x5B6CA8u); X86_PUSH32(v); }
	// 0045C661 push 0x7FD
	{ uint32_t v = (uint32_t)(0x7FDu); X86_PUSH32(v); }
	// 0045C666 call 0x0006800A
	X86_PUSH32(0x45C66Bu); sub_0006800A(ctx, base);
	// 0045C66B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C66C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C66D mov [0x0064EB14], al
	{ uint32_t ea = (uint32_t)(0x64EB14u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C672 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C65C, __imp__sub_0045C65C)

X86_FUNC(__imp__sub_0045C673) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C673 push 0x5B6CAC
	{ uint32_t v = (uint32_t)(0x5B6CACu); X86_PUSH32(v); }
	// 0045C678 push 0x421
	{ uint32_t v = (uint32_t)(0x421u); X86_PUSH32(v); }
	// 0045C67D call 0x0006800A
	X86_PUSH32(0x45C682u); sub_0006800A(ctx, base);
	// 0045C682 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C683 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C684 mov [0x0064EB15], al
	{ uint32_t ea = (uint32_t)(0x64EB15u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C689 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C673, __imp__sub_0045C673)

X86_FUNC(__imp__sub_0045C68A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C68A push 0x5B6CB0
	{ uint32_t v = (uint32_t)(0x5B6CB0u); X86_PUSH32(v); }
	// 0045C68F push 0x420
	{ uint32_t v = (uint32_t)(0x420u); X86_PUSH32(v); }
	// 0045C694 call 0x0006800A
	X86_PUSH32(0x45C699u); sub_0006800A(ctx, base);
	// 0045C699 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C69A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C69B mov [0x0064EB16], al
	{ uint32_t ea = (uint32_t)(0x64EB16u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C6A0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C68A, __imp__sub_0045C68A)

X86_FUNC(__imp__sub_0045C6A1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C6A1 push 0x5B6CB4
	{ uint32_t v = (uint32_t)(0x5B6CB4u); X86_PUSH32(v); }
	// 0045C6A6 push 0x41F
	{ uint32_t v = (uint32_t)(0x41Fu); X86_PUSH32(v); }
	// 0045C6AB call 0x0006800A
	X86_PUSH32(0x45C6B0u); sub_0006800A(ctx, base);
	// 0045C6B0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C6B1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C6B2 mov [0x0064EB17], al
	{ uint32_t ea = (uint32_t)(0x64EB17u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C6B7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C6A1, __imp__sub_0045C6A1)

X86_FUNC(__imp__sub_0045C6B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C6B8 push 0x5B6CB8
	{ uint32_t v = (uint32_t)(0x5B6CB8u); X86_PUSH32(v); }
	// 0045C6BD push 0x41E
	{ uint32_t v = (uint32_t)(0x41Eu); X86_PUSH32(v); }
	// 0045C6C2 call 0x0006800A
	X86_PUSH32(0x45C6C7u); sub_0006800A(ctx, base);
	// 0045C6C7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C6C8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C6C9 mov [0x0064EB18], al
	{ uint32_t ea = (uint32_t)(0x64EB18u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C6CE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C6B8, __imp__sub_0045C6B8)

X86_FUNC(__imp__sub_0045C6CF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C6CF push 0x5B6CBC
	{ uint32_t v = (uint32_t)(0x5B6CBCu); X86_PUSH32(v); }
	// 0045C6D4 push 0x41D
	{ uint32_t v = (uint32_t)(0x41Du); X86_PUSH32(v); }
	// 0045C6D9 call 0x0006800A
	X86_PUSH32(0x45C6DEu); sub_0006800A(ctx, base);
	// 0045C6DE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C6DF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C6E0 mov [0x0064EB19], al
	{ uint32_t ea = (uint32_t)(0x64EB19u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C6E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C6CF, __imp__sub_0045C6CF)

X86_FUNC(__imp__sub_0045C6E6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C6E6 push 0x5B6CC0
	{ uint32_t v = (uint32_t)(0x5B6CC0u); X86_PUSH32(v); }
	// 0045C6EB push 0x41C
	{ uint32_t v = (uint32_t)(0x41Cu); X86_PUSH32(v); }
	// 0045C6F0 call 0x0006800A
	X86_PUSH32(0x45C6F5u); sub_0006800A(ctx, base);
	// 0045C6F5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C6F6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C6F7 mov [0x0064EB1A], al
	{ uint32_t ea = (uint32_t)(0x64EB1Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C6FC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C6E6, __imp__sub_0045C6E6)

X86_FUNC(__imp__sub_0045C6FD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C6FD push 0x5B6CC4
	{ uint32_t v = (uint32_t)(0x5B6CC4u); X86_PUSH32(v); }
	// 0045C702 push 0x41B
	{ uint32_t v = (uint32_t)(0x41Bu); X86_PUSH32(v); }
	// 0045C707 call 0x0006800A
	X86_PUSH32(0x45C70Cu); sub_0006800A(ctx, base);
	// 0045C70C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C70D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C70E mov [0x0064EB1B], al
	{ uint32_t ea = (uint32_t)(0x64EB1Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C713 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C6FD, __imp__sub_0045C6FD)

X86_FUNC(__imp__sub_0045C714) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C714 push 0x5B6CC8
	{ uint32_t v = (uint32_t)(0x5B6CC8u); X86_PUSH32(v); }
	// 0045C719 push 0x41A
	{ uint32_t v = (uint32_t)(0x41Au); X86_PUSH32(v); }
	// 0045C71E call 0x0006800A
	X86_PUSH32(0x45C723u); sub_0006800A(ctx, base);
	// 0045C723 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C724 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C725 mov [0x0064EB1C], al
	{ uint32_t ea = (uint32_t)(0x64EB1Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C72A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C714, __imp__sub_0045C714)

X86_FUNC(__imp__sub_0045C72B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C72B push 0x5B6CCC
	{ uint32_t v = (uint32_t)(0x5B6CCCu); X86_PUSH32(v); }
	// 0045C730 push 0x429
	{ uint32_t v = (uint32_t)(0x429u); X86_PUSH32(v); }
	// 0045C735 call 0x0006800A
	X86_PUSH32(0x45C73Au); sub_0006800A(ctx, base);
	// 0045C73A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C73B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C73C mov [0x0064EB1D], al
	{ uint32_t ea = (uint32_t)(0x64EB1Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C741 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C72B, __imp__sub_0045C72B)

X86_FUNC(__imp__sub_0045C742) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C742 push 0x5B6CD0
	{ uint32_t v = (uint32_t)(0x5B6CD0u); X86_PUSH32(v); }
	// 0045C747 push 0x428
	{ uint32_t v = (uint32_t)(0x428u); X86_PUSH32(v); }
	// 0045C74C call 0x0006800A
	X86_PUSH32(0x45C751u); sub_0006800A(ctx, base);
	// 0045C751 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C752 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C753 mov [0x0064EB1E], al
	{ uint32_t ea = (uint32_t)(0x64EB1Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C758 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C742, __imp__sub_0045C742)

X86_FUNC(__imp__sub_0045C759) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C759 push 0x5B6CD4
	{ uint32_t v = (uint32_t)(0x5B6CD4u); X86_PUSH32(v); }
	// 0045C75E push 0x427
	{ uint32_t v = (uint32_t)(0x427u); X86_PUSH32(v); }
	// 0045C763 call 0x0006800A
	X86_PUSH32(0x45C768u); sub_0006800A(ctx, base);
	// 0045C768 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C769 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C76A mov [0x0064EB1F], al
	{ uint32_t ea = (uint32_t)(0x64EB1Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C76F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C759, __imp__sub_0045C759)

X86_FUNC(__imp__sub_0045C770) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C770 push 0x5B6CD8
	{ uint32_t v = (uint32_t)(0x5B6CD8u); X86_PUSH32(v); }
	// 0045C775 push 0x426
	{ uint32_t v = (uint32_t)(0x426u); X86_PUSH32(v); }
	// 0045C77A call 0x0006800A
	X86_PUSH32(0x45C77Fu); sub_0006800A(ctx, base);
	// 0045C77F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C780 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C781 mov [0x0064EB20], al
	{ uint32_t ea = (uint32_t)(0x64EB20u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C786 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C770, __imp__sub_0045C770)

X86_FUNC(__imp__sub_0045C787) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C787 push 0x5B6CDC
	{ uint32_t v = (uint32_t)(0x5B6CDCu); X86_PUSH32(v); }
	// 0045C78C push 0x425
	{ uint32_t v = (uint32_t)(0x425u); X86_PUSH32(v); }
	// 0045C791 call 0x0006800A
	X86_PUSH32(0x45C796u); sub_0006800A(ctx, base);
	// 0045C796 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C797 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C798 mov [0x0064EB21], al
	{ uint32_t ea = (uint32_t)(0x64EB21u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C79D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C787, __imp__sub_0045C787)

X86_FUNC(__imp__sub_0045C79E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C79E push 0x5B6CE0
	{ uint32_t v = (uint32_t)(0x5B6CE0u); X86_PUSH32(v); }
	// 0045C7A3 push 0x424
	{ uint32_t v = (uint32_t)(0x424u); X86_PUSH32(v); }
	// 0045C7A8 call 0x0006800A
	X86_PUSH32(0x45C7ADu); sub_0006800A(ctx, base);
	// 0045C7AD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C7AE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C7AF mov [0x0064EB22], al
	{ uint32_t ea = (uint32_t)(0x64EB22u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C7B4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C79E, __imp__sub_0045C79E)

X86_FUNC(__imp__sub_0045C7B5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C7B5 push 0x5B6CE4
	{ uint32_t v = (uint32_t)(0x5B6CE4u); X86_PUSH32(v); }
	// 0045C7BA push 0x40A
	{ uint32_t v = (uint32_t)(0x40Au); X86_PUSH32(v); }
	// 0045C7BF call 0x0006800A
	X86_PUSH32(0x45C7C4u); sub_0006800A(ctx, base);
	// 0045C7C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C7C5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C7C6 mov [0x0064EB23], al
	{ uint32_t ea = (uint32_t)(0x64EB23u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C7CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C7B5, __imp__sub_0045C7B5)

X86_FUNC(__imp__sub_0045C7CC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C7CC push 0x5B6CE8
	{ uint32_t v = (uint32_t)(0x5B6CE8u); X86_PUSH32(v); }
	// 0045C7D1 push 0x409
	{ uint32_t v = (uint32_t)(0x409u); X86_PUSH32(v); }
	// 0045C7D6 call 0x0006800A
	X86_PUSH32(0x45C7DBu); sub_0006800A(ctx, base);
	// 0045C7DB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C7DC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C7DD mov [0x0064EB24], al
	{ uint32_t ea = (uint32_t)(0x64EB24u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C7E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C7CC, __imp__sub_0045C7CC)

X86_FUNC(__imp__sub_0045C7E3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C7E3 push 0x5B6CEC
	{ uint32_t v = (uint32_t)(0x5B6CECu); X86_PUSH32(v); }
	// 0045C7E8 push 0x408
	{ uint32_t v = (uint32_t)(0x408u); X86_PUSH32(v); }
	// 0045C7ED call 0x0006800A
	X86_PUSH32(0x45C7F2u); sub_0006800A(ctx, base);
	// 0045C7F2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C7F3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C7F4 mov [0x0064EB25], al
	{ uint32_t ea = (uint32_t)(0x64EB25u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C7F9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C7E3, __imp__sub_0045C7E3)

X86_FUNC(__imp__sub_0045C7FA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C7FA push 0x5B6CF0
	{ uint32_t v = (uint32_t)(0x5B6CF0u); X86_PUSH32(v); }
	// 0045C7FF push 0x407
	{ uint32_t v = (uint32_t)(0x407u); X86_PUSH32(v); }
	// 0045C804 call 0x0006800A
	X86_PUSH32(0x45C809u); sub_0006800A(ctx, base);
	// 0045C809 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C80A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C80B mov [0x0064EB26], al
	{ uint32_t ea = (uint32_t)(0x64EB26u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C810 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C7FA, __imp__sub_0045C7FA)

X86_FUNC(__imp__sub_0045C811) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C811 push 0x5B6CF4
	{ uint32_t v = (uint32_t)(0x5B6CF4u); X86_PUSH32(v); }
	// 0045C816 push 0x406
	{ uint32_t v = (uint32_t)(0x406u); X86_PUSH32(v); }
	// 0045C81B call 0x0006800A
	X86_PUSH32(0x45C820u); sub_0006800A(ctx, base);
	// 0045C820 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C821 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C822 mov [0x0064EB27], al
	{ uint32_t ea = (uint32_t)(0x64EB27u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C827 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C811, __imp__sub_0045C811)

X86_FUNC(__imp__sub_0045C828) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C828 push 0x5B6CF8
	{ uint32_t v = (uint32_t)(0x5B6CF8u); X86_PUSH32(v); }
	// 0045C82D push 0x7BB
	{ uint32_t v = (uint32_t)(0x7BBu); X86_PUSH32(v); }
	// 0045C832 call 0x0006800A
	X86_PUSH32(0x45C837u); sub_0006800A(ctx, base);
	// 0045C837 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C838 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C839 mov [0x0064EB28], al
	{ uint32_t ea = (uint32_t)(0x64EB28u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C83E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C828, __imp__sub_0045C828)

X86_FUNC(__imp__sub_0045C83F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C83F push 0x5B6CFC
	{ uint32_t v = (uint32_t)(0x5B6CFCu); X86_PUSH32(v); }
	// 0045C844 push 0x65C
	{ uint32_t v = (uint32_t)(0x65Cu); X86_PUSH32(v); }
	// 0045C849 call 0x0006800A
	X86_PUSH32(0x45C84Eu); sub_0006800A(ctx, base);
	// 0045C84E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C84F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C850 mov [0x0064EB29], al
	{ uint32_t ea = (uint32_t)(0x64EB29u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C855 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C83F, __imp__sub_0045C83F)

X86_FUNC(__imp__sub_0045C856) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C856 push 0x5B6D00
	{ uint32_t v = (uint32_t)(0x5B6D00u); X86_PUSH32(v); }
	// 0045C85B push 0x682
	{ uint32_t v = (uint32_t)(0x682u); X86_PUSH32(v); }
	// 0045C860 call 0x0006800A
	X86_PUSH32(0x45C865u); sub_0006800A(ctx, base);
	// 0045C865 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C866 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C867 mov [0x0064EB2A], al
	{ uint32_t ea = (uint32_t)(0x64EB2Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C86C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C856, __imp__sub_0045C856)

X86_FUNC(__imp__sub_0045C86D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C86D push 0x5B6D04
	{ uint32_t v = (uint32_t)(0x5B6D04u); X86_PUSH32(v); }
	// 0045C872 push 0x683
	{ uint32_t v = (uint32_t)(0x683u); X86_PUSH32(v); }
	// 0045C877 call 0x0006800A
	X86_PUSH32(0x45C87Cu); sub_0006800A(ctx, base);
	// 0045C87C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C87D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C87E mov [0x0064EB2B], al
	{ uint32_t ea = (uint32_t)(0x64EB2Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C883 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C86D, __imp__sub_0045C86D)

X86_FUNC(__imp__sub_0045C884) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C884 push 0x5B6D08
	{ uint32_t v = (uint32_t)(0x5B6D08u); X86_PUSH32(v); }
	// 0045C889 push 0x853
	{ uint32_t v = (uint32_t)(0x853u); X86_PUSH32(v); }
	// 0045C88E call 0x0006800A
	X86_PUSH32(0x45C893u); sub_0006800A(ctx, base);
	// 0045C893 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C894 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C895 mov [0x0064EB2C], al
	{ uint32_t ea = (uint32_t)(0x64EB2Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C89A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C884, __imp__sub_0045C884)

X86_FUNC(__imp__sub_0045C89B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C89B push 0x5B6D0C
	{ uint32_t v = (uint32_t)(0x5B6D0Cu); X86_PUSH32(v); }
	// 0045C8A0 push 0xFAE
	{ uint32_t v = (uint32_t)(0xFAEu); X86_PUSH32(v); }
	// 0045C8A5 call 0x0006800A
	X86_PUSH32(0x45C8AAu); sub_0006800A(ctx, base);
	// 0045C8AA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C8AB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C8AC mov [0x0064EB2D], al
	{ uint32_t ea = (uint32_t)(0x64EB2Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C8B1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C89B, __imp__sub_0045C89B)

X86_FUNC(__imp__sub_0045C8B2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C8B2 push 0x5B6D10
	{ uint32_t v = (uint32_t)(0x5B6D10u); X86_PUSH32(v); }
	// 0045C8B7 push 0x3EC
	{ uint32_t v = (uint32_t)(0x3ECu); X86_PUSH32(v); }
	// 0045C8BC call 0x0006800A
	X86_PUSH32(0x45C8C1u); sub_0006800A(ctx, base);
	// 0045C8C1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C8C2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C8C3 mov [0x0064EB2E], al
	{ uint32_t ea = (uint32_t)(0x64EB2Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C8C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C8B2, __imp__sub_0045C8B2)

X86_FUNC(__imp__sub_0045C8C9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C8C9 push 0x5B6D14
	{ uint32_t v = (uint32_t)(0x5B6D14u); X86_PUSH32(v); }
	// 0045C8CE push 0x3EB
	{ uint32_t v = (uint32_t)(0x3EBu); X86_PUSH32(v); }
	// 0045C8D3 call 0x0006800A
	X86_PUSH32(0x45C8D8u); sub_0006800A(ctx, base);
	// 0045C8D8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C8D9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C8DA mov [0x0064EB2F], al
	{ uint32_t ea = (uint32_t)(0x64EB2Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C8DF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C8C9, __imp__sub_0045C8C9)

X86_FUNC(__imp__sub_0045C8E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C8E0 push 0x5B6D18
	{ uint32_t v = (uint32_t)(0x5B6D18u); X86_PUSH32(v); }
	// 0045C8E5 push 0x3EA
	{ uint32_t v = (uint32_t)(0x3EAu); X86_PUSH32(v); }
	// 0045C8EA call 0x0006800A
	X86_PUSH32(0x45C8EFu); sub_0006800A(ctx, base);
	// 0045C8EF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C8F0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C8F1 mov [0x0064EB30], al
	{ uint32_t ea = (uint32_t)(0x64EB30u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C8F6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C8E0, __imp__sub_0045C8E0)

X86_FUNC(__imp__sub_0045C8F7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C8F7 push 0x5B6D1C
	{ uint32_t v = (uint32_t)(0x5B6D1Cu); X86_PUSH32(v); }
	// 0045C8FC push 0x3E9
	{ uint32_t v = (uint32_t)(0x3E9u); X86_PUSH32(v); }
	// 0045C901 call 0x0006800A
	X86_PUSH32(0x45C906u); sub_0006800A(ctx, base);
	// 0045C906 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C907 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C908 mov [0x0064EB31], al
	{ uint32_t ea = (uint32_t)(0x64EB31u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C90D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C8F7, __imp__sub_0045C8F7)

X86_FUNC(__imp__sub_0045C90E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C90E push 0x5B6D20
	{ uint32_t v = (uint32_t)(0x5B6D20u); X86_PUSH32(v); }
	// 0045C913 push 0x3E8
	{ uint32_t v = (uint32_t)(0x3E8u); X86_PUSH32(v); }
	// 0045C918 call 0x0006800A
	X86_PUSH32(0x45C91Du); sub_0006800A(ctx, base);
	// 0045C91D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C91E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C91F mov [0x0064EB32], al
	{ uint32_t ea = (uint32_t)(0x64EB32u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C924 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C90E, __imp__sub_0045C90E)

X86_FUNC(__imp__sub_0045C925) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C925 push 0x5B6D24
	{ uint32_t v = (uint32_t)(0x5B6D24u); X86_PUSH32(v); }
	// 0045C92A push 0xB50
	{ uint32_t v = (uint32_t)(0xB50u); X86_PUSH32(v); }
	// 0045C92F call 0x0006800A
	X86_PUSH32(0x45C934u); sub_0006800A(ctx, base);
	// 0045C934 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C935 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C936 mov [0x0064EB33], al
	{ uint32_t ea = (uint32_t)(0x64EB33u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C93B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C925, __imp__sub_0045C925)

X86_FUNC(__imp__sub_0045C93C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C93C push 0x5B6D28
	{ uint32_t v = (uint32_t)(0x5B6D28u); X86_PUSH32(v); }
	// 0045C941 push 0xB4A
	{ uint32_t v = (uint32_t)(0xB4Au); X86_PUSH32(v); }
	// 0045C946 call 0x0006800A
	X86_PUSH32(0x45C94Bu); sub_0006800A(ctx, base);
	// 0045C94B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C94C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C94D mov [0x0064EB34], al
	{ uint32_t ea = (uint32_t)(0x64EB34u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C952 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C93C, __imp__sub_0045C93C)

X86_FUNC(__imp__sub_0045C953) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C953 push 0x5B6D2C
	{ uint32_t v = (uint32_t)(0x5B6D2Cu); X86_PUSH32(v); }
	// 0045C958 push 0xFA1
	{ uint32_t v = (uint32_t)(0xFA1u); X86_PUSH32(v); }
	// 0045C95D call 0x0006800A
	X86_PUSH32(0x45C962u); sub_0006800A(ctx, base);
	// 0045C962 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C963 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C964 mov [0x0064EB35], al
	{ uint32_t ea = (uint32_t)(0x64EB35u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C969 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C953, __imp__sub_0045C953)

X86_FUNC(__imp__sub_0045C96A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C96A push 0x5B6D30
	{ uint32_t v = (uint32_t)(0x5B6D30u); X86_PUSH32(v); }
	// 0045C96F push 0xFA0
	{ uint32_t v = (uint32_t)(0xFA0u); X86_PUSH32(v); }
	// 0045C974 call 0x0006800A
	X86_PUSH32(0x45C979u); sub_0006800A(ctx, base);
	// 0045C979 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C97A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C97B mov [0x0064EB36], al
	{ uint32_t ea = (uint32_t)(0x64EB36u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C980 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C96A, __imp__sub_0045C96A)

X86_FUNC(__imp__sub_0045C981) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C981 push 0x5B6D34
	{ uint32_t v = (uint32_t)(0x5B6D34u); X86_PUSH32(v); }
	// 0045C986 push 0xDAF
	{ uint32_t v = (uint32_t)(0xDAFu); X86_PUSH32(v); }
	// 0045C98B call 0x0006800A
	X86_PUSH32(0x45C990u); sub_0006800A(ctx, base);
	// 0045C990 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C991 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C992 mov [0x0064EB37], al
	{ uint32_t ea = (uint32_t)(0x64EB37u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C997 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C981, __imp__sub_0045C981)

X86_FUNC(__imp__sub_0045C998) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C998 push 0x5B6D38
	{ uint32_t v = (uint32_t)(0x5B6D38u); X86_PUSH32(v); }
	// 0045C99D push 0xDAE
	{ uint32_t v = (uint32_t)(0xDAEu); X86_PUSH32(v); }
	// 0045C9A2 call 0x0006800A
	X86_PUSH32(0x45C9A7u); sub_0006800A(ctx, base);
	// 0045C9A7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C9A8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C9A9 mov [0x0064EB38], al
	{ uint32_t ea = (uint32_t)(0x64EB38u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C9AE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C998, __imp__sub_0045C998)

X86_FUNC(__imp__sub_0045C9AF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C9AF push 0x5B6D3C
	{ uint32_t v = (uint32_t)(0x5B6D3Cu); X86_PUSH32(v); }
	// 0045C9B4 push 0xDAD
	{ uint32_t v = (uint32_t)(0xDADu); X86_PUSH32(v); }
	// 0045C9B9 call 0x0006800A
	X86_PUSH32(0x45C9BEu); sub_0006800A(ctx, base);
	// 0045C9BE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C9BF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C9C0 mov [0x0064EB39], al
	{ uint32_t ea = (uint32_t)(0x64EB39u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C9C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C9AF, __imp__sub_0045C9AF)

X86_FUNC(__imp__sub_0045C9C6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C9C6 push 0x5B6D40
	{ uint32_t v = (uint32_t)(0x5B6D40u); X86_PUSH32(v); }
	// 0045C9CB push 0xDAC
	{ uint32_t v = (uint32_t)(0xDACu); X86_PUSH32(v); }
	// 0045C9D0 call 0x0006800A
	X86_PUSH32(0x45C9D5u); sub_0006800A(ctx, base);
	// 0045C9D5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C9D6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C9D7 mov [0x0064EB3A], al
	{ uint32_t ea = (uint32_t)(0x64EB3Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C9DC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C9C6, __imp__sub_0045C9C6)

X86_FUNC(__imp__sub_0045C9DD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C9DD push 0x5B6D44
	{ uint32_t v = (uint32_t)(0x5B6D44u); X86_PUSH32(v); }
	// 0045C9E2 push 0x9DA
	{ uint32_t v = (uint32_t)(0x9DAu); X86_PUSH32(v); }
	// 0045C9E7 call 0x0006800A
	X86_PUSH32(0x45C9ECu); sub_0006800A(ctx, base);
	// 0045C9EC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C9ED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045C9EE mov [0x0064EB3B], al
	{ uint32_t ea = (uint32_t)(0x64EB3Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045C9F3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C9DD, __imp__sub_0045C9DD)

X86_FUNC(__imp__sub_0045C9F4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045C9F4 push 0x5B6D48
	{ uint32_t v = (uint32_t)(0x5B6D48u); X86_PUSH32(v); }
	// 0045C9F9 push 0x4B2
	{ uint32_t v = (uint32_t)(0x4B2u); X86_PUSH32(v); }
	// 0045C9FE call 0x0006800A
	X86_PUSH32(0x45CA03u); sub_0006800A(ctx, base);
	// 0045CA03 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA04 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA05 mov [0x0064EB3C], al
	{ uint32_t ea = (uint32_t)(0x64EB3Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CA0A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045C9F4, __imp__sub_0045C9F4)

X86_FUNC(__imp__sub_0045CA0B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CA0B push 0x5B6D4C
	{ uint32_t v = (uint32_t)(0x5B6D4Cu); X86_PUSH32(v); }
	// 0045CA10 push 0x4B1
	{ uint32_t v = (uint32_t)(0x4B1u); X86_PUSH32(v); }
	// 0045CA15 call 0x0006800A
	X86_PUSH32(0x45CA1Au); sub_0006800A(ctx, base);
	// 0045CA1A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA1B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA1C mov [0x0064EB3D], al
	{ uint32_t ea = (uint32_t)(0x64EB3Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CA21 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CA0B, __imp__sub_0045CA0B)

X86_FUNC(__imp__sub_0045CA22) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CA22 push 0x5B6D50
	{ uint32_t v = (uint32_t)(0x5B6D50u); X86_PUSH32(v); }
	// 0045CA27 push 0xA32
	{ uint32_t v = (uint32_t)(0xA32u); X86_PUSH32(v); }
	// 0045CA2C call 0x0006800A
	X86_PUSH32(0x45CA31u); sub_0006800A(ctx, base);
	// 0045CA31 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA32 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA33 mov [0x0064EB3E], al
	{ uint32_t ea = (uint32_t)(0x64EB3Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CA38 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CA22, __imp__sub_0045CA22)

X86_FUNC(__imp__sub_0045CA39) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CA39 push 0x5B6D54
	{ uint32_t v = (uint32_t)(0x5B6D54u); X86_PUSH32(v); }
	// 0045CA3E push 0x9CE
	{ uint32_t v = (uint32_t)(0x9CEu); X86_PUSH32(v); }
	// 0045CA43 call 0x0006800A
	X86_PUSH32(0x45CA48u); sub_0006800A(ctx, base);
	// 0045CA48 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA49 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA4A mov [0x0064EB3F], al
	{ uint32_t ea = (uint32_t)(0x64EB3Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CA4F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CA39, __imp__sub_0045CA39)

X86_FUNC(__imp__sub_0045CA50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CA50 push 0x5B6D58
	{ uint32_t v = (uint32_t)(0x5B6D58u); X86_PUSH32(v); }
	// 0045CA55 push 0x9C4
	{ uint32_t v = (uint32_t)(0x9C4u); X86_PUSH32(v); }
	// 0045CA5A call 0x0006800A
	X86_PUSH32(0x45CA5Fu); sub_0006800A(ctx, base);
	// 0045CA5F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA60 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA61 mov [0x0064EB40], al
	{ uint32_t ea = (uint32_t)(0x64EB40u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CA66 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CA50, __imp__sub_0045CA50)

X86_FUNC(__imp__sub_0045CA67) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CA67 push 0x5B6D5C
	{ uint32_t v = (uint32_t)(0x5B6D5Cu); X86_PUSH32(v); }
	// 0045CA6C push 0xF1D
	{ uint32_t v = (uint32_t)(0xF1Du); X86_PUSH32(v); }
	// 0045CA71 call 0x0006800A
	X86_PUSH32(0x45CA76u); sub_0006800A(ctx, base);
	// 0045CA76 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA77 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA78 mov [0x0064EB41], al
	{ uint32_t ea = (uint32_t)(0x64EB41u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CA7D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CA67, __imp__sub_0045CA67)

X86_FUNC(__imp__sub_0045CA7E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CA7E push 0x5B6D60
	{ uint32_t v = (uint32_t)(0x5B6D60u); X86_PUSH32(v); }
	// 0045CA83 push 0x4CB
	{ uint32_t v = (uint32_t)(0x4CBu); X86_PUSH32(v); }
	// 0045CA88 call 0x0006800A
	X86_PUSH32(0x45CA8Du); sub_0006800A(ctx, base);
	// 0045CA8D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA8E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CA8F mov [0x0064EB42], al
	{ uint32_t ea = (uint32_t)(0x64EB42u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CA94 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CA7E, __imp__sub_0045CA7E)

X86_FUNC(__imp__sub_0045CA95) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CA95 push 0x5B6D64
	{ uint32_t v = (uint32_t)(0x5B6D64u); X86_PUSH32(v); }
	// 0045CA9A push 0x4CA
	{ uint32_t v = (uint32_t)(0x4CAu); X86_PUSH32(v); }
	// 0045CA9F call 0x0006800A
	X86_PUSH32(0x45CAA4u); sub_0006800A(ctx, base);
	// 0045CAA4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CAA5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CAA6 mov [0x0064EB43], al
	{ uint32_t ea = (uint32_t)(0x64EB43u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CAAB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CA95, __imp__sub_0045CA95)

X86_FUNC(__imp__sub_0045CAAC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CAAC push 0x5B6D68
	{ uint32_t v = (uint32_t)(0x5B6D68u); X86_PUSH32(v); }
	// 0045CAB1 push 0x4C3
	{ uint32_t v = (uint32_t)(0x4C3u); X86_PUSH32(v); }
	// 0045CAB6 call 0x0006800A
	X86_PUSH32(0x45CABBu); sub_0006800A(ctx, base);
	// 0045CABB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CABC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CABD mov [0x0064EB44], al
	{ uint32_t ea = (uint32_t)(0x64EB44u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CAC2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CAAC, __imp__sub_0045CAAC)

X86_FUNC(__imp__sub_0045CAC3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CAC3 push 0x5B6D6C
	{ uint32_t v = (uint32_t)(0x5B6D6Cu); X86_PUSH32(v); }
	// 0045CAC8 push 0x4B9
	{ uint32_t v = (uint32_t)(0x4B9u); X86_PUSH32(v); }
	// 0045CACD call 0x0006800A
	X86_PUSH32(0x45CAD2u); sub_0006800A(ctx, base);
	// 0045CAD2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CAD3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CAD4 mov [0x0064EB45], al
	{ uint32_t ea = (uint32_t)(0x64EB45u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CAD9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CAC3, __imp__sub_0045CAC3)

X86_FUNC(__imp__sub_0045CADA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CADA push 0x5B6D70
	{ uint32_t v = (uint32_t)(0x5B6D70u); X86_PUSH32(v); }
	// 0045CADF push 0x4B8
	{ uint32_t v = (uint32_t)(0x4B8u); X86_PUSH32(v); }
	// 0045CAE4 call 0x0006800A
	X86_PUSH32(0x45CAE9u); sub_0006800A(ctx, base);
	// 0045CAE9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CAEA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CAEB mov [0x0064EB46], al
	{ uint32_t ea = (uint32_t)(0x64EB46u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CAF0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CADA, __imp__sub_0045CADA)

X86_FUNC(__imp__sub_0045CAF1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CAF1 push 0x5B6D74
	{ uint32_t v = (uint32_t)(0x5B6D74u); X86_PUSH32(v); }
	// 0045CAF6 push 0x4B7
	{ uint32_t v = (uint32_t)(0x4B7u); X86_PUSH32(v); }
	// 0045CAFB call 0x0006800A
	X86_PUSH32(0x45CB00u); sub_0006800A(ctx, base);
	// 0045CB00 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB01 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB02 mov [0x0064EB47], al
	{ uint32_t ea = (uint32_t)(0x64EB47u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CB07 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CAF1, __imp__sub_0045CAF1)

X86_FUNC(__imp__sub_0045CB08) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CB08 push 0x5B6D78
	{ uint32_t v = (uint32_t)(0x5B6D78u); X86_PUSH32(v); }
	// 0045CB0D push 0x4B6
	{ uint32_t v = (uint32_t)(0x4B6u); X86_PUSH32(v); }
	// 0045CB12 call 0x0006800A
	X86_PUSH32(0x45CB17u); sub_0006800A(ctx, base);
	// 0045CB17 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB18 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB19 mov [0x0064EB48], al
	{ uint32_t ea = (uint32_t)(0x64EB48u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CB1E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CB08, __imp__sub_0045CB08)

X86_FUNC(__imp__sub_0045CB1F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CB1F push 0x5B6D7C
	{ uint32_t v = (uint32_t)(0x5B6D7Cu); X86_PUSH32(v); }
	// 0045CB24 push 0x4B5
	{ uint32_t v = (uint32_t)(0x4B5u); X86_PUSH32(v); }
	// 0045CB29 call 0x0006800A
	X86_PUSH32(0x45CB2Eu); sub_0006800A(ctx, base);
	// 0045CB2E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB2F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB30 mov [0x0064EB49], al
	{ uint32_t ea = (uint32_t)(0x64EB49u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CB35 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CB1F, __imp__sub_0045CB1F)

X86_FUNC(__imp__sub_0045CB36) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CB36 push 0x5B6D80
	{ uint32_t v = (uint32_t)(0x5B6D80u); X86_PUSH32(v); }
	// 0045CB3B push 0x4B4
	{ uint32_t v = (uint32_t)(0x4B4u); X86_PUSH32(v); }
	// 0045CB40 call 0x0006800A
	X86_PUSH32(0x45CB45u); sub_0006800A(ctx, base);
	// 0045CB45 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB46 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB47 mov [0x0064EB4A], al
	{ uint32_t ea = (uint32_t)(0x64EB4Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CB4C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CB36, __imp__sub_0045CB36)

X86_FUNC(__imp__sub_0045CB4D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CB4D push 0x5B6D84
	{ uint32_t v = (uint32_t)(0x5B6D84u); X86_PUSH32(v); }
	// 0045CB52 push 0x4B3
	{ uint32_t v = (uint32_t)(0x4B3u); X86_PUSH32(v); }
	// 0045CB57 call 0x0006800A
	X86_PUSH32(0x45CB5Cu); sub_0006800A(ctx, base);
	// 0045CB5C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB5D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB5E mov [0x0064EB4B], al
	{ uint32_t ea = (uint32_t)(0x64EB4Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CB63 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CB4D, __imp__sub_0045CB4D)

X86_FUNC(__imp__sub_0045CB64) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CB64 push 0x5B6D88
	{ uint32_t v = (uint32_t)(0x5B6D88u); X86_PUSH32(v); }
	// 0045CB69 push 0x4A5
	{ uint32_t v = (uint32_t)(0x4A5u); X86_PUSH32(v); }
	// 0045CB6E call 0x0006800A
	X86_PUSH32(0x45CB73u); sub_0006800A(ctx, base);
	// 0045CB73 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB74 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB75 mov [0x0064EB4C], al
	{ uint32_t ea = (uint32_t)(0x64EB4Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CB7A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CB64, __imp__sub_0045CB64)

X86_FUNC(__imp__sub_0045CB7B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CB7B push 0x5B6D8C
	{ uint32_t v = (uint32_t)(0x5B6D8Cu); X86_PUSH32(v); }
	// 0045CB80 push 0x4A4
	{ uint32_t v = (uint32_t)(0x4A4u); X86_PUSH32(v); }
	// 0045CB85 call 0x0006800A
	X86_PUSH32(0x45CB8Au); sub_0006800A(ctx, base);
	// 0045CB8A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB8B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CB8C mov [0x0064EB4D], al
	{ uint32_t ea = (uint32_t)(0x64EB4Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CB91 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CB7B, __imp__sub_0045CB7B)

X86_FUNC(__imp__sub_0045CB92) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CB92 push 0x5B6D90
	{ uint32_t v = (uint32_t)(0x5B6D90u); X86_PUSH32(v); }
	// 0045CB97 push 0x4AB
	{ uint32_t v = (uint32_t)(0x4ABu); X86_PUSH32(v); }
	// 0045CB9C call 0x0006800A
	X86_PUSH32(0x45CBA1u); sub_0006800A(ctx, base);
	// 0045CBA1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CBA2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CBA3 mov [0x0064EB4E], al
	{ uint32_t ea = (uint32_t)(0x64EB4Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CBA8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CB92, __imp__sub_0045CB92)

X86_FUNC(__imp__sub_0045CBA9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CBA9 push 0x5B6D94
	{ uint32_t v = (uint32_t)(0x5B6D94u); X86_PUSH32(v); }
	// 0045CBAE push 0x4A7
	{ uint32_t v = (uint32_t)(0x4A7u); X86_PUSH32(v); }
	// 0045CBB3 call 0x0006800A
	X86_PUSH32(0x45CBB8u); sub_0006800A(ctx, base);
	// 0045CBB8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CBB9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CBBA mov [0x0064EB4F], al
	{ uint32_t ea = (uint32_t)(0x64EB4Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CBBF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CBA9, __imp__sub_0045CBA9)

X86_FUNC(__imp__sub_0045CBC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CBC0 push 0x5B6D98
	{ uint32_t v = (uint32_t)(0x5B6D98u); X86_PUSH32(v); }
	// 0045CBC5 push 0x49E
	{ uint32_t v = (uint32_t)(0x49Eu); X86_PUSH32(v); }
	// 0045CBCA call 0x0006800A
	X86_PUSH32(0x45CBCFu); sub_0006800A(ctx, base);
	// 0045CBCF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CBD0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CBD1 mov [0x0064EB50], al
	{ uint32_t ea = (uint32_t)(0x64EB50u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CBD6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CBC0, __imp__sub_0045CBC0)

X86_FUNC(__imp__sub_0045CBD7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CBD7 push 0x5B6D9C
	{ uint32_t v = (uint32_t)(0x5B6D9Cu); X86_PUSH32(v); }
	// 0045CBDC push 0x47A
	{ uint32_t v = (uint32_t)(0x47Au); X86_PUSH32(v); }
	// 0045CBE1 call 0x0006800A
	X86_PUSH32(0x45CBE6u); sub_0006800A(ctx, base);
	// 0045CBE6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CBE7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CBE8 mov [0x0064EB51], al
	{ uint32_t ea = (uint32_t)(0x64EB51u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CBED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CBD7, __imp__sub_0045CBD7)

X86_FUNC(__imp__sub_0045CBEE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CBEE push 0x5B6DA0
	{ uint32_t v = (uint32_t)(0x5B6DA0u); X86_PUSH32(v); }
	// 0045CBF3 push 0x494
	{ uint32_t v = (uint32_t)(0x494u); X86_PUSH32(v); }
	// 0045CBF8 call 0x0006800A
	X86_PUSH32(0x45CBFDu); sub_0006800A(ctx, base);
	// 0045CBFD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CBFE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CBFF mov [0x0064EB52], al
	{ uint32_t ea = (uint32_t)(0x64EB52u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CC04 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CBEE, __imp__sub_0045CBEE)

X86_FUNC(__imp__sub_0045CC05) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CC05 push 0x5B6DA4
	{ uint32_t v = (uint32_t)(0x5B6DA4u); X86_PUSH32(v); }
	// 0045CC0A push 0x491
	{ uint32_t v = (uint32_t)(0x491u); X86_PUSH32(v); }
	// 0045CC0F call 0x0006800A
	X86_PUSH32(0x45CC14u); sub_0006800A(ctx, base);
	// 0045CC14 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC15 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC16 mov [0x0064EB53], al
	{ uint32_t ea = (uint32_t)(0x64EB53u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CC1B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CC05, __imp__sub_0045CC05)

X86_FUNC(__imp__sub_0045CC1C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CC1C push 0x5B6DA8
	{ uint32_t v = (uint32_t)(0x5B6DA8u); X86_PUSH32(v); }
	// 0045CC21 push 0x47B
	{ uint32_t v = (uint32_t)(0x47Bu); X86_PUSH32(v); }
	// 0045CC26 call 0x0006800A
	X86_PUSH32(0x45CC2Bu); sub_0006800A(ctx, base);
	// 0045CC2B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC2C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC2D mov [0x0064EB54], al
	{ uint32_t ea = (uint32_t)(0x64EB54u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CC32 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CC1C, __imp__sub_0045CC1C)

X86_FUNC(__imp__sub_0045CC33) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CC33 push 0x5B6DAC
	{ uint32_t v = (uint32_t)(0x5B6DACu); X86_PUSH32(v); }
	// 0045CC38 push 0x4CC
	{ uint32_t v = (uint32_t)(0x4CCu); X86_PUSH32(v); }
	// 0045CC3D call 0x0006800A
	X86_PUSH32(0x45CC42u); sub_0006800A(ctx, base);
	// 0045CC42 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC43 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC44 mov [0x0064EB55], al
	{ uint32_t ea = (uint32_t)(0x64EB55u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CC49 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CC33, __imp__sub_0045CC33)

X86_FUNC(__imp__sub_0045CC4A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CC4A push 0x5B6DB0
	{ uint32_t v = (uint32_t)(0x5B6DB0u); X86_PUSH32(v); }
	// 0045CC4F push 0x4C9
	{ uint32_t v = (uint32_t)(0x4C9u); X86_PUSH32(v); }
	// 0045CC54 call 0x0006800A
	X86_PUSH32(0x45CC59u); sub_0006800A(ctx, base);
	// 0045CC59 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC5A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC5B mov [0x0064EB56], al
	{ uint32_t ea = (uint32_t)(0x64EB56u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CC60 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CC4A, __imp__sub_0045CC4A)

X86_FUNC(__imp__sub_0045CC61) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CC61 push 0x5B6DB4
	{ uint32_t v = (uint32_t)(0x5B6DB4u); X86_PUSH32(v); }
	// 0045CC66 push 0x4C8
	{ uint32_t v = (uint32_t)(0x4C8u); X86_PUSH32(v); }
	// 0045CC6B call 0x0006800A
	X86_PUSH32(0x45CC70u); sub_0006800A(ctx, base);
	// 0045CC70 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC71 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC72 mov [0x0064EB57], al
	{ uint32_t ea = (uint32_t)(0x64EB57u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CC77 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CC61, __imp__sub_0045CC61)

X86_FUNC(__imp__sub_0045CC78) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CC78 push 0x5B6DB8
	{ uint32_t v = (uint32_t)(0x5B6DB8u); X86_PUSH32(v); }
	// 0045CC7D push 0x4C7
	{ uint32_t v = (uint32_t)(0x4C7u); X86_PUSH32(v); }
	// 0045CC82 call 0x0006800A
	X86_PUSH32(0x45CC87u); sub_0006800A(ctx, base);
	// 0045CC87 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC88 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC89 mov [0x0064EB58], al
	{ uint32_t ea = (uint32_t)(0x64EB58u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CC8E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CC78, __imp__sub_0045CC78)

X86_FUNC(__imp__sub_0045CC8F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CC8F push 0x5B6DBC
	{ uint32_t v = (uint32_t)(0x5B6DBCu); X86_PUSH32(v); }
	// 0045CC94 push 0x4C6
	{ uint32_t v = (uint32_t)(0x4C6u); X86_PUSH32(v); }
	// 0045CC99 call 0x0006800A
	X86_PUSH32(0x45CC9Eu); sub_0006800A(ctx, base);
	// 0045CC9E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CC9F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CCA0 mov [0x0064EB59], al
	{ uint32_t ea = (uint32_t)(0x64EB59u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CCA5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CC8F, __imp__sub_0045CC8F)

X86_FUNC(__imp__sub_0045CCA6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CCA6 push 0x5B6DC0
	{ uint32_t v = (uint32_t)(0x5B6DC0u); X86_PUSH32(v); }
	// 0045CCAB push 0x4C5
	{ uint32_t v = (uint32_t)(0x4C5u); X86_PUSH32(v); }
	// 0045CCB0 call 0x0006800A
	X86_PUSH32(0x45CCB5u); sub_0006800A(ctx, base);
	// 0045CCB5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CCB6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CCB7 mov [0x0064EB5A], al
	{ uint32_t ea = (uint32_t)(0x64EB5Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CCBC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CCA6, __imp__sub_0045CCA6)

X86_FUNC(__imp__sub_0045CCBD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CCBD push 0x5B6DC4
	{ uint32_t v = (uint32_t)(0x5B6DC4u); X86_PUSH32(v); }
	// 0045CCC2 push 0x4C4
	{ uint32_t v = (uint32_t)(0x4C4u); X86_PUSH32(v); }
	// 0045CCC7 call 0x0006800A
	X86_PUSH32(0x45CCCCu); sub_0006800A(ctx, base);
	// 0045CCCC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CCCD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CCCE mov [0x0064EB5B], al
	{ uint32_t ea = (uint32_t)(0x64EB5Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CCD3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CCBD, __imp__sub_0045CCBD)

X86_FUNC(__imp__sub_0045CCD4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CCD4 push 0x5B6DC8
	{ uint32_t v = (uint32_t)(0x5B6DC8u); X86_PUSH32(v); }
	// 0045CCD9 push 0x49A
	{ uint32_t v = (uint32_t)(0x49Au); X86_PUSH32(v); }
	// 0045CCDE call 0x0006800A
	X86_PUSH32(0x45CCE3u); sub_0006800A(ctx, base);
	// 0045CCE3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CCE4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CCE5 mov [0x0064EB5C], al
	{ uint32_t ea = (uint32_t)(0x64EB5Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CCEA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CCD4, __imp__sub_0045CCD4)

X86_FUNC(__imp__sub_0045CCEB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CCEB push 0x5B6DCC
	{ uint32_t v = (uint32_t)(0x5B6DCCu); X86_PUSH32(v); }
	// 0045CCF0 push 0x48B
	{ uint32_t v = (uint32_t)(0x48Bu); X86_PUSH32(v); }
	// 0045CCF5 call 0x0006800A
	X86_PUSH32(0x45CCFAu); sub_0006800A(ctx, base);
	// 0045CCFA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CCFB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CCFC mov [0x0064EB5D], al
	{ uint32_t ea = (uint32_t)(0x64EB5Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CD01 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CCEB, __imp__sub_0045CCEB)

X86_FUNC(__imp__sub_0045CD02) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CD02 push 0x5B6DD0
	{ uint32_t v = (uint32_t)(0x5B6DD0u); X86_PUSH32(v); }
	// 0045CD07 push 0x493
	{ uint32_t v = (uint32_t)(0x493u); X86_PUSH32(v); }
	// 0045CD0C call 0x0006800A
	X86_PUSH32(0x45CD11u); sub_0006800A(ctx, base);
	// 0045CD11 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD12 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD13 mov [0x0064EB5E], al
	{ uint32_t ea = (uint32_t)(0x64EB5Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CD18 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CD02, __imp__sub_0045CD02)

X86_FUNC(__imp__sub_0045CD19) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CD19 push 0x5B6DD4
	{ uint32_t v = (uint32_t)(0x5B6DD4u); X86_PUSH32(v); }
	// 0045CD1E push 0x48A
	{ uint32_t v = (uint32_t)(0x48Au); X86_PUSH32(v); }
	// 0045CD23 call 0x0006800A
	X86_PUSH32(0x45CD28u); sub_0006800A(ctx, base);
	// 0045CD28 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD29 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD2A mov [0x0064EB5F], al
	{ uint32_t ea = (uint32_t)(0x64EB5Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CD2F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CD19, __imp__sub_0045CD19)

X86_FUNC(__imp__sub_0045CD30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CD30 push 0x5B6DD8
	{ uint32_t v = (uint32_t)(0x5B6DD8u); X86_PUSH32(v); }
	// 0045CD35 push 0x48D
	{ uint32_t v = (uint32_t)(0x48Du); X86_PUSH32(v); }
	// 0045CD3A call 0x0006800A
	X86_PUSH32(0x45CD3Fu); sub_0006800A(ctx, base);
	// 0045CD3F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD40 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD41 mov [0x0064EB60], al
	{ uint32_t ea = (uint32_t)(0x64EB60u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CD46 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CD30, __imp__sub_0045CD30)

X86_FUNC(__imp__sub_0045CD47) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CD47 push 0x5B6DDC
	{ uint32_t v = (uint32_t)(0x5B6DDCu); X86_PUSH32(v); }
	// 0045CD4C push 0x486
	{ uint32_t v = (uint32_t)(0x486u); X86_PUSH32(v); }
	// 0045CD51 call 0x0006800A
	X86_PUSH32(0x45CD56u); sub_0006800A(ctx, base);
	// 0045CD56 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD57 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD58 mov [0x0064EB61], al
	{ uint32_t ea = (uint32_t)(0x64EB61u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CD5D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CD47, __imp__sub_0045CD47)

X86_FUNC(__imp__sub_0045CD5E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CD5E push 0x5B6DE0
	{ uint32_t v = (uint32_t)(0x5B6DE0u); X86_PUSH32(v); }
	// 0045CD63 push 0x485
	{ uint32_t v = (uint32_t)(0x485u); X86_PUSH32(v); }
	// 0045CD68 call 0x0006800A
	X86_PUSH32(0x45CD6Du); sub_0006800A(ctx, base);
	// 0045CD6D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD6E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD6F mov [0x0064EB62], al
	{ uint32_t ea = (uint32_t)(0x64EB62u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CD74 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CD5E, __imp__sub_0045CD5E)

X86_FUNC(__imp__sub_0045CD75) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CD75 push 0x5B6DE4
	{ uint32_t v = (uint32_t)(0x5B6DE4u); X86_PUSH32(v); }
	// 0045CD7A push 0x484
	{ uint32_t v = (uint32_t)(0x484u); X86_PUSH32(v); }
	// 0045CD7F call 0x0006800A
	X86_PUSH32(0x45CD84u); sub_0006800A(ctx, base);
	// 0045CD84 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD85 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD86 mov [0x0064EB63], al
	{ uint32_t ea = (uint32_t)(0x64EB63u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CD8B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CD75, __imp__sub_0045CD75)

X86_FUNC(__imp__sub_0045CD8C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CD8C push 0x5B6DE8
	{ uint32_t v = (uint32_t)(0x5B6DE8u); X86_PUSH32(v); }
	// 0045CD91 push 0x483
	{ uint32_t v = (uint32_t)(0x483u); X86_PUSH32(v); }
	// 0045CD96 call 0x0006800A
	X86_PUSH32(0x45CD9Bu); sub_0006800A(ctx, base);
	// 0045CD9B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD9C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CD9D mov [0x0064EB64], al
	{ uint32_t ea = (uint32_t)(0x64EB64u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CDA2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CD8C, __imp__sub_0045CD8C)

X86_FUNC(__imp__sub_0045CDA3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CDA3 push 0x5B6DEC
	{ uint32_t v = (uint32_t)(0x5B6DECu); X86_PUSH32(v); }
	// 0045CDA8 push 0x482
	{ uint32_t v = (uint32_t)(0x482u); X86_PUSH32(v); }
	// 0045CDAD call 0x0006800A
	X86_PUSH32(0x45CDB2u); sub_0006800A(ctx, base);
	// 0045CDB2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CDB3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CDB4 mov [0x0064EB65], al
	{ uint32_t ea = (uint32_t)(0x64EB65u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CDB9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CDA3, __imp__sub_0045CDA3)

X86_FUNC(__imp__sub_0045CDBA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CDBA push 0x5B6DF0
	{ uint32_t v = (uint32_t)(0x5B6DF0u); X86_PUSH32(v); }
	// 0045CDBF push 0x481
	{ uint32_t v = (uint32_t)(0x481u); X86_PUSH32(v); }
	// 0045CDC4 call 0x0006800A
	X86_PUSH32(0x45CDC9u); sub_0006800A(ctx, base);
	// 0045CDC9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CDCA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CDCB mov [0x0064EB66], al
	{ uint32_t ea = (uint32_t)(0x64EB66u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CDD0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CDBA, __imp__sub_0045CDBA)

X86_FUNC(__imp__sub_0045CDD1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CDD1 push 0x5B6DF4
	{ uint32_t v = (uint32_t)(0x5B6DF4u); X86_PUSH32(v); }
	// 0045CDD6 push 0x480
	{ uint32_t v = (uint32_t)(0x480u); X86_PUSH32(v); }
	// 0045CDDB call 0x0006800A
	X86_PUSH32(0x45CDE0u); sub_0006800A(ctx, base);
	// 0045CDE0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CDE1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CDE2 mov [0x0064EB67], al
	{ uint32_t ea = (uint32_t)(0x64EB67u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CDE7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CDD1, __imp__sub_0045CDD1)

X86_FUNC(__imp__sub_0045CDE8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CDE8 push 0x5B6DF8
	{ uint32_t v = (uint32_t)(0x5B6DF8u); X86_PUSH32(v); }
	// 0045CDED push 0x47F
	{ uint32_t v = (uint32_t)(0x47Fu); X86_PUSH32(v); }
	// 0045CDF2 call 0x0006800A
	X86_PUSH32(0x45CDF7u); sub_0006800A(ctx, base);
	// 0045CDF7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CDF8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CDF9 mov [0x0064EB68], al
	{ uint32_t ea = (uint32_t)(0x64EB68u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CDFE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CDE8, __imp__sub_0045CDE8)

X86_FUNC(__imp__sub_0045CDFF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CDFF push 0x5B6DFC
	{ uint32_t v = (uint32_t)(0x5B6DFCu); X86_PUSH32(v); }
	// 0045CE04 push 0x405
	{ uint32_t v = (uint32_t)(0x405u); X86_PUSH32(v); }
	// 0045CE09 call 0x0006800A
	X86_PUSH32(0x45CE0Eu); sub_0006800A(ctx, base);
	// 0045CE0E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE0F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE10 mov [0x0064EB69], al
	{ uint32_t ea = (uint32_t)(0x64EB69u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CE15 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CDFF, __imp__sub_0045CDFF)

X86_FUNC(__imp__sub_0045CE16) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CE16 push 0x5B6E00
	{ uint32_t v = (uint32_t)(0x5B6E00u); X86_PUSH32(v); }
	// 0045CE1B push 0x512
	{ uint32_t v = (uint32_t)(0x512u); X86_PUSH32(v); }
	// 0045CE20 call 0x0006800A
	X86_PUSH32(0x45CE25u); sub_0006800A(ctx, base);
	// 0045CE25 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE26 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE27 mov [0x0064EB6A], al
	{ uint32_t ea = (uint32_t)(0x64EB6Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CE2C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CE16, __imp__sub_0045CE16)

X86_FUNC(__imp__sub_0045CE2D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CE2D push 0x5B6E04
	{ uint32_t v = (uint32_t)(0x5B6E04u); X86_PUSH32(v); }
	// 0045CE32 push 0x511
	{ uint32_t v = (uint32_t)(0x511u); X86_PUSH32(v); }
	// 0045CE37 call 0x0006800A
	X86_PUSH32(0x45CE3Cu); sub_0006800A(ctx, base);
	// 0045CE3C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE3D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE3E mov [0x0064EB6B], al
	{ uint32_t ea = (uint32_t)(0x64EB6Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CE43 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CE2D, __imp__sub_0045CE2D)

X86_FUNC(__imp__sub_0045CE44) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CE44 push 0x5B6E08
	{ uint32_t v = (uint32_t)(0x5B6E08u); X86_PUSH32(v); }
	// 0045CE49 push 0x487
	{ uint32_t v = (uint32_t)(0x487u); X86_PUSH32(v); }
	// 0045CE4E call 0x0006800A
	X86_PUSH32(0x45CE53u); sub_0006800A(ctx, base);
	// 0045CE53 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE54 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE55 mov [0x0064EB6C], al
	{ uint32_t ea = (uint32_t)(0x64EB6Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CE5A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CE44, __imp__sub_0045CE44)

X86_FUNC(__imp__sub_0045CE5B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CE5B push 0x5B6E0C
	{ uint32_t v = (uint32_t)(0x5B6E0Cu); X86_PUSH32(v); }
	// 0045CE60 push 0x457
	{ uint32_t v = (uint32_t)(0x457u); X86_PUSH32(v); }
	// 0045CE65 call 0x0006800A
	X86_PUSH32(0x45CE6Au); sub_0006800A(ctx, base);
	// 0045CE6A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE6B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE6C mov [0x0064EB6D], al
	{ uint32_t ea = (uint32_t)(0x64EB6Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CE71 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CE5B, __imp__sub_0045CE5B)

X86_FUNC(__imp__sub_0045CE72) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CE72 push 0x5B6E10
	{ uint32_t v = (uint32_t)(0x5B6E10u); X86_PUSH32(v); }
	// 0045CE77 push 0x9E5
	{ uint32_t v = (uint32_t)(0x9E5u); X86_PUSH32(v); }
	// 0045CE7C call 0x0006800A
	X86_PUSH32(0x45CE81u); sub_0006800A(ctx, base);
	// 0045CE81 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE82 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE83 mov [0x0064EB6E], al
	{ uint32_t ea = (uint32_t)(0x64EB6Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CE88 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CE72, __imp__sub_0045CE72)

X86_FUNC(__imp__sub_0045CE89) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CE89 push 0x5B6E14
	{ uint32_t v = (uint32_t)(0x5B6E14u); X86_PUSH32(v); }
	// 0045CE8E push 0x48E
	{ uint32_t v = (uint32_t)(0x48Eu); X86_PUSH32(v); }
	// 0045CE93 call 0x0006800A
	X86_PUSH32(0x45CE98u); sub_0006800A(ctx, base);
	// 0045CE98 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE99 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CE9A mov [0x0064EB6F], al
	{ uint32_t ea = (uint32_t)(0x64EB6Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CE9F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CE89, __imp__sub_0045CE89)

X86_FUNC(__imp__sub_0045CEA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CEA0 push 0x5B6E18
	{ uint32_t v = (uint32_t)(0x5B6E18u); X86_PUSH32(v); }
	// 0045CEA5 push 0x476
	{ uint32_t v = (uint32_t)(0x476u); X86_PUSH32(v); }
	// 0045CEAA call 0x0006800A
	X86_PUSH32(0x45CEAFu); sub_0006800A(ctx, base);
	// 0045CEAF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CEB0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CEB1 mov [0x0064EB70], al
	{ uint32_t ea = (uint32_t)(0x64EB70u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CEB6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CEA0, __imp__sub_0045CEA0)

X86_FUNC(__imp__sub_0045CEB7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CEB7 push 0x5B6E1C
	{ uint32_t v = (uint32_t)(0x5B6E1Cu); X86_PUSH32(v); }
	// 0045CEBC push 0x473
	{ uint32_t v = (uint32_t)(0x473u); X86_PUSH32(v); }
	// 0045CEC1 call 0x0006800A
	X86_PUSH32(0x45CEC6u); sub_0006800A(ctx, base);
	// 0045CEC6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CEC7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CEC8 mov [0x0064EB71], al
	{ uint32_t ea = (uint32_t)(0x64EB71u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CECD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CEB7, __imp__sub_0045CEB7)

X86_FUNC(__imp__sub_0045CECE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CECE push 0x5B6E20
	{ uint32_t v = (uint32_t)(0x5B6E20u); X86_PUSH32(v); }
	// 0045CED3 push 0x4A3
	{ uint32_t v = (uint32_t)(0x4A3u); X86_PUSH32(v); }
	// 0045CED8 call 0x0006800A
	X86_PUSH32(0x45CEDDu); sub_0006800A(ctx, base);
	// 0045CEDD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CEDE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CEDF mov [0x0064EB72], al
	{ uint32_t ea = (uint32_t)(0x64EB72u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CEE4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CECE, __imp__sub_0045CECE)

X86_FUNC(__imp__sub_0045CEE5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CEE5 push 0x5B6E24
	{ uint32_t v = (uint32_t)(0x5B6E24u); X86_PUSH32(v); }
	// 0045CEEA push 0x47E
	{ uint32_t v = (uint32_t)(0x47Eu); X86_PUSH32(v); }
	// 0045CEEF call 0x0006800A
	X86_PUSH32(0x45CEF4u); sub_0006800A(ctx, base);
	// 0045CEF4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CEF5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CEF6 mov [0x0064EB73], al
	{ uint32_t ea = (uint32_t)(0x64EB73u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CEFB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CEE5, __imp__sub_0045CEE5)

X86_FUNC(__imp__sub_0045CEFC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CEFC push 0x5B6E28
	{ uint32_t v = (uint32_t)(0x5B6E28u); X86_PUSH32(v); }
	// 0045CF01 push 0x573
	{ uint32_t v = (uint32_t)(0x573u); X86_PUSH32(v); }
	// 0045CF06 call 0x0006800A
	X86_PUSH32(0x45CF0Bu); sub_0006800A(ctx, base);
	// 0045CF0B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF0C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF0D mov [0x0064EB74], al
	{ uint32_t ea = (uint32_t)(0x64EB74u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CF12 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CEFC, __imp__sub_0045CEFC)

X86_FUNC(__imp__sub_0045CF13) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CF13 push 0x5B6E2C
	{ uint32_t v = (uint32_t)(0x5B6E2Cu); X86_PUSH32(v); }
	// 0045CF18 push 0x572
	{ uint32_t v = (uint32_t)(0x572u); X86_PUSH32(v); }
	// 0045CF1D call 0x0006800A
	X86_PUSH32(0x45CF22u); sub_0006800A(ctx, base);
	// 0045CF22 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF23 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF24 mov [0x0064EB75], al
	{ uint32_t ea = (uint32_t)(0x64EB75u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CF29 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CF13, __imp__sub_0045CF13)

X86_FUNC(__imp__sub_0045CF2A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CF2A push 0x5B6E30
	{ uint32_t v = (uint32_t)(0x5B6E30u); X86_PUSH32(v); }
	// 0045CF2F push 0x49B
	{ uint32_t v = (uint32_t)(0x49Bu); X86_PUSH32(v); }
	// 0045CF34 call 0x0006800A
	X86_PUSH32(0x45CF39u); sub_0006800A(ctx, base);
	// 0045CF39 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF3A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF3B mov [0x0064EB76], al
	{ uint32_t ea = (uint32_t)(0x64EB76u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CF40 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CF2A, __imp__sub_0045CF2A)

X86_FUNC(__imp__sub_0045CF41) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CF41 push 0x5B6E34
	{ uint32_t v = (uint32_t)(0x5B6E34u); X86_PUSH32(v); }
	// 0045CF46 push 0x489
	{ uint32_t v = (uint32_t)(0x489u); X86_PUSH32(v); }
	// 0045CF4B call 0x0006800A
	X86_PUSH32(0x45CF50u); sub_0006800A(ctx, base);
	// 0045CF50 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF51 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF52 mov [0x0064EB77], al
	{ uint32_t ea = (uint32_t)(0x64EB77u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CF57 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CF41, __imp__sub_0045CF41)

X86_FUNC(__imp__sub_0045CF58) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CF58 push 0x5B6E38
	{ uint32_t v = (uint32_t)(0x5B6E38u); X86_PUSH32(v); }
	// 0045CF5D push 0x47D
	{ uint32_t v = (uint32_t)(0x47Du); X86_PUSH32(v); }
	// 0045CF62 call 0x0006800A
	X86_PUSH32(0x45CF67u); sub_0006800A(ctx, base);
	// 0045CF67 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF68 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF69 mov [0x0064EB78], al
	{ uint32_t ea = (uint32_t)(0x64EB78u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CF6E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CF58, __imp__sub_0045CF58)

X86_FUNC(__imp__sub_0045CF6F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CF6F push 0x5B6E3C
	{ uint32_t v = (uint32_t)(0x5B6E3Cu); X86_PUSH32(v); }
	// 0045CF74 push 0x437
	{ uint32_t v = (uint32_t)(0x437u); X86_PUSH32(v); }
	// 0045CF79 call 0x0006800A
	X86_PUSH32(0x45CF7Eu); sub_0006800A(ctx, base);
	// 0045CF7E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF7F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF80 mov [0x0064EB79], al
	{ uint32_t ea = (uint32_t)(0x64EB79u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CF85 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CF6F, __imp__sub_0045CF6F)

X86_FUNC(__imp__sub_0045CF86) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CF86 push 0x5B6E40
	{ uint32_t v = (uint32_t)(0x5B6E40u); X86_PUSH32(v); }
	// 0045CF8B push 0x436
	{ uint32_t v = (uint32_t)(0x436u); X86_PUSH32(v); }
	// 0045CF90 call 0x0006800A
	X86_PUSH32(0x45CF95u); sub_0006800A(ctx, base);
	// 0045CF95 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF96 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CF97 mov [0x0064EB7A], al
	{ uint32_t ea = (uint32_t)(0x64EB7Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CF9C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CF86, __imp__sub_0045CF86)

X86_FUNC(__imp__sub_0045CF9D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CF9D push 0x5B6E44
	{ uint32_t v = (uint32_t)(0x5B6E44u); X86_PUSH32(v); }
	// 0045CFA2 push 0x47C
	{ uint32_t v = (uint32_t)(0x47Cu); X86_PUSH32(v); }
	// 0045CFA7 call 0x0006800A
	X86_PUSH32(0x45CFACu); sub_0006800A(ctx, base);
	// 0045CFAC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CFAD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CFAE mov [0x0064EB7B], al
	{ uint32_t ea = (uint32_t)(0x64EB7Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CFB3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CF9D, __imp__sub_0045CF9D)

X86_FUNC(__imp__sub_0045CFB4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CFB4 push 0x5B6E48
	{ uint32_t v = (uint32_t)(0x5B6E48u); X86_PUSH32(v); }
	// 0045CFB9 push 0x50E
	{ uint32_t v = (uint32_t)(0x50Eu); X86_PUSH32(v); }
	// 0045CFBE call 0x0006800A
	X86_PUSH32(0x45CFC3u); sub_0006800A(ctx, base);
	// 0045CFC3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CFC4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CFC5 mov [0x0064EB7C], al
	{ uint32_t ea = (uint32_t)(0x64EB7Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CFCA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CFB4, __imp__sub_0045CFB4)

X86_FUNC(__imp__sub_0045CFCB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CFCB push 0x5B6E4C
	{ uint32_t v = (uint32_t)(0x5B6E4Cu); X86_PUSH32(v); }
	// 0045CFD0 push 0x50D
	{ uint32_t v = (uint32_t)(0x50Du); X86_PUSH32(v); }
	// 0045CFD5 call 0x0006800A
	X86_PUSH32(0x45CFDAu); sub_0006800A(ctx, base);
	// 0045CFDA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CFDB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CFDC mov [0x0064EB7D], al
	{ uint32_t ea = (uint32_t)(0x64EB7Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CFE1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CFCB, __imp__sub_0045CFCB)

X86_FUNC(__imp__sub_0045CFE2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CFE2 push 0x5B6E50
	{ uint32_t v = (uint32_t)(0x5B6E50u); X86_PUSH32(v); }
	// 0045CFE7 push 0x50C
	{ uint32_t v = (uint32_t)(0x50Cu); X86_PUSH32(v); }
	// 0045CFEC call 0x0006800A
	X86_PUSH32(0x45CFF1u); sub_0006800A(ctx, base);
	// 0045CFF1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CFF2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045CFF3 mov [0x0064EB7E], al
	{ uint32_t ea = (uint32_t)(0x64EB7Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045CFF8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CFE2, __imp__sub_0045CFE2)

X86_FUNC(__imp__sub_0045CFF9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045CFF9 push 0x5B6E54
	{ uint32_t v = (uint32_t)(0x5B6E54u); X86_PUSH32(v); }
	// 0045CFFE push 0x50B
	{ uint32_t v = (uint32_t)(0x50Bu); X86_PUSH32(v); }
	// 0045D003 call 0x0006800A
	X86_PUSH32(0x45D008u); sub_0006800A(ctx, base);
	// 0045D008 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D009 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D00A mov [0x0064EB7F], al
	{ uint32_t ea = (uint32_t)(0x64EB7Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D00F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045CFF9, __imp__sub_0045CFF9)

X86_FUNC(__imp__sub_0045D010) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D010 push 0x5B6E58
	{ uint32_t v = (uint32_t)(0x5B6E58u); X86_PUSH32(v); }
	// 0045D015 push 0x50A
	{ uint32_t v = (uint32_t)(0x50Au); X86_PUSH32(v); }
	// 0045D01A call 0x0006800A
	X86_PUSH32(0x45D01Fu); sub_0006800A(ctx, base);
	// 0045D01F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D020 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D021 mov [0x0064EB80], al
	{ uint32_t ea = (uint32_t)(0x64EB80u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D026 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D010, __imp__sub_0045D010)

X86_FUNC(__imp__sub_0045D027) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D027 push 0x5B6E5C
	{ uint32_t v = (uint32_t)(0x5B6E5Cu); X86_PUSH32(v); }
	// 0045D02C push 0x8A2
	{ uint32_t v = (uint32_t)(0x8A2u); X86_PUSH32(v); }
	// 0045D031 call 0x0006800A
	X86_PUSH32(0x45D036u); sub_0006800A(ctx, base);
	// 0045D036 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D037 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D038 mov [0x0064EB81], al
	{ uint32_t ea = (uint32_t)(0x64EB81u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D03D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D027, __imp__sub_0045D027)

X86_FUNC(__imp__sub_0045D03E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D03E push 0x5B6E60
	{ uint32_t v = (uint32_t)(0x5B6E60u); X86_PUSH32(v); }
	// 0045D043 push 0x8BD
	{ uint32_t v = (uint32_t)(0x8BDu); X86_PUSH32(v); }
	// 0045D048 call 0x0006800A
	X86_PUSH32(0x45D04Du); sub_0006800A(ctx, base);
	// 0045D04D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D04E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D04F mov [0x0064EB82], al
	{ uint32_t ea = (uint32_t)(0x64EB82u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D054 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D03E, __imp__sub_0045D03E)

X86_FUNC(__imp__sub_0045D055) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D055 push 0x5B6E64
	{ uint32_t v = (uint32_t)(0x5B6E64u); X86_PUSH32(v); }
	// 0045D05A push 0x475
	{ uint32_t v = (uint32_t)(0x475u); X86_PUSH32(v); }
	// 0045D05F call 0x0006800A
	X86_PUSH32(0x45D064u); sub_0006800A(ctx, base);
	// 0045D064 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D065 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D066 mov [0x0064EB83], al
	{ uint32_t ea = (uint32_t)(0x64EB83u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D06B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D055, __imp__sub_0045D055)

X86_FUNC(__imp__sub_0045D06C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D06C push 0x5B6E68
	{ uint32_t v = (uint32_t)(0x5B6E68u); X86_PUSH32(v); }
	// 0045D071 push 0x474
	{ uint32_t v = (uint32_t)(0x474u); X86_PUSH32(v); }
	// 0045D076 call 0x0006800A
	X86_PUSH32(0x45D07Bu); sub_0006800A(ctx, base);
	// 0045D07B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D07C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D07D mov [0x0064EB84], al
	{ uint32_t ea = (uint32_t)(0x64EB84u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D082 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D06C, __imp__sub_0045D06C)

X86_FUNC(__imp__sub_0045D083) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D083 push 0x5B6E6C
	{ uint32_t v = (uint32_t)(0x5B6E6Cu); X86_PUSH32(v); }
	// 0045D088 push 0x460
	{ uint32_t v = (uint32_t)(0x460u); X86_PUSH32(v); }
	// 0045D08D call 0x0006800A
	X86_PUSH32(0x45D092u); sub_0006800A(ctx, base);
	// 0045D092 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D093 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D094 mov [0x0064EB85], al
	{ uint32_t ea = (uint32_t)(0x64EB85u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D099 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D083, __imp__sub_0045D083)

X86_FUNC(__imp__sub_0045D09A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D09A push 0x5B6E70
	{ uint32_t v = (uint32_t)(0x5B6E70u); X86_PUSH32(v); }
	// 0045D09F push 0x45F
	{ uint32_t v = (uint32_t)(0x45Fu); X86_PUSH32(v); }
	// 0045D0A4 call 0x0006800A
	X86_PUSH32(0x45D0A9u); sub_0006800A(ctx, base);
	// 0045D0A9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D0AA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D0AB mov [0x0064EB86], al
	{ uint32_t ea = (uint32_t)(0x64EB86u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D0B0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D09A, __imp__sub_0045D09A)

X86_FUNC(__imp__sub_0045D0B1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D0B1 push 0x5B6E74
	{ uint32_t v = (uint32_t)(0x5B6E74u); X86_PUSH32(v); }
	// 0045D0B6 push 0x45E
	{ uint32_t v = (uint32_t)(0x45Eu); X86_PUSH32(v); }
	// 0045D0BB call 0x0006800A
	X86_PUSH32(0x45D0C0u); sub_0006800A(ctx, base);
	// 0045D0C0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D0C1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D0C2 mov [0x0064EB87], al
	{ uint32_t ea = (uint32_t)(0x64EB87u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D0C7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D0B1, __imp__sub_0045D0B1)

X86_FUNC(__imp__sub_0045D0C8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D0C8 push 0x5B6E78
	{ uint32_t v = (uint32_t)(0x5B6E78u); X86_PUSH32(v); }
	// 0045D0CD push 0x45D
	{ uint32_t v = (uint32_t)(0x45Du); X86_PUSH32(v); }
	// 0045D0D2 call 0x0006800A
	X86_PUSH32(0x45D0D7u); sub_0006800A(ctx, base);
	// 0045D0D7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D0D8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D0D9 mov [0x0064EB88], al
	{ uint32_t ea = (uint32_t)(0x64EB88u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D0DE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D0C8, __imp__sub_0045D0C8)

X86_FUNC(__imp__sub_0045D0DF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D0DF push 0x5B6E7C
	{ uint32_t v = (uint32_t)(0x5B6E7Cu); X86_PUSH32(v); }
	// 0045D0E4 push 0xEFD
	{ uint32_t v = (uint32_t)(0xEFDu); X86_PUSH32(v); }
	// 0045D0E9 call 0x0006800A
	X86_PUSH32(0x45D0EEu); sub_0006800A(ctx, base);
	// 0045D0EE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D0EF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D0F0 mov [0x0064EB89], al
	{ uint32_t ea = (uint32_t)(0x64EB89u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D0F5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D0DF, __imp__sub_0045D0DF)

X86_FUNC(__imp__sub_0045D0F6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D0F6 push 0x5B6E80
	{ uint32_t v = (uint32_t)(0x5B6E80u); X86_PUSH32(v); }
	// 0045D0FB push 0x9E2
	{ uint32_t v = (uint32_t)(0x9E2u); X86_PUSH32(v); }
	// 0045D100 call 0x0006800A
	X86_PUSH32(0x45D105u); sub_0006800A(ctx, base);
	// 0045D105 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D106 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D107 mov [0x0064EB8A], al
	{ uint32_t ea = (uint32_t)(0x64EB8Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D10C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D0F6, __imp__sub_0045D0F6)

X86_FUNC(__imp__sub_0045D10D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D10D push 0x5B6E84
	{ uint32_t v = (uint32_t)(0x5B6E84u); X86_PUSH32(v); }
	// 0045D112 push 0x9CD
	{ uint32_t v = (uint32_t)(0x9CDu); X86_PUSH32(v); }
	// 0045D117 call 0x0006800A
	X86_PUSH32(0x45D11Cu); sub_0006800A(ctx, base);
	// 0045D11C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D11D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D11E mov [0x0064EB8B], al
	{ uint32_t ea = (uint32_t)(0x64EB8Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D123 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D10D, __imp__sub_0045D10D)

X86_FUNC(__imp__sub_0045D124) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D124 push 0x5B6E88
	{ uint32_t v = (uint32_t)(0x5B6E88u); X86_PUSH32(v); }
	// 0045D129 push 0x9CB
	{ uint32_t v = (uint32_t)(0x9CBu); X86_PUSH32(v); }
	// 0045D12E call 0x0006800A
	X86_PUSH32(0x45D133u); sub_0006800A(ctx, base);
	// 0045D133 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D134 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D135 mov [0x0064EB8C], al
	{ uint32_t ea = (uint32_t)(0x64EB8Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D13A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D124, __imp__sub_0045D124)

X86_FUNC(__imp__sub_0045D13B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D13B push 0x5B6E8C
	{ uint32_t v = (uint32_t)(0x5B6E8Cu); X86_PUSH32(v); }
	// 0045D140 push 0x9C8
	{ uint32_t v = (uint32_t)(0x9C8u); X86_PUSH32(v); }
	// 0045D145 call 0x0006800A
	X86_PUSH32(0x45D14Au); sub_0006800A(ctx, base);
	// 0045D14A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D14B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D14C mov [0x0064EB8D], al
	{ uint32_t ea = (uint32_t)(0x64EB8Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D151 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D13B, __imp__sub_0045D13B)

X86_FUNC(__imp__sub_0045D152) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D152 push 0x5B6E90
	{ uint32_t v = (uint32_t)(0x5B6E90u); X86_PUSH32(v); }
	// 0045D157 push 0x9C7
	{ uint32_t v = (uint32_t)(0x9C7u); X86_PUSH32(v); }
	// 0045D15C call 0x0006800A
	X86_PUSH32(0x45D161u); sub_0006800A(ctx, base);
	// 0045D161 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D162 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D163 mov [0x0064EB8E], al
	{ uint32_t ea = (uint32_t)(0x64EB8Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D168 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D152, __imp__sub_0045D152)

X86_FUNC(__imp__sub_0045D169) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D169 push 0x5B6E94
	{ uint32_t v = (uint32_t)(0x5B6E94u); X86_PUSH32(v); }
	// 0045D16E push 0x9C6
	{ uint32_t v = (uint32_t)(0x9C6u); X86_PUSH32(v); }
	// 0045D173 call 0x0006800A
	X86_PUSH32(0x45D178u); sub_0006800A(ctx, base);
	// 0045D178 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D179 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D17A mov [0x0064EB8F], al
	{ uint32_t ea = (uint32_t)(0x64EB8Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D17F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D169, __imp__sub_0045D169)

X86_FUNC(__imp__sub_0045D180) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D180 push 0x5B6E98
	{ uint32_t v = (uint32_t)(0x5B6E98u); X86_PUSH32(v); }
	// 0045D185 push 0x4B0
	{ uint32_t v = (uint32_t)(0x4B0u); X86_PUSH32(v); }
	// 0045D18A call 0x0006800A
	X86_PUSH32(0x45D18Fu); sub_0006800A(ctx, base);
	// 0045D18F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D190 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D191 mov [0x0064EB90], al
	{ uint32_t ea = (uint32_t)(0x64EB90u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D196 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D180, __imp__sub_0045D180)

X86_FUNC(__imp__sub_0045D197) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D197 push 0x5B6E9C
	{ uint32_t v = (uint32_t)(0x5B6E9Cu); X86_PUSH32(v); }
	// 0045D19C push 0x917
	{ uint32_t v = (uint32_t)(0x917u); X86_PUSH32(v); }
	// 0045D1A1 call 0x0006800A
	X86_PUSH32(0x45D1A6u); sub_0006800A(ctx, base);
	// 0045D1A6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D1A7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D1A8 mov [0x0064EB91], al
	{ uint32_t ea = (uint32_t)(0x64EB91u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D1AD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D197, __imp__sub_0045D197)

X86_FUNC(__imp__sub_0045D1AE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D1AE push 0x5B6EA0
	{ uint32_t v = (uint32_t)(0x5B6EA0u); X86_PUSH32(v); }
	// 0045D1B3 push 0x8FC
	{ uint32_t v = (uint32_t)(0x8FCu); X86_PUSH32(v); }
	// 0045D1B8 call 0x0006800A
	X86_PUSH32(0x45D1BDu); sub_0006800A(ctx, base);
	// 0045D1BD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D1BE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D1BF mov [0x0064EB92], al
	{ uint32_t ea = (uint32_t)(0x64EB92u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D1C4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D1AE, __imp__sub_0045D1AE)

X86_FUNC(__imp__sub_0045D1C5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D1C5 push 0x5B6EA4
	{ uint32_t v = (uint32_t)(0x5B6EA4u); X86_PUSH32(v); }
	// 0045D1CA push 0x52E
	{ uint32_t v = (uint32_t)(0x52Eu); X86_PUSH32(v); }
	// 0045D1CF call 0x0006800A
	X86_PUSH32(0x45D1D4u); sub_0006800A(ctx, base);
	// 0045D1D4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D1D5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D1D6 mov [0x0064EB93], al
	{ uint32_t ea = (uint32_t)(0x64EB93u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D1DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D1C5, __imp__sub_0045D1C5)

X86_FUNC(__imp__sub_0045D1DC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D1DC push 0x5B6EA8
	{ uint32_t v = (uint32_t)(0x5B6EA8u); X86_PUSH32(v); }
	// 0045D1E1 push 0x52D
	{ uint32_t v = (uint32_t)(0x52Du); X86_PUSH32(v); }
	// 0045D1E6 call 0x0006800A
	X86_PUSH32(0x45D1EBu); sub_0006800A(ctx, base);
	// 0045D1EB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D1EC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D1ED mov [0x0064EB94], al
	{ uint32_t ea = (uint32_t)(0x64EB94u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D1F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D1DC, __imp__sub_0045D1DC)

X86_FUNC(__imp__sub_0045D1F3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D1F3 push 0x5B6EAC
	{ uint32_t v = (uint32_t)(0x5B6EACu); X86_PUSH32(v); }
	// 0045D1F8 push 0x92C
	{ uint32_t v = (uint32_t)(0x92Cu); X86_PUSH32(v); }
	// 0045D1FD call 0x0006800A
	X86_PUSH32(0x45D202u); sub_0006800A(ctx, base);
	// 0045D202 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D203 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D204 mov [0x0064EB95], al
	{ uint32_t ea = (uint32_t)(0x64EB95u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D209 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D1F3, __imp__sub_0045D1F3)

X86_FUNC(__imp__sub_0045D20A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D20A push 0x5B6EB0
	{ uint32_t v = (uint32_t)(0x5B6EB0u); X86_PUSH32(v); }
	// 0045D20F push 0x927
	{ uint32_t v = (uint32_t)(0x927u); X86_PUSH32(v); }
	// 0045D214 call 0x0006800A
	X86_PUSH32(0x45D219u); sub_0006800A(ctx, base);
	// 0045D219 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D21A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D21B mov [0x0064EB96], al
	{ uint32_t ea = (uint32_t)(0x64EB96u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D220 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D20A, __imp__sub_0045D20A)

X86_FUNC(__imp__sub_0045D221) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D221 push 0x5B6EB4
	{ uint32_t v = (uint32_t)(0x5B6EB4u); X86_PUSH32(v); }
	// 0045D226 push 0x926
	{ uint32_t v = (uint32_t)(0x926u); X86_PUSH32(v); }
	// 0045D22B call 0x0006800A
	X86_PUSH32(0x45D230u); sub_0006800A(ctx, base);
	// 0045D230 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D231 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D232 mov [0x0064EB97], al
	{ uint32_t ea = (uint32_t)(0x64EB97u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D237 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D221, __imp__sub_0045D221)

X86_FUNC(__imp__sub_0045D238) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D238 push 0x5B6EB8
	{ uint32_t v = (uint32_t)(0x5B6EB8u); X86_PUSH32(v); }
	// 0045D23D push 0x91F
	{ uint32_t v = (uint32_t)(0x91Fu); X86_PUSH32(v); }
	// 0045D242 call 0x0006800A
	X86_PUSH32(0x45D247u); sub_0006800A(ctx, base);
	// 0045D247 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D248 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D249 mov [0x0064EB98], al
	{ uint32_t ea = (uint32_t)(0x64EB98u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D24E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D238, __imp__sub_0045D238)

X86_FUNC(__imp__sub_0045D24F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D24F push 0x5B6EBC
	{ uint32_t v = (uint32_t)(0x5B6EBCu); X86_PUSH32(v); }
	// 0045D254 push 0x91E
	{ uint32_t v = (uint32_t)(0x91Eu); X86_PUSH32(v); }
	// 0045D259 call 0x0006800A
	X86_PUSH32(0x45D25Eu); sub_0006800A(ctx, base);
	// 0045D25E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D25F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D260 mov [0x0064EB99], al
	{ uint32_t ea = (uint32_t)(0x64EB99u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D265 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D24F, __imp__sub_0045D24F)

X86_FUNC(__imp__sub_0045D266) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D266 push 0x5B6EC0
	{ uint32_t v = (uint32_t)(0x5B6EC0u); X86_PUSH32(v); }
	// 0045D26B push 0x62B
	{ uint32_t v = (uint32_t)(0x62Bu); X86_PUSH32(v); }
	// 0045D270 call 0x0006800A
	X86_PUSH32(0x45D275u); sub_0006800A(ctx, base);
	// 0045D275 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D276 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D277 mov [0x0064EB9A], al
	{ uint32_t ea = (uint32_t)(0x64EB9Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D27C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D266, __imp__sub_0045D266)

X86_FUNC(__imp__sub_0045D27D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D27D push 0x5B6EC4
	{ uint32_t v = (uint32_t)(0x5B6EC4u); X86_PUSH32(v); }
	// 0045D282 push 0xDB1
	{ uint32_t v = (uint32_t)(0xDB1u); X86_PUSH32(v); }
	// 0045D287 call 0x0006800A
	X86_PUSH32(0x45D28Cu); sub_0006800A(ctx, base);
	// 0045D28C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D28D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D28E mov [0x0064EB9B], al
	{ uint32_t ea = (uint32_t)(0x64EB9Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D293 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D27D, __imp__sub_0045D27D)

X86_FUNC(__imp__sub_0045D294) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D294 push 0x5B6EC8
	{ uint32_t v = (uint32_t)(0x5B6EC8u); X86_PUSH32(v); }
	// 0045D299 push 0x627
	{ uint32_t v = (uint32_t)(0x627u); X86_PUSH32(v); }
	// 0045D29E call 0x0006800A
	X86_PUSH32(0x45D2A3u); sub_0006800A(ctx, base);
	// 0045D2A3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D2A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D2A5 mov [0x0064EB9C], al
	{ uint32_t ea = (uint32_t)(0x64EB9Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D2AA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D294, __imp__sub_0045D294)

X86_FUNC(__imp__sub_0045D2AB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D2AB push 0x5B6ECC
	{ uint32_t v = (uint32_t)(0x5B6ECCu); X86_PUSH32(v); }
	// 0045D2B0 push 0xDB6
	{ uint32_t v = (uint32_t)(0xDB6u); X86_PUSH32(v); }
	// 0045D2B5 call 0x0006800A
	X86_PUSH32(0x45D2BAu); sub_0006800A(ctx, base);
	// 0045D2BA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D2BB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D2BC mov [0x0064EB9D], al
	{ uint32_t ea = (uint32_t)(0x64EB9Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D2C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D2AB, __imp__sub_0045D2AB)

X86_FUNC(__imp__sub_0045D2C2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D2C2 push 0x5B6ED0
	{ uint32_t v = (uint32_t)(0x5B6ED0u); X86_PUSH32(v); }
	// 0045D2C7 push 0x532
	{ uint32_t v = (uint32_t)(0x532u); X86_PUSH32(v); }
	// 0045D2CC call 0x0006800A
	X86_PUSH32(0x45D2D1u); sub_0006800A(ctx, base);
	// 0045D2D1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D2D2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D2D3 mov [0x0064EB9E], al
	{ uint32_t ea = (uint32_t)(0x64EB9Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D2D8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D2C2, __imp__sub_0045D2C2)

X86_FUNC(__imp__sub_0045D2D9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D2D9 push 0x5B6ED4
	{ uint32_t v = (uint32_t)(0x5B6ED4u); X86_PUSH32(v); }
	// 0045D2DE push 0x509
	{ uint32_t v = (uint32_t)(0x509u); X86_PUSH32(v); }
	// 0045D2E3 call 0x0006800A
	X86_PUSH32(0x45D2E8u); sub_0006800A(ctx, base);
	// 0045D2E8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D2E9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D2EA mov [0x0064EB9F], al
	{ uint32_t ea = (uint32_t)(0x64EB9Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D2EF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D2D9, __imp__sub_0045D2D9)

X86_FUNC(__imp__sub_0045D2F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D2F0 push 0x5B6ED8
	{ uint32_t v = (uint32_t)(0x5B6ED8u); X86_PUSH32(v); }
	// 0045D2F5 push 0x84B
	{ uint32_t v = (uint32_t)(0x84Bu); X86_PUSH32(v); }
	// 0045D2FA call 0x0006800A
	X86_PUSH32(0x45D2FFu); sub_0006800A(ctx, base);
	// 0045D2FF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D300 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D301 mov [0x0064EBA0], al
	{ uint32_t ea = (uint32_t)(0x64EBA0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D306 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D2F0, __imp__sub_0045D2F0)

X86_FUNC(__imp__sub_0045D307) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D307 push 0x5B6EDC
	{ uint32_t v = (uint32_t)(0x5B6EDCu); X86_PUSH32(v); }
	// 0045D30C push 0xBEE
	{ uint32_t v = (uint32_t)(0xBEEu); X86_PUSH32(v); }
	// 0045D311 call 0x0006800A
	X86_PUSH32(0x45D316u); sub_0006800A(ctx, base);
	// 0045D316 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D317 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D318 mov [0x0064EBA1], al
	{ uint32_t ea = (uint32_t)(0x64EBA1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D31D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D307, __imp__sub_0045D307)

X86_FUNC(__imp__sub_0045D31E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D31E push 0x5B6EE0
	{ uint32_t v = (uint32_t)(0x5B6EE0u); X86_PUSH32(v); }
	// 0045D323 push 0xD8A
	{ uint32_t v = (uint32_t)(0xD8Au); X86_PUSH32(v); }
	// 0045D328 call 0x0006800A
	X86_PUSH32(0x45D32Du); sub_0006800A(ctx, base);
	// 0045D32D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D32E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D32F mov [0x0064EBA2], al
	{ uint32_t ea = (uint32_t)(0x64EBA2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D334 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D31E, __imp__sub_0045D31E)

X86_FUNC(__imp__sub_0045D335) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D335 push 0x5B6EE4
	{ uint32_t v = (uint32_t)(0x5B6EE4u); X86_PUSH32(v); }
	// 0045D33A push 0x8DC
	{ uint32_t v = (uint32_t)(0x8DCu); X86_PUSH32(v); }
	// 0045D33F call 0x0006800A
	X86_PUSH32(0x45D344u); sub_0006800A(ctx, base);
	// 0045D344 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D345 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D346 mov [0x0064EBA3], al
	{ uint32_t ea = (uint32_t)(0x64EBA3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D34B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D335, __imp__sub_0045D335)

X86_FUNC(__imp__sub_0045D34C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D34C push 0x5B6EE8
	{ uint32_t v = (uint32_t)(0x5B6EE8u); X86_PUSH32(v); }
	// 0045D351 push 0x5A8
	{ uint32_t v = (uint32_t)(0x5A8u); X86_PUSH32(v); }
	// 0045D356 call 0x0006800A
	X86_PUSH32(0x45D35Bu); sub_0006800A(ctx, base);
	// 0045D35B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D35C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D35D mov [0x0064EBA4], al
	{ uint32_t ea = (uint32_t)(0x64EBA4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D362 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D34C, __imp__sub_0045D34C)

X86_FUNC(__imp__sub_0045D363) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D363 push 0x5B6EEC
	{ uint32_t v = (uint32_t)(0x5B6EECu); X86_PUSH32(v); }
	// 0045D368 push 0x5A6
	{ uint32_t v = (uint32_t)(0x5A6u); X86_PUSH32(v); }
	// 0045D36D call 0x0006800A
	X86_PUSH32(0x45D372u); sub_0006800A(ctx, base);
	// 0045D372 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D373 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D374 mov [0x0064EBA5], al
	{ uint32_t ea = (uint32_t)(0x64EBA5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D379 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D363, __imp__sub_0045D363)

X86_FUNC(__imp__sub_0045D37A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D37A push 0x5B6EF0
	{ uint32_t v = (uint32_t)(0x5B6EF0u); X86_PUSH32(v); }
	// 0045D37F push 0x5A5
	{ uint32_t v = (uint32_t)(0x5A5u); X86_PUSH32(v); }
	// 0045D384 call 0x0006800A
	X86_PUSH32(0x45D389u); sub_0006800A(ctx, base);
	// 0045D389 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D38A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D38B mov [0x0064EBA6], al
	{ uint32_t ea = (uint32_t)(0x64EBA6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D390 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D37A, __imp__sub_0045D37A)

X86_FUNC(__imp__sub_0045D391) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D391 push 0x5B6EF4
	{ uint32_t v = (uint32_t)(0x5B6EF4u); X86_PUSH32(v); }
	// 0045D396 push 0x8AF
	{ uint32_t v = (uint32_t)(0x8AFu); X86_PUSH32(v); }
	// 0045D39B call 0x0006800A
	X86_PUSH32(0x45D3A0u); sub_0006800A(ctx, base);
	// 0045D3A0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D3A1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D3A2 mov [0x0064EBA7], al
	{ uint32_t ea = (uint32_t)(0x64EBA7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D3A7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D391, __imp__sub_0045D391)

X86_FUNC(__imp__sub_0045D3A8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D3A8 push 0x5B6EF8
	{ uint32_t v = (uint32_t)(0x5B6EF8u); X86_PUSH32(v); }
	// 0045D3AD push 0x5BF
	{ uint32_t v = (uint32_t)(0x5BFu); X86_PUSH32(v); }
	// 0045D3B2 call 0x0006800A
	X86_PUSH32(0x45D3B7u); sub_0006800A(ctx, base);
	// 0045D3B7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D3B8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D3B9 mov [0x0064EBA8], al
	{ uint32_t ea = (uint32_t)(0x64EBA8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D3BE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D3A8, __imp__sub_0045D3A8)

X86_FUNC(__imp__sub_0045D3BF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D3BF push 0x5B6EFC
	{ uint32_t v = (uint32_t)(0x5B6EFCu); X86_PUSH32(v); }
	// 0045D3C4 push 0x5CD
	{ uint32_t v = (uint32_t)(0x5CDu); X86_PUSH32(v); }
	// 0045D3C9 call 0x0006800A
	X86_PUSH32(0x45D3CEu); sub_0006800A(ctx, base);
	// 0045D3CE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D3CF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D3D0 mov [0x0064EBA9], al
	{ uint32_t ea = (uint32_t)(0x64EBA9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D3D5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D3BF, __imp__sub_0045D3BF)

X86_FUNC(__imp__sub_0045D3D6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D3D6 push 0x5B6F00
	{ uint32_t v = (uint32_t)(0x5B6F00u); X86_PUSH32(v); }
	// 0045D3DB push 0x5A7
	{ uint32_t v = (uint32_t)(0x5A7u); X86_PUSH32(v); }
	// 0045D3E0 call 0x0006800A
	X86_PUSH32(0x45D3E5u); sub_0006800A(ctx, base);
	// 0045D3E5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D3E6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D3E7 mov [0x0064EBAA], al
	{ uint32_t ea = (uint32_t)(0x64EBAAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D3EC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D3D6, __imp__sub_0045D3D6)

X86_FUNC(__imp__sub_0045D3ED) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D3ED push 0x5B6F04
	{ uint32_t v = (uint32_t)(0x5B6F04u); X86_PUSH32(v); }
	// 0045D3F2 push 0x5A4
	{ uint32_t v = (uint32_t)(0x5A4u); X86_PUSH32(v); }
	// 0045D3F7 call 0x0006800A
	X86_PUSH32(0x45D3FCu); sub_0006800A(ctx, base);
	// 0045D3FC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D3FD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D3FE mov [0x0064EBAB], al
	{ uint32_t ea = (uint32_t)(0x64EBABu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D403 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D3ED, __imp__sub_0045D3ED)

X86_FUNC(__imp__sub_0045D404) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D404 push 0x5B6F08
	{ uint32_t v = (uint32_t)(0x5B6F08u); X86_PUSH32(v); }
	// 0045D409 push 0x5A3
	{ uint32_t v = (uint32_t)(0x5A3u); X86_PUSH32(v); }
	// 0045D40E call 0x0006800A
	X86_PUSH32(0x45D413u); sub_0006800A(ctx, base);
	// 0045D413 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D414 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D415 mov [0x0064EBAC], al
	{ uint32_t ea = (uint32_t)(0x64EBACu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D41A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D404, __imp__sub_0045D404)

X86_FUNC(__imp__sub_0045D41B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D41B push 0x5B6F0C
	{ uint32_t v = (uint32_t)(0x5B6F0Cu); X86_PUSH32(v); }
	// 0045D420 push 0x5A2
	{ uint32_t v = (uint32_t)(0x5A2u); X86_PUSH32(v); }
	// 0045D425 call 0x0006800A
	X86_PUSH32(0x45D42Au); sub_0006800A(ctx, base);
	// 0045D42A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D42B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D42C mov [0x0064EBAD], al
	{ uint32_t ea = (uint32_t)(0x64EBADu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D431 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D41B, __imp__sub_0045D41B)

X86_FUNC(__imp__sub_0045D432) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D432 push 0x5B6F10
	{ uint32_t v = (uint32_t)(0x5B6F10u); X86_PUSH32(v); }
	// 0045D437 push 0x5A0
	{ uint32_t v = (uint32_t)(0x5A0u); X86_PUSH32(v); }
	// 0045D43C call 0x0006800A
	X86_PUSH32(0x45D441u); sub_0006800A(ctx, base);
	// 0045D441 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D442 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D443 mov [0x0064EBAE], al
	{ uint32_t ea = (uint32_t)(0x64EBAEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D448 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D432, __imp__sub_0045D432)

X86_FUNC(__imp__sub_0045D449) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D449 push 0x5B6F14
	{ uint32_t v = (uint32_t)(0x5B6F14u); X86_PUSH32(v); }
	// 0045D44E push 0x59F
	{ uint32_t v = (uint32_t)(0x59Fu); X86_PUSH32(v); }
	// 0045D453 call 0x0006800A
	X86_PUSH32(0x45D458u); sub_0006800A(ctx, base);
	// 0045D458 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D459 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D45A mov [0x0064EBAF], al
	{ uint32_t ea = (uint32_t)(0x64EBAFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D45F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D449, __imp__sub_0045D449)

X86_FUNC(__imp__sub_0045D460) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D460 push 0x5B6F18
	{ uint32_t v = (uint32_t)(0x5B6F18u); X86_PUSH32(v); }
	// 0045D465 push 0x8D6
	{ uint32_t v = (uint32_t)(0x8D6u); X86_PUSH32(v); }
	// 0045D46A call 0x0006800A
	X86_PUSH32(0x45D46Fu); sub_0006800A(ctx, base);
	// 0045D46F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D470 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D471 mov [0x0064EBB0], al
	{ uint32_t ea = (uint32_t)(0x64EBB0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D476 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D460, __imp__sub_0045D460)

X86_FUNC(__imp__sub_0045D477) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D477 push 0x5B6F1C
	{ uint32_t v = (uint32_t)(0x5B6F1Cu); X86_PUSH32(v); }
	// 0045D47C push 0x8D3
	{ uint32_t v = (uint32_t)(0x8D3u); X86_PUSH32(v); }
	// 0045D481 call 0x0006800A
	X86_PUSH32(0x45D486u); sub_0006800A(ctx, base);
	// 0045D486 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D487 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D488 mov [0x0064EBB1], al
	{ uint32_t ea = (uint32_t)(0x64EBB1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D48D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D477, __imp__sub_0045D477)

X86_FUNC(__imp__sub_0045D48E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D48E push 0x5B6F20
	{ uint32_t v = (uint32_t)(0x5B6F20u); X86_PUSH32(v); }
	// 0045D493 push 0xD8E
	{ uint32_t v = (uint32_t)(0xD8Eu); X86_PUSH32(v); }
	// 0045D498 call 0x0006800A
	X86_PUSH32(0x45D49Du); sub_0006800A(ctx, base);
	// 0045D49D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D49E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D49F mov [0x0064EBB2], al
	{ uint32_t ea = (uint32_t)(0x64EBB2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D4A4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D48E, __imp__sub_0045D48E)

X86_FUNC(__imp__sub_0045D4A5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D4A5 push 0x5B6F24
	{ uint32_t v = (uint32_t)(0x5B6F24u); X86_PUSH32(v); }
	// 0045D4AA push 0x8E1
	{ uint32_t v = (uint32_t)(0x8E1u); X86_PUSH32(v); }
	// 0045D4AF call 0x0006800A
	X86_PUSH32(0x45D4B4u); sub_0006800A(ctx, base);
	// 0045D4B4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D4B5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D4B6 mov [0x0064EBB3], al
	{ uint32_t ea = (uint32_t)(0x64EBB3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D4BB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D4A5, __imp__sub_0045D4A5)

X86_FUNC(__imp__sub_0045D4BC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D4BC push 0x5B6F28
	{ uint32_t v = (uint32_t)(0x5B6F28u); X86_PUSH32(v); }
	// 0045D4C1 push 0x8D7
	{ uint32_t v = (uint32_t)(0x8D7u); X86_PUSH32(v); }
	// 0045D4C6 call 0x0006800A
	X86_PUSH32(0x45D4CBu); sub_0006800A(ctx, base);
	// 0045D4CB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D4CC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D4CD mov [0x0064EBB4], al
	{ uint32_t ea = (uint32_t)(0x64EBB4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D4D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D4BC, __imp__sub_0045D4BC)

X86_FUNC(__imp__sub_0045D4D3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D4D3 push 0x5B6F2C
	{ uint32_t v = (uint32_t)(0x5B6F2Cu); X86_PUSH32(v); }
	// 0045D4D8 push 0x8CE
	{ uint32_t v = (uint32_t)(0x8CEu); X86_PUSH32(v); }
	// 0045D4DD call 0x0006800A
	X86_PUSH32(0x45D4E2u); sub_0006800A(ctx, base);
	// 0045D4E2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D4E3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D4E4 mov [0x0064EBB5], al
	{ uint32_t ea = (uint32_t)(0x64EBB5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D4E9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D4D3, __imp__sub_0045D4D3)

X86_FUNC(__imp__sub_0045D4EA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D4EA push 0x5B6F30
	{ uint32_t v = (uint32_t)(0x5B6F30u); X86_PUSH32(v); }
	// 0045D4EF push 0x8CA
	{ uint32_t v = (uint32_t)(0x8CAu); X86_PUSH32(v); }
	// 0045D4F4 call 0x0006800A
	X86_PUSH32(0x45D4F9u); sub_0006800A(ctx, base);
	// 0045D4F9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D4FA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D4FB mov [0x0064EBB6], al
	{ uint32_t ea = (uint32_t)(0x64EBB6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D500 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D4EA, __imp__sub_0045D4EA)

X86_FUNC(__imp__sub_0045D501) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D501 push 0x5B6F34
	{ uint32_t v = (uint32_t)(0x5B6F34u); X86_PUSH32(v); }
	// 0045D506 push 0x8C9
	{ uint32_t v = (uint32_t)(0x8C9u); X86_PUSH32(v); }
	// 0045D50B call 0x0006800A
	X86_PUSH32(0x45D510u); sub_0006800A(ctx, base);
	// 0045D510 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D511 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D512 mov [0x0064EBB7], al
	{ uint32_t ea = (uint32_t)(0x64EBB7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D517 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D501, __imp__sub_0045D501)

X86_FUNC(__imp__sub_0045D518) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D518 push 0x5B6F38
	{ uint32_t v = (uint32_t)(0x5B6F38u); X86_PUSH32(v); }
	// 0045D51D push 0x8C8
	{ uint32_t v = (uint32_t)(0x8C8u); X86_PUSH32(v); }
	// 0045D522 call 0x0006800A
	X86_PUSH32(0x45D527u); sub_0006800A(ctx, base);
	// 0045D527 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D528 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D529 mov [0x0064EBB8], al
	{ uint32_t ea = (uint32_t)(0x64EBB8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D52E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D518, __imp__sub_0045D518)

X86_FUNC(__imp__sub_0045D52F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D52F push 0x5B6F3C
	{ uint32_t v = (uint32_t)(0x5B6F3Cu); X86_PUSH32(v); }
	// 0045D534 push 0x8C7
	{ uint32_t v = (uint32_t)(0x8C7u); X86_PUSH32(v); }
	// 0045D539 call 0x0006800A
	X86_PUSH32(0x45D53Eu); sub_0006800A(ctx, base);
	// 0045D53E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D53F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D540 mov [0x0064EBB9], al
	{ uint32_t ea = (uint32_t)(0x64EBB9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D545 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D52F, __imp__sub_0045D52F)

X86_FUNC(__imp__sub_0045D546) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D546 push 0x5B6F40
	{ uint32_t v = (uint32_t)(0x5B6F40u); X86_PUSH32(v); }
	// 0045D54B push 0x8C6
	{ uint32_t v = (uint32_t)(0x8C6u); X86_PUSH32(v); }
	// 0045D550 call 0x0006800A
	X86_PUSH32(0x45D555u); sub_0006800A(ctx, base);
	// 0045D555 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D556 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D557 mov [0x0064EBBA], al
	{ uint32_t ea = (uint32_t)(0x64EBBAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D55C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D546, __imp__sub_0045D546)

X86_FUNC(__imp__sub_0045D55D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D55D push 0x5B6F44
	{ uint32_t v = (uint32_t)(0x5B6F44u); X86_PUSH32(v); }
	// 0045D562 push 0x84E
	{ uint32_t v = (uint32_t)(0x84Eu); X86_PUSH32(v); }
	// 0045D567 call 0x0006800A
	X86_PUSH32(0x45D56Cu); sub_0006800A(ctx, base);
	// 0045D56C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D56D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D56E mov [0x0064EBBB], al
	{ uint32_t ea = (uint32_t)(0x64EBBBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D573 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D55D, __imp__sub_0045D55D)

X86_FUNC(__imp__sub_0045D574) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D574 push 0x5B6F48
	{ uint32_t v = (uint32_t)(0x5B6F48u); X86_PUSH32(v); }
	// 0045D579 push 0x5A1
	{ uint32_t v = (uint32_t)(0x5A1u); X86_PUSH32(v); }
	// 0045D57E call 0x0006800A
	X86_PUSH32(0x45D583u); sub_0006800A(ctx, base);
	// 0045D583 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D584 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D585 mov [0x0064EBBC], al
	{ uint32_t ea = (uint32_t)(0x64EBBCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D58A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D574, __imp__sub_0045D574)

X86_FUNC(__imp__sub_0045D58B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D58B push 0x5B6F4C
	{ uint32_t v = (uint32_t)(0x5B6F4Cu); X86_PUSH32(v); }
	// 0045D590 push 0x8C1
	{ uint32_t v = (uint32_t)(0x8C1u); X86_PUSH32(v); }
	// 0045D595 call 0x0006800A
	X86_PUSH32(0x45D59Au); sub_0006800A(ctx, base);
	// 0045D59A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D59B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D59C mov [0x0064EBBD], al
	{ uint32_t ea = (uint32_t)(0x64EBBDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D5A1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D58B, __imp__sub_0045D58B)

X86_FUNC(__imp__sub_0045D5A2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D5A2 push 0x5B6F50
	{ uint32_t v = (uint32_t)(0x5B6F50u); X86_PUSH32(v); }
	// 0045D5A7 push 0x8B2
	{ uint32_t v = (uint32_t)(0x8B2u); X86_PUSH32(v); }
	// 0045D5AC call 0x0006800A
	X86_PUSH32(0x45D5B1u); sub_0006800A(ctx, base);
	// 0045D5B1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D5B2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D5B3 mov [0x0064EBBE], al
	{ uint32_t ea = (uint32_t)(0x64EBBEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D5B8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D5A2, __imp__sub_0045D5A2)

X86_FUNC(__imp__sub_0045D5B9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D5B9 push 0x5B6F54
	{ uint32_t v = (uint32_t)(0x5B6F54u); X86_PUSH32(v); }
	// 0045D5BE push 0x8C0
	{ uint32_t v = (uint32_t)(0x8C0u); X86_PUSH32(v); }
	// 0045D5C3 call 0x0006800A
	X86_PUSH32(0x45D5C8u); sub_0006800A(ctx, base);
	// 0045D5C8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D5C9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D5CA mov [0x0064EBBF], al
	{ uint32_t ea = (uint32_t)(0x64EBBFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D5CF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D5B9, __imp__sub_0045D5B9)

X86_FUNC(__imp__sub_0045D5D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D5D0 push 0x5B6F58
	{ uint32_t v = (uint32_t)(0x5B6F58u); X86_PUSH32(v); }
	// 0045D5D5 push 0x8B1
	{ uint32_t v = (uint32_t)(0x8B1u); X86_PUSH32(v); }
	// 0045D5DA call 0x0006800A
	X86_PUSH32(0x45D5DFu); sub_0006800A(ctx, base);
	// 0045D5DF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D5E0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D5E1 mov [0x0064EBC0], al
	{ uint32_t ea = (uint32_t)(0x64EBC0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D5E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D5D0, __imp__sub_0045D5D0)

X86_FUNC(__imp__sub_0045D5E7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D5E7 push 0x5B6F5C
	{ uint32_t v = (uint32_t)(0x5B6F5Cu); X86_PUSH32(v); }
	// 0045D5EC push 0xFC0
	{ uint32_t v = (uint32_t)(0xFC0u); X86_PUSH32(v); }
	// 0045D5F1 call 0x0006800A
	X86_PUSH32(0x45D5F6u); sub_0006800A(ctx, base);
	// 0045D5F6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D5F7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D5F8 mov [0x0064EBC1], al
	{ uint32_t ea = (uint32_t)(0x64EBC1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D5FD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D5E7, __imp__sub_0045D5E7)

X86_FUNC(__imp__sub_0045D5FE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D5FE push 0x5B6F60
	{ uint32_t v = (uint32_t)(0x5B6F60u); X86_PUSH32(v); }
	// 0045D603 push 0xFBF
	{ uint32_t v = (uint32_t)(0xFBFu); X86_PUSH32(v); }
	// 0045D608 call 0x0006800A
	X86_PUSH32(0x45D60Du); sub_0006800A(ctx, base);
	// 0045D60D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D60E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D60F mov [0x0064EBC2], al
	{ uint32_t ea = (uint32_t)(0x64EBC2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D614 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D5FE, __imp__sub_0045D5FE)

X86_FUNC(__imp__sub_0045D615) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D615 push 0x5B6F64
	{ uint32_t v = (uint32_t)(0x5B6F64u); X86_PUSH32(v); }
	// 0045D61A push 0xFBE
	{ uint32_t v = (uint32_t)(0xFBEu); X86_PUSH32(v); }
	// 0045D61F call 0x0006800A
	X86_PUSH32(0x45D624u); sub_0006800A(ctx, base);
	// 0045D624 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D625 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D626 mov [0x0064EBC3], al
	{ uint32_t ea = (uint32_t)(0x64EBC3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D62B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D615, __imp__sub_0045D615)

X86_FUNC(__imp__sub_0045D62C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D62C push 0x5B6F68
	{ uint32_t v = (uint32_t)(0x5B6F68u); X86_PUSH32(v); }
	// 0045D631 push 0xFBD
	{ uint32_t v = (uint32_t)(0xFBDu); X86_PUSH32(v); }
	// 0045D636 call 0x0006800A
	X86_PUSH32(0x45D63Bu); sub_0006800A(ctx, base);
	// 0045D63B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D63C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D63D mov [0x0064EBC4], al
	{ uint32_t ea = (uint32_t)(0x64EBC4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D642 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D62C, __imp__sub_0045D62C)

X86_FUNC(__imp__sub_0045D643) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D643 push 0x5B6F6C
	{ uint32_t v = (uint32_t)(0x5B6F6Cu); X86_PUSH32(v); }
	// 0045D648 push 0xFBB
	{ uint32_t v = (uint32_t)(0xFBBu); X86_PUSH32(v); }
	// 0045D64D call 0x0006800A
	X86_PUSH32(0x45D652u); sub_0006800A(ctx, base);
	// 0045D652 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D653 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D654 mov [0x0064EBC5], al
	{ uint32_t ea = (uint32_t)(0x64EBC5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D659 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D643, __imp__sub_0045D643)

X86_FUNC(__imp__sub_0045D65A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D65A push 0x5B6F70
	{ uint32_t v = (uint32_t)(0x5B6F70u); X86_PUSH32(v); }
	// 0045D65F push 0xFB9
	{ uint32_t v = (uint32_t)(0xFB9u); X86_PUSH32(v); }
	// 0045D664 call 0x0006800A
	X86_PUSH32(0x45D669u); sub_0006800A(ctx, base);
	// 0045D669 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D66A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D66B mov [0x0064EBC6], al
	{ uint32_t ea = (uint32_t)(0x64EBC6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D670 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D65A, __imp__sub_0045D65A)

X86_FUNC(__imp__sub_0045D671) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D671 push 0x5B6F74
	{ uint32_t v = (uint32_t)(0x5B6F74u); X86_PUSH32(v); }
	// 0045D676 push 0xFB8
	{ uint32_t v = (uint32_t)(0xFB8u); X86_PUSH32(v); }
	// 0045D67B call 0x0006800A
	X86_PUSH32(0x45D680u); sub_0006800A(ctx, base);
	// 0045D680 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D681 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D682 mov [0x0064EBC7], al
	{ uint32_t ea = (uint32_t)(0x64EBC7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D687 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D671, __imp__sub_0045D671)

X86_FUNC(__imp__sub_0045D688) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D688 push 0x5B6F78
	{ uint32_t v = (uint32_t)(0x5B6F78u); X86_PUSH32(v); }
	// 0045D68D push 0xFB7
	{ uint32_t v = (uint32_t)(0xFB7u); X86_PUSH32(v); }
	// 0045D692 call 0x0006800A
	X86_PUSH32(0x45D697u); sub_0006800A(ctx, base);
	// 0045D697 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D698 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D699 mov [0x0064EBC8], al
	{ uint32_t ea = (uint32_t)(0x64EBC8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D69E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D688, __imp__sub_0045D688)

X86_FUNC(__imp__sub_0045D69F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D69F push 0x5B6F7C
	{ uint32_t v = (uint32_t)(0x5B6F7Cu); X86_PUSH32(v); }
	// 0045D6A4 push 0xFB6
	{ uint32_t v = (uint32_t)(0xFB6u); X86_PUSH32(v); }
	// 0045D6A9 call 0x0006800A
	X86_PUSH32(0x45D6AEu); sub_0006800A(ctx, base);
	// 0045D6AE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D6AF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D6B0 mov [0x0064EBC9], al
	{ uint32_t ea = (uint32_t)(0x64EBC9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D6B5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D69F, __imp__sub_0045D69F)

X86_FUNC(__imp__sub_0045D6B6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D6B6 push 0x5B6F80
	{ uint32_t v = (uint32_t)(0x5B6F80u); X86_PUSH32(v); }
	// 0045D6BB push 0xFB5
	{ uint32_t v = (uint32_t)(0xFB5u); X86_PUSH32(v); }
	// 0045D6C0 call 0x0006800A
	X86_PUSH32(0x45D6C5u); sub_0006800A(ctx, base);
	// 0045D6C5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D6C6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D6C7 mov [0x0064EBCA], al
	{ uint32_t ea = (uint32_t)(0x64EBCAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D6CC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D6B6, __imp__sub_0045D6B6)

X86_FUNC(__imp__sub_0045D6CD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D6CD push 0x5B6F84
	{ uint32_t v = (uint32_t)(0x5B6F84u); X86_PUSH32(v); }
	// 0045D6D2 push 0xDB5
	{ uint32_t v = (uint32_t)(0xDB5u); X86_PUSH32(v); }
	// 0045D6D7 call 0x0006800A
	X86_PUSH32(0x45D6DCu); sub_0006800A(ctx, base);
	// 0045D6DC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D6DD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D6DE mov [0x0064EBCB], al
	{ uint32_t ea = (uint32_t)(0x64EBCBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D6E3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D6CD, __imp__sub_0045D6CD)

X86_FUNC(__imp__sub_0045D6E4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D6E4 push 0x5B6F88
	{ uint32_t v = (uint32_t)(0x5B6F88u); X86_PUSH32(v); }
	// 0045D6E9 push 0xFB4
	{ uint32_t v = (uint32_t)(0xFB4u); X86_PUSH32(v); }
	// 0045D6EE call 0x0006800A
	X86_PUSH32(0x45D6F3u); sub_0006800A(ctx, base);
	// 0045D6F3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D6F4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D6F5 mov [0x0064EBCC], al
	{ uint32_t ea = (uint32_t)(0x64EBCCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D6FA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D6E4, __imp__sub_0045D6E4)

X86_FUNC(__imp__sub_0045D6FB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D6FB push 0x5B6F8C
	{ uint32_t v = (uint32_t)(0x5B6F8Cu); X86_PUSH32(v); }
	// 0045D700 push 0xFB3
	{ uint32_t v = (uint32_t)(0xFB3u); X86_PUSH32(v); }
	// 0045D705 call 0x0006800A
	X86_PUSH32(0x45D70Au); sub_0006800A(ctx, base);
	// 0045D70A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D70B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D70C mov [0x0064EBCD], al
	{ uint32_t ea = (uint32_t)(0x64EBCDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D711 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D6FB, __imp__sub_0045D6FB)

X86_FUNC(__imp__sub_0045D712) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D712 push 0x5B6F90
	{ uint32_t v = (uint32_t)(0x5B6F90u); X86_PUSH32(v); }
	// 0045D717 push 0xFBA
	{ uint32_t v = (uint32_t)(0xFBAu); X86_PUSH32(v); }
	// 0045D71C call 0x0006800A
	X86_PUSH32(0x45D721u); sub_0006800A(ctx, base);
	// 0045D721 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D722 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D723 mov [0x0064EBCE], al
	{ uint32_t ea = (uint32_t)(0x64EBCEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D728 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D712, __imp__sub_0045D712)

X86_FUNC(__imp__sub_0045D729) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D729 push 0x5B6F94
	{ uint32_t v = (uint32_t)(0x5B6F94u); X86_PUSH32(v); }
	// 0045D72E push 0xFAF
	{ uint32_t v = (uint32_t)(0xFAFu); X86_PUSH32(v); }
	// 0045D733 call 0x0006800A
	X86_PUSH32(0x45D738u); sub_0006800A(ctx, base);
	// 0045D738 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D739 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D73A mov [0x0064EBCF], al
	{ uint32_t ea = (uint32_t)(0x64EBCFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D73F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D729, __imp__sub_0045D729)

X86_FUNC(__imp__sub_0045D740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D740 push 0x5B6F98
	{ uint32_t v = (uint32_t)(0x5B6F98u); X86_PUSH32(v); }
	// 0045D745 push 0xDA7
	{ uint32_t v = (uint32_t)(0xDA7u); X86_PUSH32(v); }
	// 0045D74A call 0x0006800A
	X86_PUSH32(0x45D74Fu); sub_0006800A(ctx, base);
	// 0045D74F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D750 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D751 mov [0x0064EBD0], al
	{ uint32_t ea = (uint32_t)(0x64EBD0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D756 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D740, __imp__sub_0045D740)

X86_FUNC(__imp__sub_0045D757) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D757 push 0x5B6F9C
	{ uint32_t v = (uint32_t)(0x5B6F9Cu); X86_PUSH32(v); }
	// 0045D75C push 0xD9F
	{ uint32_t v = (uint32_t)(0xD9Fu); X86_PUSH32(v); }
	// 0045D761 call 0x0006800A
	X86_PUSH32(0x45D766u); sub_0006800A(ctx, base);
	// 0045D766 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D767 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D768 mov [0x0064EBD1], al
	{ uint32_t ea = (uint32_t)(0x64EBD1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D76D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D757, __imp__sub_0045D757)

X86_FUNC(__imp__sub_0045D76E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D76E push 0x5B6FA0
	{ uint32_t v = (uint32_t)(0x5B6FA0u); X86_PUSH32(v); }
	// 0045D773 push 0xFA9
	{ uint32_t v = (uint32_t)(0xFA9u); X86_PUSH32(v); }
	// 0045D778 call 0x0006800A
	X86_PUSH32(0x45D77Du); sub_0006800A(ctx, base);
	// 0045D77D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D77E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D77F mov [0x0064EBD2], al
	{ uint32_t ea = (uint32_t)(0x64EBD2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D784 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D76E, __imp__sub_0045D76E)

X86_FUNC(__imp__sub_0045D785) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D785 push 0x5B6FA4
	{ uint32_t v = (uint32_t)(0x5B6FA4u); X86_PUSH32(v); }
	// 0045D78A push 0xFA8
	{ uint32_t v = (uint32_t)(0xFA8u); X86_PUSH32(v); }
	// 0045D78F call 0x0006800A
	X86_PUSH32(0x45D794u); sub_0006800A(ctx, base);
	// 0045D794 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D795 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D796 mov [0x0064EBD3], al
	{ uint32_t ea = (uint32_t)(0x64EBD3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D79B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D785, __imp__sub_0045D785)

X86_FUNC(__imp__sub_0045D79C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D79C push 0x5B6FA8
	{ uint32_t v = (uint32_t)(0x5B6FA8u); X86_PUSH32(v); }
	// 0045D7A1 push 0xFA7
	{ uint32_t v = (uint32_t)(0xFA7u); X86_PUSH32(v); }
	// 0045D7A6 call 0x0006800A
	X86_PUSH32(0x45D7ABu); sub_0006800A(ctx, base);
	// 0045D7AB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D7AC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D7AD mov [0x0064EBD4], al
	{ uint32_t ea = (uint32_t)(0x64EBD4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D7B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D79C, __imp__sub_0045D79C)

X86_FUNC(__imp__sub_0045D7B3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D7B3 push 0x5B6FAC
	{ uint32_t v = (uint32_t)(0x5B6FACu); X86_PUSH32(v); }
	// 0045D7B8 push 0xFA6
	{ uint32_t v = (uint32_t)(0xFA6u); X86_PUSH32(v); }
	// 0045D7BD call 0x0006800A
	X86_PUSH32(0x45D7C2u); sub_0006800A(ctx, base);
	// 0045D7C2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D7C3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D7C4 mov [0x0064EBD5], al
	{ uint32_t ea = (uint32_t)(0x64EBD5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D7C9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D7B3, __imp__sub_0045D7B3)

X86_FUNC(__imp__sub_0045D7CA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D7CA push 0x5B6FB0
	{ uint32_t v = (uint32_t)(0x5B6FB0u); X86_PUSH32(v); }
	// 0045D7CF push 0xFB1
	{ uint32_t v = (uint32_t)(0xFB1u); X86_PUSH32(v); }
	// 0045D7D4 call 0x0006800A
	X86_PUSH32(0x45D7D9u); sub_0006800A(ctx, base);
	// 0045D7D9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D7DA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D7DB mov [0x0064EBD6], al
	{ uint32_t ea = (uint32_t)(0x64EBD6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D7E0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D7CA, __imp__sub_0045D7CA)

X86_FUNC(__imp__sub_0045D7E1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D7E1 push 0x5B6FB4
	{ uint32_t v = (uint32_t)(0x5B6FB4u); X86_PUSH32(v); }
	// 0045D7E6 push 0x884
	{ uint32_t v = (uint32_t)(0x884u); X86_PUSH32(v); }
	// 0045D7EB call 0x0006800A
	X86_PUSH32(0x45D7F0u); sub_0006800A(ctx, base);
	// 0045D7F0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D7F1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D7F2 mov [0x0064EBD7], al
	{ uint32_t ea = (uint32_t)(0x64EBD7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D7F7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D7E1, __imp__sub_0045D7E1)

X86_FUNC(__imp__sub_0045D7F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D7F8 push 0x5B6FB8
	{ uint32_t v = (uint32_t)(0x5B6FB8u); X86_PUSH32(v); }
	// 0045D7FD push 0xD90
	{ uint32_t v = (uint32_t)(0xD90u); X86_PUSH32(v); }
	// 0045D802 call 0x0006800A
	X86_PUSH32(0x45D807u); sub_0006800A(ctx, base);
	// 0045D807 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D808 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D809 mov [0x0064EBD8], al
	{ uint32_t ea = (uint32_t)(0x64EBD8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D80E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D7F8, __imp__sub_0045D7F8)

X86_FUNC(__imp__sub_0045D80F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D80F push 0x5B6FBC
	{ uint32_t v = (uint32_t)(0x5B6FBCu); X86_PUSH32(v); }
	// 0045D814 push 0xFB2
	{ uint32_t v = (uint32_t)(0xFB2u); X86_PUSH32(v); }
	// 0045D819 call 0x0006800A
	X86_PUSH32(0x45D81Eu); sub_0006800A(ctx, base);
	// 0045D81E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D81F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D820 mov [0x0064EBD9], al
	{ uint32_t ea = (uint32_t)(0x64EBD9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D825 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D80F, __imp__sub_0045D80F)

X86_FUNC(__imp__sub_0045D826) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D826 push 0x5B6FC0
	{ uint32_t v = (uint32_t)(0x5B6FC0u); X86_PUSH32(v); }
	// 0045D82B push 0xD8F
	{ uint32_t v = (uint32_t)(0xD8Fu); X86_PUSH32(v); }
	// 0045D830 call 0x0006800A
	X86_PUSH32(0x45D835u); sub_0006800A(ctx, base);
	// 0045D835 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D836 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D837 mov [0x0064EBDA], al
	{ uint32_t ea = (uint32_t)(0x64EBDAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D83C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D826, __imp__sub_0045D826)

X86_FUNC(__imp__sub_0045D83D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D83D push 0x5B6FC4
	{ uint32_t v = (uint32_t)(0x5B6FC4u); X86_PUSH32(v); }
	// 0045D842 push 0xD8D
	{ uint32_t v = (uint32_t)(0xD8Du); X86_PUSH32(v); }
	// 0045D847 call 0x0006800A
	X86_PUSH32(0x45D84Cu); sub_0006800A(ctx, base);
	// 0045D84C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D84D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D84E mov [0x0064EBDB], al
	{ uint32_t ea = (uint32_t)(0x64EBDBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D853 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D83D, __imp__sub_0045D83D)

X86_FUNC(__imp__sub_0045D854) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D854 push 0x5B6FC8
	{ uint32_t v = (uint32_t)(0x5B6FC8u); X86_PUSH32(v); }
	// 0045D859 push 0x923
	{ uint32_t v = (uint32_t)(0x923u); X86_PUSH32(v); }
	// 0045D85E call 0x0006800A
	X86_PUSH32(0x45D863u); sub_0006800A(ctx, base);
	// 0045D863 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D864 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D865 mov [0x0064EBDC], al
	{ uint32_t ea = (uint32_t)(0x64EBDCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D86A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D854, __imp__sub_0045D854)

X86_FUNC(__imp__sub_0045D86B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D86B push 0x5B6FCC
	{ uint32_t v = (uint32_t)(0x5B6FCCu); X86_PUSH32(v); }
	// 0045D870 push 0x883
	{ uint32_t v = (uint32_t)(0x883u); X86_PUSH32(v); }
	// 0045D875 call 0x0006800A
	X86_PUSH32(0x45D87Au); sub_0006800A(ctx, base);
	// 0045D87A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D87B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D87C mov [0x0064EBDD], al
	{ uint32_t ea = (uint32_t)(0x64EBDDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D881 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D86B, __imp__sub_0045D86B)

X86_FUNC(__imp__sub_0045D882) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D882 push 0x5B6FD0
	{ uint32_t v = (uint32_t)(0x5B6FD0u); X86_PUSH32(v); }
	// 0045D887 push 0x925
	{ uint32_t v = (uint32_t)(0x925u); X86_PUSH32(v); }
	// 0045D88C call 0x0006800A
	X86_PUSH32(0x45D891u); sub_0006800A(ctx, base);
	// 0045D891 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D892 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D893 mov [0x0064EBDE], al
	{ uint32_t ea = (uint32_t)(0x64EBDEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D898 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D882, __imp__sub_0045D882)

X86_FUNC(__imp__sub_0045D899) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D899 push 0x5B6FD4
	{ uint32_t v = (uint32_t)(0x5B6FD4u); X86_PUSH32(v); }
	// 0045D89E push 0xFBC
	{ uint32_t v = (uint32_t)(0xFBCu); X86_PUSH32(v); }
	// 0045D8A3 call 0x0006800A
	X86_PUSH32(0x45D8A8u); sub_0006800A(ctx, base);
	// 0045D8A8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D8A9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D8AA mov [0x0064EBDF], al
	{ uint32_t ea = (uint32_t)(0x64EBDFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D8AF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D899, __imp__sub_0045D899)

X86_FUNC(__imp__sub_0045D8B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D8B0 push 0x5B6FD8
	{ uint32_t v = (uint32_t)(0x5B6FD8u); X86_PUSH32(v); }
	// 0045D8B5 push 0x922
	{ uint32_t v = (uint32_t)(0x922u); X86_PUSH32(v); }
	// 0045D8BA call 0x0006800A
	X86_PUSH32(0x45D8BFu); sub_0006800A(ctx, base);
	// 0045D8BF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D8C0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D8C1 mov [0x0064EBE0], al
	{ uint32_t ea = (uint32_t)(0x64EBE0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D8C6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D8B0, __imp__sub_0045D8B0)

X86_FUNC(__imp__sub_0045D8C7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D8C7 push 0x5B6FDC
	{ uint32_t v = (uint32_t)(0x5B6FDCu); X86_PUSH32(v); }
	// 0045D8CC push 0x921
	{ uint32_t v = (uint32_t)(0x921u); X86_PUSH32(v); }
	// 0045D8D1 call 0x0006800A
	X86_PUSH32(0x45D8D6u); sub_0006800A(ctx, base);
	// 0045D8D6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D8D7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D8D8 mov [0x0064EBE1], al
	{ uint32_t ea = (uint32_t)(0x64EBE1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D8DD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D8C7, __imp__sub_0045D8C7)

X86_FUNC(__imp__sub_0045D8DE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D8DE push 0x5B6FE0
	{ uint32_t v = (uint32_t)(0x5B6FE0u); X86_PUSH32(v); }
	// 0045D8E3 push 0x920
	{ uint32_t v = (uint32_t)(0x920u); X86_PUSH32(v); }
	// 0045D8E8 call 0x0006800A
	X86_PUSH32(0x45D8EDu); sub_0006800A(ctx, base);
	// 0045D8ED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D8EE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D8EF mov [0x0064EBE2], al
	{ uint32_t ea = (uint32_t)(0x64EBE2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D8F4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D8DE, __imp__sub_0045D8DE)

X86_FUNC(__imp__sub_0045D8F5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D8F5 push 0x5B6FE4
	{ uint32_t v = (uint32_t)(0x5B6FE4u); X86_PUSH32(v); }
	// 0045D8FA push 0x91D
	{ uint32_t v = (uint32_t)(0x91Du); X86_PUSH32(v); }
	// 0045D8FF call 0x0006800A
	X86_PUSH32(0x45D904u); sub_0006800A(ctx, base);
	// 0045D904 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D905 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D906 mov [0x0064EBE3], al
	{ uint32_t ea = (uint32_t)(0x64EBE3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D90B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D8F5, __imp__sub_0045D8F5)

X86_FUNC(__imp__sub_0045D90C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D90C push 0x5B6FE8
	{ uint32_t v = (uint32_t)(0x5B6FE8u); X86_PUSH32(v); }
	// 0045D911 push 0x91C
	{ uint32_t v = (uint32_t)(0x91Cu); X86_PUSH32(v); }
	// 0045D916 call 0x0006800A
	X86_PUSH32(0x45D91Bu); sub_0006800A(ctx, base);
	// 0045D91B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D91C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D91D mov [0x0064EBE4], al
	{ uint32_t ea = (uint32_t)(0x64EBE4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D922 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D90C, __imp__sub_0045D90C)

X86_FUNC(__imp__sub_0045D923) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D923 push 0x5B6FEC
	{ uint32_t v = (uint32_t)(0x5B6FECu); X86_PUSH32(v); }
	// 0045D928 push 0x91B
	{ uint32_t v = (uint32_t)(0x91Bu); X86_PUSH32(v); }
	// 0045D92D call 0x0006800A
	X86_PUSH32(0x45D932u); sub_0006800A(ctx, base);
	// 0045D932 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D933 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D934 mov [0x0064EBE5], al
	{ uint32_t ea = (uint32_t)(0x64EBE5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D939 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D923, __imp__sub_0045D923)

X86_FUNC(__imp__sub_0045D93A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D93A push 0x5B6FF0
	{ uint32_t v = (uint32_t)(0x5B6FF0u); X86_PUSH32(v); }
	// 0045D93F push 0x91A
	{ uint32_t v = (uint32_t)(0x91Au); X86_PUSH32(v); }
	// 0045D944 call 0x0006800A
	X86_PUSH32(0x45D949u); sub_0006800A(ctx, base);
	// 0045D949 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D94A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D94B mov [0x0064EBE6], al
	{ uint32_t ea = (uint32_t)(0x64EBE6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D950 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D93A, __imp__sub_0045D93A)

X86_FUNC(__imp__sub_0045D951) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D951 push 0x5B6FF4
	{ uint32_t v = (uint32_t)(0x5B6FF4u); X86_PUSH32(v); }
	// 0045D956 push 0x919
	{ uint32_t v = (uint32_t)(0x919u); X86_PUSH32(v); }
	// 0045D95B call 0x0006800A
	X86_PUSH32(0x45D960u); sub_0006800A(ctx, base);
	// 0045D960 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D961 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D962 mov [0x0064EBE7], al
	{ uint32_t ea = (uint32_t)(0x64EBE7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D967 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D951, __imp__sub_0045D951)

X86_FUNC(__imp__sub_0045D968) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D968 push 0x5B6FF8
	{ uint32_t v = (uint32_t)(0x5B6FF8u); X86_PUSH32(v); }
	// 0045D96D push 0x910
	{ uint32_t v = (uint32_t)(0x910u); X86_PUSH32(v); }
	// 0045D972 call 0x0006800A
	X86_PUSH32(0x45D977u); sub_0006800A(ctx, base);
	// 0045D977 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D978 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D979 mov [0x0064EBE8], al
	{ uint32_t ea = (uint32_t)(0x64EBE8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D97E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D968, __imp__sub_0045D968)

X86_FUNC(__imp__sub_0045D97F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D97F push 0x5B6FFC
	{ uint32_t v = (uint32_t)(0x5B6FFCu); X86_PUSH32(v); }
	// 0045D984 push 0x8E3
	{ uint32_t v = (uint32_t)(0x8E3u); X86_PUSH32(v); }
	// 0045D989 call 0x0006800A
	X86_PUSH32(0x45D98Eu); sub_0006800A(ctx, base);
	// 0045D98E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D98F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D990 mov [0x0064EBE9], al
	{ uint32_t ea = (uint32_t)(0x64EBE9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D995 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D97F, __imp__sub_0045D97F)

X86_FUNC(__imp__sub_0045D996) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D996 push 0x5B7000
	{ uint32_t v = (uint32_t)(0x5B7000u); X86_PUSH32(v); }
	// 0045D99B push 0x8E6
	{ uint32_t v = (uint32_t)(0x8E6u); X86_PUSH32(v); }
	// 0045D9A0 call 0x0006800A
	X86_PUSH32(0x45D9A5u); sub_0006800A(ctx, base);
	// 0045D9A5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D9A6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D9A7 mov [0x0064EBEA], al
	{ uint32_t ea = (uint32_t)(0x64EBEAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D9AC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D996, __imp__sub_0045D996)

X86_FUNC(__imp__sub_0045D9AD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D9AD push 0x5B7004
	{ uint32_t v = (uint32_t)(0x5B7004u); X86_PUSH32(v); }
	// 0045D9B2 push 0x8E2
	{ uint32_t v = (uint32_t)(0x8E2u); X86_PUSH32(v); }
	// 0045D9B7 call 0x0006800A
	X86_PUSH32(0x45D9BCu); sub_0006800A(ctx, base);
	// 0045D9BC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D9BD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D9BE mov [0x0064EBEB], al
	{ uint32_t ea = (uint32_t)(0x64EBEBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D9C3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D9AD, __imp__sub_0045D9AD)

X86_FUNC(__imp__sub_0045D9C4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D9C4 push 0x5B7008
	{ uint32_t v = (uint32_t)(0x5B7008u); X86_PUSH32(v); }
	// 0045D9C9 push 0xDB4
	{ uint32_t v = (uint32_t)(0xDB4u); X86_PUSH32(v); }
	// 0045D9CE call 0x0006800A
	X86_PUSH32(0x45D9D3u); sub_0006800A(ctx, base);
	// 0045D9D3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D9D4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D9D5 mov [0x0064EBEC], al
	{ uint32_t ea = (uint32_t)(0x64EBECu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D9DA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D9C4, __imp__sub_0045D9C4)

X86_FUNC(__imp__sub_0045D9DB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D9DB push 0x5B700C
	{ uint32_t v = (uint32_t)(0x5B700Cu); X86_PUSH32(v); }
	// 0045D9E0 push 0x8E0
	{ uint32_t v = (uint32_t)(0x8E0u); X86_PUSH32(v); }
	// 0045D9E5 call 0x0006800A
	X86_PUSH32(0x45D9EAu); sub_0006800A(ctx, base);
	// 0045D9EA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D9EB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045D9EC mov [0x0064EBED], al
	{ uint32_t ea = (uint32_t)(0x64EBEDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045D9F1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D9DB, __imp__sub_0045D9DB)

X86_FUNC(__imp__sub_0045D9F2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045D9F2 push 0x5B7010
	{ uint32_t v = (uint32_t)(0x5B7010u); X86_PUSH32(v); }
	// 0045D9F7 push 0x8DD
	{ uint32_t v = (uint32_t)(0x8DDu); X86_PUSH32(v); }
	// 0045D9FC call 0x0006800A
	X86_PUSH32(0x45DA01u); sub_0006800A(ctx, base);
	// 0045DA01 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA02 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA03 mov [0x0064EBEE], al
	{ uint32_t ea = (uint32_t)(0x64EBEEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DA08 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045D9F2, __imp__sub_0045D9F2)

X86_FUNC(__imp__sub_0045DA09) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DA09 push 0x5B7014
	{ uint32_t v = (uint32_t)(0x5B7014u); X86_PUSH32(v); }
	// 0045DA0E push 0x8DB
	{ uint32_t v = (uint32_t)(0x8DBu); X86_PUSH32(v); }
	// 0045DA13 call 0x0006800A
	X86_PUSH32(0x45DA18u); sub_0006800A(ctx, base);
	// 0045DA18 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA19 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA1A mov [0x0064EBEF], al
	{ uint32_t ea = (uint32_t)(0x64EBEFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DA1F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DA09, __imp__sub_0045DA09)

X86_FUNC(__imp__sub_0045DA20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DA20 push 0x5B7018
	{ uint32_t v = (uint32_t)(0x5B7018u); X86_PUSH32(v); }
	// 0045DA25 push 0x8D9
	{ uint32_t v = (uint32_t)(0x8D9u); X86_PUSH32(v); }
	// 0045DA2A call 0x0006800A
	X86_PUSH32(0x45DA2Fu); sub_0006800A(ctx, base);
	// 0045DA2F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA30 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA31 mov [0x0064EBF0], al
	{ uint32_t ea = (uint32_t)(0x64EBF0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DA36 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DA20, __imp__sub_0045DA20)

X86_FUNC(__imp__sub_0045DA37) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DA37 push 0x5B701C
	{ uint32_t v = (uint32_t)(0x5B701Cu); X86_PUSH32(v); }
	// 0045DA3C push 0x8CC
	{ uint32_t v = (uint32_t)(0x8CCu); X86_PUSH32(v); }
	// 0045DA41 call 0x0006800A
	X86_PUSH32(0x45DA46u); sub_0006800A(ctx, base);
	// 0045DA46 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA47 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA48 mov [0x0064EBF1], al
	{ uint32_t ea = (uint32_t)(0x64EBF1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DA4D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DA37, __imp__sub_0045DA37)

X86_FUNC(__imp__sub_0045DA4E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DA4E push 0x5B7020
	{ uint32_t v = (uint32_t)(0x5B7020u); X86_PUSH32(v); }
	// 0045DA53 push 0x8BF
	{ uint32_t v = (uint32_t)(0x8BFu); X86_PUSH32(v); }
	// 0045DA58 call 0x0006800A
	X86_PUSH32(0x45DA5Du); sub_0006800A(ctx, base);
	// 0045DA5D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA5E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA5F mov [0x0064EBF2], al
	{ uint32_t ea = (uint32_t)(0x64EBF2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DA64 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DA4E, __imp__sub_0045DA4E)

X86_FUNC(__imp__sub_0045DA65) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DA65 push 0x5B7024
	{ uint32_t v = (uint32_t)(0x5B7024u); X86_PUSH32(v); }
	// 0045DA6A push 0x8BE
	{ uint32_t v = (uint32_t)(0x8BEu); X86_PUSH32(v); }
	// 0045DA6F call 0x0006800A
	X86_PUSH32(0x45DA74u); sub_0006800A(ctx, base);
	// 0045DA74 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA75 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA76 mov [0x0064EBF3], al
	{ uint32_t ea = (uint32_t)(0x64EBF3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DA7B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DA65, __imp__sub_0045DA65)

X86_FUNC(__imp__sub_0045DA7C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DA7C push 0x5B7028
	{ uint32_t v = (uint32_t)(0x5B7028u); X86_PUSH32(v); }
	// 0045DA81 push 0x8BC
	{ uint32_t v = (uint32_t)(0x8BCu); X86_PUSH32(v); }
	// 0045DA86 call 0x0006800A
	X86_PUSH32(0x45DA8Bu); sub_0006800A(ctx, base);
	// 0045DA8B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA8C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DA8D mov [0x0064EBF4], al
	{ uint32_t ea = (uint32_t)(0x64EBF4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DA92 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DA7C, __imp__sub_0045DA7C)

X86_FUNC(__imp__sub_0045DA93) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DA93 push 0x5B702C
	{ uint32_t v = (uint32_t)(0x5B702Cu); X86_PUSH32(v); }
	// 0045DA98 push 0x8BB
	{ uint32_t v = (uint32_t)(0x8BBu); X86_PUSH32(v); }
	// 0045DA9D call 0x0006800A
	X86_PUSH32(0x45DAA2u); sub_0006800A(ctx, base);
	// 0045DAA2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DAA3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DAA4 mov [0x0064EBF5], al
	{ uint32_t ea = (uint32_t)(0x64EBF5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DAA9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DA93, __imp__sub_0045DA93)

X86_FUNC(__imp__sub_0045DAAA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DAAA push 0x5B7030
	{ uint32_t v = (uint32_t)(0x5B7030u); X86_PUSH32(v); }
	// 0045DAAF push 0x8AE
	{ uint32_t v = (uint32_t)(0x8AEu); X86_PUSH32(v); }
	// 0045DAB4 call 0x0006800A
	X86_PUSH32(0x45DAB9u); sub_0006800A(ctx, base);
	// 0045DAB9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DABA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DABB mov [0x0064EBF6], al
	{ uint32_t ea = (uint32_t)(0x64EBF6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DAC0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DAAA, __imp__sub_0045DAAA)

X86_FUNC(__imp__sub_0045DAC1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DAC1 push 0x5B7034
	{ uint32_t v = (uint32_t)(0x5B7034u); X86_PUSH32(v); }
	// 0045DAC6 push 0xD05
	{ uint32_t v = (uint32_t)(0xD05u); X86_PUSH32(v); }
	// 0045DACB call 0x0006800A
	X86_PUSH32(0x45DAD0u); sub_0006800A(ctx, base);
	// 0045DAD0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DAD1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DAD2 mov [0x0064EBF7], al
	{ uint32_t ea = (uint32_t)(0x64EBF7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DAD7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DAC1, __imp__sub_0045DAC1)

X86_FUNC(__imp__sub_0045DAD8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DAD8 push 0x5B7038
	{ uint32_t v = (uint32_t)(0x5B7038u); X86_PUSH32(v); }
	// 0045DADD push 0x59D
	{ uint32_t v = (uint32_t)(0x59Du); X86_PUSH32(v); }
	// 0045DAE2 call 0x0006800A
	X86_PUSH32(0x45DAE7u); sub_0006800A(ctx, base);
	// 0045DAE7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DAE8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DAE9 mov [0x0064EBF8], al
	{ uint32_t ea = (uint32_t)(0x64EBF8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DAEE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DAD8, __imp__sub_0045DAD8)

X86_FUNC(__imp__sub_0045DAEF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DAEF push 0x5B703C
	{ uint32_t v = (uint32_t)(0x5B703Cu); X86_PUSH32(v); }
	// 0045DAF4 push 0x59C
	{ uint32_t v = (uint32_t)(0x59Cu); X86_PUSH32(v); }
	// 0045DAF9 call 0x0006800A
	X86_PUSH32(0x45DAFEu); sub_0006800A(ctx, base);
	// 0045DAFE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DAFF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB00 mov [0x0064EBF9], al
	{ uint32_t ea = (uint32_t)(0x64EBF9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DB05 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DAEF, __imp__sub_0045DAEF)

X86_FUNC(__imp__sub_0045DB06) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DB06 push 0x5B7040
	{ uint32_t v = (uint32_t)(0x5B7040u); X86_PUSH32(v); }
	// 0045DB0B push 0x59B
	{ uint32_t v = (uint32_t)(0x59Bu); X86_PUSH32(v); }
	// 0045DB10 call 0x0006800A
	X86_PUSH32(0x45DB15u); sub_0006800A(ctx, base);
	// 0045DB15 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB16 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB17 mov [0x0064EBFA], al
	{ uint32_t ea = (uint32_t)(0x64EBFAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DB1C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DB06, __imp__sub_0045DB06)

X86_FUNC(__imp__sub_0045DB1D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DB1D push 0x5B7044
	{ uint32_t v = (uint32_t)(0x5B7044u); X86_PUSH32(v); }
	// 0045DB22 push 0x59A
	{ uint32_t v = (uint32_t)(0x59Au); X86_PUSH32(v); }
	// 0045DB27 call 0x0006800A
	X86_PUSH32(0x45DB2Cu); sub_0006800A(ctx, base);
	// 0045DB2C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB2D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB2E mov [0x0064EBFB], al
	{ uint32_t ea = (uint32_t)(0x64EBFBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DB33 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DB1D, __imp__sub_0045DB1D)

X86_FUNC(__imp__sub_0045DB34) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DB34 push 0x5B7048
	{ uint32_t v = (uint32_t)(0x5B7048u); X86_PUSH32(v); }
	// 0045DB39 push 0x599
	{ uint32_t v = (uint32_t)(0x599u); X86_PUSH32(v); }
	// 0045DB3E call 0x0006800A
	X86_PUSH32(0x45DB43u); sub_0006800A(ctx, base);
	// 0045DB43 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB44 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB45 mov [0x0064EBFC], al
	{ uint32_t ea = (uint32_t)(0x64EBFCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DB4A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DB34, __imp__sub_0045DB34)

X86_FUNC(__imp__sub_0045DB4B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DB4B push 0x5B704C
	{ uint32_t v = (uint32_t)(0x5B704Cu); X86_PUSH32(v); }
	// 0045DB50 push 0x598
	{ uint32_t v = (uint32_t)(0x598u); X86_PUSH32(v); }
	// 0045DB55 call 0x0006800A
	X86_PUSH32(0x45DB5Au); sub_0006800A(ctx, base);
	// 0045DB5A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB5B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB5C mov [0x0064EBFD], al
	{ uint32_t ea = (uint32_t)(0x64EBFDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DB61 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DB4B, __imp__sub_0045DB4B)

X86_FUNC(__imp__sub_0045DB62) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DB62 push 0x5B7050
	{ uint32_t v = (uint32_t)(0x5B7050u); X86_PUSH32(v); }
	// 0045DB67 push 0x597
	{ uint32_t v = (uint32_t)(0x597u); X86_PUSH32(v); }
	// 0045DB6C call 0x0006800A
	X86_PUSH32(0x45DB71u); sub_0006800A(ctx, base);
	// 0045DB71 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB72 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB73 mov [0x0064EBFE], al
	{ uint32_t ea = (uint32_t)(0x64EBFEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DB78 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DB62, __imp__sub_0045DB62)

X86_FUNC(__imp__sub_0045DB79) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DB79 push 0x5B7054
	{ uint32_t v = (uint32_t)(0x5B7054u); X86_PUSH32(v); }
	// 0045DB7E push 0x596
	{ uint32_t v = (uint32_t)(0x596u); X86_PUSH32(v); }
	// 0045DB83 call 0x0006800A
	X86_PUSH32(0x45DB88u); sub_0006800A(ctx, base);
	// 0045DB88 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB89 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DB8A mov [0x0064EBFF], al
	{ uint32_t ea = (uint32_t)(0x64EBFFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DB8F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DB79, __imp__sub_0045DB79)

X86_FUNC(__imp__sub_0045DB90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DB90 push 0x5B7058
	{ uint32_t v = (uint32_t)(0x5B7058u); X86_PUSH32(v); }
	// 0045DB95 push 0x8DF
	{ uint32_t v = (uint32_t)(0x8DFu); X86_PUSH32(v); }
	// 0045DB9A call 0x0006800A
	X86_PUSH32(0x45DB9Fu); sub_0006800A(ctx, base);
	// 0045DB9F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DBA0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DBA1 mov [0x0064EC00], al
	{ uint32_t ea = (uint32_t)(0x64EC00u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DBA6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DB90, __imp__sub_0045DB90)

X86_FUNC(__imp__sub_0045DBA7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DBA7 push 0x5B705C
	{ uint32_t v = (uint32_t)(0x5B705Cu); X86_PUSH32(v); }
	// 0045DBAC push 0x595
	{ uint32_t v = (uint32_t)(0x595u); X86_PUSH32(v); }
	// 0045DBB1 call 0x0006800A
	X86_PUSH32(0x45DBB6u); sub_0006800A(ctx, base);
	// 0045DBB6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DBB7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DBB8 mov [0x0064EC01], al
	{ uint32_t ea = (uint32_t)(0x64EC01u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DBBD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DBA7, __imp__sub_0045DBA7)

X86_FUNC(__imp__sub_0045DBBE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DBBE push 0x5B7060
	{ uint32_t v = (uint32_t)(0x5B7060u); X86_PUSH32(v); }
	// 0045DBC3 push 0x8DE
	{ uint32_t v = (uint32_t)(0x8DEu); X86_PUSH32(v); }
	// 0045DBC8 call 0x0006800A
	X86_PUSH32(0x45DBCDu); sub_0006800A(ctx, base);
	// 0045DBCD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DBCE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DBCF mov [0x0064EC02], al
	{ uint32_t ea = (uint32_t)(0x64EC02u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DBD4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DBBE, __imp__sub_0045DBBE)

X86_FUNC(__imp__sub_0045DBD5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DBD5 push 0x5B7064
	{ uint32_t v = (uint32_t)(0x5B7064u); X86_PUSH32(v); }
	// 0045DBDA push 0x594
	{ uint32_t v = (uint32_t)(0x594u); X86_PUSH32(v); }
	// 0045DBDF call 0x0006800A
	X86_PUSH32(0x45DBE4u); sub_0006800A(ctx, base);
	// 0045DBE4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DBE5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DBE6 mov [0x0064EC03], al
	{ uint32_t ea = (uint32_t)(0x64EC03u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DBEB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DBD5, __imp__sub_0045DBD5)

X86_FUNC(__imp__sub_0045DBEC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DBEC push 0x5B7068
	{ uint32_t v = (uint32_t)(0x5B7068u); X86_PUSH32(v); }
	// 0045DBF1 push 0x593
	{ uint32_t v = (uint32_t)(0x593u); X86_PUSH32(v); }
	// 0045DBF6 call 0x0006800A
	X86_PUSH32(0x45DBFBu); sub_0006800A(ctx, base);
	// 0045DBFB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DBFC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DBFD mov [0x0064EC04], al
	{ uint32_t ea = (uint32_t)(0x64EC04u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DC02 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DBEC, __imp__sub_0045DBEC)

X86_FUNC(__imp__sub_0045DC03) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DC03 push 0x5B706C
	{ uint32_t v = (uint32_t)(0x5B706Cu); X86_PUSH32(v); }
	// 0045DC08 push 0x592
	{ uint32_t v = (uint32_t)(0x592u); X86_PUSH32(v); }
	// 0045DC0D call 0x0006800A
	X86_PUSH32(0x45DC12u); sub_0006800A(ctx, base);
	// 0045DC12 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC13 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC14 mov [0x0064EC05], al
	{ uint32_t ea = (uint32_t)(0x64EC05u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DC19 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DC03, __imp__sub_0045DC03)

X86_FUNC(__imp__sub_0045DC1A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DC1A push 0x5B7070
	{ uint32_t v = (uint32_t)(0x5B7070u); X86_PUSH32(v); }
	// 0045DC1F push 0x591
	{ uint32_t v = (uint32_t)(0x591u); X86_PUSH32(v); }
	// 0045DC24 call 0x0006800A
	X86_PUSH32(0x45DC29u); sub_0006800A(ctx, base);
	// 0045DC29 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC2A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC2B mov [0x0064EC06], al
	{ uint32_t ea = (uint32_t)(0x64EC06u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DC30 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DC1A, __imp__sub_0045DC1A)

X86_FUNC(__imp__sub_0045DC31) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DC31 push 0x5B7074
	{ uint32_t v = (uint32_t)(0x5B7074u); X86_PUSH32(v); }
	// 0045DC36 push 0x588
	{ uint32_t v = (uint32_t)(0x588u); X86_PUSH32(v); }
	// 0045DC3B call 0x0006800A
	X86_PUSH32(0x45DC40u); sub_0006800A(ctx, base);
	// 0045DC40 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC41 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC42 mov [0x0064EC07], al
	{ uint32_t ea = (uint32_t)(0x64EC07u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DC47 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DC31, __imp__sub_0045DC31)

X86_FUNC(__imp__sub_0045DC48) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DC48 push 0x5B7078
	{ uint32_t v = (uint32_t)(0x5B7078u); X86_PUSH32(v); }
	// 0045DC4D push 0xFAB
	{ uint32_t v = (uint32_t)(0xFABu); X86_PUSH32(v); }
	// 0045DC52 call 0x0006800A
	X86_PUSH32(0x45DC57u); sub_0006800A(ctx, base);
	// 0045DC57 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC58 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC59 mov [0x0064EC08], al
	{ uint32_t ea = (uint32_t)(0x64EC08u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DC5E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DC48, __imp__sub_0045DC48)

X86_FUNC(__imp__sub_0045DC5F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DC5F push 0x5B707C
	{ uint32_t v = (uint32_t)(0x5B707Cu); X86_PUSH32(v); }
	// 0045DC64 push 0xFAA
	{ uint32_t v = (uint32_t)(0xFAAu); X86_PUSH32(v); }
	// 0045DC69 call 0x0006800A
	X86_PUSH32(0x45DC6Eu); sub_0006800A(ctx, base);
	// 0045DC6E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC6F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC70 mov [0x0064EC09], al
	{ uint32_t ea = (uint32_t)(0x64EC09u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DC75 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DC5F, __imp__sub_0045DC5F)

X86_FUNC(__imp__sub_0045DC76) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DC76 push 0x5B7080
	{ uint32_t v = (uint32_t)(0x5B7080u); X86_PUSH32(v); }
	// 0045DC7B push 0x69A
	{ uint32_t v = (uint32_t)(0x69Au); X86_PUSH32(v); }
	// 0045DC80 call 0x0006800A
	X86_PUSH32(0x45DC85u); sub_0006800A(ctx, base);
	// 0045DC85 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC86 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC87 mov [0x0064EC0A], al
	{ uint32_t ea = (uint32_t)(0x64EC0Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DC8C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DC76, __imp__sub_0045DC76)

X86_FUNC(__imp__sub_0045DC8D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DC8D push 0x5B7084
	{ uint32_t v = (uint32_t)(0x5B7084u); X86_PUSH32(v); }
	// 0045DC92 push 0x53B
	{ uint32_t v = (uint32_t)(0x53Bu); X86_PUSH32(v); }
	// 0045DC97 call 0x0006800A
	X86_PUSH32(0x45DC9Cu); sub_0006800A(ctx, base);
	// 0045DC9C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC9D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DC9E mov [0x0064EC0B], al
	{ uint32_t ea = (uint32_t)(0x64EC0Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DCA3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DC8D, __imp__sub_0045DC8D)

X86_FUNC(__imp__sub_0045DCA4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DCA4 push 0x5B7088
	{ uint32_t v = (uint32_t)(0x5B7088u); X86_PUSH32(v); }
	// 0045DCA9 push 0x539
	{ uint32_t v = (uint32_t)(0x539u); X86_PUSH32(v); }
	// 0045DCAE call 0x0006800A
	X86_PUSH32(0x45DCB3u); sub_0006800A(ctx, base);
	// 0045DCB3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DCB4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DCB5 mov [0x0064EC0C], al
	{ uint32_t ea = (uint32_t)(0x64EC0Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DCBA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DCA4, __imp__sub_0045DCA4)

X86_FUNC(__imp__sub_0045DCBB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DCBB push 0x5B708C
	{ uint32_t v = (uint32_t)(0x5B708Cu); X86_PUSH32(v); }
	// 0045DCC0 push 0x538
	{ uint32_t v = (uint32_t)(0x538u); X86_PUSH32(v); }
	// 0045DCC5 call 0x0006800A
	X86_PUSH32(0x45DCCAu); sub_0006800A(ctx, base);
	// 0045DCCA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DCCB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DCCC mov [0x0064EC0D], al
	{ uint32_t ea = (uint32_t)(0x64EC0Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DCD1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DCBB, __imp__sub_0045DCBB)

X86_FUNC(__imp__sub_0045DCD2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DCD2 push 0x5B7090
	{ uint32_t v = (uint32_t)(0x5B7090u); X86_PUSH32(v); }
	// 0045DCD7 push 0x536
	{ uint32_t v = (uint32_t)(0x536u); X86_PUSH32(v); }
	// 0045DCDC call 0x0006800A
	X86_PUSH32(0x45DCE1u); sub_0006800A(ctx, base);
	// 0045DCE1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DCE2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DCE3 mov [0x0064EC0E], al
	{ uint32_t ea = (uint32_t)(0x64EC0Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DCE8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DCD2, __imp__sub_0045DCD2)

X86_FUNC(__imp__sub_0045DCE9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DCE9 push 0x5B7094
	{ uint32_t v = (uint32_t)(0x5B7094u); X86_PUSH32(v); }
	// 0045DCEE push 0x696
	{ uint32_t v = (uint32_t)(0x696u); X86_PUSH32(v); }
	// 0045DCF3 call 0x0006800A
	X86_PUSH32(0x45DCF8u); sub_0006800A(ctx, base);
	// 0045DCF8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DCF9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DCFA mov [0x0064EC0F], al
	{ uint32_t ea = (uint32_t)(0x64EC0Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DCFF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DCE9, __imp__sub_0045DCE9)

X86_FUNC(__imp__sub_0045DD00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DD00 push 0x5B7098
	{ uint32_t v = (uint32_t)(0x5B7098u); X86_PUSH32(v); }
	// 0045DD05 push 0x8B8
	{ uint32_t v = (uint32_t)(0x8B8u); X86_PUSH32(v); }
	// 0045DD0A call 0x0006800A
	X86_PUSH32(0x45DD0Fu); sub_0006800A(ctx, base);
	// 0045DD0F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD10 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD11 mov [0x0064EC10], al
	{ uint32_t ea = (uint32_t)(0x64EC10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DD16 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DD00, __imp__sub_0045DD00)

X86_FUNC(__imp__sub_0045DD17) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DD17 push 0x5B709C
	{ uint32_t v = (uint32_t)(0x5B709Cu); X86_PUSH32(v); }
	// 0045DD1C push 0x582
	{ uint32_t v = (uint32_t)(0x582u); X86_PUSH32(v); }
	// 0045DD21 call 0x0006800A
	X86_PUSH32(0x45DD26u); sub_0006800A(ctx, base);
	// 0045DD26 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD27 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD28 mov [0x0064EC11], al
	{ uint32_t ea = (uint32_t)(0x64EC11u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DD2D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DD17, __imp__sub_0045DD17)

X86_FUNC(__imp__sub_0045DD2E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DD2E push 0x5B70A0
	{ uint32_t v = (uint32_t)(0x5B70A0u); X86_PUSH32(v); }
	// 0045DD33 push 0x580
	{ uint32_t v = (uint32_t)(0x580u); X86_PUSH32(v); }
	// 0045DD38 call 0x0006800A
	X86_PUSH32(0x45DD3Du); sub_0006800A(ctx, base);
	// 0045DD3D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD3E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD3F mov [0x0064EC12], al
	{ uint32_t ea = (uint32_t)(0x64EC12u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DD44 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DD2E, __imp__sub_0045DD2E)

X86_FUNC(__imp__sub_0045DD45) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DD45 push 0x5B70A4
	{ uint32_t v = (uint32_t)(0x5B70A4u); X86_PUSH32(v); }
	// 0045DD4A push 0x57F
	{ uint32_t v = (uint32_t)(0x57Fu); X86_PUSH32(v); }
	// 0045DD4F call 0x0006800A
	X86_PUSH32(0x45DD54u); sub_0006800A(ctx, base);
	// 0045DD54 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD55 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD56 mov [0x0064EC13], al
	{ uint32_t ea = (uint32_t)(0x64EC13u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DD5B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DD45, __imp__sub_0045DD45)

X86_FUNC(__imp__sub_0045DD5C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DD5C push 0x5B70A8
	{ uint32_t v = (uint32_t)(0x5B70A8u); X86_PUSH32(v); }
	// 0045DD61 push 0xD87
	{ uint32_t v = (uint32_t)(0xD87u); X86_PUSH32(v); }
	// 0045DD66 call 0x0006800A
	X86_PUSH32(0x45DD6Bu); sub_0006800A(ctx, base);
	// 0045DD6B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD6C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD6D mov [0x0064EC14], al
	{ uint32_t ea = (uint32_t)(0x64EC14u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DD72 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DD5C, __imp__sub_0045DD5C)

X86_FUNC(__imp__sub_0045DD73) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DD73 push 0x5B70AC
	{ uint32_t v = (uint32_t)(0x5B70ACu); X86_PUSH32(v); }
	// 0045DD78 push 0x718
	{ uint32_t v = (uint32_t)(0x718u); X86_PUSH32(v); }
	// 0045DD7D call 0x0006800A
	X86_PUSH32(0x45DD82u); sub_0006800A(ctx, base);
	// 0045DD82 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD83 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD84 mov [0x0064EC15], al
	{ uint32_t ea = (uint32_t)(0x64EC15u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DD89 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DD73, __imp__sub_0045DD73)

X86_FUNC(__imp__sub_0045DD8A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DD8A push 0x5B70B0
	{ uint32_t v = (uint32_t)(0x5B70B0u); X86_PUSH32(v); }
	// 0045DD8F push 0x717
	{ uint32_t v = (uint32_t)(0x717u); X86_PUSH32(v); }
	// 0045DD94 call 0x0006800A
	X86_PUSH32(0x45DD99u); sub_0006800A(ctx, base);
	// 0045DD99 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD9A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DD9B mov [0x0064EC16], al
	{ uint32_t ea = (uint32_t)(0x64EC16u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DDA0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DD8A, __imp__sub_0045DD8A)

X86_FUNC(__imp__sub_0045DDA1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DDA1 push 0x5B70B4
	{ uint32_t v = (uint32_t)(0x5B70B4u); X86_PUSH32(v); }
	// 0045DDA6 push 0x716
	{ uint32_t v = (uint32_t)(0x716u); X86_PUSH32(v); }
	// 0045DDAB call 0x0006800A
	X86_PUSH32(0x45DDB0u); sub_0006800A(ctx, base);
	// 0045DDB0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DDB1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DDB2 mov [0x0064EC17], al
	{ uint32_t ea = (uint32_t)(0x64EC17u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DDB7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DDA1, __imp__sub_0045DDA1)

X86_FUNC(__imp__sub_0045DDB8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DDB8 push 0x5B70B8
	{ uint32_t v = (uint32_t)(0x5B70B8u); X86_PUSH32(v); }
	// 0045DDBD push 0x715
	{ uint32_t v = (uint32_t)(0x715u); X86_PUSH32(v); }
	// 0045DDC2 call 0x0006800A
	X86_PUSH32(0x45DDC7u); sub_0006800A(ctx, base);
	// 0045DDC7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DDC8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DDC9 mov [0x0064EC18], al
	{ uint32_t ea = (uint32_t)(0x64EC18u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DDCE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DDB8, __imp__sub_0045DDB8)

X86_FUNC(__imp__sub_0045DDCF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DDCF push 0x5B70BC
	{ uint32_t v = (uint32_t)(0x5B70BCu); X86_PUSH32(v); }
	// 0045DDD4 push 0x714
	{ uint32_t v = (uint32_t)(0x714u); X86_PUSH32(v); }
	// 0045DDD9 call 0x0006800A
	X86_PUSH32(0x45DDDEu); sub_0006800A(ctx, base);
	// 0045DDDE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DDDF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DDE0 mov [0x0064EC19], al
	{ uint32_t ea = (uint32_t)(0x64EC19u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DDE5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DDCF, __imp__sub_0045DDCF)

X86_FUNC(__imp__sub_0045DDE6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DDE6 push 0x5B70C0
	{ uint32_t v = (uint32_t)(0x5B70C0u); X86_PUSH32(v); }
	// 0045DDEB push 0x713
	{ uint32_t v = (uint32_t)(0x713u); X86_PUSH32(v); }
	// 0045DDF0 call 0x0006800A
	X86_PUSH32(0x45DDF5u); sub_0006800A(ctx, base);
	// 0045DDF5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DDF6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DDF7 mov [0x0064EC1A], al
	{ uint32_t ea = (uint32_t)(0x64EC1Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DDFC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DDE6, __imp__sub_0045DDE6)

X86_FUNC(__imp__sub_0045DDFD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DDFD push 0x5B70C4
	{ uint32_t v = (uint32_t)(0x5B70C4u); X86_PUSH32(v); }
	// 0045DE02 push 0x712
	{ uint32_t v = (uint32_t)(0x712u); X86_PUSH32(v); }
	// 0045DE07 call 0x0006800A
	X86_PUSH32(0x45DE0Cu); sub_0006800A(ctx, base);
	// 0045DE0C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE0D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE0E mov [0x0064EC1B], al
	{ uint32_t ea = (uint32_t)(0x64EC1Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DE13 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DDFD, __imp__sub_0045DDFD)

X86_FUNC(__imp__sub_0045DE14) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DE14 push 0x5B70C8
	{ uint32_t v = (uint32_t)(0x5B70C8u); X86_PUSH32(v); }
	// 0045DE19 push 0x90F
	{ uint32_t v = (uint32_t)(0x90Fu); X86_PUSH32(v); }
	// 0045DE1E call 0x0006800A
	X86_PUSH32(0x45DE23u); sub_0006800A(ctx, base);
	// 0045DE23 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE24 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE25 mov [0x0064EC1C], al
	{ uint32_t ea = (uint32_t)(0x64EC1Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DE2A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DE14, __imp__sub_0045DE14)

X86_FUNC(__imp__sub_0045DE2B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DE2B push 0x5B70CC
	{ uint32_t v = (uint32_t)(0x5B70CCu); X86_PUSH32(v); }
	// 0045DE30 push 0x90E
	{ uint32_t v = (uint32_t)(0x90Eu); X86_PUSH32(v); }
	// 0045DE35 call 0x0006800A
	X86_PUSH32(0x45DE3Au); sub_0006800A(ctx, base);
	// 0045DE3A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE3B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE3C mov [0x0064EC1D], al
	{ uint32_t ea = (uint32_t)(0x64EC1Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DE41 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DE2B, __imp__sub_0045DE2B)

X86_FUNC(__imp__sub_0045DE42) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DE42 push 0x5B70D0
	{ uint32_t v = (uint32_t)(0x5B70D0u); X86_PUSH32(v); }
	// 0045DE47 push 0x90D
	{ uint32_t v = (uint32_t)(0x90Du); X86_PUSH32(v); }
	// 0045DE4C call 0x0006800A
	X86_PUSH32(0x45DE51u); sub_0006800A(ctx, base);
	// 0045DE51 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE52 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE53 mov [0x0064EC1E], al
	{ uint32_t ea = (uint32_t)(0x64EC1Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DE58 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DE42, __imp__sub_0045DE42)

X86_FUNC(__imp__sub_0045DE59) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DE59 push 0x5B70D4
	{ uint32_t v = (uint32_t)(0x5B70D4u); X86_PUSH32(v); }
	// 0045DE5E push 0x90C
	{ uint32_t v = (uint32_t)(0x90Cu); X86_PUSH32(v); }
	// 0045DE63 call 0x0006800A
	X86_PUSH32(0x45DE68u); sub_0006800A(ctx, base);
	// 0045DE68 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE69 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE6A mov [0x0064EC1F], al
	{ uint32_t ea = (uint32_t)(0x64EC1Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DE6F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DE59, __imp__sub_0045DE59)

X86_FUNC(__imp__sub_0045DE70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DE70 push 0x5B70D8
	{ uint32_t v = (uint32_t)(0x5B70D8u); X86_PUSH32(v); }
	// 0045DE75 push 0xD83
	{ uint32_t v = (uint32_t)(0xD83u); X86_PUSH32(v); }
	// 0045DE7A call 0x0006800A
	X86_PUSH32(0x45DE7Fu); sub_0006800A(ctx, base);
	// 0045DE7F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE80 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE81 mov [0x0064EC20], al
	{ uint32_t ea = (uint32_t)(0x64EC20u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DE86 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DE70, __imp__sub_0045DE70)

X86_FUNC(__imp__sub_0045DE87) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DE87 push 0x5B70DC
	{ uint32_t v = (uint32_t)(0x5B70DCu); X86_PUSH32(v); }
	// 0045DE8C push 0x62A
	{ uint32_t v = (uint32_t)(0x62Au); X86_PUSH32(v); }
	// 0045DE91 call 0x0006800A
	X86_PUSH32(0x45DE96u); sub_0006800A(ctx, base);
	// 0045DE96 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE97 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DE98 mov [0x0064EC21], al
	{ uint32_t ea = (uint32_t)(0x64EC21u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DE9D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DE87, __imp__sub_0045DE87)

X86_FUNC(__imp__sub_0045DE9E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DE9E push 0x5B70E0
	{ uint32_t v = (uint32_t)(0x5B70E0u); X86_PUSH32(v); }
	// 0045DEA3 push 0x629
	{ uint32_t v = (uint32_t)(0x629u); X86_PUSH32(v); }
	// 0045DEA8 call 0x0006800A
	X86_PUSH32(0x45DEADu); sub_0006800A(ctx, base);
	// 0045DEAD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DEAE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DEAF mov [0x0064EC22], al
	{ uint32_t ea = (uint32_t)(0x64EC22u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DEB4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DE9E, __imp__sub_0045DE9E)

X86_FUNC(__imp__sub_0045DEB5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DEB5 push 0x5B70E4
	{ uint32_t v = (uint32_t)(0x5B70E4u); X86_PUSH32(v); }
	// 0045DEBA push 0x578
	{ uint32_t v = (uint32_t)(0x578u); X86_PUSH32(v); }
	// 0045DEBF call 0x0006800A
	X86_PUSH32(0x45DEC4u); sub_0006800A(ctx, base);
	// 0045DEC4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DEC5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DEC6 mov [0x0064EC23], al
	{ uint32_t ea = (uint32_t)(0x64EC23u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DECB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DEB5, __imp__sub_0045DEB5)

X86_FUNC(__imp__sub_0045DECC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DECC push 0x5B70E8
	{ uint32_t v = (uint32_t)(0x5B70E8u); X86_PUSH32(v); }
	// 0045DED1 push 0x968
	{ uint32_t v = (uint32_t)(0x968u); X86_PUSH32(v); }
	// 0045DED6 call 0x0006800A
	X86_PUSH32(0x45DEDBu); sub_0006800A(ctx, base);
	// 0045DEDB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DEDC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DEDD mov [0x0064EC24], al
	{ uint32_t ea = (uint32_t)(0x64EC24u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DEE2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DECC, __imp__sub_0045DECC)

X86_FUNC(__imp__sub_0045DEE3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DEE3 push 0x5B70EC
	{ uint32_t v = (uint32_t)(0x5B70ECu); X86_PUSH32(v); }
	// 0045DEE8 push 0x967
	{ uint32_t v = (uint32_t)(0x967u); X86_PUSH32(v); }
	// 0045DEED call 0x0006800A
	X86_PUSH32(0x45DEF2u); sub_0006800A(ctx, base);
	// 0045DEF2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DEF3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DEF4 mov [0x0064EC25], al
	{ uint32_t ea = (uint32_t)(0x64EC25u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DEF9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DEE3, __imp__sub_0045DEE3)

X86_FUNC(__imp__sub_0045DEFA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DEFA push 0x5B70F0
	{ uint32_t v = (uint32_t)(0x5B70F0u); X86_PUSH32(v); }
	// 0045DEFF push 0x966
	{ uint32_t v = (uint32_t)(0x966u); X86_PUSH32(v); }
	// 0045DF04 call 0x0006800A
	X86_PUSH32(0x45DF09u); sub_0006800A(ctx, base);
	// 0045DF09 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF0A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF0B mov [0x0064EC26], al
	{ uint32_t ea = (uint32_t)(0x64EC26u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DF10 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DEFA, __imp__sub_0045DEFA)

X86_FUNC(__imp__sub_0045DF11) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DF11 push 0x5B70F4
	{ uint32_t v = (uint32_t)(0x5B70F4u); X86_PUSH32(v); }
	// 0045DF16 push 0x965
	{ uint32_t v = (uint32_t)(0x965u); X86_PUSH32(v); }
	// 0045DF1B call 0x0006800A
	X86_PUSH32(0x45DF20u); sub_0006800A(ctx, base);
	// 0045DF20 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF21 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF22 mov [0x0064EC27], al
	{ uint32_t ea = (uint32_t)(0x64EC27u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DF27 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DF11, __imp__sub_0045DF11)

X86_FUNC(__imp__sub_0045DF28) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DF28 push 0x5B70F8
	{ uint32_t v = (uint32_t)(0x5B70F8u); X86_PUSH32(v); }
	// 0045DF2D push 0x964
	{ uint32_t v = (uint32_t)(0x964u); X86_PUSH32(v); }
	// 0045DF32 call 0x0006800A
	X86_PUSH32(0x45DF37u); sub_0006800A(ctx, base);
	// 0045DF37 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF38 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF39 mov [0x0064EC28], al
	{ uint32_t ea = (uint32_t)(0x64EC28u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DF3E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DF28, __imp__sub_0045DF28)

X86_FUNC(__imp__sub_0045DF3F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DF3F push 0x5B70FC
	{ uint32_t v = (uint32_t)(0x5B70FCu); X86_PUSH32(v); }
	// 0045DF44 push 0x963
	{ uint32_t v = (uint32_t)(0x963u); X86_PUSH32(v); }
	// 0045DF49 call 0x0006800A
	X86_PUSH32(0x45DF4Eu); sub_0006800A(ctx, base);
	// 0045DF4E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF4F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF50 mov [0x0064EC29], al
	{ uint32_t ea = (uint32_t)(0x64EC29u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DF55 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DF3F, __imp__sub_0045DF3F)

X86_FUNC(__imp__sub_0045DF56) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DF56 push 0x5B7100
	{ uint32_t v = (uint32_t)(0x5B7100u); X86_PUSH32(v); }
	// 0045DF5B push 0x962
	{ uint32_t v = (uint32_t)(0x962u); X86_PUSH32(v); }
	// 0045DF60 call 0x0006800A
	X86_PUSH32(0x45DF65u); sub_0006800A(ctx, base);
	// 0045DF65 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF66 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF67 mov [0x0064EC2A], al
	{ uint32_t ea = (uint32_t)(0x64EC2Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DF6C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DF56, __imp__sub_0045DF56)

X86_FUNC(__imp__sub_0045DF6D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DF6D push 0x5B7104
	{ uint32_t v = (uint32_t)(0x5B7104u); X86_PUSH32(v); }
	// 0045DF72 push 0x961
	{ uint32_t v = (uint32_t)(0x961u); X86_PUSH32(v); }
	// 0045DF77 call 0x0006800A
	X86_PUSH32(0x45DF7Cu); sub_0006800A(ctx, base);
	// 0045DF7C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF7D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF7E mov [0x0064EC2B], al
	{ uint32_t ea = (uint32_t)(0x64EC2Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DF83 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DF6D, __imp__sub_0045DF6D)

X86_FUNC(__imp__sub_0045DF84) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DF84 push 0x5B7108
	{ uint32_t v = (uint32_t)(0x5B7108u); X86_PUSH32(v); }
	// 0045DF89 push 0x960
	{ uint32_t v = (uint32_t)(0x960u); X86_PUSH32(v); }
	// 0045DF8E call 0x0006800A
	X86_PUSH32(0x45DF93u); sub_0006800A(ctx, base);
	// 0045DF93 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF94 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DF95 mov [0x0064EC2C], al
	{ uint32_t ea = (uint32_t)(0x64EC2Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DF9A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DF84, __imp__sub_0045DF84)

X86_FUNC(__imp__sub_0045DF9B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DF9B push 0x5B710C
	{ uint32_t v = (uint32_t)(0x5B710Cu); X86_PUSH32(v); }
	// 0045DFA0 push 0x92E
	{ uint32_t v = (uint32_t)(0x92Eu); X86_PUSH32(v); }
	// 0045DFA5 call 0x0006800A
	X86_PUSH32(0x45DFAAu); sub_0006800A(ctx, base);
	// 0045DFAA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DFAB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DFAC mov [0x0064EC2D], al
	{ uint32_t ea = (uint32_t)(0x64EC2Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DFB1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DF9B, __imp__sub_0045DF9B)

X86_FUNC(__imp__sub_0045DFB2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DFB2 push 0x5B7110
	{ uint32_t v = (uint32_t)(0x5B7110u); X86_PUSH32(v); }
	// 0045DFB7 push 0x92D
	{ uint32_t v = (uint32_t)(0x92Du); X86_PUSH32(v); }
	// 0045DFBC call 0x0006800A
	X86_PUSH32(0x45DFC1u); sub_0006800A(ctx, base);
	// 0045DFC1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DFC2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DFC3 mov [0x0064EC2E], al
	{ uint32_t ea = (uint32_t)(0x64EC2Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DFC8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DFB2, __imp__sub_0045DFB2)

X86_FUNC(__imp__sub_0045DFC9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DFC9 push 0x5B7114
	{ uint32_t v = (uint32_t)(0x5B7114u); X86_PUSH32(v); }
	// 0045DFCE push 0x928
	{ uint32_t v = (uint32_t)(0x928u); X86_PUSH32(v); }
	// 0045DFD3 call 0x0006800A
	X86_PUSH32(0x45DFD8u); sub_0006800A(ctx, base);
	// 0045DFD8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DFD9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DFDA mov [0x0064EC2F], al
	{ uint32_t ea = (uint32_t)(0x64EC2Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DFDF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DFC9, __imp__sub_0045DFC9)

X86_FUNC(__imp__sub_0045DFE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DFE0 push 0x5B7118
	{ uint32_t v = (uint32_t)(0x5B7118u); X86_PUSH32(v); }
	// 0045DFE5 push 0x924
	{ uint32_t v = (uint32_t)(0x924u); X86_PUSH32(v); }
	// 0045DFEA call 0x0006800A
	X86_PUSH32(0x45DFEFu); sub_0006800A(ctx, base);
	// 0045DFEF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DFF0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045DFF1 mov [0x0064EC30], al
	{ uint32_t ea = (uint32_t)(0x64EC30u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045DFF6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DFE0, __imp__sub_0045DFE0)

X86_FUNC(__imp__sub_0045DFF7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045DFF7 push 0x5B711C
	{ uint32_t v = (uint32_t)(0x5B711Cu); X86_PUSH32(v); }
	// 0045DFFC push 0x911
	{ uint32_t v = (uint32_t)(0x911u); X86_PUSH32(v); }
	// 0045E001 call 0x0006800A
	X86_PUSH32(0x45E006u); sub_0006800A(ctx, base);
	// 0045E006 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E007 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E008 mov [0x0064EC31], al
	{ uint32_t ea = (uint32_t)(0x64EC31u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E00D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045DFF7, __imp__sub_0045DFF7)

X86_FUNC(__imp__sub_0045E00E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E00E push 0x5B7120
	{ uint32_t v = (uint32_t)(0x5B7120u); X86_PUSH32(v); }
	// 0045E013 push 0x90B
	{ uint32_t v = (uint32_t)(0x90Bu); X86_PUSH32(v); }
	// 0045E018 call 0x0006800A
	X86_PUSH32(0x45E01Du); sub_0006800A(ctx, base);
	// 0045E01D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E01E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E01F mov [0x0064EC32], al
	{ uint32_t ea = (uint32_t)(0x64EC32u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E024 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E00E, __imp__sub_0045E00E)

X86_FUNC(__imp__sub_0045E025) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E025 push 0x5B7124
	{ uint32_t v = (uint32_t)(0x5B7124u); X86_PUSH32(v); }
	// 0045E02A push 0x90A
	{ uint32_t v = (uint32_t)(0x90Au); X86_PUSH32(v); }
	// 0045E02F call 0x0006800A
	X86_PUSH32(0x45E034u); sub_0006800A(ctx, base);
	// 0045E034 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E035 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E036 mov [0x0064EC33], al
	{ uint32_t ea = (uint32_t)(0x64EC33u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E03B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E025, __imp__sub_0045E025)

X86_FUNC(__imp__sub_0045E03C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E03C push 0x5B7128
	{ uint32_t v = (uint32_t)(0x5B7128u); X86_PUSH32(v); }
	// 0045E041 push 0x909
	{ uint32_t v = (uint32_t)(0x909u); X86_PUSH32(v); }
	// 0045E046 call 0x0006800A
	X86_PUSH32(0x45E04Bu); sub_0006800A(ctx, base);
	// 0045E04B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E04C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E04D mov [0x0064EC34], al
	{ uint32_t ea = (uint32_t)(0x64EC34u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E052 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E03C, __imp__sub_0045E03C)

X86_FUNC(__imp__sub_0045E053) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E053 push 0x5B712C
	{ uint32_t v = (uint32_t)(0x5B712Cu); X86_PUSH32(v); }
	// 0045E058 push 0x908
	{ uint32_t v = (uint32_t)(0x908u); X86_PUSH32(v); }
	// 0045E05D call 0x0006800A
	X86_PUSH32(0x45E062u); sub_0006800A(ctx, base);
	// 0045E062 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E063 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E064 mov [0x0064EC35], al
	{ uint32_t ea = (uint32_t)(0x64EC35u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E069 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E053, __imp__sub_0045E053)

X86_FUNC(__imp__sub_0045E06A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E06A push 0x5B7130
	{ uint32_t v = (uint32_t)(0x5B7130u); X86_PUSH32(v); }
	// 0045E06F push 0x8CD
	{ uint32_t v = (uint32_t)(0x8CDu); X86_PUSH32(v); }
	// 0045E074 call 0x0006800A
	X86_PUSH32(0x45E079u); sub_0006800A(ctx, base);
	// 0045E079 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E07A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E07B mov [0x0064EC36], al
	{ uint32_t ea = (uint32_t)(0x64EC36u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E080 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E06A, __imp__sub_0045E06A)

X86_FUNC(__imp__sub_0045E081) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E081 push 0x5B7134
	{ uint32_t v = (uint32_t)(0x5B7134u); X86_PUSH32(v); }
	// 0045E086 push 0x8B9
	{ uint32_t v = (uint32_t)(0x8B9u); X86_PUSH32(v); }
	// 0045E08B call 0x0006800A
	X86_PUSH32(0x45E090u); sub_0006800A(ctx, base);
	// 0045E090 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E091 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E092 mov [0x0064EC37], al
	{ uint32_t ea = (uint32_t)(0x64EC37u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E097 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E081, __imp__sub_0045E081)

X86_FUNC(__imp__sub_0045E098) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E098 push 0x5B7138
	{ uint32_t v = (uint32_t)(0x5B7138u); X86_PUSH32(v); }
	// 0045E09D push 0x710
	{ uint32_t v = (uint32_t)(0x710u); X86_PUSH32(v); }
	// 0045E0A2 call 0x0006800A
	X86_PUSH32(0x45E0A7u); sub_0006800A(ctx, base);
	// 0045E0A7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E0A8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E0A9 mov [0x0064EC38], al
	{ uint32_t ea = (uint32_t)(0x64EC38u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E0AE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E098, __imp__sub_0045E098)

X86_FUNC(__imp__sub_0045E0AF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E0AF push 0x5B713C
	{ uint32_t v = (uint32_t)(0x5B713Cu); X86_PUSH32(v); }
	// 0045E0B4 push 0x70F
	{ uint32_t v = (uint32_t)(0x70Fu); X86_PUSH32(v); }
	// 0045E0B9 call 0x0006800A
	X86_PUSH32(0x45E0BEu); sub_0006800A(ctx, base);
	// 0045E0BE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E0BF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E0C0 mov [0x0064EC39], al
	{ uint32_t ea = (uint32_t)(0x64EC39u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E0C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E0AF, __imp__sub_0045E0AF)

X86_FUNC(__imp__sub_0045E0C6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E0C6 push 0x5B7140
	{ uint32_t v = (uint32_t)(0x5B7140u); X86_PUSH32(v); }
	// 0045E0CB push 0x70E
	{ uint32_t v = (uint32_t)(0x70Eu); X86_PUSH32(v); }
	// 0045E0D0 call 0x0006800A
	X86_PUSH32(0x45E0D5u); sub_0006800A(ctx, base);
	// 0045E0D5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E0D6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E0D7 mov [0x0064EC3A], al
	{ uint32_t ea = (uint32_t)(0x64EC3Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E0DC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E0C6, __imp__sub_0045E0C6)

X86_FUNC(__imp__sub_0045E0DD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E0DD push 0x5B7144
	{ uint32_t v = (uint32_t)(0x5B7144u); X86_PUSH32(v); }
	// 0045E0E2 push 0x70D
	{ uint32_t v = (uint32_t)(0x70Du); X86_PUSH32(v); }
	// 0045E0E7 call 0x0006800A
	X86_PUSH32(0x45E0ECu); sub_0006800A(ctx, base);
	// 0045E0EC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E0ED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E0EE mov [0x0064EC3B], al
	{ uint32_t ea = (uint32_t)(0x64EC3Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E0F3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E0DD, __imp__sub_0045E0DD)

X86_FUNC(__imp__sub_0045E0F4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E0F4 push 0x5B7148
	{ uint32_t v = (uint32_t)(0x5B7148u); X86_PUSH32(v); }
	// 0045E0F9 push 0x70C
	{ uint32_t v = (uint32_t)(0x70Cu); X86_PUSH32(v); }
	// 0045E0FE call 0x0006800A
	X86_PUSH32(0x45E103u); sub_0006800A(ctx, base);
	// 0045E103 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E104 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E105 mov [0x0064EC3C], al
	{ uint32_t ea = (uint32_t)(0x64EC3Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E10A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E0F4, __imp__sub_0045E0F4)

X86_FUNC(__imp__sub_0045E10B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E10B push 0x5B714C
	{ uint32_t v = (uint32_t)(0x5B714Cu); X86_PUSH32(v); }
	// 0045E110 push 0x70A
	{ uint32_t v = (uint32_t)(0x70Au); X86_PUSH32(v); }
	// 0045E115 call 0x0006800A
	X86_PUSH32(0x45E11Au); sub_0006800A(ctx, base);
	// 0045E11A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E11B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E11C mov [0x0064EC3D], al
	{ uint32_t ea = (uint32_t)(0x64EC3Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E121 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E10B, __imp__sub_0045E10B)

X86_FUNC(__imp__sub_0045E122) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E122 push 0x5B7150
	{ uint32_t v = (uint32_t)(0x5B7150u); X86_PUSH32(v); }
	// 0045E127 push 0x709
	{ uint32_t v = (uint32_t)(0x709u); X86_PUSH32(v); }
	// 0045E12C call 0x0006800A
	X86_PUSH32(0x45E131u); sub_0006800A(ctx, base);
	// 0045E131 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E132 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E133 mov [0x0064EC3E], al
	{ uint32_t ea = (uint32_t)(0x64EC3Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E138 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E122, __imp__sub_0045E122)

X86_FUNC(__imp__sub_0045E139) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E139 push 0x5B7154
	{ uint32_t v = (uint32_t)(0x5B7154u); X86_PUSH32(v); }
	// 0045E13E push 0x816
	{ uint32_t v = (uint32_t)(0x816u); X86_PUSH32(v); }
	// 0045E143 call 0x0006800A
	X86_PUSH32(0x45E148u); sub_0006800A(ctx, base);
	// 0045E148 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E149 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E14A mov [0x0064EC3F], al
	{ uint32_t ea = (uint32_t)(0x64EC3Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E14F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E139, __imp__sub_0045E139)

X86_FUNC(__imp__sub_0045E150) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E150 push 0x5B7158
	{ uint32_t v = (uint32_t)(0x5B7158u); X86_PUSH32(v); }
	// 0045E155 push 0x803
	{ uint32_t v = (uint32_t)(0x803u); X86_PUSH32(v); }
	// 0045E15A call 0x0006800A
	X86_PUSH32(0x45E15Fu); sub_0006800A(ctx, base);
	// 0045E15F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E160 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E161 mov [0x0064EC40], al
	{ uint32_t ea = (uint32_t)(0x64EC40u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E166 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E150, __imp__sub_0045E150)

X86_FUNC(__imp__sub_0045E167) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E167 push 0x5B715C
	{ uint32_t v = (uint32_t)(0x5B715Cu); X86_PUSH32(v); }
	// 0045E16C push 0x802
	{ uint32_t v = (uint32_t)(0x802u); X86_PUSH32(v); }
	// 0045E171 call 0x0006800A
	X86_PUSH32(0x45E176u); sub_0006800A(ctx, base);
	// 0045E176 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E177 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E178 mov [0x0064EC41], al
	{ uint32_t ea = (uint32_t)(0x64EC41u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E17D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E167, __imp__sub_0045E167)

X86_FUNC(__imp__sub_0045E17E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E17E push 0x5B7160
	{ uint32_t v = (uint32_t)(0x5B7160u); X86_PUSH32(v); }
	// 0045E183 push 0x500
	{ uint32_t v = (uint32_t)(0x500u); X86_PUSH32(v); }
	// 0045E188 call 0x0006800A
	X86_PUSH32(0x45E18Du); sub_0006800A(ctx, base);
	// 0045E18D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E18E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E18F mov [0x0064EC42], al
	{ uint32_t ea = (uint32_t)(0x64EC42u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E194 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E17E, __imp__sub_0045E17E)

X86_FUNC(__imp__sub_0045E195) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E195 push 0x5B7164
	{ uint32_t v = (uint32_t)(0x5B7164u); X86_PUSH32(v); }
	// 0045E19A push 0x4F6
	{ uint32_t v = (uint32_t)(0x4F6u); X86_PUSH32(v); }
	// 0045E19F call 0x0006800A
	X86_PUSH32(0x45E1A4u); sub_0006800A(ctx, base);
	// 0045E1A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E1A5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E1A6 mov [0x0064EC43], al
	{ uint32_t ea = (uint32_t)(0x64EC43u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E1AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E195, __imp__sub_0045E195)

X86_FUNC(__imp__sub_0045E1AC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E1AC push 0x5B7168
	{ uint32_t v = (uint32_t)(0x5B7168u); X86_PUSH32(v); }
	// 0045E1B1 push 0xD89
	{ uint32_t v = (uint32_t)(0xD89u); X86_PUSH32(v); }
	// 0045E1B6 call 0x0006800A
	X86_PUSH32(0x45E1BBu); sub_0006800A(ctx, base);
	// 0045E1BB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E1BC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E1BD mov [0x0064EC44], al
	{ uint32_t ea = (uint32_t)(0x64EC44u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E1C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E1AC, __imp__sub_0045E1AC)

X86_FUNC(__imp__sub_0045E1C3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E1C3 push 0x5B716C
	{ uint32_t v = (uint32_t)(0x5B716Cu); X86_PUSH32(v); }
	// 0045E1C8 push 0xD88
	{ uint32_t v = (uint32_t)(0xD88u); X86_PUSH32(v); }
	// 0045E1CD call 0x0006800A
	X86_PUSH32(0x45E1D2u); sub_0006800A(ctx, base);
	// 0045E1D2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E1D3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	{ X86_SAVE_FLAGS(); sub_0045E1D4(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045E1C3, __imp__sub_0045E1C3)

X86_FUNC(__imp__sub_0045E1D4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E1D4 mov [0x0064EC45], al
	{ uint32_t ea = (uint32_t)(0x64EC45u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E1D9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E1D4, __imp__sub_0045E1D4)

X86_FUNC(__imp__sub_0045E1DA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E1DA push 0x5B7170
	{ uint32_t v = (uint32_t)(0x5B7170u); X86_PUSH32(v); }
	// 0045E1DF push 0x7C1
	{ uint32_t v = (uint32_t)(0x7C1u); X86_PUSH32(v); }
	// 0045E1E4 call 0x0006800A
	X86_PUSH32(0x45E1E9u); sub_0006800A(ctx, base);
	// 0045E1E9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E1EA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E1EB mov [0x0064EC46], al
	{ uint32_t ea = (uint32_t)(0x64EC46u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E1F0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E1DA, __imp__sub_0045E1DA)

X86_FUNC(__imp__sub_0045E1F1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E1F1 push 0x5B7174
	{ uint32_t v = (uint32_t)(0x5B7174u); X86_PUSH32(v); }
	// 0045E1F6 push 0x7C0
	{ uint32_t v = (uint32_t)(0x7C0u); X86_PUSH32(v); }
	// 0045E1FB call 0x0006800A
	X86_PUSH32(0x45E200u); sub_0006800A(ctx, base);
	{ X86_SAVE_FLAGS(); sub_0045E200(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045E1F1, __imp__sub_0045E1F1)

X86_FUNC(__imp__sub_0045E200) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E200 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E201 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E202 mov [0x0064EC47], al
	{ uint32_t ea = (uint32_t)(0x64EC47u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E207 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E200, __imp__sub_0045E200)

X86_FUNC(__imp__sub_0045E208) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E208 push 0x5B7178
	{ uint32_t v = (uint32_t)(0x5B7178u); X86_PUSH32(v); }
	// 0045E20D push 0x7BF
	{ uint32_t v = (uint32_t)(0x7BFu); X86_PUSH32(v); }
	// 0045E212 call 0x0006800A
	X86_PUSH32(0x45E217u); sub_0006800A(ctx, base);
	// 0045E217 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E218 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E219 mov [0x0064EC48], al
	{ uint32_t ea = (uint32_t)(0x64EC48u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E21E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E208, __imp__sub_0045E208)

X86_FUNC(__imp__sub_0045E21F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E21F push 0x5B717C
	{ uint32_t v = (uint32_t)(0x5B717Cu); X86_PUSH32(v); }
	// 0045E224 push 0x7BE
	{ uint32_t v = (uint32_t)(0x7BEu); X86_PUSH32(v); }
	// 0045E229 call 0x0006800A
	X86_PUSH32(0x45E22Eu); sub_0006800A(ctx, base);
	// 0045E22E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E22F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E230 mov [0x0064EC49], al
	{ uint32_t ea = (uint32_t)(0x64EC49u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E235 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E21F, __imp__sub_0045E21F)

X86_FUNC(__imp__sub_0045E236) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E236 push 0x5B7180
	{ uint32_t v = (uint32_t)(0x5B7180u); X86_PUSH32(v); }
	// 0045E23B push 0x7BD
	{ uint32_t v = (uint32_t)(0x7BDu); X86_PUSH32(v); }
	// 0045E240 call 0x0006800A
	X86_PUSH32(0x45E245u); sub_0006800A(ctx, base);
	// 0045E245 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E246 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E247 mov [0x0064EC4A], al
	{ uint32_t ea = (uint32_t)(0x64EC4Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E24C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E236, __imp__sub_0045E236)

X86_FUNC(__imp__sub_0045E24D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E24D push 0x5B7184
	{ uint32_t v = (uint32_t)(0x5B7184u); X86_PUSH32(v); }
	// 0045E252 push 0x7BA
	{ uint32_t v = (uint32_t)(0x7BAu); X86_PUSH32(v); }
	// 0045E257 call 0x0006800A
	X86_PUSH32(0x45E25Cu); sub_0006800A(ctx, base);
	// 0045E25C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E25D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E25E mov [0x0064EC4B], al
	{ uint32_t ea = (uint32_t)(0x64EC4Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E263 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E24D, __imp__sub_0045E24D)

X86_FUNC(__imp__sub_0045E264) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E264 push 0x5B7188
	{ uint32_t v = (uint32_t)(0x5B7188u); X86_PUSH32(v); }
	// 0045E269 push 0x7B9
	{ uint32_t v = (uint32_t)(0x7B9u); X86_PUSH32(v); }
	// 0045E26E call 0x0006800A
	X86_PUSH32(0x45E273u); sub_0006800A(ctx, base);
	// 0045E273 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E274 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E275 mov [0x0064EC4C], al
	{ uint32_t ea = (uint32_t)(0x64EC4Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E27A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E264, __imp__sub_0045E264)

X86_FUNC(__imp__sub_0045E27B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E27B push 0x5B718C
	{ uint32_t v = (uint32_t)(0x5B718Cu); X86_PUSH32(v); }
	// 0045E280 push 0x7E5
	{ uint32_t v = (uint32_t)(0x7E5u); X86_PUSH32(v); }
	// 0045E285 call 0x0006800A
	X86_PUSH32(0x45E28Au); sub_0006800A(ctx, base);
	// 0045E28A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E28B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E28C mov [0x0064EC4D], al
	{ uint32_t ea = (uint32_t)(0x64EC4Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E291 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E27B, __imp__sub_0045E27B)

X86_FUNC(__imp__sub_0045E292) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E292 push 0x5B7190
	{ uint32_t v = (uint32_t)(0x5B7190u); X86_PUSH32(v); }
	// 0045E297 push 0x7E4
	{ uint32_t v = (uint32_t)(0x7E4u); X86_PUSH32(v); }
	// 0045E29C call 0x0006800A
	X86_PUSH32(0x45E2A1u); sub_0006800A(ctx, base);
	// 0045E2A1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E2A2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E2A3 mov [0x0064EC4E], al
	{ uint32_t ea = (uint32_t)(0x64EC4Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E2A8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E292, __imp__sub_0045E292)

X86_FUNC(__imp__sub_0045E2A9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E2A9 push 0x5B7194
	{ uint32_t v = (uint32_t)(0x5B7194u); X86_PUSH32(v); }
	// 0045E2AE push 0x443
	{ uint32_t v = (uint32_t)(0x443u); X86_PUSH32(v); }
	// 0045E2B3 call 0x0006800A
	X86_PUSH32(0x45E2B8u); sub_0006800A(ctx, base);
	// 0045E2B8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E2B9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E2BA mov [0x0064EC4F], al
	{ uint32_t ea = (uint32_t)(0x64EC4Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E2BF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E2A9, __imp__sub_0045E2A9)

X86_FUNC(__imp__sub_0045E2C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E2C0 push 0x5B7198
	{ uint32_t v = (uint32_t)(0x5B7198u); X86_PUSH32(v); }
	// 0045E2C5 push 0x442
	{ uint32_t v = (uint32_t)(0x442u); X86_PUSH32(v); }
	// 0045E2CA call 0x0006800A
	X86_PUSH32(0x45E2CFu); sub_0006800A(ctx, base);
	// 0045E2CF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E2D0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E2D1 mov [0x0064EC50], al
	{ uint32_t ea = (uint32_t)(0x64EC50u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E2D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E2C0, __imp__sub_0045E2C0)

X86_FUNC(__imp__sub_0045E2D7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E2D7 push 0x5B719C
	{ uint32_t v = (uint32_t)(0x5B719Cu); X86_PUSH32(v); }
	// 0045E2DC push 0x441
	{ uint32_t v = (uint32_t)(0x441u); X86_PUSH32(v); }
	// 0045E2E1 call 0x0006800A
	X86_PUSH32(0x45E2E6u); sub_0006800A(ctx, base);
	// 0045E2E6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E2E7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E2E8 mov [0x0064EC51], al
	{ uint32_t ea = (uint32_t)(0x64EC51u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E2ED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E2D7, __imp__sub_0045E2D7)

X86_FUNC(__imp__sub_0045E2EE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E2EE push 0x5B71A0
	{ uint32_t v = (uint32_t)(0x5B71A0u); X86_PUSH32(v); }
	// 0045E2F3 push 0x440
	{ uint32_t v = (uint32_t)(0x440u); X86_PUSH32(v); }
	// 0045E2F8 call 0x0006800A
	X86_PUSH32(0x45E2FDu); sub_0006800A(ctx, base);
	// 0045E2FD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E2FE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E2FF mov [0x0064EC52], al
	{ uint32_t ea = (uint32_t)(0x64EC52u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E304 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E2EE, __imp__sub_0045E2EE)

X86_FUNC(__imp__sub_0045E305) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E305 push 0x5B71A4
	{ uint32_t v = (uint32_t)(0x5B71A4u); X86_PUSH32(v); }
	// 0045E30A push 0x449
	{ uint32_t v = (uint32_t)(0x449u); X86_PUSH32(v); }
	// 0045E30F call 0x0006800A
	X86_PUSH32(0x45E314u); sub_0006800A(ctx, base);
	// 0045E314 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E315 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E316 mov [0x0064EC53], al
	{ uint32_t ea = (uint32_t)(0x64EC53u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E31B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E305, __imp__sub_0045E305)

X86_FUNC(__imp__sub_0045E31C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E31C push 0x5B71A8
	{ uint32_t v = (uint32_t)(0x5B71A8u); X86_PUSH32(v); }
	// 0045E321 push 0x43F
	{ uint32_t v = (uint32_t)(0x43Fu); X86_PUSH32(v); }
	// 0045E326 call 0x0006800A
	X86_PUSH32(0x45E32Bu); sub_0006800A(ctx, base);
	// 0045E32B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E32C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E32D mov [0x0064EC54], al
	{ uint32_t ea = (uint32_t)(0x64EC54u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E332 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E31C, __imp__sub_0045E31C)

X86_FUNC(__imp__sub_0045E333) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E333 push 0x5B71AC
	{ uint32_t v = (uint32_t)(0x5B71ACu); X86_PUSH32(v); }
	// 0045E338 push 0x43E
	{ uint32_t v = (uint32_t)(0x43Eu); X86_PUSH32(v); }
	// 0045E33D call 0x0006800A
	X86_PUSH32(0x45E342u); sub_0006800A(ctx, base);
	// 0045E342 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E343 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E344 mov [0x0064EC55], al
	{ uint32_t ea = (uint32_t)(0x64EC55u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E349 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E333, __imp__sub_0045E333)

X86_FUNC(__imp__sub_0045E34A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E34A push 0x5B71B0
	{ uint32_t v = (uint32_t)(0x5B71B0u); X86_PUSH32(v); }
	// 0045E34F push 0x43D
	{ uint32_t v = (uint32_t)(0x43Du); X86_PUSH32(v); }
	// 0045E354 call 0x0006800A
	X86_PUSH32(0x45E359u); sub_0006800A(ctx, base);
	// 0045E359 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E35A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E35B mov [0x0064EC56], al
	{ uint32_t ea = (uint32_t)(0x64EC56u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E360 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E34A, __imp__sub_0045E34A)

X86_FUNC(__imp__sub_0045E361) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E361 push 0x5B71B4
	{ uint32_t v = (uint32_t)(0x5B71B4u); X86_PUSH32(v); }
	// 0045E366 push 0x43C
	{ uint32_t v = (uint32_t)(0x43Cu); X86_PUSH32(v); }
	// 0045E36B call 0x0006800A
	X86_PUSH32(0x45E370u); sub_0006800A(ctx, base);
	// 0045E370 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E371 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E372 mov [0x0064EC57], al
	{ uint32_t ea = (uint32_t)(0x64EC57u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E377 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E361, __imp__sub_0045E361)

X86_FUNC(__imp__sub_0045E378) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E378 push 0x5B71B8
	{ uint32_t v = (uint32_t)(0x5B71B8u); X86_PUSH32(v); }
	// 0045E37D push 0x7F9
	{ uint32_t v = (uint32_t)(0x7F9u); X86_PUSH32(v); }
	// 0045E382 call 0x0006800A
	X86_PUSH32(0x45E387u); sub_0006800A(ctx, base);
	// 0045E387 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E388 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E389 mov [0x0064EC58], al
	{ uint32_t ea = (uint32_t)(0x64EC58u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E38E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E378, __imp__sub_0045E378)

X86_FUNC(__imp__sub_0045E38F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E38F push 0x5B71BC
	{ uint32_t v = (uint32_t)(0x5B71BCu); X86_PUSH32(v); }
	// 0045E394 push 0xB4D
	{ uint32_t v = (uint32_t)(0xB4Du); X86_PUSH32(v); }
	// 0045E399 call 0x0006800A
	X86_PUSH32(0x45E39Eu); sub_0006800A(ctx, base);
	// 0045E39E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E39F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E3A0 mov [0x0064EC59], al
	{ uint32_t ea = (uint32_t)(0x64EC59u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E3A5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E38F, __imp__sub_0045E38F)

X86_FUNC(__imp__sub_0045E3A6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E3A6 push 0x5B71C0
	{ uint32_t v = (uint32_t)(0x5B71C0u); X86_PUSH32(v); }
	// 0045E3AB push 0xB4C
	{ uint32_t v = (uint32_t)(0xB4Cu); X86_PUSH32(v); }
	// 0045E3B0 call 0x0006800A
	X86_PUSH32(0x45E3B5u); sub_0006800A(ctx, base);
	// 0045E3B5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E3B6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E3B7 mov [0x0064EC5A], al
	{ uint32_t ea = (uint32_t)(0x64EC5Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E3BC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E3A6, __imp__sub_0045E3A6)

X86_FUNC(__imp__sub_0045E3BD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E3BD push 0x5B71C4
	{ uint32_t v = (uint32_t)(0x5B71C4u); X86_PUSH32(v); }
	// 0045E3C2 push 0xB4B
	{ uint32_t v = (uint32_t)(0xB4Bu); X86_PUSH32(v); }
	// 0045E3C7 call 0x0006800A
	X86_PUSH32(0x45E3CCu); sub_0006800A(ctx, base);
	// 0045E3CC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E3CD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E3CE mov [0x0064EC5B], al
	{ uint32_t ea = (uint32_t)(0x64EC5Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E3D3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E3BD, __imp__sub_0045E3BD)

X86_FUNC(__imp__sub_0045E3D4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E3D4 push 0x5B71C8
	{ uint32_t v = (uint32_t)(0x5B71C8u); X86_PUSH32(v); }
	// 0045E3D9 push 0x8A7
	{ uint32_t v = (uint32_t)(0x8A7u); X86_PUSH32(v); }
	// 0045E3DE call 0x0006800A
	X86_PUSH32(0x45E3E3u); sub_0006800A(ctx, base);
	// 0045E3E3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E3E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E3E5 mov [0x0064EC5C], al
	{ uint32_t ea = (uint32_t)(0x64EC5Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E3EA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E3D4, __imp__sub_0045E3D4)

X86_FUNC(__imp__sub_0045E3EB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E3EB push 0x5B71CC
	{ uint32_t v = (uint32_t)(0x5B71CCu); X86_PUSH32(v); }
	// 0045E3F0 push 0x8A6
	{ uint32_t v = (uint32_t)(0x8A6u); X86_PUSH32(v); }
	// 0045E3F5 call 0x0006800A
	X86_PUSH32(0x45E3FAu); sub_0006800A(ctx, base);
	// 0045E3FA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E3FB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E3FC mov [0x0064EC5D], al
	{ uint32_t ea = (uint32_t)(0x64EC5Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E401 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E3EB, __imp__sub_0045E3EB)

X86_FUNC(__imp__sub_0045E402) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E402 push 0x5B71D0
	{ uint32_t v = (uint32_t)(0x5B71D0u); X86_PUSH32(v); }
	// 0045E407 push 0x8A5
	{ uint32_t v = (uint32_t)(0x8A5u); X86_PUSH32(v); }
	// 0045E40C call 0x0006800A
	X86_PUSH32(0x45E411u); sub_0006800A(ctx, base);
	// 0045E411 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E412 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E413 mov [0x0064EC5E], al
	{ uint32_t ea = (uint32_t)(0x64EC5Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E418 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E402, __imp__sub_0045E402)

X86_FUNC(__imp__sub_0045E419) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E419 push 0x5B71D4
	{ uint32_t v = (uint32_t)(0x5B71D4u); X86_PUSH32(v); }
	// 0045E41E push 0x8A4
	{ uint32_t v = (uint32_t)(0x8A4u); X86_PUSH32(v); }
	// 0045E423 call 0x0006800A
	X86_PUSH32(0x45E428u); sub_0006800A(ctx, base);
	// 0045E428 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E429 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E42A mov [0x0064EC5F], al
	{ uint32_t ea = (uint32_t)(0x64EC5Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E42F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E419, __imp__sub_0045E419)

X86_FUNC(__imp__sub_0045E430) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E430 push 0x5B71D8
	{ uint32_t v = (uint32_t)(0x5B71D8u); X86_PUSH32(v); }
	// 0045E435 push 0x8A3
	{ uint32_t v = (uint32_t)(0x8A3u); X86_PUSH32(v); }
	// 0045E43A call 0x0006800A
	X86_PUSH32(0x45E43Fu); sub_0006800A(ctx, base);
	// 0045E43F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E440 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E441 mov [0x0064EC60], al
	{ uint32_t ea = (uint32_t)(0x64EC60u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E446 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E430, __imp__sub_0045E430)

X86_FUNC(__imp__sub_0045E447) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E447 push 0x5B71DC
	{ uint32_t v = (uint32_t)(0x5B71DCu); X86_PUSH32(v); }
	// 0045E44C push 0x9CC
	{ uint32_t v = (uint32_t)(0x9CCu); X86_PUSH32(v); }
	// 0045E451 call 0x0006800A
	X86_PUSH32(0x45E456u); sub_0006800A(ctx, base);
	// 0045E456 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E457 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E458 mov [0x0064EC61], al
	{ uint32_t ea = (uint32_t)(0x64EC61u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E45D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E447, __imp__sub_0045E447)

X86_FUNC(__imp__sub_0045E45E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E45E push 0x5B71E0
	{ uint32_t v = (uint32_t)(0x5B71E0u); X86_PUSH32(v); }
	// 0045E463 push 0x51E
	{ uint32_t v = (uint32_t)(0x51Eu); X86_PUSH32(v); }
	// 0045E468 call 0x0006800A
	X86_PUSH32(0x45E46Du); sub_0006800A(ctx, base);
	// 0045E46D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E46E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E46F mov [0x0064EC62], al
	{ uint32_t ea = (uint32_t)(0x64EC62u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E474 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E45E, __imp__sub_0045E45E)

X86_FUNC(__imp__sub_0045E475) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E475 push 0x5B71E4
	{ uint32_t v = (uint32_t)(0x5B71E4u); X86_PUSH32(v); }
	// 0045E47A push 0x51D
	{ uint32_t v = (uint32_t)(0x51Du); X86_PUSH32(v); }
	// 0045E47F call 0x0006800A
	X86_PUSH32(0x45E484u); sub_0006800A(ctx, base);
	// 0045E484 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E485 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E486 mov [0x0064EC63], al
	{ uint32_t ea = (uint32_t)(0x64EC63u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E48B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E475, __imp__sub_0045E475)

X86_FUNC(__imp__sub_0045E48C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E48C push 0x5B71E8
	{ uint32_t v = (uint32_t)(0x5B71E8u); X86_PUSH32(v); }
	// 0045E491 push 0x51C
	{ uint32_t v = (uint32_t)(0x51Cu); X86_PUSH32(v); }
	// 0045E496 call 0x0006800A
	X86_PUSH32(0x45E49Bu); sub_0006800A(ctx, base);
	// 0045E49B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E49C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E49D mov [0x0064EC64], al
	{ uint32_t ea = (uint32_t)(0x64EC64u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E4A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E48C, __imp__sub_0045E48C)

X86_FUNC(__imp__sub_0045E4A3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E4A3 push 0x5B71EC
	{ uint32_t v = (uint32_t)(0x5B71ECu); X86_PUSH32(v); }
	// 0045E4A8 push 0x51B
	{ uint32_t v = (uint32_t)(0x51Bu); X86_PUSH32(v); }
	// 0045E4AD call 0x0006800A
	X86_PUSH32(0x45E4B2u); sub_0006800A(ctx, base);
	// 0045E4B2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E4B3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E4B4 mov [0x0064EC65], al
	{ uint32_t ea = (uint32_t)(0x64EC65u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E4B9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E4A3, __imp__sub_0045E4A3)

X86_FUNC(__imp__sub_0045E4BA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E4BA push 0x5B71F0
	{ uint32_t v = (uint32_t)(0x5B71F0u); X86_PUSH32(v); }
	// 0045E4BF push 0x51A
	{ uint32_t v = (uint32_t)(0x51Au); X86_PUSH32(v); }
	// 0045E4C4 call 0x0006800A
	X86_PUSH32(0x45E4C9u); sub_0006800A(ctx, base);
	// 0045E4C9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E4CA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E4CB mov [0x0064EC66], al
	{ uint32_t ea = (uint32_t)(0x64EC66u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E4D0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E4BA, __imp__sub_0045E4BA)

X86_FUNC(__imp__sub_0045E4D1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E4D1 push 0x5B71F4
	{ uint32_t v = (uint32_t)(0x5B71F4u); X86_PUSH32(v); }
	// 0045E4D6 push 0x519
	{ uint32_t v = (uint32_t)(0x519u); X86_PUSH32(v); }
	// 0045E4DB call 0x0006800A
	X86_PUSH32(0x45E4E0u); sub_0006800A(ctx, base);
	// 0045E4E0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E4E1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E4E2 mov [0x0064EC67], al
	{ uint32_t ea = (uint32_t)(0x64EC67u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E4E7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E4D1, __imp__sub_0045E4D1)

X86_FUNC(__imp__sub_0045E4E8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E4E8 push 0x5B71F8
	{ uint32_t v = (uint32_t)(0x5B71F8u); X86_PUSH32(v); }
	// 0045E4ED push 0x9DF
	{ uint32_t v = (uint32_t)(0x9DFu); X86_PUSH32(v); }
	// 0045E4F2 call 0x0006800A
	X86_PUSH32(0x45E4F7u); sub_0006800A(ctx, base);
	// 0045E4F7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E4F8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E4F9 mov [0x0064EC68], al
	{ uint32_t ea = (uint32_t)(0x64EC68u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E4FE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E4E8, __imp__sub_0045E4E8)

X86_FUNC(__imp__sub_0045E4FF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E4FF push 0x5B71FC
	{ uint32_t v = (uint32_t)(0x5B71FCu); X86_PUSH32(v); }
	// 0045E504 push 0x9DE
	{ uint32_t v = (uint32_t)(0x9DEu); X86_PUSH32(v); }
	// 0045E509 call 0x0006800A
	X86_PUSH32(0x45E50Eu); sub_0006800A(ctx, base);
	// 0045E50E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E50F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E510 mov [0x0064EC69], al
	{ uint32_t ea = (uint32_t)(0x64EC69u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E515 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E4FF, __imp__sub_0045E4FF)

X86_FUNC(__imp__sub_0045E516) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E516 push 0x5B7200
	{ uint32_t v = (uint32_t)(0x5B7200u); X86_PUSH32(v); }
	// 0045E51B push 0x9DC
	{ uint32_t v = (uint32_t)(0x9DCu); X86_PUSH32(v); }
	// 0045E520 call 0x0006800A
	X86_PUSH32(0x45E525u); sub_0006800A(ctx, base);
	// 0045E525 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E526 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E527 mov [0x0064EC6A], al
	{ uint32_t ea = (uint32_t)(0x64EC6Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E52C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E516, __imp__sub_0045E516)

X86_FUNC(__imp__sub_0045E52D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E52D push 0x5B7204
	{ uint32_t v = (uint32_t)(0x5B7204u); X86_PUSH32(v); }
	// 0045E532 push 0x9DB
	{ uint32_t v = (uint32_t)(0x9DBu); X86_PUSH32(v); }
	// 0045E537 call 0x0006800A
	X86_PUSH32(0x45E53Cu); sub_0006800A(ctx, base);
	// 0045E53C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E53D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E53E mov [0x0064EC6B], al
	{ uint32_t ea = (uint32_t)(0x64EC6Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E543 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E52D, __imp__sub_0045E52D)

X86_FUNC(__imp__sub_0045E544) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E544 push 0x5B7208
	{ uint32_t v = (uint32_t)(0x5B7208u); X86_PUSH32(v); }
	// 0045E549 push 0x9D9
	{ uint32_t v = (uint32_t)(0x9D9u); X86_PUSH32(v); }
	// 0045E54E call 0x0006800A
	X86_PUSH32(0x45E553u); sub_0006800A(ctx, base);
	// 0045E553 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E554 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E555 mov [0x0064EC6C], al
	{ uint32_t ea = (uint32_t)(0x64EC6Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E55A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E544, __imp__sub_0045E544)

X86_FUNC(__imp__sub_0045E55B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E55B push 0x5B720C
	{ uint32_t v = (uint32_t)(0x5B720Cu); X86_PUSH32(v); }
	// 0045E560 push 0x9D7
	{ uint32_t v = (uint32_t)(0x9D7u); X86_PUSH32(v); }
	// 0045E565 call 0x0006800A
	X86_PUSH32(0x45E56Au); sub_0006800A(ctx, base);
	// 0045E56A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E56B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E56C mov [0x0064EC6D], al
	{ uint32_t ea = (uint32_t)(0x64EC6Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E571 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E55B, __imp__sub_0045E55B)

X86_FUNC(__imp__sub_0045E572) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E572 push 0x5B7210
	{ uint32_t v = (uint32_t)(0x5B7210u); X86_PUSH32(v); }
	// 0045E577 push 0x9D6
	{ uint32_t v = (uint32_t)(0x9D6u); X86_PUSH32(v); }
	// 0045E57C call 0x0006800A
	X86_PUSH32(0x45E581u); sub_0006800A(ctx, base);
	// 0045E581 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E582 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E583 mov [0x0064EC6E], al
	{ uint32_t ea = (uint32_t)(0x64EC6Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E588 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E572, __imp__sub_0045E572)

X86_FUNC(__imp__sub_0045E589) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E589 push 0x5B7214
	{ uint32_t v = (uint32_t)(0x5B7214u); X86_PUSH32(v); }
	// 0045E58E push 0x9D5
	{ uint32_t v = (uint32_t)(0x9D5u); X86_PUSH32(v); }
	// 0045E593 call 0x0006800A
	X86_PUSH32(0x45E598u); sub_0006800A(ctx, base);
	// 0045E598 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E599 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E59A mov [0x0064EC6F], al
	{ uint32_t ea = (uint32_t)(0x64EC6Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E59F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E589, __imp__sub_0045E589)

X86_FUNC(__imp__sub_0045E5A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E5A0 push 0x5B7218
	{ uint32_t v = (uint32_t)(0x5B7218u); X86_PUSH32(v); }
	// 0045E5A5 push 0x9D4
	{ uint32_t v = (uint32_t)(0x9D4u); X86_PUSH32(v); }
	// 0045E5AA call 0x0006800A
	X86_PUSH32(0x45E5AFu); sub_0006800A(ctx, base);
	// 0045E5AF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E5B0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E5B1 mov [0x0064EC70], al
	{ uint32_t ea = (uint32_t)(0x64EC70u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E5B6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E5A0, __imp__sub_0045E5A0)

X86_FUNC(__imp__sub_0045E5B7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E5B7 push 0x5B721C
	{ uint32_t v = (uint32_t)(0x5B721Cu); X86_PUSH32(v); }
	// 0045E5BC push 0x9D3
	{ uint32_t v = (uint32_t)(0x9D3u); X86_PUSH32(v); }
	// 0045E5C1 call 0x0006800A
	X86_PUSH32(0x45E5C6u); sub_0006800A(ctx, base);
	// 0045E5C6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E5C7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E5C8 mov [0x0064EC71], al
	{ uint32_t ea = (uint32_t)(0x64EC71u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E5CD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E5B7, __imp__sub_0045E5B7)

X86_FUNC(__imp__sub_0045E5CE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E5CE push 0x5B7220
	{ uint32_t v = (uint32_t)(0x5B7220u); X86_PUSH32(v); }
	// 0045E5D3 push 0x67C
	{ uint32_t v = (uint32_t)(0x67Cu); X86_PUSH32(v); }
	// 0045E5D8 call 0x0006800A
	X86_PUSH32(0x45E5DDu); sub_0006800A(ctx, base);
	// 0045E5DD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E5DE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E5DF mov [0x0064EC72], al
	{ uint32_t ea = (uint32_t)(0x64EC72u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E5E4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E5CE, __imp__sub_0045E5CE)

