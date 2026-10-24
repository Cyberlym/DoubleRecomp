#include "x86_recomp_shared.h"

X86_FUNC(__imp__sub_0045E5E5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E5E5 push 0x5B7224
	{ uint32_t v = (uint32_t)(0x5B7224u); X86_PUSH32(v); }
	// 0045E5EA push 0x67B
	{ uint32_t v = (uint32_t)(0x67Bu); X86_PUSH32(v); }
	// 0045E5EF call 0x0006800A
	X86_PUSH32(0x45E5F4u); sub_0006800A(ctx, base);
	// 0045E5F4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E5F5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E5F6 mov [0x0064EC73], al
	{ uint32_t ea = (uint32_t)(0x64EC73u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E5FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E5E5, __imp__sub_0045E5E5)

X86_FUNC(__imp__sub_0045E5FC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E5FC push 0x5B7228
	{ uint32_t v = (uint32_t)(0x5B7228u); X86_PUSH32(v); }
	// 0045E601 push 0x678
	{ uint32_t v = (uint32_t)(0x678u); X86_PUSH32(v); }
	// 0045E606 call 0x0006800A
	X86_PUSH32(0x45E60Bu); sub_0006800A(ctx, base);
	// 0045E60B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E60C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E60D mov [0x0064EC74], al
	{ uint32_t ea = (uint32_t)(0x64EC74u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E612 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E5FC, __imp__sub_0045E5FC)

X86_FUNC(__imp__sub_0045E613) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E613 push 0x5B722C
	{ uint32_t v = (uint32_t)(0x5B722Cu); X86_PUSH32(v); }
	// 0045E618 push 0x677
	{ uint32_t v = (uint32_t)(0x677u); X86_PUSH32(v); }
	// 0045E61D call 0x0006800A
	X86_PUSH32(0x45E622u); sub_0006800A(ctx, base);
	// 0045E622 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E623 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E624 mov [0x0064EC75], al
	{ uint32_t ea = (uint32_t)(0x64EC75u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E629 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E613, __imp__sub_0045E613)

X86_FUNC(__imp__sub_0045E62A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E62A push 0x5B7230
	{ uint32_t v = (uint32_t)(0x5B7230u); X86_PUSH32(v); }
	// 0045E62F push 0x3F3
	{ uint32_t v = (uint32_t)(0x3F3u); X86_PUSH32(v); }
	// 0045E634 call 0x0006800A
	X86_PUSH32(0x45E639u); sub_0006800A(ctx, base);
	// 0045E639 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E63A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E63B mov [0x0064EC76], al
	{ uint32_t ea = (uint32_t)(0x64EC76u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E640 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E62A, __imp__sub_0045E62A)

X86_FUNC(__imp__sub_0045E641) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E641 push 0x5B7234
	{ uint32_t v = (uint32_t)(0x5B7234u); X86_PUSH32(v); }
	// 0045E646 push 0x3F2
	{ uint32_t v = (uint32_t)(0x3F2u); X86_PUSH32(v); }
	// 0045E64B call 0x0006800A
	X86_PUSH32(0x45E650u); sub_0006800A(ctx, base);
	// 0045E650 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E651 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E652 mov [0x0064EC77], al
	{ uint32_t ea = (uint32_t)(0x64EC77u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E657 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E641, __imp__sub_0045E641)

X86_FUNC(__imp__sub_0045E658) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E658 push 0x5B7238
	{ uint32_t v = (uint32_t)(0x5B7238u); X86_PUSH32(v); }
	// 0045E65D push 0x3F1
	{ uint32_t v = (uint32_t)(0x3F1u); X86_PUSH32(v); }
	// 0045E662 call 0x0006800A
	X86_PUSH32(0x45E667u); sub_0006800A(ctx, base);
	// 0045E667 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E668 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E669 mov [0x0064EC78], al
	{ uint32_t ea = (uint32_t)(0x64EC78u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E66E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E658, __imp__sub_0045E658)

X86_FUNC(__imp__sub_0045E66F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E66F push 0x5B723C
	{ uint32_t v = (uint32_t)(0x5B723Cu); X86_PUSH32(v); }
	// 0045E674 push 0x3F0
	{ uint32_t v = (uint32_t)(0x3F0u); X86_PUSH32(v); }
	// 0045E679 call 0x0006800A
	X86_PUSH32(0x45E67Eu); sub_0006800A(ctx, base);
	// 0045E67E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E67F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E680 mov [0x0064EC79], al
	{ uint32_t ea = (uint32_t)(0x64EC79u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E685 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E66F, __imp__sub_0045E66F)

X86_FUNC(__imp__sub_0045E686) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E686 push 0x5B7240
	{ uint32_t v = (uint32_t)(0x5B7240u); X86_PUSH32(v); }
	// 0045E68B push 0x3EF
	{ uint32_t v = (uint32_t)(0x3EFu); X86_PUSH32(v); }
	// 0045E690 call 0x0006800A
	X86_PUSH32(0x45E695u); sub_0006800A(ctx, base);
	// 0045E695 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E696 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E697 mov [0x0064EC7A], al
	{ uint32_t ea = (uint32_t)(0x64EC7Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E69C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E686, __imp__sub_0045E686)

X86_FUNC(__imp__sub_0045E69D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E69D push 0x5B7244
	{ uint32_t v = (uint32_t)(0x5B7244u); X86_PUSH32(v); }
	// 0045E6A2 push 0x52B
	{ uint32_t v = (uint32_t)(0x52Bu); X86_PUSH32(v); }
	// 0045E6A7 call 0x0006800A
	X86_PUSH32(0x45E6ACu); sub_0006800A(ctx, base);
	// 0045E6AC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E6AD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E6AE mov [0x0064EC7B], al
	{ uint32_t ea = (uint32_t)(0x64EC7Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E6B3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E69D, __imp__sub_0045E69D)

X86_FUNC(__imp__sub_0045E6B4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E6B4 push 0x5B7248
	{ uint32_t v = (uint32_t)(0x5B7248u); X86_PUSH32(v); }
	// 0045E6B9 push 0x3EE
	{ uint32_t v = (uint32_t)(0x3EEu); X86_PUSH32(v); }
	// 0045E6BE call 0x0006800A
	X86_PUSH32(0x45E6C3u); sub_0006800A(ctx, base);
	// 0045E6C3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E6C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E6C5 mov [0x0064EC7C], al
	{ uint32_t ea = (uint32_t)(0x64EC7Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E6CA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E6B4, __imp__sub_0045E6B4)

X86_FUNC(__imp__sub_0045E6CB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E6CB push 0x5B724C
	{ uint32_t v = (uint32_t)(0x5B724Cu); X86_PUSH32(v); }
	// 0045E6D0 push 0x6A8
	{ uint32_t v = (uint32_t)(0x6A8u); X86_PUSH32(v); }
	// 0045E6D5 call 0x0006800A
	X86_PUSH32(0x45E6DAu); sub_0006800A(ctx, base);
	// 0045E6DA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E6DB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E6DC mov [0x0064EC7D], al
	{ uint32_t ea = (uint32_t)(0x64EC7Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E6E1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E6CB, __imp__sub_0045E6CB)

X86_FUNC(__imp__sub_0045E6E2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E6E2 push 0x5B7250
	{ uint32_t v = (uint32_t)(0x5B7250u); X86_PUSH32(v); }
	// 0045E6E7 push 0x6A7
	{ uint32_t v = (uint32_t)(0x6A7u); X86_PUSH32(v); }
	// 0045E6EC call 0x0006800A
	X86_PUSH32(0x45E6F1u); sub_0006800A(ctx, base);
	// 0045E6F1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E6F2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E6F3 mov [0x0064EC7E], al
	{ uint32_t ea = (uint32_t)(0x64EC7Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E6F8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E6E2, __imp__sub_0045E6E2)

X86_FUNC(__imp__sub_0045E6F9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E6F9 push 0x5B7254
	{ uint32_t v = (uint32_t)(0x5B7254u); X86_PUSH32(v); }
	// 0045E6FE push 0x6A6
	{ uint32_t v = (uint32_t)(0x6A6u); X86_PUSH32(v); }
	// 0045E703 call 0x0006800A
	X86_PUSH32(0x45E708u); sub_0006800A(ctx, base);
	// 0045E708 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E709 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E70A mov [0x0064EC7F], al
	{ uint32_t ea = (uint32_t)(0x64EC7Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E70F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E6F9, __imp__sub_0045E6F9)

X86_FUNC(__imp__sub_0045E710) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E710 push 0x5B7258
	{ uint32_t v = (uint32_t)(0x5B7258u); X86_PUSH32(v); }
	// 0045E715 push 0x6A5
	{ uint32_t v = (uint32_t)(0x6A5u); X86_PUSH32(v); }
	// 0045E71A call 0x0006800A
	X86_PUSH32(0x45E71Fu); sub_0006800A(ctx, base);
	// 0045E71F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E720 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E721 mov [0x0064EC80], al
	{ uint32_t ea = (uint32_t)(0x64EC80u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E726 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E710, __imp__sub_0045E710)

X86_FUNC(__imp__sub_0045E727) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E727 push 0x5B725C
	{ uint32_t v = (uint32_t)(0x5B725Cu); X86_PUSH32(v); }
	// 0045E72C push 0x6A4
	{ uint32_t v = (uint32_t)(0x6A4u); X86_PUSH32(v); }
	// 0045E731 call 0x0006800A
	X86_PUSH32(0x45E736u); sub_0006800A(ctx, base);
	// 0045E736 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E737 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E738 mov [0x0064EC81], al
	{ uint32_t ea = (uint32_t)(0x64EC81u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E73D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E727, __imp__sub_0045E727)

X86_FUNC(__imp__sub_0045E73E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E73E push 0x5B7260
	{ uint32_t v = (uint32_t)(0x5B7260u); X86_PUSH32(v); }
	// 0045E743 push 0x6A3
	{ uint32_t v = (uint32_t)(0x6A3u); X86_PUSH32(v); }
	// 0045E748 call 0x0006800A
	X86_PUSH32(0x45E74Du); sub_0006800A(ctx, base);
	// 0045E74D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E74E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E74F mov [0x0064EC82], al
	{ uint32_t ea = (uint32_t)(0x64EC82u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E754 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E73E, __imp__sub_0045E73E)

X86_FUNC(__imp__sub_0045E755) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E755 push 0x5B7264
	{ uint32_t v = (uint32_t)(0x5B7264u); X86_PUSH32(v); }
	// 0045E75A push 0x4AA
	{ uint32_t v = (uint32_t)(0x4AAu); X86_PUSH32(v); }
	// 0045E75F call 0x0006800A
	X86_PUSH32(0x45E764u); sub_0006800A(ctx, base);
	// 0045E764 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E765 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E766 mov [0x0064EC83], al
	{ uint32_t ea = (uint32_t)(0x64EC83u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E76B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E755, __imp__sub_0045E755)

X86_FUNC(__imp__sub_0045E76C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E76C push 0x5B7268
	{ uint32_t v = (uint32_t)(0x5B7268u); X86_PUSH32(v); }
	// 0045E771 push 0xBEC
	{ uint32_t v = (uint32_t)(0xBECu); X86_PUSH32(v); }
	// 0045E776 call 0x0006800A
	X86_PUSH32(0x45E77Bu); sub_0006800A(ctx, base);
	// 0045E77B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E77C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E77D mov [0x0064EC84], al
	{ uint32_t ea = (uint32_t)(0x64EC84u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E782 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E76C, __imp__sub_0045E76C)

X86_FUNC(__imp__sub_0045E783) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E783 push 0x5B726C
	{ uint32_t v = (uint32_t)(0x5B726Cu); X86_PUSH32(v); }
	// 0045E788 push 0xBED
	{ uint32_t v = (uint32_t)(0xBEDu); X86_PUSH32(v); }
	// 0045E78D call 0x0006800A
	X86_PUSH32(0x45E792u); sub_0006800A(ctx, base);
	// 0045E792 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E793 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E794 mov [0x0064EC85], al
	{ uint32_t ea = (uint32_t)(0x64EC85u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E799 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E783, __imp__sub_0045E783)

X86_FUNC(__imp__sub_0045E79A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E79A push 0x5B7270
	{ uint32_t v = (uint32_t)(0x5B7270u); X86_PUSH32(v); }
	// 0045E79F push 0x4A8
	{ uint32_t v = (uint32_t)(0x4A8u); X86_PUSH32(v); }
	// 0045E7A4 call 0x0006800A
	X86_PUSH32(0x45E7A9u); sub_0006800A(ctx, base);
	// 0045E7A9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E7AA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E7AB mov [0x0064EC86], al
	{ uint32_t ea = (uint32_t)(0x64EC86u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E7B0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E79A, __imp__sub_0045E79A)

X86_FUNC(__imp__sub_0045E7B1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E7B1 push 0x5B7274
	{ uint32_t v = (uint32_t)(0x5B7274u); X86_PUSH32(v); }
	// 0045E7B6 push 0x479
	{ uint32_t v = (uint32_t)(0x479u); X86_PUSH32(v); }
	// 0045E7BB call 0x0006800A
	X86_PUSH32(0x45E7C0u); sub_0006800A(ctx, base);
	// 0045E7C0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E7C1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E7C2 mov [0x0064EC87], al
	{ uint32_t ea = (uint32_t)(0x64EC87u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E7C7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E7B1, __imp__sub_0045E7B1)

X86_FUNC(__imp__sub_0045E7C8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E7C8 push 0x5B7278
	{ uint32_t v = (uint32_t)(0x5B7278u); X86_PUSH32(v); }
	// 0045E7CD push 0x58C
	{ uint32_t v = (uint32_t)(0x58Cu); X86_PUSH32(v); }
	// 0045E7D2 call 0x0006800A
	X86_PUSH32(0x45E7D7u); sub_0006800A(ctx, base);
	// 0045E7D7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E7D8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E7D9 mov [0x0064EC88], al
	{ uint32_t ea = (uint32_t)(0x64EC88u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E7DE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E7C8, __imp__sub_0045E7C8)

X86_FUNC(__imp__sub_0045E7DF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E7DF push 0x5B727C
	{ uint32_t v = (uint32_t)(0x5B727Cu); X86_PUSH32(v); }
	// 0045E7E4 push 0x477
	{ uint32_t v = (uint32_t)(0x477u); X86_PUSH32(v); }
	// 0045E7E9 call 0x0006800A
	X86_PUSH32(0x45E7EEu); sub_0006800A(ctx, base);
	// 0045E7EE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E7EF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E7F0 mov [0x0064EC89], al
	{ uint32_t ea = (uint32_t)(0x64EC89u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E7F5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E7DF, __imp__sub_0045E7DF)

X86_FUNC(__imp__sub_0045E7F6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E7F6 push 0x5B7280
	{ uint32_t v = (uint32_t)(0x5B7280u); X86_PUSH32(v); }
	// 0045E7FB push 0x48F
	{ uint32_t v = (uint32_t)(0x48Fu); X86_PUSH32(v); }
	{ X86_SAVE_FLAGS(); sub_0045E800(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045E7F6, __imp__sub_0045E7F6)

X86_FUNC(__imp__sub_0045E800) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E800 call 0x0006800A
	X86_PUSH32(0x45E805u); sub_0006800A(ctx, base);
	// 0045E805 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E806 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E807 mov [0x0064EC8A], al
	{ uint32_t ea = (uint32_t)(0x64EC8Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E80C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E800, __imp__sub_0045E800)

X86_FUNC(__imp__sub_0045E80D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E80D push 0x5B7284
	{ uint32_t v = (uint32_t)(0x5B7284u); X86_PUSH32(v); }
	// 0045E812 push 0x466
	{ uint32_t v = (uint32_t)(0x466u); X86_PUSH32(v); }
	// 0045E817 call 0x0006800A
	X86_PUSH32(0x45E81Cu); sub_0006800A(ctx, base);
	// 0045E81C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E81D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E81E mov [0x0064EC8B], al
	{ uint32_t ea = (uint32_t)(0x64EC8Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E823 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E80D, __imp__sub_0045E80D)

X86_FUNC(__imp__sub_0045E824) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E824 push 0x5B7288
	{ uint32_t v = (uint32_t)(0x5B7288u); X86_PUSH32(v); }
	// 0045E829 push 0x459
	{ uint32_t v = (uint32_t)(0x459u); X86_PUSH32(v); }
	// 0045E82E call 0x0006800A
	X86_PUSH32(0x45E833u); sub_0006800A(ctx, base);
	// 0045E833 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E834 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E835 mov [0x0064EC8C], al
	{ uint32_t ea = (uint32_t)(0x64EC8Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E83A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E824, __imp__sub_0045E824)

X86_FUNC(__imp__sub_0045E83B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E83B push 0x5B728C
	{ uint32_t v = (uint32_t)(0x5B728Cu); X86_PUSH32(v); }
	// 0045E840 push 0x454
	{ uint32_t v = (uint32_t)(0x454u); X86_PUSH32(v); }
	// 0045E845 call 0x0006800A
	X86_PUSH32(0x45E84Au); sub_0006800A(ctx, base);
	// 0045E84A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E84B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E84C mov [0x0064EC8D], al
	{ uint32_t ea = (uint32_t)(0x64EC8Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E851 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E83B, __imp__sub_0045E83B)

X86_FUNC(__imp__sub_0045E852) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E852 push 0x5B7290
	{ uint32_t v = (uint32_t)(0x5B7290u); X86_PUSH32(v); }
	// 0045E857 push 0x452
	{ uint32_t v = (uint32_t)(0x452u); X86_PUSH32(v); }
	// 0045E85C call 0x0006800A
	X86_PUSH32(0x45E861u); sub_0006800A(ctx, base);
	// 0045E861 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E862 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E863 mov [0x0064EC8E], al
	{ uint32_t ea = (uint32_t)(0x64EC8Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E868 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E852, __imp__sub_0045E852)

X86_FUNC(__imp__sub_0045E869) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E869 push 0x5B7294
	{ uint32_t v = (uint32_t)(0x5B7294u); X86_PUSH32(v); }
	// 0045E86E push 0x60A
	{ uint32_t v = (uint32_t)(0x60Au); X86_PUSH32(v); }
	// 0045E873 call 0x0006800A
	X86_PUSH32(0x45E878u); sub_0006800A(ctx, base);
	// 0045E878 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E879 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E87A mov [0x0064EC8F], al
	{ uint32_t ea = (uint32_t)(0x64EC8Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E87F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E869, __imp__sub_0045E869)

X86_FUNC(__imp__sub_0045E880) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E880 push 0x5B7298
	{ uint32_t v = (uint32_t)(0x5B7298u); X86_PUSH32(v); }
	// 0045E885 push 0x609
	{ uint32_t v = (uint32_t)(0x609u); X86_PUSH32(v); }
	// 0045E88A call 0x0006800A
	X86_PUSH32(0x45E88Fu); sub_0006800A(ctx, base);
	// 0045E88F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E890 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E891 mov [0x0064EC90], al
	{ uint32_t ea = (uint32_t)(0x64EC90u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E896 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E880, __imp__sub_0045E880)

X86_FUNC(__imp__sub_0045E897) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E897 push 0x5B729C
	{ uint32_t v = (uint32_t)(0x5B729Cu); X86_PUSH32(v); }
	// 0045E89C push 0x697
	{ uint32_t v = (uint32_t)(0x697u); X86_PUSH32(v); }
	// 0045E8A1 call 0x0006800A
	X86_PUSH32(0x45E8A6u); sub_0006800A(ctx, base);
	// 0045E8A6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E8A7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E8A8 mov [0x0064EC91], al
	{ uint32_t ea = (uint32_t)(0x64EC91u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E8AD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E897, __imp__sub_0045E897)

X86_FUNC(__imp__sub_0045E8AE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E8AE push 0x5B72A0
	{ uint32_t v = (uint32_t)(0x5B72A0u); X86_PUSH32(v); }
	// 0045E8B3 push 0x3ED
	{ uint32_t v = (uint32_t)(0x3EDu); X86_PUSH32(v); }
	// 0045E8B8 call 0x0006800A
	X86_PUSH32(0x45E8BDu); sub_0006800A(ctx, base);
	// 0045E8BD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E8BE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E8BF mov [0x0064EC92], al
	{ uint32_t ea = (uint32_t)(0x64EC92u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E8C4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E8AE, __imp__sub_0045E8AE)

X86_FUNC(__imp__sub_0045E8C5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E8C5 push 0x5B72A4
	{ uint32_t v = (uint32_t)(0x5B72A4u); X86_PUSH32(v); }
	// 0045E8CA push 0x8FD
	{ uint32_t v = (uint32_t)(0x8FDu); X86_PUSH32(v); }
	// 0045E8CF call 0x0006800A
	X86_PUSH32(0x45E8D4u); sub_0006800A(ctx, base);
	// 0045E8D4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E8D5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E8D6 mov [0x0064EC93], al
	{ uint32_t ea = (uint32_t)(0x64EC93u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E8DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E8C5, __imp__sub_0045E8C5)

X86_FUNC(__imp__sub_0045E8DC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E8DC push 0x5B72A8
	{ uint32_t v = (uint32_t)(0x5B72A8u); X86_PUSH32(v); }
	// 0045E8E1 push 0x60D
	{ uint32_t v = (uint32_t)(0x60Du); X86_PUSH32(v); }
	// 0045E8E6 call 0x0006800A
	X86_PUSH32(0x45E8EBu); sub_0006800A(ctx, base);
	// 0045E8EB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E8EC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E8ED mov [0x0064EC94], al
	{ uint32_t ea = (uint32_t)(0x64EC94u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E8F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E8DC, __imp__sub_0045E8DC)

X86_FUNC(__imp__sub_0045E8F3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E8F3 push 0x5B72AC
	{ uint32_t v = (uint32_t)(0x5B72ACu); X86_PUSH32(v); }
	// 0045E8F8 push 0x60C
	{ uint32_t v = (uint32_t)(0x60Cu); X86_PUSH32(v); }
	// 0045E8FD call 0x0006800A
	X86_PUSH32(0x45E902u); sub_0006800A(ctx, base);
	// 0045E902 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E903 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E904 mov [0x0064EC95], al
	{ uint32_t ea = (uint32_t)(0x64EC95u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E909 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E8F3, __imp__sub_0045E8F3)

X86_FUNC(__imp__sub_0045E90A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E90A push 0x5B72B0
	{ uint32_t v = (uint32_t)(0x5B72B0u); X86_PUSH32(v); }
	// 0045E90F push 0x60B
	{ uint32_t v = (uint32_t)(0x60Bu); X86_PUSH32(v); }
	// 0045E914 call 0x0006800A
	X86_PUSH32(0x45E919u); sub_0006800A(ctx, base);
	// 0045E919 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E91A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E91B mov [0x0064EC96], al
	{ uint32_t ea = (uint32_t)(0x64EC96u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E920 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E90A, __imp__sub_0045E90A)

X86_FUNC(__imp__sub_0045E921) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E921 push 0x5B72B4
	{ uint32_t v = (uint32_t)(0x5B72B4u); X86_PUSH32(v); }
	// 0045E926 push 0x608
	{ uint32_t v = (uint32_t)(0x608u); X86_PUSH32(v); }
	// 0045E92B call 0x0006800A
	X86_PUSH32(0x45E930u); sub_0006800A(ctx, base);
	// 0045E930 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E931 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E932 mov [0x0064EC97], al
	{ uint32_t ea = (uint32_t)(0x64EC97u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E937 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E921, __imp__sub_0045E921)

X86_FUNC(__imp__sub_0045E938) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E938 push 0x5B72B8
	{ uint32_t v = (uint32_t)(0x5B72B8u); X86_PUSH32(v); }
	// 0045E93D push 0x607
	{ uint32_t v = (uint32_t)(0x607u); X86_PUSH32(v); }
	// 0045E942 call 0x0006800A
	X86_PUSH32(0x45E947u); sub_0006800A(ctx, base);
	// 0045E947 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E948 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E949 mov [0x0064EC98], al
	{ uint32_t ea = (uint32_t)(0x64EC98u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E94E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E938, __imp__sub_0045E938)

X86_FUNC(__imp__sub_0045E94F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E94F push 0x5B72BC
	{ uint32_t v = (uint32_t)(0x5B72BCu); X86_PUSH32(v); }
	// 0045E954 push 0x606
	{ uint32_t v = (uint32_t)(0x606u); X86_PUSH32(v); }
	// 0045E959 call 0x0006800A
	X86_PUSH32(0x45E95Eu); sub_0006800A(ctx, base);
	// 0045E95E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E95F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E960 mov [0x0064EC99], al
	{ uint32_t ea = (uint32_t)(0x64EC99u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E965 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E94F, __imp__sub_0045E94F)

X86_FUNC(__imp__sub_0045E966) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E966 push 0x5B72C0
	{ uint32_t v = (uint32_t)(0x5B72C0u); X86_PUSH32(v); }
	// 0045E96B push 0x602
	{ uint32_t v = (uint32_t)(0x602u); X86_PUSH32(v); }
	// 0045E970 call 0x0006800A
	X86_PUSH32(0x45E975u); sub_0006800A(ctx, base);
	// 0045E975 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E976 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E977 mov [0x0064EC9A], al
	{ uint32_t ea = (uint32_t)(0x64EC9Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E97C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E966, __imp__sub_0045E966)

X86_FUNC(__imp__sub_0045E97D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E97D push 0x5B72C4
	{ uint32_t v = (uint32_t)(0x5B72C4u); X86_PUSH32(v); }
	// 0045E982 push 0x5FD
	{ uint32_t v = (uint32_t)(0x5FDu); X86_PUSH32(v); }
	// 0045E987 call 0x0006800A
	X86_PUSH32(0x45E98Cu); sub_0006800A(ctx, base);
	// 0045E98C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E98D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E98E mov [0x0064EC9B], al
	{ uint32_t ea = (uint32_t)(0x64EC9Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E993 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E97D, __imp__sub_0045E97D)

X86_FUNC(__imp__sub_0045E994) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E994 push 0x5B72C8
	{ uint32_t v = (uint32_t)(0x5B72C8u); X86_PUSH32(v); }
	// 0045E999 push 0x5FB
	{ uint32_t v = (uint32_t)(0x5FBu); X86_PUSH32(v); }
	// 0045E99E call 0x0006800A
	X86_PUSH32(0x45E9A3u); sub_0006800A(ctx, base);
	// 0045E9A3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E9A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E9A5 mov [0x0064EC9C], al
	{ uint32_t ea = (uint32_t)(0x64EC9Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E9AA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E994, __imp__sub_0045E994)

X86_FUNC(__imp__sub_0045E9AB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E9AB push 0x5B72CC
	{ uint32_t v = (uint32_t)(0x5B72CCu); X86_PUSH32(v); }
	// 0045E9B0 push 0x43B
	{ uint32_t v = (uint32_t)(0x43Bu); X86_PUSH32(v); }
	// 0045E9B5 call 0x0006800A
	X86_PUSH32(0x45E9BAu); sub_0006800A(ctx, base);
	// 0045E9BA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E9BB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E9BC mov [0x0064EC9D], al
	{ uint32_t ea = (uint32_t)(0x64EC9Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E9C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E9AB, __imp__sub_0045E9AB)

X86_FUNC(__imp__sub_0045E9C2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E9C2 push 0x5B72D0
	{ uint32_t v = (uint32_t)(0x5B72D0u); X86_PUSH32(v); }
	// 0045E9C7 push 0xFB0
	{ uint32_t v = (uint32_t)(0xFB0u); X86_PUSH32(v); }
	// 0045E9CC call 0x0006800A
	X86_PUSH32(0x45E9D1u); sub_0006800A(ctx, base);
	// 0045E9D1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E9D2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E9D3 mov [0x0064EC9E], al
	{ uint32_t ea = (uint32_t)(0x64EC9Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E9D8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E9C2, __imp__sub_0045E9C2)

X86_FUNC(__imp__sub_0045E9D9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E9D9 push 0x5B72D4
	{ uint32_t v = (uint32_t)(0x5B72D4u); X86_PUSH32(v); }
	// 0045E9DE push 0x601
	{ uint32_t v = (uint32_t)(0x601u); X86_PUSH32(v); }
	// 0045E9E3 call 0x0006800A
	X86_PUSH32(0x45E9E8u); sub_0006800A(ctx, base);
	// 0045E9E8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E9E9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045E9EA mov [0x0064EC9F], al
	{ uint32_t ea = (uint32_t)(0x64EC9Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045E9EF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E9D9, __imp__sub_0045E9D9)

X86_FUNC(__imp__sub_0045E9F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045E9F0 push 0x5B72D8
	{ uint32_t v = (uint32_t)(0x5B72D8u); X86_PUSH32(v); }
	// 0045E9F5 push 0x5DF
	{ uint32_t v = (uint32_t)(0x5DFu); X86_PUSH32(v); }
	// 0045E9FA call 0x0006800A
	X86_PUSH32(0x45E9FFu); sub_0006800A(ctx, base);
	// 0045E9FF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA00 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA01 mov [0x0064ECA0], al
	{ uint32_t ea = (uint32_t)(0x64ECA0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EA06 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045E9F0, __imp__sub_0045E9F0)

X86_FUNC(__imp__sub_0045EA07) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EA07 push 0x5B72DC
	{ uint32_t v = (uint32_t)(0x5B72DCu); X86_PUSH32(v); }
	// 0045EA0C push 0x4AC
	{ uint32_t v = (uint32_t)(0x4ACu); X86_PUSH32(v); }
	// 0045EA11 call 0x0006800A
	X86_PUSH32(0x45EA16u); sub_0006800A(ctx, base);
	// 0045EA16 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA17 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA18 mov [0x0064ECA1], al
	{ uint32_t ea = (uint32_t)(0x64ECA1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EA1D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EA07, __imp__sub_0045EA07)

X86_FUNC(__imp__sub_0045EA1E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EA1E push 0x5B72E0
	{ uint32_t v = (uint32_t)(0x5B72E0u); X86_PUSH32(v); }
	// 0045EA23 push 0x561
	{ uint32_t v = (uint32_t)(0x561u); X86_PUSH32(v); }
	// 0045EA28 call 0x0006800A
	X86_PUSH32(0x45EA2Du); sub_0006800A(ctx, base);
	// 0045EA2D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA2E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA2F mov [0x0064ECA2], al
	{ uint32_t ea = (uint32_t)(0x64ECA2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EA34 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EA1E, __imp__sub_0045EA1E)

X86_FUNC(__imp__sub_0045EA35) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EA35 push 0x5B72E4
	{ uint32_t v = (uint32_t)(0x5B72E4u); X86_PUSH32(v); }
	// 0045EA3A push 0x560
	{ uint32_t v = (uint32_t)(0x560u); X86_PUSH32(v); }
	// 0045EA3F call 0x0006800A
	X86_PUSH32(0x45EA44u); sub_0006800A(ctx, base);
	// 0045EA44 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA45 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA46 mov [0x0064ECA3], al
	{ uint32_t ea = (uint32_t)(0x64ECA3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EA4B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EA35, __imp__sub_0045EA35)

X86_FUNC(__imp__sub_0045EA4C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EA4C push 0x5B72E8
	{ uint32_t v = (uint32_t)(0x5B72E8u); X86_PUSH32(v); }
	// 0045EA51 push 0x55F
	{ uint32_t v = (uint32_t)(0x55Fu); X86_PUSH32(v); }
	// 0045EA56 call 0x0006800A
	X86_PUSH32(0x45EA5Bu); sub_0006800A(ctx, base);
	// 0045EA5B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA5C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA5D mov [0x0064ECA4], al
	{ uint32_t ea = (uint32_t)(0x64ECA4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EA62 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EA4C, __imp__sub_0045EA4C)

X86_FUNC(__imp__sub_0045EA63) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EA63 push 0x5B72EC
	{ uint32_t v = (uint32_t)(0x5B72ECu); X86_PUSH32(v); }
	// 0045EA68 push 0x4D7
	{ uint32_t v = (uint32_t)(0x4D7u); X86_PUSH32(v); }
	// 0045EA6D call 0x0006800A
	X86_PUSH32(0x45EA72u); sub_0006800A(ctx, base);
	// 0045EA72 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA73 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA74 mov [0x0064ECA5], al
	{ uint32_t ea = (uint32_t)(0x64ECA5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EA79 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EA63, __imp__sub_0045EA63)

X86_FUNC(__imp__sub_0045EA7A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EA7A push 0x5B72F0
	{ uint32_t v = (uint32_t)(0x5B72F0u); X86_PUSH32(v); }
	// 0045EA7F push 0x4D6
	{ uint32_t v = (uint32_t)(0x4D6u); X86_PUSH32(v); }
	// 0045EA84 call 0x0006800A
	X86_PUSH32(0x45EA89u); sub_0006800A(ctx, base);
	// 0045EA89 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA8A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EA8B mov [0x0064ECA6], al
	{ uint32_t ea = (uint32_t)(0x64ECA6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EA90 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EA7A, __imp__sub_0045EA7A)

X86_FUNC(__imp__sub_0045EA91) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EA91 push 0x5B72F4
	{ uint32_t v = (uint32_t)(0x5B72F4u); X86_PUSH32(v); }
	// 0045EA96 push 0x4D5
	{ uint32_t v = (uint32_t)(0x4D5u); X86_PUSH32(v); }
	// 0045EA9B call 0x0006800A
	X86_PUSH32(0x45EAA0u); sub_0006800A(ctx, base);
	// 0045EAA0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EAA1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EAA2 mov [0x0064ECA7], al
	{ uint32_t ea = (uint32_t)(0x64ECA7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EAA7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EA91, __imp__sub_0045EA91)

X86_FUNC(__imp__sub_0045EAA8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EAA8 push 0x5B72F8
	{ uint32_t v = (uint32_t)(0x5B72F8u); X86_PUSH32(v); }
	// 0045EAAD push 0x4D3
	{ uint32_t v = (uint32_t)(0x4D3u); X86_PUSH32(v); }
	// 0045EAB2 call 0x0006800A
	X86_PUSH32(0x45EAB7u); sub_0006800A(ctx, base);
	// 0045EAB7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EAB8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EAB9 mov [0x0064ECA8], al
	{ uint32_t ea = (uint32_t)(0x64ECA8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EABE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EAA8, __imp__sub_0045EAA8)

X86_FUNC(__imp__sub_0045EABF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EABF push 0x5B72FC
	{ uint32_t v = (uint32_t)(0x5B72FCu); X86_PUSH32(v); }
	// 0045EAC4 push 0x4AE
	{ uint32_t v = (uint32_t)(0x4AEu); X86_PUSH32(v); }
	// 0045EAC9 call 0x0006800A
	X86_PUSH32(0x45EACEu); sub_0006800A(ctx, base);
	// 0045EACE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EACF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EAD0 mov [0x0064ECA9], al
	{ uint32_t ea = (uint32_t)(0x64ECA9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EAD5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EABF, __imp__sub_0045EABF)

X86_FUNC(__imp__sub_0045EAD6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EAD6 push 0x5B7300
	{ uint32_t v = (uint32_t)(0x5B7300u); X86_PUSH32(v); }
	// 0045EADB push 0x4CE
	{ uint32_t v = (uint32_t)(0x4CEu); X86_PUSH32(v); }
	// 0045EAE0 call 0x0006800A
	X86_PUSH32(0x45EAE5u); sub_0006800A(ctx, base);
	// 0045EAE5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EAE6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EAE7 mov [0x0064ECAA], al
	{ uint32_t ea = (uint32_t)(0x64ECAAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EAEC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EAD6, __imp__sub_0045EAD6)

X86_FUNC(__imp__sub_0045EAED) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EAED push 0x5B7304
	{ uint32_t v = (uint32_t)(0x5B7304u); X86_PUSH32(v); }
	// 0045EAF2 push 0x4AD
	{ uint32_t v = (uint32_t)(0x4ADu); X86_PUSH32(v); }
	// 0045EAF7 call 0x0006800A
	X86_PUSH32(0x45EAFCu); sub_0006800A(ctx, base);
	// 0045EAFC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EAFD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EAFE mov [0x0064ECAB], al
	{ uint32_t ea = (uint32_t)(0x64ECABu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EB03 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EAED, __imp__sub_0045EAED)

X86_FUNC(__imp__sub_0045EB04) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EB04 push 0x5B7308
	{ uint32_t v = (uint32_t)(0x5B7308u); X86_PUSH32(v); }
	// 0045EB09 push 0x9E1
	{ uint32_t v = (uint32_t)(0x9E1u); X86_PUSH32(v); }
	// 0045EB0E call 0x0006800A
	X86_PUSH32(0x45EB13u); sub_0006800A(ctx, base);
	// 0045EB13 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB14 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB15 mov [0x0064ECAC], al
	{ uint32_t ea = (uint32_t)(0x64ECACu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EB1A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EB04, __imp__sub_0045EB04)

X86_FUNC(__imp__sub_0045EB1B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EB1B push 0x5B730C
	{ uint32_t v = (uint32_t)(0x5B730Cu); X86_PUSH32(v); }
	// 0045EB20 push 0x9E0
	{ uint32_t v = (uint32_t)(0x9E0u); X86_PUSH32(v); }
	// 0045EB25 call 0x0006800A
	X86_PUSH32(0x45EB2Au); sub_0006800A(ctx, base);
	// 0045EB2A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB2B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB2C mov [0x0064ECAD], al
	{ uint32_t ea = (uint32_t)(0x64ECADu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EB31 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EB1B, __imp__sub_0045EB1B)

X86_FUNC(__imp__sub_0045EB32) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EB32 push 0x5B7310
	{ uint32_t v = (uint32_t)(0x5B7310u); X86_PUSH32(v); }
	// 0045EB37 push 0x9DD
	{ uint32_t v = (uint32_t)(0x9DDu); X86_PUSH32(v); }
	// 0045EB3C call 0x0006800A
	X86_PUSH32(0x45EB41u); sub_0006800A(ctx, base);
	// 0045EB41 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB42 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB43 mov [0x0064ECAE], al
	{ uint32_t ea = (uint32_t)(0x64ECAEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EB48 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EB32, __imp__sub_0045EB32)

X86_FUNC(__imp__sub_0045EB49) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EB49 push 0x5B7314
	{ uint32_t v = (uint32_t)(0x5B7314u); X86_PUSH32(v); }
	// 0045EB4E push 0x63F
	{ uint32_t v = (uint32_t)(0x63Fu); X86_PUSH32(v); }
	// 0045EB53 call 0x0006800A
	X86_PUSH32(0x45EB58u); sub_0006800A(ctx, base);
	// 0045EB58 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB59 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB5A mov [0x0064ECAF], al
	{ uint32_t ea = (uint32_t)(0x64ECAFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EB5F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EB49, __imp__sub_0045EB49)

X86_FUNC(__imp__sub_0045EB60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EB60 push 0x5B7318
	{ uint32_t v = (uint32_t)(0x5B7318u); X86_PUSH32(v); }
	// 0045EB65 push 0x579
	{ uint32_t v = (uint32_t)(0x579u); X86_PUSH32(v); }
	// 0045EB6A call 0x0006800A
	X86_PUSH32(0x45EB6Fu); sub_0006800A(ctx, base);
	// 0045EB6F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB70 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB71 mov [0x0064ECB0], al
	{ uint32_t ea = (uint32_t)(0x64ECB0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EB76 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EB60, __imp__sub_0045EB60)

X86_FUNC(__imp__sub_0045EB77) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EB77 push 0x5B731C
	{ uint32_t v = (uint32_t)(0x5B731Cu); X86_PUSH32(v); }
	// 0045EB7C push 0x5FE
	{ uint32_t v = (uint32_t)(0x5FEu); X86_PUSH32(v); }
	// 0045EB81 call 0x0006800A
	X86_PUSH32(0x45EB86u); sub_0006800A(ctx, base);
	// 0045EB86 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB87 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB88 mov [0x0064ECB1], al
	{ uint32_t ea = (uint32_t)(0x64ECB1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EB8D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EB77, __imp__sub_0045EB77)

X86_FUNC(__imp__sub_0045EB8E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EB8E push 0x5B7320
	{ uint32_t v = (uint32_t)(0x5B7320u); X86_PUSH32(v); }
	// 0045EB93 push 0x5FF
	{ uint32_t v = (uint32_t)(0x5FFu); X86_PUSH32(v); }
	// 0045EB98 call 0x0006800A
	X86_PUSH32(0x45EB9Du); sub_0006800A(ctx, base);
	// 0045EB9D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB9E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EB9F mov [0x0064ECB2], al
	{ uint32_t ea = (uint32_t)(0x64ECB2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EBA4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EB8E, __imp__sub_0045EB8E)

X86_FUNC(__imp__sub_0045EBA5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EBA5 push 0x5B7324
	{ uint32_t v = (uint32_t)(0x5B7324u); X86_PUSH32(v); }
	// 0045EBAA push 0x5FC
	{ uint32_t v = (uint32_t)(0x5FCu); X86_PUSH32(v); }
	// 0045EBAF call 0x0006800A
	X86_PUSH32(0x45EBB4u); sub_0006800A(ctx, base);
	// 0045EBB4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EBB5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EBB6 mov [0x0064ECB3], al
	{ uint32_t ea = (uint32_t)(0x64ECB3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EBBB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EBA5, __imp__sub_0045EBA5)

X86_FUNC(__imp__sub_0045EBBC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EBBC push 0x5B7328
	{ uint32_t v = (uint32_t)(0x5B7328u); X86_PUSH32(v); }
	// 0045EBC1 push 0x5FA
	{ uint32_t v = (uint32_t)(0x5FAu); X86_PUSH32(v); }
	// 0045EBC6 call 0x0006800A
	X86_PUSH32(0x45EBCBu); sub_0006800A(ctx, base);
	// 0045EBCB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EBCC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EBCD mov [0x0064ECB4], al
	{ uint32_t ea = (uint32_t)(0x64ECB4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EBD2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EBBC, __imp__sub_0045EBBC)

X86_FUNC(__imp__sub_0045EBD3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EBD3 push 0x5B732C
	{ uint32_t v = (uint32_t)(0x5B732Cu); X86_PUSH32(v); }
	// 0045EBD8 push 0x5F9
	{ uint32_t v = (uint32_t)(0x5F9u); X86_PUSH32(v); }
	// 0045EBDD call 0x0006800A
	X86_PUSH32(0x45EBE2u); sub_0006800A(ctx, base);
	// 0045EBE2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EBE3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EBE4 mov [0x0064ECB5], al
	{ uint32_t ea = (uint32_t)(0x64ECB5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EBE9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EBD3, __imp__sub_0045EBD3)

X86_FUNC(__imp__sub_0045EBEA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EBEA push 0x5B7330
	{ uint32_t v = (uint32_t)(0x5B7330u); X86_PUSH32(v); }
	// 0045EBEF push 0x5F8
	{ uint32_t v = (uint32_t)(0x5F8u); X86_PUSH32(v); }
	// 0045EBF4 call 0x0006800A
	X86_PUSH32(0x45EBF9u); sub_0006800A(ctx, base);
	// 0045EBF9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EBFA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EBFB mov [0x0064ECB6], al
	{ uint32_t ea = (uint32_t)(0x64ECB6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EC00 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EBEA, __imp__sub_0045EBEA)

X86_FUNC(__imp__sub_0045EC01) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EC01 push 0x5B7334
	{ uint32_t v = (uint32_t)(0x5B7334u); X86_PUSH32(v); }
	// 0045EC06 push 0x92B
	{ uint32_t v = (uint32_t)(0x92Bu); X86_PUSH32(v); }
	// 0045EC0B call 0x0006800A
	X86_PUSH32(0x45EC10u); sub_0006800A(ctx, base);
	// 0045EC10 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC11 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC12 mov [0x0064ECB7], al
	{ uint32_t ea = (uint32_t)(0x64ECB7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EC17 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EC01, __imp__sub_0045EC01)

X86_FUNC(__imp__sub_0045EC18) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EC18 push 0x5B7338
	{ uint32_t v = (uint32_t)(0x5B7338u); X86_PUSH32(v); }
	// 0045EC1D push 0x92A
	{ uint32_t v = (uint32_t)(0x92Au); X86_PUSH32(v); }
	// 0045EC22 call 0x0006800A
	X86_PUSH32(0x45EC27u); sub_0006800A(ctx, base);
	// 0045EC27 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC28 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC29 mov [0x0064ECB8], al
	{ uint32_t ea = (uint32_t)(0x64ECB8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EC2E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EC18, __imp__sub_0045EC18)

X86_FUNC(__imp__sub_0045EC2F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EC2F push 0x5B733C
	{ uint32_t v = (uint32_t)(0x5B733Cu); X86_PUSH32(v); }
	// 0045EC34 push 0x929
	{ uint32_t v = (uint32_t)(0x929u); X86_PUSH32(v); }
	// 0045EC39 call 0x0006800A
	X86_PUSH32(0x45EC3Eu); sub_0006800A(ctx, base);
	// 0045EC3E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC3F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC40 mov [0x0064ECB9], al
	{ uint32_t ea = (uint32_t)(0x64ECB9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EC45 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EC2F, __imp__sub_0045EC2F)

X86_FUNC(__imp__sub_0045EC46) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EC46 push 0x5B7340
	{ uint32_t v = (uint32_t)(0x5B7340u); X86_PUSH32(v); }
	// 0045EC4B push 0xFC5
	{ uint32_t v = (uint32_t)(0xFC5u); X86_PUSH32(v); }
	// 0045EC50 call 0x0006800A
	X86_PUSH32(0x45EC55u); sub_0006800A(ctx, base);
	// 0045EC55 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC56 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC57 mov [0x0064ECBA], al
	{ uint32_t ea = (uint32_t)(0x64ECBAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EC5C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EC46, __imp__sub_0045EC46)

X86_FUNC(__imp__sub_0045EC5D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EC5D push 0x5B7344
	{ uint32_t v = (uint32_t)(0x5B7344u); X86_PUSH32(v); }
	// 0045EC62 push 0xBF1
	{ uint32_t v = (uint32_t)(0xBF1u); X86_PUSH32(v); }
	// 0045EC67 call 0x0006800A
	X86_PUSH32(0x45EC6Cu); sub_0006800A(ctx, base);
	// 0045EC6C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC6D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC6E mov [0x0064ECBB], al
	{ uint32_t ea = (uint32_t)(0x64ECBBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EC73 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EC5D, __imp__sub_0045EC5D)

X86_FUNC(__imp__sub_0045EC74) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EC74 push 0x5B7348
	{ uint32_t v = (uint32_t)(0x5B7348u); X86_PUSH32(v); }
	// 0045EC79 push 0xBF0
	{ uint32_t v = (uint32_t)(0xBF0u); X86_PUSH32(v); }
	// 0045EC7E call 0x0006800A
	X86_PUSH32(0x45EC83u); sub_0006800A(ctx, base);
	// 0045EC83 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC84 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC85 mov [0x0064ECBC], al
	{ uint32_t ea = (uint32_t)(0x64ECBCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EC8A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EC74, __imp__sub_0045EC74)

X86_FUNC(__imp__sub_0045EC8B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EC8B push 0x5B734C
	{ uint32_t v = (uint32_t)(0x5B734Cu); X86_PUSH32(v); }
	// 0045EC90 push 0xBEF
	{ uint32_t v = (uint32_t)(0xBEFu); X86_PUSH32(v); }
	// 0045EC95 call 0x0006800A
	X86_PUSH32(0x45EC9Au); sub_0006800A(ctx, base);
	// 0045EC9A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC9B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EC9C mov [0x0064ECBD], al
	{ uint32_t ea = (uint32_t)(0x64ECBDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ECA1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EC8B, __imp__sub_0045EC8B)

X86_FUNC(__imp__sub_0045ECA2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ECA2 push 0x5B7350
	{ uint32_t v = (uint32_t)(0x5B7350u); X86_PUSH32(v); }
	// 0045ECA7 push 0x76D
	{ uint32_t v = (uint32_t)(0x76Du); X86_PUSH32(v); }
	// 0045ECAC call 0x0006800A
	X86_PUSH32(0x45ECB1u); sub_0006800A(ctx, base);
	// 0045ECB1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ECB2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ECB3 mov [0x0064ECBE], al
	{ uint32_t ea = (uint32_t)(0x64ECBEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ECB8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ECA2, __imp__sub_0045ECA2)

X86_FUNC(__imp__sub_0045ECB9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ECB9 push 0x5B7368
	{ uint32_t v = (uint32_t)(0x5B7368u); X86_PUSH32(v); }
	// 0045ECBE push 0x5C3
	{ uint32_t v = (uint32_t)(0x5C3u); X86_PUSH32(v); }
	// 0045ECC3 call 0x0006800A
	X86_PUSH32(0x45ECC8u); sub_0006800A(ctx, base);
	// 0045ECC8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ECC9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ECCA mov [0x0064ECD8], al
	{ uint32_t ea = (uint32_t)(0x64ECD8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ECCF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ECB9, __imp__sub_0045ECB9)

X86_FUNC(__imp__sub_0045ECD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ECD0 push 0x5B736C
	{ uint32_t v = (uint32_t)(0x5B736Cu); X86_PUSH32(v); }
	// 0045ECD5 push 0x5C5
	{ uint32_t v = (uint32_t)(0x5C5u); X86_PUSH32(v); }
	// 0045ECDA call 0x0006800A
	X86_PUSH32(0x45ECDFu); sub_0006800A(ctx, base);
	// 0045ECDF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ECE0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ECE1 mov [0x0064ECD9], al
	{ uint32_t ea = (uint32_t)(0x64ECD9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ECE6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ECD0, __imp__sub_0045ECD0)

X86_FUNC(__imp__sub_0045ECE7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ECE7 push 0x5B7370
	{ uint32_t v = (uint32_t)(0x5B7370u); X86_PUSH32(v); }
	// 0045ECEC push 0x5C7
	{ uint32_t v = (uint32_t)(0x5C7u); X86_PUSH32(v); }
	// 0045ECF1 call 0x0006800A
	X86_PUSH32(0x45ECF6u); sub_0006800A(ctx, base);
	// 0045ECF6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ECF7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ECF8 mov [0x0064ECDA], al
	{ uint32_t ea = (uint32_t)(0x64ECDAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ECFD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ECE7, __imp__sub_0045ECE7)

X86_FUNC(__imp__sub_0045ECFE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ECFE push 0x5B7374
	{ uint32_t v = (uint32_t)(0x5B7374u); X86_PUSH32(v); }
	// 0045ED03 push 0x5C6
	{ uint32_t v = (uint32_t)(0x5C6u); X86_PUSH32(v); }
	// 0045ED08 call 0x0006800A
	X86_PUSH32(0x45ED0Du); sub_0006800A(ctx, base);
	// 0045ED0D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED0E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED0F mov [0x0064ECDB], al
	{ uint32_t ea = (uint32_t)(0x64ECDBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ED14 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ECFE, __imp__sub_0045ECFE)

X86_FUNC(__imp__sub_0045ED15) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ED15 push 0x5B7378
	{ uint32_t v = (uint32_t)(0x5B7378u); X86_PUSH32(v); }
	// 0045ED1A push 0x5CC
	{ uint32_t v = (uint32_t)(0x5CCu); X86_PUSH32(v); }
	// 0045ED1F call 0x0006800A
	X86_PUSH32(0x45ED24u); sub_0006800A(ctx, base);
	// 0045ED24 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED25 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED26 mov [0x0064ECDC], al
	{ uint32_t ea = (uint32_t)(0x64ECDCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ED2B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ED15, __imp__sub_0045ED15)

X86_FUNC(__imp__sub_0045ED2C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ED2C push 0x5B737C
	{ uint32_t v = (uint32_t)(0x5B737Cu); X86_PUSH32(v); }
	// 0045ED31 push 0x581
	{ uint32_t v = (uint32_t)(0x581u); X86_PUSH32(v); }
	// 0045ED36 call 0x0006800A
	X86_PUSH32(0x45ED3Bu); sub_0006800A(ctx, base);
	// 0045ED3B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED3C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED3D mov [0x0064ECDD], al
	{ uint32_t ea = (uint32_t)(0x64ECDDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ED42 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ED2C, __imp__sub_0045ED2C)

X86_FUNC(__imp__sub_0045ED43) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ED43 push 0x5B7380
	{ uint32_t v = (uint32_t)(0x5B7380u); X86_PUSH32(v); }
	// 0045ED48 push 0x5D4
	{ uint32_t v = (uint32_t)(0x5D4u); X86_PUSH32(v); }
	// 0045ED4D call 0x0006800A
	X86_PUSH32(0x45ED52u); sub_0006800A(ctx, base);
	// 0045ED52 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED53 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED54 mov [0x0064ED44], al
	{ uint32_t ea = (uint32_t)(0x64ED44u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ED59 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ED43, __imp__sub_0045ED43)

X86_FUNC(__imp__sub_0045ED5A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ED5A push 0x5B7384
	{ uint32_t v = (uint32_t)(0x5B7384u); X86_PUSH32(v); }
	// 0045ED5F push 0x844
	{ uint32_t v = (uint32_t)(0x844u); X86_PUSH32(v); }
	// 0045ED64 call 0x0006800A
	X86_PUSH32(0x45ED69u); sub_0006800A(ctx, base);
	// 0045ED69 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED6A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED6B mov [0x0064ED45], al
	{ uint32_t ea = (uint32_t)(0x64ED45u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ED70 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ED5A, __imp__sub_0045ED5A)

X86_FUNC(__imp__sub_0045ED71) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ED71 push 0x5B7388
	{ uint32_t v = (uint32_t)(0x5B7388u); X86_PUSH32(v); }
	// 0045ED76 push 0x855
	{ uint32_t v = (uint32_t)(0x855u); X86_PUSH32(v); }
	// 0045ED7B call 0x0006800A
	X86_PUSH32(0x45ED80u); sub_0006800A(ctx, base);
	// 0045ED80 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED81 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED82 mov [0x0064ED88], al
	{ uint32_t ea = (uint32_t)(0x64ED88u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ED87 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ED71, __imp__sub_0045ED71)

X86_FUNC(__imp__sub_0045ED88) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ED88 push 0x5B738C
	{ uint32_t v = (uint32_t)(0x5B738Cu); X86_PUSH32(v); }
	// 0045ED8D push 0x854
	{ uint32_t v = (uint32_t)(0x854u); X86_PUSH32(v); }
	// 0045ED92 call 0x0006800A
	X86_PUSH32(0x45ED97u); sub_0006800A(ctx, base);
	// 0045ED97 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED98 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045ED99 mov [0x0064ED89], al
	{ uint32_t ea = (uint32_t)(0x64ED89u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045ED9E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ED88, __imp__sub_0045ED88)

X86_FUNC(__imp__sub_0045ED9F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045ED9F push 0x5B7390
	{ uint32_t v = (uint32_t)(0x5B7390u); X86_PUSH32(v); }
	// 0045EDA4 push 0x852
	{ uint32_t v = (uint32_t)(0x852u); X86_PUSH32(v); }
	// 0045EDA9 call 0x0006800A
	X86_PUSH32(0x45EDAEu); sub_0006800A(ctx, base);
	// 0045EDAE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EDAF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EDB0 mov [0x0064ED8A], al
	{ uint32_t ea = (uint32_t)(0x64ED8Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EDB5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045ED9F, __imp__sub_0045ED9F)

X86_FUNC(__imp__sub_0045EDB6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EDB6 push 0x5B7394
	{ uint32_t v = (uint32_t)(0x5B7394u); X86_PUSH32(v); }
	// 0045EDBB push 0x851
	{ uint32_t v = (uint32_t)(0x851u); X86_PUSH32(v); }
	// 0045EDC0 call 0x0006800A
	X86_PUSH32(0x45EDC5u); sub_0006800A(ctx, base);
	// 0045EDC5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EDC6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EDC7 mov [0x0064ED8B], al
	{ uint32_t ea = (uint32_t)(0x64ED8Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EDCC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EDB6, __imp__sub_0045EDB6)

X86_FUNC(__imp__sub_0045EDCD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EDCD push 0x5B7398
	{ uint32_t v = (uint32_t)(0x5B7398u); X86_PUSH32(v); }
	// 0045EDD2 push 0x84F
	{ uint32_t v = (uint32_t)(0x84Fu); X86_PUSH32(v); }
	// 0045EDD7 call 0x0006800A
	X86_PUSH32(0x45EDDCu); sub_0006800A(ctx, base);
	// 0045EDDC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EDDD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EDDE mov [0x0064ED8C], al
	{ uint32_t ea = (uint32_t)(0x64ED8Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EDE3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EDCD, __imp__sub_0045EDCD)

X86_FUNC(__imp__sub_0045EDE4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EDE4 push 0x5B739C
	{ uint32_t v = (uint32_t)(0x5B739Cu); X86_PUSH32(v); }
	// 0045EDE9 push 0x84D
	{ uint32_t v = (uint32_t)(0x84Du); X86_PUSH32(v); }
	// 0045EDEE call 0x0006800A
	X86_PUSH32(0x45EDF3u); sub_0006800A(ctx, base);
	// 0045EDF3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EDF4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EDF5 mov [0x0064ED8D], al
	{ uint32_t ea = (uint32_t)(0x64ED8Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EDFA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EDE4, __imp__sub_0045EDE4)

X86_FUNC(__imp__sub_0045EDFB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EDFB push 0x5B73A0
	{ uint32_t v = (uint32_t)(0x5B73A0u); X86_PUSH32(v); }
	// 0045EE00 push 0x84C
	{ uint32_t v = (uint32_t)(0x84Cu); X86_PUSH32(v); }
	// 0045EE05 call 0x0006800A
	X86_PUSH32(0x45EE0Au); sub_0006800A(ctx, base);
	// 0045EE0A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE0B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE0C mov [0x0064ED8E], al
	{ uint32_t ea = (uint32_t)(0x64ED8Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EE11 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EDFB, __imp__sub_0045EDFB)

X86_FUNC(__imp__sub_0045EE12) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EE12 push 0x5B73A4
	{ uint32_t v = (uint32_t)(0x5B73A4u); X86_PUSH32(v); }
	// 0045EE17 push 0x849
	{ uint32_t v = (uint32_t)(0x849u); X86_PUSH32(v); }
	// 0045EE1C call 0x0006800A
	X86_PUSH32(0x45EE21u); sub_0006800A(ctx, base);
	// 0045EE21 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE22 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE23 mov [0x0064ED8F], al
	{ uint32_t ea = (uint32_t)(0x64ED8Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EE28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EE12, __imp__sub_0045EE12)

X86_FUNC(__imp__sub_0045EE29) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EE29 push 0x5B73A8
	{ uint32_t v = (uint32_t)(0x5B73A8u); X86_PUSH32(v); }
	// 0045EE2E push 0x847
	{ uint32_t v = (uint32_t)(0x847u); X86_PUSH32(v); }
	// 0045EE33 call 0x0006800A
	X86_PUSH32(0x45EE38u); sub_0006800A(ctx, base);
	// 0045EE38 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE39 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE3A mov [0x0064ED90], al
	{ uint32_t ea = (uint32_t)(0x64ED90u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EE3F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EE29, __imp__sub_0045EE29)

X86_FUNC(__imp__sub_0045EE40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EE40 push 0x5B73AC
	{ uint32_t v = (uint32_t)(0x5B73ACu); X86_PUSH32(v); }
	// 0045EE45 push 0x843
	{ uint32_t v = (uint32_t)(0x843u); X86_PUSH32(v); }
	// 0045EE4A call 0x0006800A
	X86_PUSH32(0x45EE4Fu); sub_0006800A(ctx, base);
	// 0045EE4F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE50 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE51 mov [0x0064ED91], al
	{ uint32_t ea = (uint32_t)(0x64ED91u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EE56 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EE40, __imp__sub_0045EE40)

X86_FUNC(__imp__sub_0045EE57) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EE57 push 0x5B73B0
	{ uint32_t v = (uint32_t)(0x5B73B0u); X86_PUSH32(v); }
	// 0045EE5C push 0x5D9
	{ uint32_t v = (uint32_t)(0x5D9u); X86_PUSH32(v); }
	// 0045EE61 call 0x0006800A
	X86_PUSH32(0x45EE66u); sub_0006800A(ctx, base);
	// 0045EE66 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE67 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE68 mov [0x0064ED92], al
	{ uint32_t ea = (uint32_t)(0x64ED92u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EE6D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EE57, __imp__sub_0045EE57)

X86_FUNC(__imp__sub_0045EE6E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EE6E push 0x5B73B4
	{ uint32_t v = (uint32_t)(0x5B73B4u); X86_PUSH32(v); }
	// 0045EE73 push 0x5D3
	{ uint32_t v = (uint32_t)(0x5D3u); X86_PUSH32(v); }
	// 0045EE78 call 0x0006800A
	X86_PUSH32(0x45EE7Du); sub_0006800A(ctx, base);
	// 0045EE7D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE7E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE7F mov [0x0064ED93], al
	{ uint32_t ea = (uint32_t)(0x64ED93u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EE84 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EE6E, __imp__sub_0045EE6E)

X86_FUNC(__imp__sub_0045EE85) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EE85 push 0x5B73B8
	{ uint32_t v = (uint32_t)(0x5B73B8u); X86_PUSH32(v); }
	// 0045EE8A push 0x83A
	{ uint32_t v = (uint32_t)(0x83Au); X86_PUSH32(v); }
	// 0045EE8F call 0x0006800A
	X86_PUSH32(0x45EE94u); sub_0006800A(ctx, base);
	// 0045EE94 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE95 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EE96 mov [0x0064ED94], al
	{ uint32_t ea = (uint32_t)(0x64ED94u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EE9B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EE85, __imp__sub_0045EE85)

X86_FUNC(__imp__sub_0045EE9C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EE9C push 0x5B73BC
	{ uint32_t v = (uint32_t)(0x5B73BCu); X86_PUSH32(v); }
	// 0045EEA1 push 0x839
	{ uint32_t v = (uint32_t)(0x839u); X86_PUSH32(v); }
	// 0045EEA6 call 0x0006800A
	X86_PUSH32(0x45EEABu); sub_0006800A(ctx, base);
	// 0045EEAB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EEAC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EEAD mov [0x0064ED95], al
	{ uint32_t ea = (uint32_t)(0x64ED95u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EEB2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EE9C, __imp__sub_0045EE9C)

X86_FUNC(__imp__sub_0045EEB3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EEB3 push 0x5B73C0
	{ uint32_t v = (uint32_t)(0x5B73C0u); X86_PUSH32(v); }
	// 0045EEB8 push 0x838
	{ uint32_t v = (uint32_t)(0x838u); X86_PUSH32(v); }
	// 0045EEBD call 0x0006800A
	X86_PUSH32(0x45EEC2u); sub_0006800A(ctx, base);
	// 0045EEC2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EEC3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EEC4 mov [0x0064ED96], al
	{ uint32_t ea = (uint32_t)(0x64ED96u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EEC9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EEB3, __imp__sub_0045EEB3)

X86_FUNC(__imp__sub_0045EECA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EECA push 0x5B73C4
	{ uint32_t v = (uint32_t)(0x5B73C4u); X86_PUSH32(v); }
	// 0045EECF push 0x837
	{ uint32_t v = (uint32_t)(0x837u); X86_PUSH32(v); }
	// 0045EED4 call 0x0006800A
	X86_PUSH32(0x45EED9u); sub_0006800A(ctx, base);
	// 0045EED9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EEDA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EEDB mov [0x0064ED97], al
	{ uint32_t ea = (uint32_t)(0x64ED97u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EEE0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EECA, __imp__sub_0045EECA)

X86_FUNC(__imp__sub_0045EEE1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EEE1 push 0x5B73C8
	{ uint32_t v = (uint32_t)(0x5B73C8u); X86_PUSH32(v); }
	// 0045EEE6 push 0x836
	{ uint32_t v = (uint32_t)(0x836u); X86_PUSH32(v); }
	// 0045EEEB call 0x0006800A
	X86_PUSH32(0x45EEF0u); sub_0006800A(ctx, base);
	// 0045EEF0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EEF1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EEF2 mov [0x0064ED98], al
	{ uint32_t ea = (uint32_t)(0x64ED98u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EEF7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EEE1, __imp__sub_0045EEE1)

X86_FUNC(__imp__sub_0045EEF8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EEF8 push 0x5B73CC
	{ uint32_t v = (uint32_t)(0x5B73CCu); X86_PUSH32(v); }
	// 0045EEFD push 0x5F3
	{ uint32_t v = (uint32_t)(0x5F3u); X86_PUSH32(v); }
	// 0045EF02 call 0x0006800A
	X86_PUSH32(0x45EF07u); sub_0006800A(ctx, base);
	// 0045EF07 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF08 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF09 mov [0x0064ED99], al
	{ uint32_t ea = (uint32_t)(0x64ED99u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EF0E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EEF8, __imp__sub_0045EEF8)

X86_FUNC(__imp__sub_0045EF0F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EF0F push 0x5B73D0
	{ uint32_t v = (uint32_t)(0x5B73D0u); X86_PUSH32(v); }
	// 0045EF14 push 0x5F2
	{ uint32_t v = (uint32_t)(0x5F2u); X86_PUSH32(v); }
	// 0045EF19 call 0x0006800A
	X86_PUSH32(0x45EF1Eu); sub_0006800A(ctx, base);
	// 0045EF1E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF1F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF20 mov [0x0064ED9A], al
	{ uint32_t ea = (uint32_t)(0x64ED9Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EF25 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EF0F, __imp__sub_0045EF0F)

X86_FUNC(__imp__sub_0045EF26) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EF26 push 0x5B73D4
	{ uint32_t v = (uint32_t)(0x5B73D4u); X86_PUSH32(v); }
	// 0045EF2B push 0x5F1
	{ uint32_t v = (uint32_t)(0x5F1u); X86_PUSH32(v); }
	// 0045EF30 call 0x0006800A
	X86_PUSH32(0x45EF35u); sub_0006800A(ctx, base);
	// 0045EF35 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF36 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF37 mov [0x0064ED9B], al
	{ uint32_t ea = (uint32_t)(0x64ED9Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EF3C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EF26, __imp__sub_0045EF26)

X86_FUNC(__imp__sub_0045EF3D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EF3D push 0x5B73D8
	{ uint32_t v = (uint32_t)(0x5B73D8u); X86_PUSH32(v); }
	// 0045EF42 push 0x5EF
	{ uint32_t v = (uint32_t)(0x5EFu); X86_PUSH32(v); }
	// 0045EF47 call 0x0006800A
	X86_PUSH32(0x45EF4Cu); sub_0006800A(ctx, base);
	// 0045EF4C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF4D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF4E mov [0x0064ED9C], al
	{ uint32_t ea = (uint32_t)(0x64ED9Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EF53 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EF3D, __imp__sub_0045EF3D)

X86_FUNC(__imp__sub_0045EF54) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EF54 push 0x5B73DC
	{ uint32_t v = (uint32_t)(0x5B73DCu); X86_PUSH32(v); }
	// 0045EF59 push 0xDAA
	{ uint32_t v = (uint32_t)(0xDAAu); X86_PUSH32(v); }
	// 0045EF5E call 0x0006800A
	X86_PUSH32(0x45EF63u); sub_0006800A(ctx, base);
	// 0045EF63 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF64 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF65 mov [0x0064ED9D], al
	{ uint32_t ea = (uint32_t)(0x64ED9Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EF6A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EF54, __imp__sub_0045EF54)

X86_FUNC(__imp__sub_0045EF6B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EF6B push 0x5B73E0
	{ uint32_t v = (uint32_t)(0x5B73E0u); X86_PUSH32(v); }
	// 0045EF70 push 0xDA6
	{ uint32_t v = (uint32_t)(0xDA6u); X86_PUSH32(v); }
	// 0045EF75 call 0x0006800A
	X86_PUSH32(0x45EF7Au); sub_0006800A(ctx, base);
	// 0045EF7A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF7B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF7C mov [0x0064ED9E], al
	{ uint32_t ea = (uint32_t)(0x64ED9Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EF81 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EF6B, __imp__sub_0045EF6B)

X86_FUNC(__imp__sub_0045EF82) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EF82 push 0x5B73E4
	{ uint32_t v = (uint32_t)(0x5B73E4u); X86_PUSH32(v); }
	// 0045EF87 push 0xD9E
	{ uint32_t v = (uint32_t)(0xD9Eu); X86_PUSH32(v); }
	// 0045EF8C call 0x0006800A
	X86_PUSH32(0x45EF91u); sub_0006800A(ctx, base);
	// 0045EF91 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF92 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EF93 mov [0x0064ED9F], al
	{ uint32_t ea = (uint32_t)(0x64ED9Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EF98 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EF82, __imp__sub_0045EF82)

X86_FUNC(__imp__sub_0045EF99) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EF99 push 0x5B73E8
	{ uint32_t v = (uint32_t)(0x5B73E8u); X86_PUSH32(v); }
	// 0045EF9E push 0xD97
	{ uint32_t v = (uint32_t)(0xD97u); X86_PUSH32(v); }
	// 0045EFA3 call 0x0006800A
	X86_PUSH32(0x45EFA8u); sub_0006800A(ctx, base);
	// 0045EFA8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EFA9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EFAA mov [0x0064EDA0], al
	{ uint32_t ea = (uint32_t)(0x64EDA0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EFAF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EF99, __imp__sub_0045EF99)

X86_FUNC(__imp__sub_0045EFB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EFB0 push 0x5B73EC
	{ uint32_t v = (uint32_t)(0x5B73ECu); X86_PUSH32(v); }
	// 0045EFB5 push 0xD96
	{ uint32_t v = (uint32_t)(0xD96u); X86_PUSH32(v); }
	// 0045EFBA call 0x0006800A
	X86_PUSH32(0x45EFBFu); sub_0006800A(ctx, base);
	// 0045EFBF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EFC0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EFC1 mov [0x0064EDA1], al
	{ uint32_t ea = (uint32_t)(0x64EDA1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EFC6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EFB0, __imp__sub_0045EFB0)

X86_FUNC(__imp__sub_0045EFC7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EFC7 push 0x5B73F0
	{ uint32_t v = (uint32_t)(0x5B73F0u); X86_PUSH32(v); }
	// 0045EFCC push 0x841
	{ uint32_t v = (uint32_t)(0x841u); X86_PUSH32(v); }
	// 0045EFD1 call 0x0006800A
	X86_PUSH32(0x45EFD6u); sub_0006800A(ctx, base);
	// 0045EFD6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EFD7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EFD8 mov [0x0064EDA2], al
	{ uint32_t ea = (uint32_t)(0x64EDA2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EFDD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EFC7, __imp__sub_0045EFC7)

X86_FUNC(__imp__sub_0045EFDE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EFDE push 0x5B73F4
	{ uint32_t v = (uint32_t)(0x5B73F4u); X86_PUSH32(v); }
	// 0045EFE3 push 0x840
	{ uint32_t v = (uint32_t)(0x840u); X86_PUSH32(v); }
	// 0045EFE8 call 0x0006800A
	X86_PUSH32(0x45EFEDu); sub_0006800A(ctx, base);
	// 0045EFED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EFEE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045EFEF mov [0x0064EDA3], al
	{ uint32_t ea = (uint32_t)(0x64EDA3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045EFF4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EFDE, __imp__sub_0045EFDE)

X86_FUNC(__imp__sub_0045EFF5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045EFF5 push 0x5B73F8
	{ uint32_t v = (uint32_t)(0x5B73F8u); X86_PUSH32(v); }
	// 0045EFFA push 0x83F
	{ uint32_t v = (uint32_t)(0x83Fu); X86_PUSH32(v); }
	// 0045EFFF call 0x0006800A
	X86_PUSH32(0x45F004u); sub_0006800A(ctx, base);
	// 0045F004 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F005 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F006 mov [0x0064EDA4], al
	{ uint32_t ea = (uint32_t)(0x64EDA4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F00B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045EFF5, __imp__sub_0045EFF5)

X86_FUNC(__imp__sub_0045F00C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F00C push 0x5B73FC
	{ uint32_t v = (uint32_t)(0x5B73FCu); X86_PUSH32(v); }
	// 0045F011 push 0x83E
	{ uint32_t v = (uint32_t)(0x83Eu); X86_PUSH32(v); }
	// 0045F016 call 0x0006800A
	X86_PUSH32(0x45F01Bu); sub_0006800A(ctx, base);
	// 0045F01B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F01C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F01D mov [0x0064EDA5], al
	{ uint32_t ea = (uint32_t)(0x64EDA5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F022 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F00C, __imp__sub_0045F00C)

X86_FUNC(__imp__sub_0045F023) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F023 push 0x5B7400
	{ uint32_t v = (uint32_t)(0x5B7400u); X86_PUSH32(v); }
	// 0045F028 push 0x83D
	{ uint32_t v = (uint32_t)(0x83Du); X86_PUSH32(v); }
	// 0045F02D call 0x0006800A
	X86_PUSH32(0x45F032u); sub_0006800A(ctx, base);
	// 0045F032 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F033 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F034 mov [0x0064EDA6], al
	{ uint32_t ea = (uint32_t)(0x64EDA6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F039 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F023, __imp__sub_0045F023)

X86_FUNC(__imp__sub_0045F03A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F03A push 0x5B7404
	{ uint32_t v = (uint32_t)(0x5B7404u); X86_PUSH32(v); }
	// 0045F03F push 0x83C
	{ uint32_t v = (uint32_t)(0x83Cu); X86_PUSH32(v); }
	{ X86_SAVE_FLAGS(); sub_0045F044(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045F03A, __imp__sub_0045F03A)

X86_FUNC(__imp__sub_0045F044) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F044 call 0x0006800A
	X86_PUSH32(0x45F049u); sub_0006800A(ctx, base);
	// 0045F049 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F04A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F04B mov [0x0064EDA7], al
	{ uint32_t ea = (uint32_t)(0x64EDA7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F050 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F044, __imp__sub_0045F044)

X86_FUNC(__imp__sub_0045F051) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F051 push 0x5B7408
	{ uint32_t v = (uint32_t)(0x5B7408u); X86_PUSH32(v); }
	// 0045F056 push 0x83B
	{ uint32_t v = (uint32_t)(0x83Bu); X86_PUSH32(v); }
	// 0045F05B call 0x0006800A
	X86_PUSH32(0x45F060u); sub_0006800A(ctx, base);
	// 0045F060 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F061 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F062 mov [0x0064EDA8], al
	{ uint32_t ea = (uint32_t)(0x64EDA8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F067 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F051, __imp__sub_0045F051)

X86_FUNC(__imp__sub_0045F068) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F068 push 0x5B740C
	{ uint32_t v = (uint32_t)(0x5B740Cu); X86_PUSH32(v); }
	// 0045F06D push 0x695
	{ uint32_t v = (uint32_t)(0x695u); X86_PUSH32(v); }
	// 0045F072 call 0x0006800A
	X86_PUSH32(0x45F077u); sub_0006800A(ctx, base);
	// 0045F077 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F078 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F079 mov [0x0064EDA9], al
	{ uint32_t ea = (uint32_t)(0x64EDA9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F07E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F068, __imp__sub_0045F068)

X86_FUNC(__imp__sub_0045F07F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F07F push 0x5B7410
	{ uint32_t v = (uint32_t)(0x5B7410u); X86_PUSH32(v); }
	// 0045F084 push 0x694
	{ uint32_t v = (uint32_t)(0x694u); X86_PUSH32(v); }
	// 0045F089 call 0x0006800A
	X86_PUSH32(0x45F08Eu); sub_0006800A(ctx, base);
	// 0045F08E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F08F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F090 mov [0x0064EDAA], al
	{ uint32_t ea = (uint32_t)(0x64EDAAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F095 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F07F, __imp__sub_0045F07F)

X86_FUNC(__imp__sub_0045F096) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F096 push 0x5B7414
	{ uint32_t v = (uint32_t)(0x5B7414u); X86_PUSH32(v); }
	// 0045F09B push 0x68E
	{ uint32_t v = (uint32_t)(0x68Eu); X86_PUSH32(v); }
	// 0045F0A0 call 0x0006800A
	X86_PUSH32(0x45F0A5u); sub_0006800A(ctx, base);
	// 0045F0A5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F0A6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F0A7 mov [0x0064EDAB], al
	{ uint32_t ea = (uint32_t)(0x64EDABu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F0AC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F096, __imp__sub_0045F096)

X86_FUNC(__imp__sub_0045F0AD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F0AD push 0x5B7418
	{ uint32_t v = (uint32_t)(0x5B7418u); X86_PUSH32(v); }
	// 0045F0B2 push 0x68C
	{ uint32_t v = (uint32_t)(0x68Cu); X86_PUSH32(v); }
	// 0045F0B7 call 0x0006800A
	X86_PUSH32(0x45F0BCu); sub_0006800A(ctx, base);
	// 0045F0BC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F0BD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F0BE mov [0x0064EDAC], al
	{ uint32_t ea = (uint32_t)(0x64EDACu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F0C3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F0AD, __imp__sub_0045F0AD)

X86_FUNC(__imp__sub_0045F0C4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F0C4 push 0x5B741C
	{ uint32_t v = (uint32_t)(0x5B741Cu); X86_PUSH32(v); }
	// 0045F0C9 push 0x68B
	{ uint32_t v = (uint32_t)(0x68Bu); X86_PUSH32(v); }
	// 0045F0CE call 0x0006800A
	X86_PUSH32(0x45F0D3u); sub_0006800A(ctx, base);
	// 0045F0D3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F0D4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F0D5 mov [0x0064EDAD], al
	{ uint32_t ea = (uint32_t)(0x64EDADu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F0DA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F0C4, __imp__sub_0045F0C4)

X86_FUNC(__imp__sub_0045F0DB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F0DB push 0x5B7420
	{ uint32_t v = (uint32_t)(0x5B7420u); X86_PUSH32(v); }
	// 0045F0E0 push 0x68A
	{ uint32_t v = (uint32_t)(0x68Au); X86_PUSH32(v); }
	// 0045F0E5 call 0x0006800A
	X86_PUSH32(0x45F0EAu); sub_0006800A(ctx, base);
	// 0045F0EA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F0EB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F0EC mov [0x0064EDAE], al
	{ uint32_t ea = (uint32_t)(0x64EDAEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F0F1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F0DB, __imp__sub_0045F0DB)

X86_FUNC(__imp__sub_0045F0F2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F0F2 push 0x5B7424
	{ uint32_t v = (uint32_t)(0x5B7424u); X86_PUSH32(v); }
	// 0045F0F7 push 0x689
	{ uint32_t v = (uint32_t)(0x689u); X86_PUSH32(v); }
	// 0045F0FC call 0x0006800A
	X86_PUSH32(0x45F101u); sub_0006800A(ctx, base);
	// 0045F101 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F102 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F103 mov [0x0064EDAF], al
	{ uint32_t ea = (uint32_t)(0x64EDAFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F108 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F0F2, __imp__sub_0045F0F2)

X86_FUNC(__imp__sub_0045F109) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F109 push 0x5B7428
	{ uint32_t v = (uint32_t)(0x5B7428u); X86_PUSH32(v); }
	// 0045F10E push 0x687
	{ uint32_t v = (uint32_t)(0x687u); X86_PUSH32(v); }
	// 0045F113 call 0x0006800A
	X86_PUSH32(0x45F118u); sub_0006800A(ctx, base);
	// 0045F118 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F119 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F11A mov [0x0064EDB0], al
	{ uint32_t ea = (uint32_t)(0x64EDB0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F11F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F109, __imp__sub_0045F109)

X86_FUNC(__imp__sub_0045F120) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F120 push 0x5B742C
	{ uint32_t v = (uint32_t)(0x5B742Cu); X86_PUSH32(v); }
	// 0045F125 push 0x686
	{ uint32_t v = (uint32_t)(0x686u); X86_PUSH32(v); }
	// 0045F12A call 0x0006800A
	X86_PUSH32(0x45F12Fu); sub_0006800A(ctx, base);
	// 0045F12F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F130 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F131 mov [0x0064EDB1], al
	{ uint32_t ea = (uint32_t)(0x64EDB1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F136 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F120, __imp__sub_0045F120)

X86_FUNC(__imp__sub_0045F137) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F137 push 0x5B7430
	{ uint32_t v = (uint32_t)(0x5B7430u); X86_PUSH32(v); }
	// 0045F13C push 0x5E0
	{ uint32_t v = (uint32_t)(0x5E0u); X86_PUSH32(v); }
	// 0045F141 call 0x0006800A
	X86_PUSH32(0x45F146u); sub_0006800A(ctx, base);
	// 0045F146 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F147 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F148 mov [0x0064EDB2], al
	{ uint32_t ea = (uint32_t)(0x64EDB2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F14D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F137, __imp__sub_0045F137)

X86_FUNC(__imp__sub_0045F14E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F14E push 0x5B7434
	{ uint32_t v = (uint32_t)(0x5B7434u); X86_PUSH32(v); }
	// 0045F153 push 0x5E5
	{ uint32_t v = (uint32_t)(0x5E5u); X86_PUSH32(v); }
	// 0045F158 call 0x0006800A
	X86_PUSH32(0x45F15Du); sub_0006800A(ctx, base);
	// 0045F15D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F15E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F15F mov [0x0064EDB3], al
	{ uint32_t ea = (uint32_t)(0x64EDB3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F164 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F14E, __imp__sub_0045F14E)

X86_FUNC(__imp__sub_0045F165) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F165 push 0x5B7438
	{ uint32_t v = (uint32_t)(0x5B7438u); X86_PUSH32(v); }
	// 0045F16A push 0x63E
	{ uint32_t v = (uint32_t)(0x63Eu); X86_PUSH32(v); }
	// 0045F16F call 0x0006800A
	X86_PUSH32(0x45F174u); sub_0006800A(ctx, base);
	// 0045F174 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F175 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F176 mov [0x0064EDB4], al
	{ uint32_t ea = (uint32_t)(0x64EDB4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F17B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F165, __imp__sub_0045F165)

X86_FUNC(__imp__sub_0045F17C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F17C push 0x5B743C
	{ uint32_t v = (uint32_t)(0x5B743Cu); X86_PUSH32(v); }
	// 0045F181 push 0x63C
	{ uint32_t v = (uint32_t)(0x63Cu); X86_PUSH32(v); }
	// 0045F186 call 0x0006800A
	X86_PUSH32(0x45F18Bu); sub_0006800A(ctx, base);
	// 0045F18B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F18C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F18D mov [0x0064EDB5], al
	{ uint32_t ea = (uint32_t)(0x64EDB5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F192 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F17C, __imp__sub_0045F17C)

X86_FUNC(__imp__sub_0045F193) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F193 push 0x5B7440
	{ uint32_t v = (uint32_t)(0x5B7440u); X86_PUSH32(v); }
	// 0045F198 push 0x63B
	{ uint32_t v = (uint32_t)(0x63Bu); X86_PUSH32(v); }
	// 0045F19D call 0x0006800A
	X86_PUSH32(0x45F1A2u); sub_0006800A(ctx, base);
	// 0045F1A2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F1A3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F1A4 mov [0x0064EDB6], al
	{ uint32_t ea = (uint32_t)(0x64EDB6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F1A9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F193, __imp__sub_0045F193)

X86_FUNC(__imp__sub_0045F1AA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F1AA push 0x5B7444
	{ uint32_t v = (uint32_t)(0x5B7444u); X86_PUSH32(v); }
	// 0045F1AF push 0x638
	{ uint32_t v = (uint32_t)(0x638u); X86_PUSH32(v); }
	// 0045F1B4 call 0x0006800A
	X86_PUSH32(0x45F1B9u); sub_0006800A(ctx, base);
	// 0045F1B9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F1BA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F1BB mov [0x0064EDB7], al
	{ uint32_t ea = (uint32_t)(0x64EDB7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F1C0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F1AA, __imp__sub_0045F1AA)

X86_FUNC(__imp__sub_0045F1C1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F1C1 push 0x5B7448
	{ uint32_t v = (uint32_t)(0x5B7448u); X86_PUSH32(v); }
	// 0045F1C6 push 0x636
	{ uint32_t v = (uint32_t)(0x636u); X86_PUSH32(v); }
	// 0045F1CB call 0x0006800A
	X86_PUSH32(0x45F1D0u); sub_0006800A(ctx, base);
	// 0045F1D0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F1D1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F1D2 mov [0x0064EDB8], al
	{ uint32_t ea = (uint32_t)(0x64EDB8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F1D7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F1C1, __imp__sub_0045F1C1)

X86_FUNC(__imp__sub_0045F1D8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F1D8 push 0x5B744C
	{ uint32_t v = (uint32_t)(0x5B744Cu); X86_PUSH32(v); }
	// 0045F1DD push 0x635
	{ uint32_t v = (uint32_t)(0x635u); X86_PUSH32(v); }
	// 0045F1E2 call 0x0006800A
	X86_PUSH32(0x45F1E7u); sub_0006800A(ctx, base);
	// 0045F1E7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F1E8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F1E9 mov [0x0064EDB9], al
	{ uint32_t ea = (uint32_t)(0x64EDB9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F1EE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F1D8, __imp__sub_0045F1D8)

X86_FUNC(__imp__sub_0045F1EF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F1EF push 0x5B7450
	{ uint32_t v = (uint32_t)(0x5B7450u); X86_PUSH32(v); }
	// 0045F1F4 push 0x62F
	{ uint32_t v = (uint32_t)(0x62Fu); X86_PUSH32(v); }
	// 0045F1F9 call 0x0006800A
	X86_PUSH32(0x45F1FEu); sub_0006800A(ctx, base);
	// 0045F1FE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F1FF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F200 mov [0x0064EDBA], al
	{ uint32_t ea = (uint32_t)(0x64EDBAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F205 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F1EF, __imp__sub_0045F1EF)

X86_FUNC(__imp__sub_0045F206) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F206 push 0x5B7454
	{ uint32_t v = (uint32_t)(0x5B7454u); X86_PUSH32(v); }
	// 0045F20B push 0x62E
	{ uint32_t v = (uint32_t)(0x62Eu); X86_PUSH32(v); }
	// 0045F210 call 0x0006800A
	X86_PUSH32(0x45F215u); sub_0006800A(ctx, base);
	// 0045F215 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F216 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F217 mov [0x0064EDBB], al
	{ uint32_t ea = (uint32_t)(0x64EDBBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F21C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F206, __imp__sub_0045F206)

X86_FUNC(__imp__sub_0045F21D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F21D push 0x5B7458
	{ uint32_t v = (uint32_t)(0x5B7458u); X86_PUSH32(v); }
	// 0045F222 push 0x62C
	{ uint32_t v = (uint32_t)(0x62Cu); X86_PUSH32(v); }
	// 0045F227 call 0x0006800A
	X86_PUSH32(0x45F22Cu); sub_0006800A(ctx, base);
	// 0045F22C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F22D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F22E mov [0x0064EDBC], al
	{ uint32_t ea = (uint32_t)(0x64EDBCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F233 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F21D, __imp__sub_0045F21D)

X86_FUNC(__imp__sub_0045F234) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F234 push 0x5B745C
	{ uint32_t v = (uint32_t)(0x5B745Cu); X86_PUSH32(v); }
	// 0045F239 push 0x624
	{ uint32_t v = (uint32_t)(0x624u); X86_PUSH32(v); }
	// 0045F23E call 0x0006800A
	X86_PUSH32(0x45F243u); sub_0006800A(ctx, base);
	// 0045F243 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F244 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F245 mov [0x0064EDBD], al
	{ uint32_t ea = (uint32_t)(0x64EDBDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F24A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F234, __imp__sub_0045F234)

X86_FUNC(__imp__sub_0045F24B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F24B push 0x5B7460
	{ uint32_t v = (uint32_t)(0x5B7460u); X86_PUSH32(v); }
	// 0045F250 push 0x61F
	{ uint32_t v = (uint32_t)(0x61Fu); X86_PUSH32(v); }
	// 0045F255 call 0x0006800A
	X86_PUSH32(0x45F25Au); sub_0006800A(ctx, base);
	// 0045F25A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F25B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F25C mov [0x0064EDBE], al
	{ uint32_t ea = (uint32_t)(0x64EDBEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F261 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F24B, __imp__sub_0045F24B)

X86_FUNC(__imp__sub_0045F262) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F262 push 0x5B7464
	{ uint32_t v = (uint32_t)(0x5B7464u); X86_PUSH32(v); }
	// 0045F267 push 0x61E
	{ uint32_t v = (uint32_t)(0x61Eu); X86_PUSH32(v); }
	// 0045F26C call 0x0006800A
	X86_PUSH32(0x45F271u); sub_0006800A(ctx, base);
	// 0045F271 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F272 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F273 mov [0x0064EDBF], al
	{ uint32_t ea = (uint32_t)(0x64EDBFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F278 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F262, __imp__sub_0045F262)

X86_FUNC(__imp__sub_0045F279) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F279 push 0x5B7468
	{ uint32_t v = (uint32_t)(0x5B7468u); X86_PUSH32(v); }
	// 0045F27E push 0x61C
	{ uint32_t v = (uint32_t)(0x61Cu); X86_PUSH32(v); }
	// 0045F283 call 0x0006800A
	X86_PUSH32(0x45F288u); sub_0006800A(ctx, base);
	// 0045F288 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F289 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F28A mov [0x0064EDC0], al
	{ uint32_t ea = (uint32_t)(0x64EDC0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F28F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F279, __imp__sub_0045F279)

X86_FUNC(__imp__sub_0045F290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F290 push 0x5B746C
	{ uint32_t v = (uint32_t)(0x5B746Cu); X86_PUSH32(v); }
	// 0045F295 push 0x61B
	{ uint32_t v = (uint32_t)(0x61Bu); X86_PUSH32(v); }
	// 0045F29A call 0x0006800A
	X86_PUSH32(0x45F29Fu); sub_0006800A(ctx, base);
	// 0045F29F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F2A0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F2A1 mov [0x0064EDC1], al
	{ uint32_t ea = (uint32_t)(0x64EDC1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F2A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F290, __imp__sub_0045F290)

X86_FUNC(__imp__sub_0045F2A7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F2A7 push 0x5B7470
	{ uint32_t v = (uint32_t)(0x5B7470u); X86_PUSH32(v); }
	// 0045F2AC push 0x61A
	{ uint32_t v = (uint32_t)(0x61Au); X86_PUSH32(v); }
	// 0045F2B1 call 0x0006800A
	X86_PUSH32(0x45F2B6u); sub_0006800A(ctx, base);
	// 0045F2B6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F2B7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F2B8 mov [0x0064EDC2], al
	{ uint32_t ea = (uint32_t)(0x64EDC2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F2BD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F2A7, __imp__sub_0045F2A7)

X86_FUNC(__imp__sub_0045F2BE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F2BE push 0x5B7474
	{ uint32_t v = (uint32_t)(0x5B7474u); X86_PUSH32(v); }
	// 0045F2C3 push 0x619
	{ uint32_t v = (uint32_t)(0x619u); X86_PUSH32(v); }
	// 0045F2C8 call 0x0006800A
	X86_PUSH32(0x45F2CDu); sub_0006800A(ctx, base);
	// 0045F2CD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F2CE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F2CF mov [0x0064EDC3], al
	{ uint32_t ea = (uint32_t)(0x64EDC3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F2D4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F2BE, __imp__sub_0045F2BE)

X86_FUNC(__imp__sub_0045F2D5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F2D5 push 0x5B7478
	{ uint32_t v = (uint32_t)(0x5B7478u); X86_PUSH32(v); }
	// 0045F2DA push 0x617
	{ uint32_t v = (uint32_t)(0x617u); X86_PUSH32(v); }
	// 0045F2DF call 0x0006800A
	X86_PUSH32(0x45F2E4u); sub_0006800A(ctx, base);
	// 0045F2E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F2E5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F2E6 mov [0x0064EDC4], al
	{ uint32_t ea = (uint32_t)(0x64EDC4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F2EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F2D5, __imp__sub_0045F2D5)

X86_FUNC(__imp__sub_0045F2EC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F2EC push 0x5B747C
	{ uint32_t v = (uint32_t)(0x5B747Cu); X86_PUSH32(v); }
	// 0045F2F1 push 0x5D8
	{ uint32_t v = (uint32_t)(0x5D8u); X86_PUSH32(v); }
	// 0045F2F6 call 0x0006800A
	X86_PUSH32(0x45F2FBu); sub_0006800A(ctx, base);
	// 0045F2FB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F2FC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F2FD mov [0x0064EDC5], al
	{ uint32_t ea = (uint32_t)(0x64EDC5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F302 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F2EC, __imp__sub_0045F2EC)

X86_FUNC(__imp__sub_0045F303) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F303 push 0x5B7480
	{ uint32_t v = (uint32_t)(0x5B7480u); X86_PUSH32(v); }
	// 0045F308 push 0x5D7
	{ uint32_t v = (uint32_t)(0x5D7u); X86_PUSH32(v); }
	// 0045F30D call 0x0006800A
	X86_PUSH32(0x45F312u); sub_0006800A(ctx, base);
	// 0045F312 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F313 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F314 mov [0x0064EDC6], al
	{ uint32_t ea = (uint32_t)(0x64EDC6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F319 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F303, __imp__sub_0045F303)

X86_FUNC(__imp__sub_0045F31A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F31A push 0x5B7484
	{ uint32_t v = (uint32_t)(0x5B7484u); X86_PUSH32(v); }
	// 0045F31F push 0x5D5
	{ uint32_t v = (uint32_t)(0x5D5u); X86_PUSH32(v); }
	// 0045F324 call 0x0006800A
	X86_PUSH32(0x45F329u); sub_0006800A(ctx, base);
	// 0045F329 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F32A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F32B mov [0x0064EDC7], al
	{ uint32_t ea = (uint32_t)(0x64EDC7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F330 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F31A, __imp__sub_0045F31A)

X86_FUNC(__imp__sub_0045F331) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F331 push 0x5B7488
	{ uint32_t v = (uint32_t)(0x5B7488u); X86_PUSH32(v); }
	// 0045F336 push 0xDB3
	{ uint32_t v = (uint32_t)(0xDB3u); X86_PUSH32(v); }
	// 0045F33B call 0x0006800A
	X86_PUSH32(0x45F340u); sub_0006800A(ctx, base);
	// 0045F340 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F341 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F342 mov [0x0064EDC8], al
	{ uint32_t ea = (uint32_t)(0x64EDC8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F347 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F331, __imp__sub_0045F331)

X86_FUNC(__imp__sub_0045F348) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F348 push 0x5B748C
	{ uint32_t v = (uint32_t)(0x5B748Cu); X86_PUSH32(v); }
	// 0045F34D push 0xDB2
	{ uint32_t v = (uint32_t)(0xDB2u); X86_PUSH32(v); }
	// 0045F352 call 0x0006800A
	X86_PUSH32(0x45F357u); sub_0006800A(ctx, base);
	// 0045F357 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F358 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F359 mov [0x0064EDC9], al
	{ uint32_t ea = (uint32_t)(0x64EDC9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F35E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F348, __imp__sub_0045F348)

X86_FUNC(__imp__sub_0045F35F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F35F push 0x5B7490
	{ uint32_t v = (uint32_t)(0x5B7490u); X86_PUSH32(v); }
	// 0045F364 push 0xDB0
	{ uint32_t v = (uint32_t)(0xDB0u); X86_PUSH32(v); }
	// 0045F369 call 0x0006800A
	X86_PUSH32(0x45F36Eu); sub_0006800A(ctx, base);
	// 0045F36E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F36F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F370 mov [0x0064EDCA], al
	{ uint32_t ea = (uint32_t)(0x64EDCAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F375 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F35F, __imp__sub_0045F35F)

X86_FUNC(__imp__sub_0045F376) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F376 push 0x5B7494
	{ uint32_t v = (uint32_t)(0x5B7494u); X86_PUSH32(v); }
	// 0045F37B push 0xDAB
	{ uint32_t v = (uint32_t)(0xDABu); X86_PUSH32(v); }
	// 0045F380 call 0x0006800A
	X86_PUSH32(0x45F385u); sub_0006800A(ctx, base);
	// 0045F385 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F386 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F387 mov [0x0064EDCB], al
	{ uint32_t ea = (uint32_t)(0x64EDCBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F38C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F376, __imp__sub_0045F376)

X86_FUNC(__imp__sub_0045F38D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F38D push 0x5B7498
	{ uint32_t v = (uint32_t)(0x5B7498u); X86_PUSH32(v); }
	// 0045F392 push 0xDA9
	{ uint32_t v = (uint32_t)(0xDA9u); X86_PUSH32(v); }
	// 0045F397 call 0x0006800A
	X86_PUSH32(0x45F39Cu); sub_0006800A(ctx, base);
	// 0045F39C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F39D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F39E mov [0x0064EDCC], al
	{ uint32_t ea = (uint32_t)(0x64EDCCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F3A3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F38D, __imp__sub_0045F38D)

X86_FUNC(__imp__sub_0045F3A4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F3A4 push 0x5B749C
	{ uint32_t v = (uint32_t)(0x5B749Cu); X86_PUSH32(v); }
	// 0045F3A9 push 0xDA8
	{ uint32_t v = (uint32_t)(0xDA8u); X86_PUSH32(v); }
	// 0045F3AE call 0x0006800A
	X86_PUSH32(0x45F3B3u); sub_0006800A(ctx, base);
	// 0045F3B3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F3B4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F3B5 mov [0x0064EDCD], al
	{ uint32_t ea = (uint32_t)(0x64EDCDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F3BA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F3A4, __imp__sub_0045F3A4)

X86_FUNC(__imp__sub_0045F3BB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F3BB push 0x5B74A0
	{ uint32_t v = (uint32_t)(0x5B74A0u); X86_PUSH32(v); }
	// 0045F3C0 push 0xDA5
	{ uint32_t v = (uint32_t)(0xDA5u); X86_PUSH32(v); }
	// 0045F3C5 call 0x0006800A
	X86_PUSH32(0x45F3CAu); sub_0006800A(ctx, base);
	// 0045F3CA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F3CB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F3CC mov [0x0064EDCE], al
	{ uint32_t ea = (uint32_t)(0x64EDCEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F3D1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F3BB, __imp__sub_0045F3BB)

X86_FUNC(__imp__sub_0045F3D2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F3D2 push 0x5B74A4
	{ uint32_t v = (uint32_t)(0x5B74A4u); X86_PUSH32(v); }
	// 0045F3D7 push 0xDA4
	{ uint32_t v = (uint32_t)(0xDA4u); X86_PUSH32(v); }
	// 0045F3DC call 0x0006800A
	X86_PUSH32(0x45F3E1u); sub_0006800A(ctx, base);
	// 0045F3E1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F3E2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F3E3 mov [0x0064EDCF], al
	{ uint32_t ea = (uint32_t)(0x64EDCFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F3E8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F3D2, __imp__sub_0045F3D2)

X86_FUNC(__imp__sub_0045F3E9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F3E9 push 0x5B74A8
	{ uint32_t v = (uint32_t)(0x5B74A8u); X86_PUSH32(v); }
	// 0045F3EE push 0xDA3
	{ uint32_t v = (uint32_t)(0xDA3u); X86_PUSH32(v); }
	// 0045F3F3 call 0x0006800A
	X86_PUSH32(0x45F3F8u); sub_0006800A(ctx, base);
	// 0045F3F8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F3F9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F3FA mov [0x0064EDD0], al
	{ uint32_t ea = (uint32_t)(0x64EDD0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F3FF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F3E9, __imp__sub_0045F3E9)

X86_FUNC(__imp__sub_0045F400) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F400 push 0x5B74AC
	{ uint32_t v = (uint32_t)(0x5B74ACu); X86_PUSH32(v); }
	// 0045F405 push 0xDA2
	{ uint32_t v = (uint32_t)(0xDA2u); X86_PUSH32(v); }
	// 0045F40A call 0x0006800A
	X86_PUSH32(0x45F40Fu); sub_0006800A(ctx, base);
	// 0045F40F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F410 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F411 mov [0x0064EDD1], al
	{ uint32_t ea = (uint32_t)(0x64EDD1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F416 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F400, __imp__sub_0045F400)

X86_FUNC(__imp__sub_0045F417) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F417 push 0x5B74B0
	{ uint32_t v = (uint32_t)(0x5B74B0u); X86_PUSH32(v); }
	// 0045F41C push 0xDA1
	{ uint32_t v = (uint32_t)(0xDA1u); X86_PUSH32(v); }
	// 0045F421 call 0x0006800A
	X86_PUSH32(0x45F426u); sub_0006800A(ctx, base);
	// 0045F426 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F427 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F428 mov [0x0064EDD2], al
	{ uint32_t ea = (uint32_t)(0x64EDD2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F42D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F417, __imp__sub_0045F417)

X86_FUNC(__imp__sub_0045F42E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F42E push 0x5B74B4
	{ uint32_t v = (uint32_t)(0x5B74B4u); X86_PUSH32(v); }
	// 0045F433 push 0xDA0
	{ uint32_t v = (uint32_t)(0xDA0u); X86_PUSH32(v); }
	// 0045F438 call 0x0006800A
	X86_PUSH32(0x45F43Du); sub_0006800A(ctx, base);
	// 0045F43D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F43E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F43F mov [0x0064EDD3], al
	{ uint32_t ea = (uint32_t)(0x64EDD3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F444 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F42E, __imp__sub_0045F42E)

X86_FUNC(__imp__sub_0045F445) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F445 push 0x5B74B8
	{ uint32_t v = (uint32_t)(0x5B74B8u); X86_PUSH32(v); }
	// 0045F44A push 0xD9D
	{ uint32_t v = (uint32_t)(0xD9Du); X86_PUSH32(v); }
	// 0045F44F call 0x0006800A
	X86_PUSH32(0x45F454u); sub_0006800A(ctx, base);
	{ X86_SAVE_FLAGS(); sub_0045F454(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045F445, __imp__sub_0045F445)

X86_FUNC(__imp__sub_0045F454) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F454 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F455 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F456 mov [0x0064EDD4], al
	{ uint32_t ea = (uint32_t)(0x64EDD4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F45B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F454, __imp__sub_0045F454)

X86_FUNC(__imp__sub_0045F45C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F45C push 0x5B74BC
	{ uint32_t v = (uint32_t)(0x5B74BCu); X86_PUSH32(v); }
	// 0045F461 push 0xD92
	{ uint32_t v = (uint32_t)(0xD92u); X86_PUSH32(v); }
	// 0045F466 call 0x0006800A
	X86_PUSH32(0x45F46Bu); sub_0006800A(ctx, base);
	// 0045F46B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F46C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F46D mov [0x0064EDD5], al
	{ uint32_t ea = (uint32_t)(0x64EDD5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F472 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F45C, __imp__sub_0045F45C)

X86_FUNC(__imp__sub_0045F473) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F473 push 0x5B74C0
	{ uint32_t v = (uint32_t)(0x5B74C0u); X86_PUSH32(v); }
	// 0045F478 push 0xD91
	{ uint32_t v = (uint32_t)(0xD91u); X86_PUSH32(v); }
	// 0045F47D call 0x0006800A
	X86_PUSH32(0x45F482u); sub_0006800A(ctx, base);
	// 0045F482 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F483 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F484 mov [0x0064EDD6], al
	{ uint32_t ea = (uint32_t)(0x64EDD6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F489 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F473, __imp__sub_0045F473)

X86_FUNC(__imp__sub_0045F48A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F48A push 0x5B74C4
	{ uint32_t v = (uint32_t)(0x5B74C4u); X86_PUSH32(v); }
	// 0045F48F push 0xD8C
	{ uint32_t v = (uint32_t)(0xD8Cu); X86_PUSH32(v); }
	// 0045F494 call 0x0006800A
	X86_PUSH32(0x45F499u); sub_0006800A(ctx, base);
	// 0045F499 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F49A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F49B mov [0x0064EDD7], al
	{ uint32_t ea = (uint32_t)(0x64EDD7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F4A0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F48A, __imp__sub_0045F48A)

X86_FUNC(__imp__sub_0045F4A1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F4A1 push 0x5B74C8
	{ uint32_t v = (uint32_t)(0x5B74C8u); X86_PUSH32(v); }
	// 0045F4A6 push 0xD8B
	{ uint32_t v = (uint32_t)(0xD8Bu); X86_PUSH32(v); }
	// 0045F4AB call 0x0006800A
	X86_PUSH32(0x45F4B0u); sub_0006800A(ctx, base);
	// 0045F4B0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F4B1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F4B2 mov [0x0064EDD8], al
	{ uint32_t ea = (uint32_t)(0x64EDD8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F4B7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F4A1, __imp__sub_0045F4A1)

X86_FUNC(__imp__sub_0045F4B8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F4B8 push 0x5B74CC
	{ uint32_t v = (uint32_t)(0x5B74CCu); X86_PUSH32(v); }
	// 0045F4BD push 0xD86
	{ uint32_t v = (uint32_t)(0xD86u); X86_PUSH32(v); }
	// 0045F4C2 call 0x0006800A
	X86_PUSH32(0x45F4C7u); sub_0006800A(ctx, base);
	// 0045F4C7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F4C8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F4C9 mov [0x0064EDD9], al
	{ uint32_t ea = (uint32_t)(0x64EDD9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F4CE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F4B8, __imp__sub_0045F4B8)

X86_FUNC(__imp__sub_0045F4CF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F4CF push 0x5B74D0
	{ uint32_t v = (uint32_t)(0x5B74D0u); X86_PUSH32(v); }
	// 0045F4D4 push 0xD85
	{ uint32_t v = (uint32_t)(0xD85u); X86_PUSH32(v); }
	// 0045F4D9 call 0x0006800A
	X86_PUSH32(0x45F4DEu); sub_0006800A(ctx, base);
	// 0045F4DE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F4DF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F4E0 mov [0x0064EDDA], al
	{ uint32_t ea = (uint32_t)(0x64EDDAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F4E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F4CF, __imp__sub_0045F4CF)

X86_FUNC(__imp__sub_0045F4E6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F4E6 push 0x5B74D4
	{ uint32_t v = (uint32_t)(0x5B74D4u); X86_PUSH32(v); }
	// 0045F4EB push 0xD84
	{ uint32_t v = (uint32_t)(0xD84u); X86_PUSH32(v); }
	// 0045F4F0 call 0x0006800A
	X86_PUSH32(0x45F4F5u); sub_0006800A(ctx, base);
	// 0045F4F5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F4F6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F4F7 mov [0x0064EDDB], al
	{ uint32_t ea = (uint32_t)(0x64EDDBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F4FC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F4E6, __imp__sub_0045F4E6)

X86_FUNC(__imp__sub_0045F4FD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F4FD push 0x5B74D8
	{ uint32_t v = (uint32_t)(0x5B74D8u); X86_PUSH32(v); }
	// 0045F502 push 0xBEB
	{ uint32_t v = (uint32_t)(0xBEBu); X86_PUSH32(v); }
	// 0045F507 call 0x0006800A
	X86_PUSH32(0x45F50Cu); sub_0006800A(ctx, base);
	// 0045F50C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F50D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F50E mov [0x0064EDDC], al
	{ uint32_t ea = (uint32_t)(0x64EDDCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F513 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F4FD, __imp__sub_0045F4FD)

X86_FUNC(__imp__sub_0045F514) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F514 push 0x5B74DC
	{ uint32_t v = (uint32_t)(0x5B74DCu); X86_PUSH32(v); }
	// 0045F519 push 0xD82
	{ uint32_t v = (uint32_t)(0xD82u); X86_PUSH32(v); }
	// 0045F51E call 0x0006800A
	X86_PUSH32(0x45F523u); sub_0006800A(ctx, base);
	// 0045F523 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F524 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F525 mov [0x0064EDDD], al
	{ uint32_t ea = (uint32_t)(0x64EDDDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F52A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F514, __imp__sub_0045F514)

X86_FUNC(__imp__sub_0045F52B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F52B push 0x5B74E0
	{ uint32_t v = (uint32_t)(0x5B74E0u); X86_PUSH32(v); }
	// 0045F530 push 0xD81
	{ uint32_t v = (uint32_t)(0xD81u); X86_PUSH32(v); }
	// 0045F535 call 0x0006800A
	X86_PUSH32(0x45F53Au); sub_0006800A(ctx, base);
	// 0045F53A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F53B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F53C mov [0x0064EDDE], al
	{ uint32_t ea = (uint32_t)(0x64EDDEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F541 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F52B, __imp__sub_0045F52B)

X86_FUNC(__imp__sub_0045F542) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F542 push 0x5B74E4
	{ uint32_t v = (uint32_t)(0x5B74E4u); X86_PUSH32(v); }
	// 0045F547 push 0xD95
	{ uint32_t v = (uint32_t)(0xD95u); X86_PUSH32(v); }
	// 0045F54C call 0x0006800A
	X86_PUSH32(0x45F551u); sub_0006800A(ctx, base);
	// 0045F551 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F552 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F553 mov [0x0064EDDF], al
	{ uint32_t ea = (uint32_t)(0x64EDDFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F558 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F542, __imp__sub_0045F542)

X86_FUNC(__imp__sub_0045F559) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F559 push 0x5B74E8
	{ uint32_t v = (uint32_t)(0x5B74E8u); X86_PUSH32(v); }
	// 0045F55E push 0x913
	{ uint32_t v = (uint32_t)(0x913u); X86_PUSH32(v); }
	// 0045F563 call 0x0006800A
	X86_PUSH32(0x45F568u); sub_0006800A(ctx, base);
	// 0045F568 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F569 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F56A mov [0x0064EDE0], al
	{ uint32_t ea = (uint32_t)(0x64EDE0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F56F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F559, __imp__sub_0045F559)

X86_FUNC(__imp__sub_0045F570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F570 push 0x5B74EC
	{ uint32_t v = (uint32_t)(0x5B74ECu); X86_PUSH32(v); }
	// 0045F575 push 0x912
	{ uint32_t v = (uint32_t)(0x912u); X86_PUSH32(v); }
	// 0045F57A call 0x0006800A
	X86_PUSH32(0x45F57Fu); sub_0006800A(ctx, base);
	// 0045F57F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F580 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F581 mov [0x0064EDE1], al
	{ uint32_t ea = (uint32_t)(0x64EDE1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F586 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F570, __imp__sub_0045F570)

X86_FUNC(__imp__sub_0045F587) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F587 push 0x5B74F0
	{ uint32_t v = (uint32_t)(0x5B74F0u); X86_PUSH32(v); }
	// 0045F58C push 0x8FB
	{ uint32_t v = (uint32_t)(0x8FBu); X86_PUSH32(v); }
	// 0045F591 call 0x0006800A
	X86_PUSH32(0x45F596u); sub_0006800A(ctx, base);
	// 0045F596 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F597 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F598 mov [0x0064EDE2], al
	{ uint32_t ea = (uint32_t)(0x64EDE2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F59D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F587, __imp__sub_0045F587)

X86_FUNC(__imp__sub_0045F59E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F59E push 0x5B74F4
	{ uint32_t v = (uint32_t)(0x5B74F4u); X86_PUSH32(v); }
	// 0045F5A3 push 0x8FA
	{ uint32_t v = (uint32_t)(0x8FAu); X86_PUSH32(v); }
	// 0045F5A8 call 0x0006800A
	X86_PUSH32(0x45F5ADu); sub_0006800A(ctx, base);
	// 0045F5AD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F5AE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F5AF mov [0x0064EDE3], al
	{ uint32_t ea = (uint32_t)(0x64EDE3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F5B4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F59E, __imp__sub_0045F59E)

X86_FUNC(__imp__sub_0045F5B5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F5B5 push 0x5B74F8
	{ uint32_t v = (uint32_t)(0x5B74F8u); X86_PUSH32(v); }
	// 0045F5BA push 0x8F9
	{ uint32_t v = (uint32_t)(0x8F9u); X86_PUSH32(v); }
	// 0045F5BF call 0x0006800A
	X86_PUSH32(0x45F5C4u); sub_0006800A(ctx, base);
	// 0045F5C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F5C5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F5C6 mov [0x0064EDE4], al
	{ uint32_t ea = (uint32_t)(0x64EDE4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F5CB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F5B5, __imp__sub_0045F5B5)

X86_FUNC(__imp__sub_0045F5CC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F5CC push 0x5B74FC
	{ uint32_t v = (uint32_t)(0x5B74FCu); X86_PUSH32(v); }
	// 0045F5D1 push 0x8F8
	{ uint32_t v = (uint32_t)(0x8F8u); X86_PUSH32(v); }
	// 0045F5D6 call 0x0006800A
	X86_PUSH32(0x45F5DBu); sub_0006800A(ctx, base);
	// 0045F5DB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F5DC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F5DD mov [0x0064EDE5], al
	{ uint32_t ea = (uint32_t)(0x64EDE5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F5E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F5CC, __imp__sub_0045F5CC)

X86_FUNC(__imp__sub_0045F5E3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F5E3 push 0x5B7500
	{ uint32_t v = (uint32_t)(0x5B7500u); X86_PUSH32(v); }
	// 0045F5E8 push 0x8F7
	{ uint32_t v = (uint32_t)(0x8F7u); X86_PUSH32(v); }
	// 0045F5ED call 0x0006800A
	X86_PUSH32(0x45F5F2u); sub_0006800A(ctx, base);
	// 0045F5F2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F5F3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F5F4 mov [0x0064EDE6], al
	{ uint32_t ea = (uint32_t)(0x64EDE6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F5F9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F5E3, __imp__sub_0045F5E3)

X86_FUNC(__imp__sub_0045F5FA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F5FA push 0x5B7504
	{ uint32_t v = (uint32_t)(0x5B7504u); X86_PUSH32(v); }
	// 0045F5FF push 0x8F6
	{ uint32_t v = (uint32_t)(0x8F6u); X86_PUSH32(v); }
	// 0045F604 call 0x0006800A
	X86_PUSH32(0x45F609u); sub_0006800A(ctx, base);
	// 0045F609 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F60A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F60B mov [0x0064EDE7], al
	{ uint32_t ea = (uint32_t)(0x64EDE7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F610 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F5FA, __imp__sub_0045F5FA)

X86_FUNC(__imp__sub_0045F611) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F611 push 0x5B7508
	{ uint32_t v = (uint32_t)(0x5B7508u); X86_PUSH32(v); }
	// 0045F616 push 0x8F4
	{ uint32_t v = (uint32_t)(0x8F4u); X86_PUSH32(v); }
	// 0045F61B call 0x0006800A
	X86_PUSH32(0x45F620u); sub_0006800A(ctx, base);
	// 0045F620 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F621 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F622 mov [0x0064EDE8], al
	{ uint32_t ea = (uint32_t)(0x64EDE8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F627 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F611, __imp__sub_0045F611)

X86_FUNC(__imp__sub_0045F628) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F628 push 0x5B750C
	{ uint32_t v = (uint32_t)(0x5B750Cu); X86_PUSH32(v); }
	// 0045F62D push 0x631
	{ uint32_t v = (uint32_t)(0x631u); X86_PUSH32(v); }
	// 0045F632 call 0x0006800A
	X86_PUSH32(0x45F637u); sub_0006800A(ctx, base);
	// 0045F637 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F638 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F639 mov [0x0064EDE9], al
	{ uint32_t ea = (uint32_t)(0x64EDE9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F63E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F628, __imp__sub_0045F628)

X86_FUNC(__imp__sub_0045F63F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F63F push 0x5B7510
	{ uint32_t v = (uint32_t)(0x5B7510u); X86_PUSH32(v); }
	// 0045F644 push 0x633
	{ uint32_t v = (uint32_t)(0x633u); X86_PUSH32(v); }
	// 0045F649 call 0x0006800A
	X86_PUSH32(0x45F64Eu); sub_0006800A(ctx, base);
	// 0045F64E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F64F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F650 mov [0x0064EDEA], al
	{ uint32_t ea = (uint32_t)(0x64EDEAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F655 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F63F, __imp__sub_0045F63F)

X86_FUNC(__imp__sub_0045F656) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F656 push 0x5B7514
	{ uint32_t v = (uint32_t)(0x5B7514u); X86_PUSH32(v); }
	// 0045F65B push 0xD98
	{ uint32_t v = (uint32_t)(0xD98u); X86_PUSH32(v); }
	// 0045F660 call 0x0006800A
	X86_PUSH32(0x45F665u); sub_0006800A(ctx, base);
	// 0045F665 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F666 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F667 mov [0x0064EDEB], al
	{ uint32_t ea = (uint32_t)(0x64EDEBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F66C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F656, __imp__sub_0045F656)

X86_FUNC(__imp__sub_0045F66D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F66D push 0x5B7518
	{ uint32_t v = (uint32_t)(0x5B7518u); X86_PUSH32(v); }
	// 0045F672 push 0xD94
	{ uint32_t v = (uint32_t)(0xD94u); X86_PUSH32(v); }
	// 0045F677 call 0x0006800A
	X86_PUSH32(0x45F67Cu); sub_0006800A(ctx, base);
	// 0045F67C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F67D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F67E mov [0x0064EDEC], al
	{ uint32_t ea = (uint32_t)(0x64EDECu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F683 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F66D, __imp__sub_0045F66D)

X86_FUNC(__imp__sub_0045F684) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F684 push 0x5B751C
	{ uint32_t v = (uint32_t)(0x5B751Cu); X86_PUSH32(v); }
	// 0045F689 push 0x622
	{ uint32_t v = (uint32_t)(0x622u); X86_PUSH32(v); }
	// 0045F68E call 0x0006800A
	X86_PUSH32(0x45F693u); sub_0006800A(ctx, base);
	// 0045F693 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F694 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F695 mov [0x0064EDED], al
	{ uint32_t ea = (uint32_t)(0x64EDEDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F69A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F684, __imp__sub_0045F684)

X86_FUNC(__imp__sub_0045F69B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F69B push 0x5B7520
	{ uint32_t v = (uint32_t)(0x5B7520u); X86_PUSH32(v); }
	// 0045F6A0 push 0x8F3
	{ uint32_t v = (uint32_t)(0x8F3u); X86_PUSH32(v); }
	// 0045F6A5 call 0x0006800A
	X86_PUSH32(0x45F6AAu); sub_0006800A(ctx, base);
	// 0045F6AA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F6AB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F6AC mov [0x0064EDEE], al
	{ uint32_t ea = (uint32_t)(0x64EDEEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F6B1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F69B, __imp__sub_0045F69B)

X86_FUNC(__imp__sub_0045F6B2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F6B2 push 0x5B7524
	{ uint32_t v = (uint32_t)(0x5B7524u); X86_PUSH32(v); }
	// 0045F6B7 push 0x8F2
	{ uint32_t v = (uint32_t)(0x8F2u); X86_PUSH32(v); }
	// 0045F6BC call 0x0006800A
	X86_PUSH32(0x45F6C1u); sub_0006800A(ctx, base);
	// 0045F6C1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F6C2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F6C3 mov [0x0064EDEF], al
	{ uint32_t ea = (uint32_t)(0x64EDEFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F6C8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F6B2, __imp__sub_0045F6B2)

X86_FUNC(__imp__sub_0045F6C9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F6C9 push 0x5B7528
	{ uint32_t v = (uint32_t)(0x5B7528u); X86_PUSH32(v); }
	// 0045F6CE push 0x8F1
	{ uint32_t v = (uint32_t)(0x8F1u); X86_PUSH32(v); }
	// 0045F6D3 call 0x0006800A
	X86_PUSH32(0x45F6D8u); sub_0006800A(ctx, base);
	// 0045F6D8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F6D9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F6DA mov [0x0064EDF0], al
	{ uint32_t ea = (uint32_t)(0x64EDF0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F6DF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F6C9, __imp__sub_0045F6C9)

X86_FUNC(__imp__sub_0045F6E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F6E0 push 0x5B752C
	{ uint32_t v = (uint32_t)(0x5B752Cu); X86_PUSH32(v); }
	// 0045F6E5 push 0x8F0
	{ uint32_t v = (uint32_t)(0x8F0u); X86_PUSH32(v); }
	// 0045F6EA call 0x0006800A
	X86_PUSH32(0x45F6EFu); sub_0006800A(ctx, base);
	// 0045F6EF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	{ X86_SAVE_FLAGS(); sub_0045F6F0(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0045F6E0, __imp__sub_0045F6E0)

X86_FUNC(__imp__sub_0045F6F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F6F0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F6F1 mov [0x0064EDF1], al
	{ uint32_t ea = (uint32_t)(0x64EDF1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F6F6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F6F0, __imp__sub_0045F6F0)

X86_FUNC(__imp__sub_0045F6F7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F6F7 push 0x5B7530
	{ uint32_t v = (uint32_t)(0x5B7530u); X86_PUSH32(v); }
	// 0045F6FC push 0xD79
	{ uint32_t v = (uint32_t)(0xD79u); X86_PUSH32(v); }
	// 0045F701 call 0x0006800A
	X86_PUSH32(0x45F706u); sub_0006800A(ctx, base);
	// 0045F706 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F707 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F708 mov [0x0064EDF2], al
	{ uint32_t ea = (uint32_t)(0x64EDF2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F70D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F6F7, __imp__sub_0045F6F7)

X86_FUNC(__imp__sub_0045F70E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F70E push 0x5B7534
	{ uint32_t v = (uint32_t)(0x5B7534u); X86_PUSH32(v); }
	// 0045F713 push 0x8EF
	{ uint32_t v = (uint32_t)(0x8EFu); X86_PUSH32(v); }
	// 0045F718 call 0x0006800A
	X86_PUSH32(0x45F71Du); sub_0006800A(ctx, base);
	// 0045F71D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F71E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F71F mov [0x0064EDF3], al
	{ uint32_t ea = (uint32_t)(0x64EDF3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F724 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F70E, __imp__sub_0045F70E)

X86_FUNC(__imp__sub_0045F725) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F725 push 0x5B7538
	{ uint32_t v = (uint32_t)(0x5B7538u); X86_PUSH32(v); }
	// 0045F72A push 0x8EE
	{ uint32_t v = (uint32_t)(0x8EEu); X86_PUSH32(v); }
	// 0045F72F call 0x0006800A
	X86_PUSH32(0x45F734u); sub_0006800A(ctx, base);
	// 0045F734 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F735 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F736 mov [0x0064EDF4], al
	{ uint32_t ea = (uint32_t)(0x64EDF4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F73B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F725, __imp__sub_0045F725)

X86_FUNC(__imp__sub_0045F73C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F73C push 0x5B753C
	{ uint32_t v = (uint32_t)(0x5B753Cu); X86_PUSH32(v); }
	// 0045F741 push 0xD9B
	{ uint32_t v = (uint32_t)(0xD9Bu); X86_PUSH32(v); }
	// 0045F746 call 0x0006800A
	X86_PUSH32(0x45F74Bu); sub_0006800A(ctx, base);
	// 0045F74B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F74C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F74D mov [0x0064EDF5], al
	{ uint32_t ea = (uint32_t)(0x64EDF5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F752 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F73C, __imp__sub_0045F73C)

X86_FUNC(__imp__sub_0045F753) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F753 push 0x5B7540
	{ uint32_t v = (uint32_t)(0x5B7540u); X86_PUSH32(v); }
	// 0045F758 push 0x639
	{ uint32_t v = (uint32_t)(0x639u); X86_PUSH32(v); }
	// 0045F75D call 0x0006800A
	X86_PUSH32(0x45F762u); sub_0006800A(ctx, base);
	// 0045F762 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F763 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F764 mov [0x0064EDF6], al
	{ uint32_t ea = (uint32_t)(0x64EDF6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F769 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F753, __imp__sub_0045F753)

X86_FUNC(__imp__sub_0045F76A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F76A push 0x5B7544
	{ uint32_t v = (uint32_t)(0x5B7544u); X86_PUSH32(v); }
	// 0045F76F push 0xD93
	{ uint32_t v = (uint32_t)(0xD93u); X86_PUSH32(v); }
	// 0045F774 call 0x0006800A
	X86_PUSH32(0x45F779u); sub_0006800A(ctx, base);
	// 0045F779 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F77A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F77B mov [0x0064EDF7], al
	{ uint32_t ea = (uint32_t)(0x64EDF7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F780 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F76A, __imp__sub_0045F76A)

X86_FUNC(__imp__sub_0045F781) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F781 push 0x5B7548
	{ uint32_t v = (uint32_t)(0x5B7548u); X86_PUSH32(v); }
	// 0045F786 push 0x63A
	{ uint32_t v = (uint32_t)(0x63Au); X86_PUSH32(v); }
	// 0045F78B call 0x0006800A
	X86_PUSH32(0x45F790u); sub_0006800A(ctx, base);
	// 0045F790 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F791 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F792 mov [0x0064EDF8], al
	{ uint32_t ea = (uint32_t)(0x64EDF8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F797 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F781, __imp__sub_0045F781)

X86_FUNC(__imp__sub_0045F798) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F798 push 0x5B754C
	{ uint32_t v = (uint32_t)(0x5B754Cu); X86_PUSH32(v); }
	// 0045F79D push 0x692
	{ uint32_t v = (uint32_t)(0x692u); X86_PUSH32(v); }
	// 0045F7A2 call 0x0006800A
	X86_PUSH32(0x45F7A7u); sub_0006800A(ctx, base);
	// 0045F7A7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F7A8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F7A9 mov [0x0064EDF9], al
	{ uint32_t ea = (uint32_t)(0x64EDF9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F7AE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F798, __imp__sub_0045F798)

X86_FUNC(__imp__sub_0045F7AF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F7AF push 0x5B7550
	{ uint32_t v = (uint32_t)(0x5B7550u); X86_PUSH32(v); }
	// 0045F7B4 push 0x5F0
	{ uint32_t v = (uint32_t)(0x5F0u); X86_PUSH32(v); }
	// 0045F7B9 call 0x0006800A
	X86_PUSH32(0x45F7BEu); sub_0006800A(ctx, base);
	// 0045F7BE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F7BF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F7C0 mov [0x0064EDFA], al
	{ uint32_t ea = (uint32_t)(0x64EDFAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F7C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F7AF, __imp__sub_0045F7AF)

X86_FUNC(__imp__sub_0045F7C6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F7C6 push 0x5B7554
	{ uint32_t v = (uint32_t)(0x5B7554u); X86_PUSH32(v); }
	// 0045F7CB push 0xD7F
	{ uint32_t v = (uint32_t)(0xD7Fu); X86_PUSH32(v); }
	// 0045F7D0 call 0x0006800A
	X86_PUSH32(0x45F7D5u); sub_0006800A(ctx, base);
	// 0045F7D5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F7D6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F7D7 mov [0x0064EDFB], al
	{ uint32_t ea = (uint32_t)(0x64EDFBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F7DC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F7C6, __imp__sub_0045F7C6)

X86_FUNC(__imp__sub_0045F7DD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F7DD push 0x5B7558
	{ uint32_t v = (uint32_t)(0x5B7558u); X86_PUSH32(v); }
	// 0045F7E2 push 0x8ED
	{ uint32_t v = (uint32_t)(0x8EDu); X86_PUSH32(v); }
	// 0045F7E7 call 0x0006800A
	X86_PUSH32(0x45F7ECu); sub_0006800A(ctx, base);
	// 0045F7EC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F7ED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F7EE mov [0x0064EDFC], al
	{ uint32_t ea = (uint32_t)(0x64EDFCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F7F3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F7DD, __imp__sub_0045F7DD)

X86_FUNC(__imp__sub_0045F7F4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F7F4 push 0x5B755C
	{ uint32_t v = (uint32_t)(0x5B755Cu); X86_PUSH32(v); }
	// 0045F7F9 push 0x8EC
	{ uint32_t v = (uint32_t)(0x8ECu); X86_PUSH32(v); }
	// 0045F7FE call 0x0006800A
	X86_PUSH32(0x45F803u); sub_0006800A(ctx, base);
	// 0045F803 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F804 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F805 mov [0x0064EDFD], al
	{ uint32_t ea = (uint32_t)(0x64EDFDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F80A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F7F4, __imp__sub_0045F7F4)

X86_FUNC(__imp__sub_0045F80B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F80B push 0x5B7560
	{ uint32_t v = (uint32_t)(0x5B7560u); X86_PUSH32(v); }
	// 0045F810 push 0x8EB
	{ uint32_t v = (uint32_t)(0x8EBu); X86_PUSH32(v); }
	// 0045F815 call 0x0006800A
	X86_PUSH32(0x45F81Au); sub_0006800A(ctx, base);
	// 0045F81A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F81B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F81C mov [0x0064EDFE], al
	{ uint32_t ea = (uint32_t)(0x64EDFEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F821 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F80B, __imp__sub_0045F80B)

X86_FUNC(__imp__sub_0045F822) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F822 push 0x5B7564
	{ uint32_t v = (uint32_t)(0x5B7564u); X86_PUSH32(v); }
	// 0045F827 push 0x8EA
	{ uint32_t v = (uint32_t)(0x8EAu); X86_PUSH32(v); }
	// 0045F82C call 0x0006800A
	X86_PUSH32(0x45F831u); sub_0006800A(ctx, base);
	// 0045F831 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F832 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F833 mov [0x0064EDFF], al
	{ uint32_t ea = (uint32_t)(0x64EDFFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F838 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F822, __imp__sub_0045F822)

X86_FUNC(__imp__sub_0045F839) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F839 push 0x5B7568
	{ uint32_t v = (uint32_t)(0x5B7568u); X86_PUSH32(v); }
	// 0045F83E push 0x8E9
	{ uint32_t v = (uint32_t)(0x8E9u); X86_PUSH32(v); }
	// 0045F843 call 0x0006800A
	X86_PUSH32(0x45F848u); sub_0006800A(ctx, base);
	// 0045F848 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F849 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F84A mov [0x0064EE00], al
	{ uint32_t ea = (uint32_t)(0x64EE00u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F84F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F839, __imp__sub_0045F839)

X86_FUNC(__imp__sub_0045F850) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F850 push 0x5B756C
	{ uint32_t v = (uint32_t)(0x5B756Cu); X86_PUSH32(v); }
	// 0045F855 push 0x8E8
	{ uint32_t v = (uint32_t)(0x8E8u); X86_PUSH32(v); }
	// 0045F85A call 0x0006800A
	X86_PUSH32(0x45F85Fu); sub_0006800A(ctx, base);
	// 0045F85F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F860 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F861 mov [0x0064EE01], al
	{ uint32_t ea = (uint32_t)(0x64EE01u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F866 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F850, __imp__sub_0045F850)

X86_FUNC(__imp__sub_0045F867) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F867 push 0x5B7570
	{ uint32_t v = (uint32_t)(0x5B7570u); X86_PUSH32(v); }
	// 0045F86C push 0x8E7
	{ uint32_t v = (uint32_t)(0x8E7u); X86_PUSH32(v); }
	// 0045F871 call 0x0006800A
	X86_PUSH32(0x45F876u); sub_0006800A(ctx, base);
	// 0045F876 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F877 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F878 mov [0x0064EE02], al
	{ uint32_t ea = (uint32_t)(0x64EE02u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F87D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F867, __imp__sub_0045F867)

X86_FUNC(__imp__sub_0045F87E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F87E push 0x5B7574
	{ uint32_t v = (uint32_t)(0x5B7574u); X86_PUSH32(v); }
	// 0045F883 push 0x8E5
	{ uint32_t v = (uint32_t)(0x8E5u); X86_PUSH32(v); }
	// 0045F888 call 0x0006800A
	X86_PUSH32(0x45F88Du); sub_0006800A(ctx, base);
	// 0045F88D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F88E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F88F mov [0x0064EE03], al
	{ uint32_t ea = (uint32_t)(0x64EE03u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F894 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F87E, __imp__sub_0045F87E)

X86_FUNC(__imp__sub_0045F895) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F895 push 0x5B7578
	{ uint32_t v = (uint32_t)(0x5B7578u); X86_PUSH32(v); }
	// 0045F89A push 0x8E4
	{ uint32_t v = (uint32_t)(0x8E4u); X86_PUSH32(v); }
	// 0045F89F call 0x0006800A
	X86_PUSH32(0x45F8A4u); sub_0006800A(ctx, base);
	// 0045F8A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F8A5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F8A6 mov [0x0064EE04], al
	{ uint32_t ea = (uint32_t)(0x64EE04u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F8AB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F895, __imp__sub_0045F895)

X86_FUNC(__imp__sub_0045F8AC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F8AC push 0x5B757C
	{ uint32_t v = (uint32_t)(0x5B757Cu); X86_PUSH32(v); }
	// 0045F8B1 push 0x8CF
	{ uint32_t v = (uint32_t)(0x8CFu); X86_PUSH32(v); }
	// 0045F8B6 call 0x0006800A
	X86_PUSH32(0x45F8BBu); sub_0006800A(ctx, base);
	// 0045F8BB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F8BC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F8BD mov [0x0064EE05], al
	{ uint32_t ea = (uint32_t)(0x64EE05u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F8C2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F8AC, __imp__sub_0045F8AC)

X86_FUNC(__imp__sub_0045F8C3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F8C3 push 0x5B7580
	{ uint32_t v = (uint32_t)(0x5B7580u); X86_PUSH32(v); }
	// 0045F8C8 push 0x915
	{ uint32_t v = (uint32_t)(0x915u); X86_PUSH32(v); }
	// 0045F8CD call 0x0006800A
	X86_PUSH32(0x45F8D2u); sub_0006800A(ctx, base);
	// 0045F8D2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F8D3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F8D4 mov [0x0064EE06], al
	{ uint32_t ea = (uint32_t)(0x64EE06u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F8D9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F8C3, __imp__sub_0045F8C3)

X86_FUNC(__imp__sub_0045F8DA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F8DA push 0x5B7584
	{ uint32_t v = (uint32_t)(0x5B7584u); X86_PUSH32(v); }
	// 0045F8DF push 0x8C5
	{ uint32_t v = (uint32_t)(0x8C5u); X86_PUSH32(v); }
	// 0045F8E4 call 0x0006800A
	X86_PUSH32(0x45F8E9u); sub_0006800A(ctx, base);
	// 0045F8E9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F8EA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F8EB mov [0x0064EE07], al
	{ uint32_t ea = (uint32_t)(0x64EE07u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F8F0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F8DA, __imp__sub_0045F8DA)

X86_FUNC(__imp__sub_0045F8F1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F8F1 push 0x5B7588
	{ uint32_t v = (uint32_t)(0x5B7588u); X86_PUSH32(v); }
	// 0045F8F6 push 0x8C4
	{ uint32_t v = (uint32_t)(0x8C4u); X86_PUSH32(v); }
	// 0045F8FB call 0x0006800A
	X86_PUSH32(0x45F900u); sub_0006800A(ctx, base);
	// 0045F900 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F901 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F902 mov [0x0064EE08], al
	{ uint32_t ea = (uint32_t)(0x64EE08u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F907 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F8F1, __imp__sub_0045F8F1)

X86_FUNC(__imp__sub_0045F908) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F908 push 0x5B758C
	{ uint32_t v = (uint32_t)(0x5B758Cu); X86_PUSH32(v); }
	// 0045F90D push 0x8C3
	{ uint32_t v = (uint32_t)(0x8C3u); X86_PUSH32(v); }
	// 0045F912 call 0x0006800A
	X86_PUSH32(0x45F917u); sub_0006800A(ctx, base);
	// 0045F917 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F918 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F919 mov [0x0064EE09], al
	{ uint32_t ea = (uint32_t)(0x64EE09u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F91E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F908, __imp__sub_0045F908)

X86_FUNC(__imp__sub_0045F91F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F91F push 0x5B7590
	{ uint32_t v = (uint32_t)(0x5B7590u); X86_PUSH32(v); }
	// 0045F924 push 0x8C2
	{ uint32_t v = (uint32_t)(0x8C2u); X86_PUSH32(v); }
	// 0045F929 call 0x0006800A
	X86_PUSH32(0x45F92Eu); sub_0006800A(ctx, base);
	// 0045F92E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F92F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F930 mov [0x0064EE0A], al
	{ uint32_t ea = (uint32_t)(0x64EE0Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F935 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F91F, __imp__sub_0045F91F)

X86_FUNC(__imp__sub_0045F936) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F936 push 0x5B7594
	{ uint32_t v = (uint32_t)(0x5B7594u); X86_PUSH32(v); }
	// 0045F93B push 0x5D6
	{ uint32_t v = (uint32_t)(0x5D6u); X86_PUSH32(v); }
	// 0045F940 call 0x0006800A
	X86_PUSH32(0x45F945u); sub_0006800A(ctx, base);
	// 0045F945 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F946 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F947 mov [0x0064EE0B], al
	{ uint32_t ea = (uint32_t)(0x64EE0Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F94C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F936, __imp__sub_0045F936)

X86_FUNC(__imp__sub_0045F94D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F94D push 0x5B7598
	{ uint32_t v = (uint32_t)(0x5B7598u); X86_PUSH32(v); }
	// 0045F952 push 0x693
	{ uint32_t v = (uint32_t)(0x693u); X86_PUSH32(v); }
	// 0045F957 call 0x0006800A
	X86_PUSH32(0x45F95Cu); sub_0006800A(ctx, base);
	// 0045F95C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F95D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F95E mov [0x0064EE0C], al
	{ uint32_t ea = (uint32_t)(0x64EE0Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F963 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F94D, __imp__sub_0045F94D)

X86_FUNC(__imp__sub_0045F964) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F964 push 0x5B759C
	{ uint32_t v = (uint32_t)(0x5B759Cu); X86_PUSH32(v); }
	// 0045F969 push 0x68F
	{ uint32_t v = (uint32_t)(0x68Fu); X86_PUSH32(v); }
	// 0045F96E call 0x0006800A
	X86_PUSH32(0x45F973u); sub_0006800A(ctx, base);
	// 0045F973 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F974 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F975 mov [0x0064EE0D], al
	{ uint32_t ea = (uint32_t)(0x64EE0Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F97A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F964, __imp__sub_0045F964)

X86_FUNC(__imp__sub_0045F97B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F97B push 0x5B75A0
	{ uint32_t v = (uint32_t)(0x5B75A0u); X86_PUSH32(v); }
	// 0045F980 push 0x8B7
	{ uint32_t v = (uint32_t)(0x8B7u); X86_PUSH32(v); }
	// 0045F985 call 0x0006800A
	X86_PUSH32(0x45F98Au); sub_0006800A(ctx, base);
	// 0045F98A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F98B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F98C mov [0x0064EE0E], al
	{ uint32_t ea = (uint32_t)(0x64EE0Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F991 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F97B, __imp__sub_0045F97B)

X86_FUNC(__imp__sub_0045F992) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F992 push 0x5B75A4
	{ uint32_t v = (uint32_t)(0x5B75A4u); X86_PUSH32(v); }
	// 0045F997 push 0x8B6
	{ uint32_t v = (uint32_t)(0x8B6u); X86_PUSH32(v); }
	// 0045F99C call 0x0006800A
	X86_PUSH32(0x45F9A1u); sub_0006800A(ctx, base);
	// 0045F9A1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F9A2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F9A3 mov [0x0064EE0F], al
	{ uint32_t ea = (uint32_t)(0x64EE0Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F9A8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F992, __imp__sub_0045F992)

X86_FUNC(__imp__sub_0045F9A9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F9A9 push 0x5B75A8
	{ uint32_t v = (uint32_t)(0x5B75A8u); X86_PUSH32(v); }
	// 0045F9AE push 0x62D
	{ uint32_t v = (uint32_t)(0x62Du); X86_PUSH32(v); }
	// 0045F9B3 call 0x0006800A
	X86_PUSH32(0x45F9B8u); sub_0006800A(ctx, base);
	// 0045F9B8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F9B9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F9BA mov [0x0064EE10], al
	{ uint32_t ea = (uint32_t)(0x64EE10u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F9BF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F9A9, __imp__sub_0045F9A9)

X86_FUNC(__imp__sub_0045F9C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F9C0 push 0x5B75AC
	{ uint32_t v = (uint32_t)(0x5B75ACu); X86_PUSH32(v); }
	// 0045F9C5 push 0x628
	{ uint32_t v = (uint32_t)(0x628u); X86_PUSH32(v); }
	// 0045F9CA call 0x0006800A
	X86_PUSH32(0x45F9CFu); sub_0006800A(ctx, base);
	// 0045F9CF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F9D0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F9D1 mov [0x0064EE11], al
	{ uint32_t ea = (uint32_t)(0x64EE11u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F9D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F9C0, __imp__sub_0045F9C0)

X86_FUNC(__imp__sub_0045F9D7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F9D7 push 0x5B75B0
	{ uint32_t v = (uint32_t)(0x5B75B0u); X86_PUSH32(v); }
	// 0045F9DC push 0x626
	{ uint32_t v = (uint32_t)(0x626u); X86_PUSH32(v); }
	// 0045F9E1 call 0x0006800A
	X86_PUSH32(0x45F9E6u); sub_0006800A(ctx, base);
	// 0045F9E6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F9E7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F9E8 mov [0x0064EE12], al
	{ uint32_t ea = (uint32_t)(0x64EE12u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045F9ED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F9D7, __imp__sub_0045F9D7)

X86_FUNC(__imp__sub_0045F9EE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045F9EE push 0x5B75B4
	{ uint32_t v = (uint32_t)(0x5B75B4u); X86_PUSH32(v); }
	// 0045F9F3 push 0x94A
	{ uint32_t v = (uint32_t)(0x94Au); X86_PUSH32(v); }
	// 0045F9F8 call 0x0006800A
	X86_PUSH32(0x45F9FDu); sub_0006800A(ctx, base);
	// 0045F9FD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F9FE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045F9FF mov [0x0064EE13], al
	{ uint32_t ea = (uint32_t)(0x64EE13u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FA04 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045F9EE, __imp__sub_0045F9EE)

X86_FUNC(__imp__sub_0045FA05) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FA05 push 0x5B75B8
	{ uint32_t v = (uint32_t)(0x5B75B8u); X86_PUSH32(v); }
	// 0045FA0A push 0x625
	{ uint32_t v = (uint32_t)(0x625u); X86_PUSH32(v); }
	// 0045FA0F call 0x0006800A
	X86_PUSH32(0x45FA14u); sub_0006800A(ctx, base);
	// 0045FA14 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA15 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA16 mov [0x0064EE14], al
	{ uint32_t ea = (uint32_t)(0x64EE14u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FA1B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FA05, __imp__sub_0045FA05)

X86_FUNC(__imp__sub_0045FA1C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FA1C push 0x5B75BC
	{ uint32_t v = (uint32_t)(0x5B75BCu); X86_PUSH32(v); }
	// 0045FA21 push 0x621
	{ uint32_t v = (uint32_t)(0x621u); X86_PUSH32(v); }
	// 0045FA26 call 0x0006800A
	X86_PUSH32(0x45FA2Bu); sub_0006800A(ctx, base);
	// 0045FA2B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA2C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA2D mov [0x0064EE15], al
	{ uint32_t ea = (uint32_t)(0x64EE15u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FA32 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FA1C, __imp__sub_0045FA1C)

X86_FUNC(__imp__sub_0045FA33) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FA33 push 0x5B75C0
	{ uint32_t v = (uint32_t)(0x5B75C0u); X86_PUSH32(v); }
	// 0045FA38 push 0x61D
	{ uint32_t v = (uint32_t)(0x61Du); X86_PUSH32(v); }
	// 0045FA3D call 0x0006800A
	X86_PUSH32(0x45FA42u); sub_0006800A(ctx, base);
	// 0045FA42 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA43 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA44 mov [0x0064EE16], al
	{ uint32_t ea = (uint32_t)(0x64EE16u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FA49 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FA33, __imp__sub_0045FA33)

X86_FUNC(__imp__sub_0045FA4A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FA4A push 0x5B75C4
	{ uint32_t v = (uint32_t)(0x5B75C4u); X86_PUSH32(v); }
	// 0045FA4F push 0x618
	{ uint32_t v = (uint32_t)(0x618u); X86_PUSH32(v); }
	// 0045FA54 call 0x0006800A
	X86_PUSH32(0x45FA59u); sub_0006800A(ctx, base);
	// 0045FA59 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA5A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA5B mov [0x0064EE17], al
	{ uint32_t ea = (uint32_t)(0x64EE17u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FA60 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FA4A, __imp__sub_0045FA4A)

X86_FUNC(__imp__sub_0045FA61) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FA61 push 0x5B75C8
	{ uint32_t v = (uint32_t)(0x5B75C8u); X86_PUSH32(v); }
	// 0045FA66 push 0x616
	{ uint32_t v = (uint32_t)(0x616u); X86_PUSH32(v); }
	// 0045FA6B call 0x0006800A
	X86_PUSH32(0x45FA70u); sub_0006800A(ctx, base);
	// 0045FA70 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA71 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA72 mov [0x0064EE18], al
	{ uint32_t ea = (uint32_t)(0x64EE18u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FA77 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FA61, __imp__sub_0045FA61)

X86_FUNC(__imp__sub_0045FA78) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FA78 push 0x5B75CC
	{ uint32_t v = (uint32_t)(0x5B75CCu); X86_PUSH32(v); }
	// 0045FA7D push 0x615
	{ uint32_t v = (uint32_t)(0x615u); X86_PUSH32(v); }
	// 0045FA82 call 0x0006800A
	X86_PUSH32(0x45FA87u); sub_0006800A(ctx, base);
	// 0045FA87 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA88 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA89 mov [0x0064EE19], al
	{ uint32_t ea = (uint32_t)(0x64EE19u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FA8E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FA78, __imp__sub_0045FA78)

X86_FUNC(__imp__sub_0045FA8F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FA8F push 0x5B75D0
	{ uint32_t v = (uint32_t)(0x5B75D0u); X86_PUSH32(v); }
	// 0045FA94 push 0x614
	{ uint32_t v = (uint32_t)(0x614u); X86_PUSH32(v); }
	// 0045FA99 call 0x0006800A
	X86_PUSH32(0x45FA9Eu); sub_0006800A(ctx, base);
	// 0045FA9E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FA9F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FAA0 mov [0x0064EE1A], al
	{ uint32_t ea = (uint32_t)(0x64EE1Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FAA5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FA8F, __imp__sub_0045FA8F)

X86_FUNC(__imp__sub_0045FAA6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FAA6 push 0x5B75D4
	{ uint32_t v = (uint32_t)(0x5B75D4u); X86_PUSH32(v); }
	// 0045FAAB push 0x5CA
	{ uint32_t v = (uint32_t)(0x5CAu); X86_PUSH32(v); }
	// 0045FAB0 call 0x0006800A
	X86_PUSH32(0x45FAB5u); sub_0006800A(ctx, base);
	// 0045FAB5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FAB6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FAB7 mov [0x0064EE1B], al
	{ uint32_t ea = (uint32_t)(0x64EE1Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FABC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FAA6, __imp__sub_0045FAA6)

X86_FUNC(__imp__sub_0045FABD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FABD push 0x5B75D8
	{ uint32_t v = (uint32_t)(0x5B75D8u); X86_PUSH32(v); }
	// 0045FAC2 push 0x5C9
	{ uint32_t v = (uint32_t)(0x5C9u); X86_PUSH32(v); }
	// 0045FAC7 call 0x0006800A
	X86_PUSH32(0x45FACCu); sub_0006800A(ctx, base);
	// 0045FACC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FACD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FACE mov [0x0064EE1C], al
	{ uint32_t ea = (uint32_t)(0x64EE1Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FAD3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FABD, __imp__sub_0045FABD)

X86_FUNC(__imp__sub_0045FAD4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FAD4 push 0x5B75DC
	{ uint32_t v = (uint32_t)(0x5B75DCu); X86_PUSH32(v); }
	// 0045FAD9 push 0x5C8
	{ uint32_t v = (uint32_t)(0x5C8u); X86_PUSH32(v); }
	// 0045FADE call 0x0006800A
	X86_PUSH32(0x45FAE3u); sub_0006800A(ctx, base);
	// 0045FAE3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FAE4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FAE5 mov [0x0064EE1D], al
	{ uint32_t ea = (uint32_t)(0x64EE1Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FAEA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FAD4, __imp__sub_0045FAD4)

X86_FUNC(__imp__sub_0045FAEB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FAEB push 0x5B75E0
	{ uint32_t v = (uint32_t)(0x5B75E0u); X86_PUSH32(v); }
	// 0045FAF0 push 0x5CF
	{ uint32_t v = (uint32_t)(0x5CFu); X86_PUSH32(v); }
	// 0045FAF5 call 0x0006800A
	X86_PUSH32(0x45FAFAu); sub_0006800A(ctx, base);
	// 0045FAFA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FAFB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FAFC mov [0x0064EE1E], al
	{ uint32_t ea = (uint32_t)(0x64EE1Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FB01 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FAEB, __imp__sub_0045FAEB)

X86_FUNC(__imp__sub_0045FB02) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FB02 push 0x5B75E4
	{ uint32_t v = (uint32_t)(0x5B75E4u); X86_PUSH32(v); }
	// 0045FB07 push 0x5C2
	{ uint32_t v = (uint32_t)(0x5C2u); X86_PUSH32(v); }
	// 0045FB0C call 0x0006800A
	X86_PUSH32(0x45FB11u); sub_0006800A(ctx, base);
	// 0045FB11 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB12 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB13 mov [0x0064EE1F], al
	{ uint32_t ea = (uint32_t)(0x64EE1Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FB18 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FB02, __imp__sub_0045FB02)

X86_FUNC(__imp__sub_0045FB19) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FB19 push 0x5B75E8
	{ uint32_t v = (uint32_t)(0x5B75E8u); X86_PUSH32(v); }
	// 0045FB1E push 0x5C0
	{ uint32_t v = (uint32_t)(0x5C0u); X86_PUSH32(v); }
	// 0045FB23 call 0x0006800A
	X86_PUSH32(0x45FB28u); sub_0006800A(ctx, base);
	// 0045FB28 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB29 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB2A mov [0x0064EE20], al
	{ uint32_t ea = (uint32_t)(0x64EE20u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FB2F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FB19, __imp__sub_0045FB19)

X86_FUNC(__imp__sub_0045FB30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FB30 push 0x5B75EC
	{ uint32_t v = (uint32_t)(0x5B75ECu); X86_PUSH32(v); }
	// 0045FB35 push 0x57A
	{ uint32_t v = (uint32_t)(0x57Au); X86_PUSH32(v); }
	// 0045FB3A call 0x0006800A
	X86_PUSH32(0x45FB3Fu); sub_0006800A(ctx, base);
	// 0045FB3F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB40 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB41 mov [0x0064EE21], al
	{ uint32_t ea = (uint32_t)(0x64EE21u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FB46 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FB30, __imp__sub_0045FB30)

X86_FUNC(__imp__sub_0045FB47) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FB47 push 0x5B75F0
	{ uint32_t v = (uint32_t)(0x5B75F0u); X86_PUSH32(v); }
	// 0045FB4C push 0x5BD
	{ uint32_t v = (uint32_t)(0x5BDu); X86_PUSH32(v); }
	// 0045FB51 call 0x0006800A
	X86_PUSH32(0x45FB56u); sub_0006800A(ctx, base);
	// 0045FB56 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB57 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB58 mov [0x0064EE22], al
	{ uint32_t ea = (uint32_t)(0x64EE22u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FB5D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FB47, __imp__sub_0045FB47)

X86_FUNC(__imp__sub_0045FB5E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FB5E push 0x5B75F4
	{ uint32_t v = (uint32_t)(0x5B75F4u); X86_PUSH32(v); }
	// 0045FB63 push 0x5BC
	{ uint32_t v = (uint32_t)(0x5BCu); X86_PUSH32(v); }
	// 0045FB68 call 0x0006800A
	X86_PUSH32(0x45FB6Du); sub_0006800A(ctx, base);
	// 0045FB6D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB6E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB6F mov [0x0064EE23], al
	{ uint32_t ea = (uint32_t)(0x64EE23u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FB74 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FB5E, __imp__sub_0045FB5E)

X86_FUNC(__imp__sub_0045FB75) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FB75 push 0x5B75F8
	{ uint32_t v = (uint32_t)(0x5B75F8u); X86_PUSH32(v); }
	// 0045FB7A push 0x5BA
	{ uint32_t v = (uint32_t)(0x5BAu); X86_PUSH32(v); }
	// 0045FB7F call 0x0006800A
	X86_PUSH32(0x45FB84u); sub_0006800A(ctx, base);
	// 0045FB84 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB85 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB86 mov [0x0064EE24], al
	{ uint32_t ea = (uint32_t)(0x64EE24u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FB8B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FB75, __imp__sub_0045FB75)

X86_FUNC(__imp__sub_0045FB8C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FB8C push 0x5B75FC
	{ uint32_t v = (uint32_t)(0x5B75FCu); X86_PUSH32(v); }
	// 0045FB91 push 0x5B9
	{ uint32_t v = (uint32_t)(0x5B9u); X86_PUSH32(v); }
	// 0045FB96 call 0x0006800A
	X86_PUSH32(0x45FB9Bu); sub_0006800A(ctx, base);
	// 0045FB9B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB9C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FB9D mov [0x0064EE25], al
	{ uint32_t ea = (uint32_t)(0x64EE25u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FBA2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FB8C, __imp__sub_0045FB8C)

X86_FUNC(__imp__sub_0045FBA3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FBA3 push 0x5B7600
	{ uint32_t v = (uint32_t)(0x5B7600u); X86_PUSH32(v); }
	// 0045FBA8 push 0x5B8
	{ uint32_t v = (uint32_t)(0x5B8u); X86_PUSH32(v); }
	// 0045FBAD call 0x0006800A
	X86_PUSH32(0x45FBB2u); sub_0006800A(ctx, base);
	// 0045FBB2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FBB3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FBB4 mov [0x0064EE26], al
	{ uint32_t ea = (uint32_t)(0x64EE26u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FBB9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FBA3, __imp__sub_0045FBA3)

X86_FUNC(__imp__sub_0045FBBA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FBBA push 0x5B7604
	{ uint32_t v = (uint32_t)(0x5B7604u); X86_PUSH32(v); }
	// 0045FBBF push 0x5B6
	{ uint32_t v = (uint32_t)(0x5B6u); X86_PUSH32(v); }
	// 0045FBC4 call 0x0006800A
	X86_PUSH32(0x45FBC9u); sub_0006800A(ctx, base);
	// 0045FBC9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FBCA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FBCB mov [0x0064EE27], al
	{ uint32_t ea = (uint32_t)(0x64EE27u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FBD0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FBBA, __imp__sub_0045FBBA)

X86_FUNC(__imp__sub_0045FBD1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FBD1 push 0x5B7608
	{ uint32_t v = (uint32_t)(0x5B7608u); X86_PUSH32(v); }
	// 0045FBD6 push 0x5B5
	{ uint32_t v = (uint32_t)(0x5B5u); X86_PUSH32(v); }
	// 0045FBDB call 0x0006800A
	X86_PUSH32(0x45FBE0u); sub_0006800A(ctx, base);
	// 0045FBE0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FBE1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FBE2 mov [0x0064EE28], al
	{ uint32_t ea = (uint32_t)(0x64EE28u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FBE7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FBD1, __imp__sub_0045FBD1)

X86_FUNC(__imp__sub_0045FBE8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FBE8 push 0x5B760C
	{ uint32_t v = (uint32_t)(0x5B760Cu); X86_PUSH32(v); }
	// 0045FBED push 0x5B4
	{ uint32_t v = (uint32_t)(0x5B4u); X86_PUSH32(v); }
	// 0045FBF2 call 0x0006800A
	X86_PUSH32(0x45FBF7u); sub_0006800A(ctx, base);
	// 0045FBF7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FBF8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FBF9 mov [0x0064EE29], al
	{ uint32_t ea = (uint32_t)(0x64EE29u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FBFE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FBE8, __imp__sub_0045FBE8)

X86_FUNC(__imp__sub_0045FBFF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FBFF push 0x5B7610
	{ uint32_t v = (uint32_t)(0x5B7610u); X86_PUSH32(v); }
	// 0045FC04 push 0x688
	{ uint32_t v = (uint32_t)(0x688u); X86_PUSH32(v); }
	// 0045FC09 call 0x0006800A
	X86_PUSH32(0x45FC0Eu); sub_0006800A(ctx, base);
	// 0045FC0E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC0F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC10 mov [0x0064EE2A], al
	{ uint32_t ea = (uint32_t)(0x64EE2Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FC15 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FBFF, __imp__sub_0045FBFF)

X86_FUNC(__imp__sub_0045FC16) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FC16 push 0x5B7614
	{ uint32_t v = (uint32_t)(0x5B7614u); X86_PUSH32(v); }
	// 0045FC1B push 0x583
	{ uint32_t v = (uint32_t)(0x583u); X86_PUSH32(v); }
	// 0045FC20 call 0x0006800A
	X86_PUSH32(0x45FC25u); sub_0006800A(ctx, base);
	// 0045FC25 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC26 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC27 mov [0x0064EE2B], al
	{ uint32_t ea = (uint32_t)(0x64EE2Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FC2C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FC16, __imp__sub_0045FC16)

X86_FUNC(__imp__sub_0045FC2D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FC2D push 0x5B7618
	{ uint32_t v = (uint32_t)(0x5B7618u); X86_PUSH32(v); }
	// 0045FC32 push 0x5CB
	{ uint32_t v = (uint32_t)(0x5CBu); X86_PUSH32(v); }
	// 0045FC37 call 0x0006800A
	X86_PUSH32(0x45FC3Cu); sub_0006800A(ctx, base);
	// 0045FC3C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC3D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC3E mov [0x0064EE2C], al
	{ uint32_t ea = (uint32_t)(0x64EE2Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FC43 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FC2D, __imp__sub_0045FC2D)

X86_FUNC(__imp__sub_0045FC44) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FC44 push 0x5B761C
	{ uint32_t v = (uint32_t)(0x5B761Cu); X86_PUSH32(v); }
	// 0045FC49 push 0x5C1
	{ uint32_t v = (uint32_t)(0x5C1u); X86_PUSH32(v); }
	// 0045FC4E call 0x0006800A
	X86_PUSH32(0x45FC53u); sub_0006800A(ctx, base);
	// 0045FC53 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC54 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC55 mov [0x0064EE2D], al
	{ uint32_t ea = (uint32_t)(0x64EE2Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FC5A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FC44, __imp__sub_0045FC44)

X86_FUNC(__imp__sub_0045FC5B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FC5B push 0x5B7620
	{ uint32_t v = (uint32_t)(0x5B7620u); X86_PUSH32(v); }
	// 0045FC60 push 0x5CE
	{ uint32_t v = (uint32_t)(0x5CEu); X86_PUSH32(v); }
	// 0045FC65 call 0x0006800A
	X86_PUSH32(0x45FC6Au); sub_0006800A(ctx, base);
	// 0045FC6A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC6B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC6C mov [0x0064EE2E], al
	{ uint32_t ea = (uint32_t)(0x64EE2Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FC71 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FC5B, __imp__sub_0045FC5B)

X86_FUNC(__imp__sub_0045FC72) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FC72 push 0x5B7624
	{ uint32_t v = (uint32_t)(0x5B7624u); X86_PUSH32(v); }
	// 0045FC77 push 0x5BE
	{ uint32_t v = (uint32_t)(0x5BEu); X86_PUSH32(v); }
	// 0045FC7C call 0x0006800A
	X86_PUSH32(0x45FC81u); sub_0006800A(ctx, base);
	// 0045FC81 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC82 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC83 mov [0x0064EE2F], al
	{ uint32_t ea = (uint32_t)(0x64EE2Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FC88 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FC72, __imp__sub_0045FC72)

X86_FUNC(__imp__sub_0045FC89) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FC89 push 0x5B7628
	{ uint32_t v = (uint32_t)(0x5B7628u); X86_PUSH32(v); }
	// 0045FC8E push 0x5B7
	{ uint32_t v = (uint32_t)(0x5B7u); X86_PUSH32(v); }
	// 0045FC93 call 0x0006800A
	X86_PUSH32(0x45FC98u); sub_0006800A(ctx, base);
	// 0045FC98 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC99 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FC9A mov [0x0064EE30], al
	{ uint32_t ea = (uint32_t)(0x64EE30u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FC9F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FC89, __imp__sub_0045FC89)

X86_FUNC(__imp__sub_0045FCA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FCA0 push 0x5B762C
	{ uint32_t v = (uint32_t)(0x5B762Cu); X86_PUSH32(v); }
	// 0045FCA5 push 0x882
	{ uint32_t v = (uint32_t)(0x882u); X86_PUSH32(v); }
	// 0045FCAA call 0x0006800A
	X86_PUSH32(0x45FCAFu); sub_0006800A(ctx, base);
	// 0045FCAF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FCB0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FCB1 mov [0x0064EE31], al
	{ uint32_t ea = (uint32_t)(0x64EE31u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FCB6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FCA0, __imp__sub_0045FCA0)

X86_FUNC(__imp__sub_0045FCB7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FCB7 push 0x5B7630
	{ uint32_t v = (uint32_t)(0x5B7630u); X86_PUSH32(v); }
	// 0045FCBC push 0x9F0
	{ uint32_t v = (uint32_t)(0x9F0u); X86_PUSH32(v); }
	// 0045FCC1 call 0x0006800A
	X86_PUSH32(0x45FCC6u); sub_0006800A(ctx, base);
	// 0045FCC6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FCC7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FCC8 mov [0x0064EE32], al
	{ uint32_t ea = (uint32_t)(0x64EE32u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FCCD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FCB7, __imp__sub_0045FCB7)

X86_FUNC(__imp__sub_0045FCCE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FCCE push 0x5B7634
	{ uint32_t v = (uint32_t)(0x5B7634u); X86_PUSH32(v); }
	// 0045FCD3 push 0x9EF
	{ uint32_t v = (uint32_t)(0x9EFu); X86_PUSH32(v); }
	// 0045FCD8 call 0x0006800A
	X86_PUSH32(0x45FCDDu); sub_0006800A(ctx, base);
	// 0045FCDD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FCDE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FCDF mov [0x0064EE33], al
	{ uint32_t ea = (uint32_t)(0x64EE33u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FCE4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FCCE, __imp__sub_0045FCCE)

X86_FUNC(__imp__sub_0045FCE5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FCE5 push 0x5B7638
	{ uint32_t v = (uint32_t)(0x5B7638u); X86_PUSH32(v); }
	// 0045FCEA push 0x9EE
	{ uint32_t v = (uint32_t)(0x9EEu); X86_PUSH32(v); }
	// 0045FCEF call 0x0006800A
	X86_PUSH32(0x45FCF4u); sub_0006800A(ctx, base);
	// 0045FCF4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FCF5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FCF6 mov [0x0064EE34], al
	{ uint32_t ea = (uint32_t)(0x64EE34u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FCFB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FCE5, __imp__sub_0045FCE5)

X86_FUNC(__imp__sub_0045FCFC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FCFC push 0x5B763C
	{ uint32_t v = (uint32_t)(0x5B763Cu); X86_PUSH32(v); }
	// 0045FD01 push 0x9ED
	{ uint32_t v = (uint32_t)(0x9EDu); X86_PUSH32(v); }
	// 0045FD06 call 0x0006800A
	X86_PUSH32(0x45FD0Bu); sub_0006800A(ctx, base);
	// 0045FD0B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD0C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD0D mov [0x0064EE35], al
	{ uint32_t ea = (uint32_t)(0x64EE35u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FD12 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FCFC, __imp__sub_0045FCFC)

X86_FUNC(__imp__sub_0045FD13) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FD13 push 0x5B7640
	{ uint32_t v = (uint32_t)(0x5B7640u); X86_PUSH32(v); }
	// 0045FD18 push 0x9EC
	{ uint32_t v = (uint32_t)(0x9ECu); X86_PUSH32(v); }
	// 0045FD1D call 0x0006800A
	X86_PUSH32(0x45FD22u); sub_0006800A(ctx, base);
	// 0045FD22 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD23 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD24 mov [0x0064EE36], al
	{ uint32_t ea = (uint32_t)(0x64EE36u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FD29 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FD13, __imp__sub_0045FD13)

X86_FUNC(__imp__sub_0045FD2A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FD2A push 0x5B7644
	{ uint32_t v = (uint32_t)(0x5B7644u); X86_PUSH32(v); }
	// 0045FD2F push 0x9EB
	{ uint32_t v = (uint32_t)(0x9EBu); X86_PUSH32(v); }
	// 0045FD34 call 0x0006800A
	X86_PUSH32(0x45FD39u); sub_0006800A(ctx, base);
	// 0045FD39 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD3A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD3B mov [0x0064EE37], al
	{ uint32_t ea = (uint32_t)(0x64EE37u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FD40 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FD2A, __imp__sub_0045FD2A)

X86_FUNC(__imp__sub_0045FD41) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FD41 push 0x5B7648
	{ uint32_t v = (uint32_t)(0x5B7648u); X86_PUSH32(v); }
	// 0045FD46 push 0x9EA
	{ uint32_t v = (uint32_t)(0x9EAu); X86_PUSH32(v); }
	// 0045FD4B call 0x0006800A
	X86_PUSH32(0x45FD50u); sub_0006800A(ctx, base);
	// 0045FD50 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD51 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD52 mov [0x0064EE38], al
	{ uint32_t ea = (uint32_t)(0x64EE38u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FD57 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FD41, __imp__sub_0045FD41)

X86_FUNC(__imp__sub_0045FD58) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FD58 push 0x5B764C
	{ uint32_t v = (uint32_t)(0x5B764Cu); X86_PUSH32(v); }
	// 0045FD5D push 0x9E9
	{ uint32_t v = (uint32_t)(0x9E9u); X86_PUSH32(v); }
	// 0045FD62 call 0x0006800A
	X86_PUSH32(0x45FD67u); sub_0006800A(ctx, base);
	// 0045FD67 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD68 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD69 mov [0x0064EE39], al
	{ uint32_t ea = (uint32_t)(0x64EE39u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FD6E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FD58, __imp__sub_0045FD58)

X86_FUNC(__imp__sub_0045FD6F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FD6F push 0x5B7650
	{ uint32_t v = (uint32_t)(0x5B7650u); X86_PUSH32(v); }
	// 0045FD74 push 0x9E8
	{ uint32_t v = (uint32_t)(0x9E8u); X86_PUSH32(v); }
	// 0045FD79 call 0x0006800A
	X86_PUSH32(0x45FD7Eu); sub_0006800A(ctx, base);
	// 0045FD7E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD7F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD80 mov [0x0064EE3A], al
	{ uint32_t ea = (uint32_t)(0x64EE3Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FD85 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FD6F, __imp__sub_0045FD6F)

X86_FUNC(__imp__sub_0045FD86) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FD86 push 0x5B7654
	{ uint32_t v = (uint32_t)(0x5B7654u); X86_PUSH32(v); }
	// 0045FD8B push 0x9E7
	{ uint32_t v = (uint32_t)(0x9E7u); X86_PUSH32(v); }
	// 0045FD90 call 0x0006800A
	X86_PUSH32(0x45FD95u); sub_0006800A(ctx, base);
	// 0045FD95 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD96 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FD97 mov [0x0064EE3B], al
	{ uint32_t ea = (uint32_t)(0x64EE3Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FD9C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FD86, __imp__sub_0045FD86)

X86_FUNC(__imp__sub_0045FD9D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FD9D push 0x5B7658
	{ uint32_t v = (uint32_t)(0x5B7658u); X86_PUSH32(v); }
	// 0045FDA2 push 0x9E4
	{ uint32_t v = (uint32_t)(0x9E4u); X86_PUSH32(v); }
	// 0045FDA7 call 0x0006800A
	X86_PUSH32(0x45FDACu); sub_0006800A(ctx, base);
	// 0045FDAC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FDAD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FDAE mov [0x0064EE3C], al
	{ uint32_t ea = (uint32_t)(0x64EE3Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FDB3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FD9D, __imp__sub_0045FD9D)

X86_FUNC(__imp__sub_0045FDB4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FDB4 push 0x5B765C
	{ uint32_t v = (uint32_t)(0x5B765Cu); X86_PUSH32(v); }
	// 0045FDB9 push 0x9E3
	{ uint32_t v = (uint32_t)(0x9E3u); X86_PUSH32(v); }
	// 0045FDBE call 0x0006800A
	X86_PUSH32(0x45FDC3u); sub_0006800A(ctx, base);
	// 0045FDC3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FDC4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FDC5 mov [0x0064EE3D], al
	{ uint32_t ea = (uint32_t)(0x64EE3Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FDCA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FDB4, __imp__sub_0045FDB4)

X86_FUNC(__imp__sub_0045FDCB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FDCB push 0x5B7660
	{ uint32_t v = (uint32_t)(0x5B7660u); X86_PUSH32(v); }
	// 0045FDD0 push 0xBF2
	{ uint32_t v = (uint32_t)(0xBF2u); X86_PUSH32(v); }
	// 0045FDD5 call 0x0006800A
	X86_PUSH32(0x45FDDAu); sub_0006800A(ctx, base);
	// 0045FDDA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FDDB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FDDC mov [0x0064EE3E], al
	{ uint32_t ea = (uint32_t)(0x64EE3Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FDE1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FDCB, __imp__sub_0045FDCB)

X86_FUNC(__imp__sub_0045FDE2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FDE2 push 0x5B7664
	{ uint32_t v = (uint32_t)(0x5B7664u); X86_PUSH32(v); }
	// 0045FDE7 push 0xBEA
	{ uint32_t v = (uint32_t)(0xBEAu); X86_PUSH32(v); }
	// 0045FDEC call 0x0006800A
	X86_PUSH32(0x45FDF1u); sub_0006800A(ctx, base);
	// 0045FDF1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FDF2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FDF3 mov [0x0064EE3F], al
	{ uint32_t ea = (uint32_t)(0x64EE3Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FDF8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FDE2, __imp__sub_0045FDE2)

X86_FUNC(__imp__sub_0045FDF9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FDF9 push 0x5B76B0
	{ uint32_t v = (uint32_t)(0x5B76B0u); X86_PUSH32(v); }
	// 0045FDFE push 0x414
	{ uint32_t v = (uint32_t)(0x414u); X86_PUSH32(v); }
	// 0045FE03 call 0x0006800A
	X86_PUSH32(0x45FE08u); sub_0006800A(ctx, base);
	// 0045FE08 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE09 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE0A mov [0x0064F030], al
	{ uint32_t ea = (uint32_t)(0x64F030u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FE0F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FDF9, __imp__sub_0045FDF9)

X86_FUNC(__imp__sub_0045FE10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FE10 push 0x5B7704
	{ uint32_t v = (uint32_t)(0x5B7704u); X86_PUSH32(v); }
	// 0045FE15 push 0x416
	{ uint32_t v = (uint32_t)(0x416u); X86_PUSH32(v); }
	// 0045FE1A call 0x0006800A
	X86_PUSH32(0x45FE1Fu); sub_0006800A(ctx, base);
	// 0045FE1F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE20 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE21 mov [0x0064F72C], al
	{ uint32_t ea = (uint32_t)(0x64F72Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FE26 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FE10, __imp__sub_0045FE10)

X86_FUNC(__imp__sub_0045FE27) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FE27 push 0x5B7708
	{ uint32_t v = (uint32_t)(0x5B7708u); X86_PUSH32(v); }
	// 0045FE2C push 0x415
	{ uint32_t v = (uint32_t)(0x415u); X86_PUSH32(v); }
	// 0045FE31 call 0x0006800A
	X86_PUSH32(0x45FE36u); sub_0006800A(ctx, base);
	// 0045FE36 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE37 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE38 mov [0x0064F72D], al
	{ uint32_t ea = (uint32_t)(0x64F72Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FE3D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FE27, __imp__sub_0045FE27)

X86_FUNC(__imp__sub_0045FE3E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FE3E push 0x5B770C
	{ uint32_t v = (uint32_t)(0x5B770Cu); X86_PUSH32(v); }
	// 0045FE43 push 0x448
	{ uint32_t v = (uint32_t)(0x448u); X86_PUSH32(v); }
	// 0045FE48 call 0x0006800A
	X86_PUSH32(0x45FE4Du); sub_0006800A(ctx, base);
	// 0045FE4D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE4E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE4F mov [0x0064F72E], al
	{ uint32_t ea = (uint32_t)(0x64F72Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FE54 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FE3E, __imp__sub_0045FE3E)

X86_FUNC(__imp__sub_0045FE55) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FE55 push 0x5B7710
	{ uint32_t v = (uint32_t)(0x5B7710u); X86_PUSH32(v); }
	// 0045FE5A push 0x447
	{ uint32_t v = (uint32_t)(0x447u); X86_PUSH32(v); }
	// 0045FE5F call 0x0006800A
	X86_PUSH32(0x45FE64u); sub_0006800A(ctx, base);
	// 0045FE64 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE65 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE66 mov [0x0064F72F], al
	{ uint32_t ea = (uint32_t)(0x64F72Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FE6B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FE55, __imp__sub_0045FE55)

X86_FUNC(__imp__sub_0045FE6C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FE6C push 0x5B7714
	{ uint32_t v = (uint32_t)(0x5B7714u); X86_PUSH32(v); }
	// 0045FE71 push 0x82A
	{ uint32_t v = (uint32_t)(0x82Au); X86_PUSH32(v); }
	// 0045FE76 call 0x0006800A
	X86_PUSH32(0x45FE7Bu); sub_0006800A(ctx, base);
	// 0045FE7B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE7C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE7D mov [0x0064F730], al
	{ uint32_t ea = (uint32_t)(0x64F730u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FE82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FE6C, __imp__sub_0045FE6C)

X86_FUNC(__imp__sub_0045FE83) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FE83 push 0x5B7718
	{ uint32_t v = (uint32_t)(0x5B7718u); X86_PUSH32(v); }
	// 0045FE88 push 0x898
	{ uint32_t v = (uint32_t)(0x898u); X86_PUSH32(v); }
	// 0045FE8D call 0x0006800A
	X86_PUSH32(0x45FE92u); sub_0006800A(ctx, base);
	// 0045FE92 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE93 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FE94 mov [0x0064F731], al
	{ uint32_t ea = (uint32_t)(0x64F731u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FE99 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FE83, __imp__sub_0045FE83)

X86_FUNC(__imp__sub_0045FE9A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FE9A push 0x5B771C
	{ uint32_t v = (uint32_t)(0x5B771Cu); X86_PUSH32(v); }
	// 0045FE9F push 0x676
	{ uint32_t v = (uint32_t)(0x676u); X86_PUSH32(v); }
	// 0045FEA4 call 0x0006800A
	X86_PUSH32(0x45FEA9u); sub_0006800A(ctx, base);
	// 0045FEA9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FEAA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FEAB mov [0x0064F732], al
	{ uint32_t ea = (uint32_t)(0x64F732u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FEB0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FE9A, __imp__sub_0045FE9A)

X86_FUNC(__imp__sub_0045FEB1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FEB1 push 0x5B7720
	{ uint32_t v = (uint32_t)(0x5B7720u); X86_PUSH32(v); }
	// 0045FEB6 push 0x675
	{ uint32_t v = (uint32_t)(0x675u); X86_PUSH32(v); }
	// 0045FEBB call 0x0006800A
	X86_PUSH32(0x45FEC0u); sub_0006800A(ctx, base);
	// 0045FEC0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FEC1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FEC2 mov [0x0064F733], al
	{ uint32_t ea = (uint32_t)(0x64F733u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FEC7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FEB1, __imp__sub_0045FEB1)

X86_FUNC(__imp__sub_0045FEC8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FEC8 push 0x5B7724
	{ uint32_t v = (uint32_t)(0x5B7724u); X86_PUSH32(v); }
	// 0045FECD push 0x7D9
	{ uint32_t v = (uint32_t)(0x7D9u); X86_PUSH32(v); }
	// 0045FED2 call 0x0006800A
	X86_PUSH32(0x45FED7u); sub_0006800A(ctx, base);
	// 0045FED7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FED8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FED9 mov [0x0064F734], al
	{ uint32_t ea = (uint32_t)(0x64F734u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FEDE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FEC8, __imp__sub_0045FEC8)

X86_FUNC(__imp__sub_0045FEDF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FEDF push 0x5B7728
	{ uint32_t v = (uint32_t)(0x5B7728u); X86_PUSH32(v); }
	// 0045FEE4 push 0x82C
	{ uint32_t v = (uint32_t)(0x82Cu); X86_PUSH32(v); }
	// 0045FEE9 call 0x0006800A
	X86_PUSH32(0x45FEEEu); sub_0006800A(ctx, base);
	// 0045FEEE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FEEF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FEF0 mov [0x0064F735], al
	{ uint32_t ea = (uint32_t)(0x64F735u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FEF5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FEDF, __imp__sub_0045FEDF)

X86_FUNC(__imp__sub_0045FEF6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FEF6 push 0x5B772C
	{ uint32_t v = (uint32_t)(0x5B772Cu); X86_PUSH32(v); }
	// 0045FEFB push 0x82B
	{ uint32_t v = (uint32_t)(0x82Bu); X86_PUSH32(v); }
	// 0045FF00 call 0x0006800A
	X86_PUSH32(0x45FF05u); sub_0006800A(ctx, base);
	// 0045FF05 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF06 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF07 mov [0x0064F736], al
	{ uint32_t ea = (uint32_t)(0x64F736u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FF0C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FEF6, __imp__sub_0045FEF6)

X86_FUNC(__imp__sub_0045FF0D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FF0D push 0x5B7730
	{ uint32_t v = (uint32_t)(0x5B7730u); X86_PUSH32(v); }
	// 0045FF12 push 0xFAD
	{ uint32_t v = (uint32_t)(0xFADu); X86_PUSH32(v); }
	// 0045FF17 call 0x0006800A
	X86_PUSH32(0x45FF1Cu); sub_0006800A(ctx, base);
	// 0045FF1C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF1D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF1E mov [0x0064F737], al
	{ uint32_t ea = (uint32_t)(0x64F737u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FF23 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FF0D, __imp__sub_0045FF0D)

X86_FUNC(__imp__sub_0045FF24) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FF24 push 0x5B7734
	{ uint32_t v = (uint32_t)(0x5B7734u); X86_PUSH32(v); }
	// 0045FF29 push 0xAF2
	{ uint32_t v = (uint32_t)(0xAF2u); X86_PUSH32(v); }
	// 0045FF2E call 0x0006800A
	X86_PUSH32(0x45FF33u); sub_0006800A(ctx, base);
	// 0045FF33 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF34 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF35 mov [0x0064F738], al
	{ uint32_t ea = (uint32_t)(0x64F738u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FF3A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FF24, __imp__sub_0045FF24)

X86_FUNC(__imp__sub_0045FF3B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FF3B push 0x5B7738
	{ uint32_t v = (uint32_t)(0x5B7738u); X86_PUSH32(v); }
	// 0045FF40 push 0xAF1
	{ uint32_t v = (uint32_t)(0xAF1u); X86_PUSH32(v); }
	// 0045FF45 call 0x0006800A
	X86_PUSH32(0x45FF4Au); sub_0006800A(ctx, base);
	// 0045FF4A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF4B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF4C mov [0x0064F739], al
	{ uint32_t ea = (uint32_t)(0x64F739u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FF51 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FF3B, __imp__sub_0045FF3B)

X86_FUNC(__imp__sub_0045FF52) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FF52 push 0x5B773C
	{ uint32_t v = (uint32_t)(0x5B773Cu); X86_PUSH32(v); }
	// 0045FF57 push 0xAF0
	{ uint32_t v = (uint32_t)(0xAF0u); X86_PUSH32(v); }
	// 0045FF5C call 0x0006800A
	X86_PUSH32(0x45FF61u); sub_0006800A(ctx, base);
	// 0045FF61 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF62 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF63 mov [0x0064F73A], al
	{ uint32_t ea = (uint32_t)(0x64F73Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FF68 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FF52, __imp__sub_0045FF52)

X86_FUNC(__imp__sub_0045FF69) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FF69 push 0x5B7740
	{ uint32_t v = (uint32_t)(0x5B7740u); X86_PUSH32(v); }
	// 0045FF6E push 0xAFA
	{ uint32_t v = (uint32_t)(0xAFAu); X86_PUSH32(v); }
	// 0045FF73 call 0x0006800A
	X86_PUSH32(0x45FF78u); sub_0006800A(ctx, base);
	// 0045FF78 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF79 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF7A mov [0x0064F73B], al
	{ uint32_t ea = (uint32_t)(0x64F73Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FF7F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FF69, __imp__sub_0045FF69)

X86_FUNC(__imp__sub_0045FF80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FF80 push 0x5B7744
	{ uint32_t v = (uint32_t)(0x5B7744u); X86_PUSH32(v); }
	// 0045FF85 push 0x7DA
	{ uint32_t v = (uint32_t)(0x7DAu); X86_PUSH32(v); }
	// 0045FF8A call 0x0006800A
	X86_PUSH32(0x45FF8Fu); sub_0006800A(ctx, base);
	// 0045FF8F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF90 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FF91 mov [0x0064F73C], al
	{ uint32_t ea = (uint32_t)(0x64F73Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FF96 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FF80, __imp__sub_0045FF80)

X86_FUNC(__imp__sub_0045FF97) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FF97 push 0x5B7748
	{ uint32_t v = (uint32_t)(0x5B7748u); X86_PUSH32(v); }
	// 0045FF9C push 0x6DC
	{ uint32_t v = (uint32_t)(0x6DCu); X86_PUSH32(v); }
	// 0045FFA1 call 0x0006800A
	X86_PUSH32(0x45FFA6u); sub_0006800A(ctx, base);
	// 0045FFA6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FFA7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FFA8 mov [0x0064F73D], al
	{ uint32_t ea = (uint32_t)(0x64F73Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FFAD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FF97, __imp__sub_0045FF97)

X86_FUNC(__imp__sub_0045FFAE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FFAE push 0x5B774C
	{ uint32_t v = (uint32_t)(0x5B774Cu); X86_PUSH32(v); }
	// 0045FFB3 push 0x432
	{ uint32_t v = (uint32_t)(0x432u); X86_PUSH32(v); }
	// 0045FFB8 call 0x0006800A
	X86_PUSH32(0x45FFBDu); sub_0006800A(ctx, base);
	// 0045FFBD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FFBE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FFBF mov [0x0064F73E], al
	{ uint32_t ea = (uint32_t)(0x64F73Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FFC4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FFAE, __imp__sub_0045FFAE)

X86_FUNC(__imp__sub_0045FFC5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FFC5 push 0x5B7750
	{ uint32_t v = (uint32_t)(0x5B7750u); X86_PUSH32(v); }
	// 0045FFCA push 0x431
	{ uint32_t v = (uint32_t)(0x431u); X86_PUSH32(v); }
	// 0045FFCF call 0x0006800A
	X86_PUSH32(0x45FFD4u); sub_0006800A(ctx, base);
	// 0045FFD4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FFD5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FFD6 mov [0x0064F73F], al
	{ uint32_t ea = (uint32_t)(0x64F73Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FFDB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FFC5, __imp__sub_0045FFC5)

X86_FUNC(__imp__sub_0045FFDC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FFDC push 0x5B7754
	{ uint32_t v = (uint32_t)(0x5B7754u); X86_PUSH32(v); }
	// 0045FFE1 push 0x430
	{ uint32_t v = (uint32_t)(0x430u); X86_PUSH32(v); }
	// 0045FFE6 call 0x0006800A
	X86_PUSH32(0x45FFEBu); sub_0006800A(ctx, base);
	// 0045FFEB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FFEC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0045FFED mov [0x0064F740], al
	{ uint32_t ea = (uint32_t)(0x64F740u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0045FFF2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FFDC, __imp__sub_0045FFDC)

X86_FUNC(__imp__sub_0045FFF3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0045FFF3 push 0x5B7758
	{ uint32_t v = (uint32_t)(0x5B7758u); X86_PUSH32(v); }
	// 0045FFF8 push 0x435
	{ uint32_t v = (uint32_t)(0x435u); X86_PUSH32(v); }
	// 0045FFFD call 0x0006800A
	X86_PUSH32(0x460002u); sub_0006800A(ctx, base);
	// 00460002 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460003 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460004 mov [0x0064F741], al
	{ uint32_t ea = (uint32_t)(0x64F741u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460009 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0045FFF3, __imp__sub_0045FFF3)

X86_FUNC(__imp__sub_0046000A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046000A push 0x5B775C
	{ uint32_t v = (uint32_t)(0x5B775Cu); X86_PUSH32(v); }
	// 0046000F push 0x42E
	{ uint32_t v = (uint32_t)(0x42Eu); X86_PUSH32(v); }
	// 00460014 call 0x0006800A
	X86_PUSH32(0x460019u); sub_0006800A(ctx, base);
	// 00460019 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046001A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046001B mov [0x0064F742], al
	{ uint32_t ea = (uint32_t)(0x64F742u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	{ X86_SAVE_FLAGS(); sub_00460020(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0046000A, __imp__sub_0046000A)

X86_FUNC(__imp__sub_00460020) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460020 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460020, __imp__sub_00460020)

X86_FUNC(__imp__sub_00460021) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460021 push 0x5B7760
	{ uint32_t v = (uint32_t)(0x5B7760u); X86_PUSH32(v); }
	// 00460026 push 0x413
	{ uint32_t v = (uint32_t)(0x413u); X86_PUSH32(v); }
	// 0046002B call 0x0006800A
	X86_PUSH32(0x460030u); sub_0006800A(ctx, base);
	// 00460030 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	{ X86_SAVE_FLAGS(); sub_00460031(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00460021, __imp__sub_00460021)

X86_FUNC(__imp__sub_00460031) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460031 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	{ X86_SAVE_FLAGS(); sub_00460032(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00460031, __imp__sub_00460031)

X86_FUNC(__imp__sub_00460032) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460032 mov [0x0064F743], al
	{ uint32_t ea = (uint32_t)(0x64F743u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460037 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460032, __imp__sub_00460032)

X86_FUNC(__imp__sub_00460038) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460038 push 0x5B7764
	{ uint32_t v = (uint32_t)(0x5B7764u); X86_PUSH32(v); }
	{ X86_SAVE_FLAGS(); sub_0046003D(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00460038, __imp__sub_00460038)

X86_FUNC(__imp__sub_0046003D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046003D push 0x825
	{ uint32_t v = (uint32_t)(0x825u); X86_PUSH32(v); }
	{ X86_SAVE_FLAGS(); sub_00460042(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0046003D, __imp__sub_0046003D)

X86_FUNC(__imp__sub_00460042) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460042 call 0x0006800A
	X86_PUSH32(0x460047u); sub_0006800A(ctx, base);
	// 00460047 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	{ X86_SAVE_FLAGS(); sub_00460048(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00460042, __imp__sub_00460042)

X86_FUNC(__imp__sub_00460048) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460048 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	{ X86_SAVE_FLAGS(); sub_00460049(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00460048, __imp__sub_00460048)

X86_FUNC(__imp__sub_00460049) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460049 mov [0x0064F744], al
	{ uint32_t ea = (uint32_t)(0x64F744u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	{ X86_SAVE_FLAGS(); sub_0046004E(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00460049, __imp__sub_00460049)

X86_FUNC(__imp__sub_0046004E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046004E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046004E, __imp__sub_0046004E)

X86_FUNC(__imp__sub_0046004F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046004F push 0x5B7768
	{ uint32_t v = (uint32_t)(0x5B7768u); X86_PUSH32(v); }
	{ X86_SAVE_FLAGS(); sub_00460054(ctx, base); return; }
}
X86_WEAK_FUNC(sub_0046004F, __imp__sub_0046004F)

X86_FUNC(__imp__sub_00460054) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460054 push 0x824
	{ uint32_t v = (uint32_t)(0x824u); X86_PUSH32(v); }
	// 00460059 call 0x0006800A
	X86_PUSH32(0x46005Eu); sub_0006800A(ctx, base);
	// 0046005E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	{ X86_SAVE_FLAGS(); sub_0046005F(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00460054, __imp__sub_00460054)

X86_FUNC(__imp__sub_0046005F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046005F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460060 mov [0x0064F745], al
	{ uint32_t ea = (uint32_t)(0x64F745u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460065 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046005F, __imp__sub_0046005F)

X86_FUNC(__imp__sub_00460066) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460066 push 0x5B776C
	{ uint32_t v = (uint32_t)(0x5B776Cu); X86_PUSH32(v); }
	// 0046006B push 0x823
	{ uint32_t v = (uint32_t)(0x823u); X86_PUSH32(v); }
	// 00460070 call 0x0006800A
	X86_PUSH32(0x460075u); sub_0006800A(ctx, base);
	// 00460075 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460076 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460077 mov [0x0064F746], al
	{ uint32_t ea = (uint32_t)(0x64F746u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046007C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460066, __imp__sub_00460066)

X86_FUNC(__imp__sub_0046007D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046007D push 0x5B7770
	{ uint32_t v = (uint32_t)(0x5B7770u); X86_PUSH32(v); }
	// 00460082 push 0x822
	{ uint32_t v = (uint32_t)(0x822u); X86_PUSH32(v); }
	// 00460087 call 0x0006800A
	X86_PUSH32(0x46008Cu); sub_0006800A(ctx, base);
	// 0046008C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046008D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046008E mov [0x0064F747], al
	{ uint32_t ea = (uint32_t)(0x64F747u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460093 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046007D, __imp__sub_0046007D)

X86_FUNC(__imp__sub_00460094) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460094 push 0x5B7774
	{ uint32_t v = (uint32_t)(0x5B7774u); X86_PUSH32(v); }
	// 00460099 push 0x821
	{ uint32_t v = (uint32_t)(0x821u); X86_PUSH32(v); }
	// 0046009E call 0x0006800A
	X86_PUSH32(0x4600A3u); sub_0006800A(ctx, base);
	// 004600A3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004600A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004600A5 mov [0x0064F748], al
	{ uint32_t ea = (uint32_t)(0x64F748u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004600AA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460094, __imp__sub_00460094)

X86_FUNC(__imp__sub_004600AB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004600AB push 0x5B7778
	{ uint32_t v = (uint32_t)(0x5B7778u); X86_PUSH32(v); }
	// 004600B0 push 0x820
	{ uint32_t v = (uint32_t)(0x820u); X86_PUSH32(v); }
	// 004600B5 call 0x0006800A
	X86_PUSH32(0x4600BAu); sub_0006800A(ctx, base);
	// 004600BA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004600BB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004600BC mov [0x0064F749], al
	{ uint32_t ea = (uint32_t)(0x64F749u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004600C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004600AB, __imp__sub_004600AB)

X86_FUNC(__imp__sub_004600C2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004600C2 push 0x5B777C
	{ uint32_t v = (uint32_t)(0x5B777Cu); X86_PUSH32(v); }
	// 004600C7 push 0x411
	{ uint32_t v = (uint32_t)(0x411u); X86_PUSH32(v); }
	// 004600CC call 0x0006800A
	X86_PUSH32(0x4600D1u); sub_0006800A(ctx, base);
	// 004600D1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004600D2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004600D3 mov [0x0064F74A], al
	{ uint32_t ea = (uint32_t)(0x64F74Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004600D8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004600C2, __imp__sub_004600C2)

X86_FUNC(__imp__sub_004600D9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004600D9 push 0x5B7780
	{ uint32_t v = (uint32_t)(0x5B7780u); X86_PUSH32(v); }
	// 004600DE push 0x410
	{ uint32_t v = (uint32_t)(0x410u); X86_PUSH32(v); }
	// 004600E3 call 0x0006800A
	X86_PUSH32(0x4600E8u); sub_0006800A(ctx, base);
	// 004600E8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004600E9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004600EA mov [0x0064F74B], al
	{ uint32_t ea = (uint32_t)(0x64F74Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004600EF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004600D9, __imp__sub_004600D9)

X86_FUNC(__imp__sub_004600F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004600F0 push 0x5B7784
	{ uint32_t v = (uint32_t)(0x5B7784u); X86_PUSH32(v); }
	// 004600F5 push 0x7BC
	{ uint32_t v = (uint32_t)(0x7BCu); X86_PUSH32(v); }
	// 004600FA call 0x0006800A
	X86_PUSH32(0x4600FFu); sub_0006800A(ctx, base);
	// 004600FF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460100 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460101 mov [0x0064F74C], al
	{ uint32_t ea = (uint32_t)(0x64F74Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460106 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004600F0, __imp__sub_004600F0)

X86_FUNC(__imp__sub_00460107) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460107 push 0x5B7788
	{ uint32_t v = (uint32_t)(0x5B7788u); X86_PUSH32(v); }
	// 0046010C push 0x79E
	{ uint32_t v = (uint32_t)(0x79Eu); X86_PUSH32(v); }
	// 00460111 call 0x0006800A
	X86_PUSH32(0x460116u); sub_0006800A(ctx, base);
	// 00460116 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460117 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460118 mov [0x0064F74D], al
	{ uint32_t ea = (uint32_t)(0x64F74Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046011D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460107, __imp__sub_00460107)

X86_FUNC(__imp__sub_0046011E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046011E push 0x5B778C
	{ uint32_t v = (uint32_t)(0x5B778Cu); X86_PUSH32(v); }
	// 00460123 push 0x537
	{ uint32_t v = (uint32_t)(0x537u); X86_PUSH32(v); }
	// 00460128 call 0x0006800A
	X86_PUSH32(0x46012Du); sub_0006800A(ctx, base);
	// 0046012D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046012E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046012F mov [0x0064F74E], al
	{ uint32_t ea = (uint32_t)(0x64F74Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460134 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046011E, __imp__sub_0046011E)

X86_FUNC(__imp__sub_00460135) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460135 push 0x5B7790
	{ uint32_t v = (uint32_t)(0x5B7790u); X86_PUSH32(v); }
	// 0046013A push 0x810
	{ uint32_t v = (uint32_t)(0x810u); X86_PUSH32(v); }
	// 0046013F call 0x0006800A
	X86_PUSH32(0x460144u); sub_0006800A(ctx, base);
	// 00460144 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460145 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460146 mov [0x0064F74F], al
	{ uint32_t ea = (uint32_t)(0x64F74Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046014B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460135, __imp__sub_00460135)

X86_FUNC(__imp__sub_0046014C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046014C push 0x5B7794
	{ uint32_t v = (uint32_t)(0x5B7794u); X86_PUSH32(v); }
	// 00460151 push 0x80F
	{ uint32_t v = (uint32_t)(0x80Fu); X86_PUSH32(v); }
	// 00460156 call 0x0006800A
	X86_PUSH32(0x46015Bu); sub_0006800A(ctx, base);
	// 0046015B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046015C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046015D mov [0x0064F750], al
	{ uint32_t ea = (uint32_t)(0x64F750u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460162 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046014C, __imp__sub_0046014C)

X86_FUNC(__imp__sub_00460163) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460163 push 0x5B7798
	{ uint32_t v = (uint32_t)(0x5B7798u); X86_PUSH32(v); }
	// 00460168 push 0x80E
	{ uint32_t v = (uint32_t)(0x80Eu); X86_PUSH32(v); }
	// 0046016D call 0x0006800A
	X86_PUSH32(0x460172u); sub_0006800A(ctx, base);
	// 00460172 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460173 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460174 mov [0x0064F751], al
	{ uint32_t ea = (uint32_t)(0x64F751u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460179 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460163, __imp__sub_00460163)

X86_FUNC(__imp__sub_0046017A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046017A push 0x5B779C
	{ uint32_t v = (uint32_t)(0x5B779Cu); X86_PUSH32(v); }
	// 0046017F push 0x80D
	{ uint32_t v = (uint32_t)(0x80Du); X86_PUSH32(v); }
	// 00460184 call 0x0006800A
	X86_PUSH32(0x460189u); sub_0006800A(ctx, base);
	// 00460189 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046018A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046018B mov [0x0064F752], al
	{ uint32_t ea = (uint32_t)(0x64F752u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460190 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046017A, __imp__sub_0046017A)

X86_FUNC(__imp__sub_00460191) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460191 push 0x5B77A0
	{ uint32_t v = (uint32_t)(0x5B77A0u); X86_PUSH32(v); }
	// 00460196 push 0x80C
	{ uint32_t v = (uint32_t)(0x80Cu); X86_PUSH32(v); }
	// 0046019B call 0x0006800A
	X86_PUSH32(0x4601A0u); sub_0006800A(ctx, base);
	// 004601A0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004601A1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004601A2 mov [0x0064F753], al
	{ uint32_t ea = (uint32_t)(0x64F753u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004601A7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460191, __imp__sub_00460191)

X86_FUNC(__imp__sub_004601A8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004601A8 push 0x5B77A4
	{ uint32_t v = (uint32_t)(0x5B77A4u); X86_PUSH32(v); }
	// 004601AD push 0x412
	{ uint32_t v = (uint32_t)(0x412u); X86_PUSH32(v); }
	// 004601B2 call 0x0006800A
	X86_PUSH32(0x4601B7u); sub_0006800A(ctx, base);
	// 004601B7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004601B8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004601B9 mov [0x0064F754], al
	{ uint32_t ea = (uint32_t)(0x64F754u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004601BE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004601A8, __imp__sub_004601A8)

X86_FUNC(__imp__sub_004601BF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004601BF push 0x5B77A8
	{ uint32_t v = (uint32_t)(0x5B77A8u); X86_PUSH32(v); }
	// 004601C4 push 0x508
	{ uint32_t v = (uint32_t)(0x508u); X86_PUSH32(v); }
	// 004601C9 call 0x0006800A
	X86_PUSH32(0x4601CEu); sub_0006800A(ctx, base);
	// 004601CE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004601CF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004601D0 mov [0x0064F755], al
	{ uint32_t ea = (uint32_t)(0x64F755u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004601D5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004601BF, __imp__sub_004601BF)

X86_FUNC(__imp__sub_004601D6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004601D6 mov ecx, 0x650128
	{ ctx.ecx = (uint32_t)(0x650128u); }
	// 004601DB call 0x0005F722
	X86_PUSH32(0x4601E0u); sub_0005F722(ctx, base);
	// 004601E0 push 0x4649A0
	{ uint32_t v = (uint32_t)(0x4649A0u); X86_PUSH32(v); }
	// 004601E5 mov dword ptr [0x00650128], 0x54BCF0
	{ uint32_t ea = (uint32_t)(0x650128u); X86_MEM32(ea) = (uint32_t)(0x54BCF0u); }
	// 004601EF call 0x00366943
	X86_PUSH32(0x4601F4u); sub_00366943(ctx, base);
	// 004601F4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004601F5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004601D6, __imp__sub_004601D6)

X86_FUNC(__imp__sub_004601F6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004601F6 mov ecx, 0x651340
	{ ctx.ecx = (uint32_t)(0x651340u); }
	// 004601FB call 0x001D1C19
	X86_PUSH32(0x460200u); sub_001D1C19(ctx, base);
	// 00460200 push 0x4649AA
	{ uint32_t v = (uint32_t)(0x4649AAu); X86_PUSH32(v); }
	// 00460205 call 0x00366943
	X86_PUSH32(0x46020Au); sub_00366943(ctx, base);
	// 0046020A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046020B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004601F6, __imp__sub_004601F6)

X86_FUNC(__imp__sub_0046020C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046020C mov ecx, 0x6513D8
	{ ctx.ecx = (uint32_t)(0x6513D8u); }
	// 00460211 call 0x001D63CB
	X86_PUSH32(0x460216u); sub_001D63CB(ctx, base);
	// 00460216 push 0x4649B4
	{ uint32_t v = (uint32_t)(0x4649B4u); X86_PUSH32(v); }
	// 0046021B call 0x00366943
	X86_PUSH32(0x460220u); sub_00366943(ctx, base);
	// 00460220 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460221 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046020C, __imp__sub_0046020C)

X86_FUNC(__imp__sub_00460222) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460222 push 0x5B7820
	{ uint32_t v = (uint32_t)(0x5B7820u); X86_PUSH32(v); }
	// 00460227 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460229 call 0x0006800A
	X86_PUSH32(0x46022Eu); sub_0006800A(ctx, base);
	// 0046022E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046022F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460230 mov [0x00655218], al
	{ uint32_t ea = (uint32_t)(0x655218u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460235 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460222, __imp__sub_00460222)

X86_FUNC(__imp__sub_00460236) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460236 push 0x5B7824
	{ uint32_t v = (uint32_t)(0x5B7824u); X86_PUSH32(v); }
	// 0046023B push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0046023D call 0x0006800A
	X86_PUSH32(0x460242u); sub_0006800A(ctx, base);
	// 00460242 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460243 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460244 mov [0x00655219], al
	{ uint32_t ea = (uint32_t)(0x655219u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460249 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460236, __imp__sub_00460236)

X86_FUNC(__imp__sub_0046024A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046024A push 0x5B7828
	{ uint32_t v = (uint32_t)(0x5B7828u); X86_PUSH32(v); }
	// 0046024F push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460251 call 0x0006800A
	X86_PUSH32(0x460256u); sub_0006800A(ctx, base);
	// 00460256 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460257 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460258 mov [0x0065521A], al
	{ uint32_t ea = (uint32_t)(0x65521Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046025D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046024A, __imp__sub_0046024A)

X86_FUNC(__imp__sub_0046025E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046025E push 0x5B782C
	{ uint32_t v = (uint32_t)(0x5B782Cu); X86_PUSH32(v); }
	// 00460263 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460265 call 0x0006800A
	X86_PUSH32(0x46026Au); sub_0006800A(ctx, base);
	// 0046026A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046026B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046026C mov [0x0065521B], al
	{ uint32_t ea = (uint32_t)(0x65521Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460271 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046025E, __imp__sub_0046025E)

X86_FUNC(__imp__sub_00460272) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460272 push 0x5B7830
	{ uint32_t v = (uint32_t)(0x5B7830u); X86_PUSH32(v); }
	// 00460277 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460279 call 0x0006800A
	X86_PUSH32(0x46027Eu); sub_0006800A(ctx, base);
	// 0046027E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046027F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460280 mov [0x0065521C], al
	{ uint32_t ea = (uint32_t)(0x65521Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460285 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460272, __imp__sub_00460272)

X86_FUNC(__imp__sub_00460286) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460286 push 0x5B7834
	{ uint32_t v = (uint32_t)(0x5B7834u); X86_PUSH32(v); }
	// 0046028B push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0046028D call 0x0006800A
	X86_PUSH32(0x460292u); sub_0006800A(ctx, base);
	// 00460292 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460293 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460294 mov [0x0065521D], al
	{ uint32_t ea = (uint32_t)(0x65521Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460299 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460286, __imp__sub_00460286)

X86_FUNC(__imp__sub_0046029A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046029A push 0x5B7838
	{ uint32_t v = (uint32_t)(0x5B7838u); X86_PUSH32(v); }
	// 0046029F push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 004602A1 call 0x0006800A
	X86_PUSH32(0x4602A6u); sub_0006800A(ctx, base);
	// 004602A6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004602A7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004602A8 mov [0x0065521E], al
	{ uint32_t ea = (uint32_t)(0x65521Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004602AD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046029A, __imp__sub_0046029A)

X86_FUNC(__imp__sub_004602AE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004602AE push 0x5B783C
	{ uint32_t v = (uint32_t)(0x5B783Cu); X86_PUSH32(v); }
	// 004602B3 push 0xB56
	{ uint32_t v = (uint32_t)(0xB56u); X86_PUSH32(v); }
	// 004602B8 call 0x0006800A
	X86_PUSH32(0x4602BDu); sub_0006800A(ctx, base);
	// 004602BD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004602BE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004602BF mov [0x0065521F], al
	{ uint32_t ea = (uint32_t)(0x65521Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004602C4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004602AE, __imp__sub_004602AE)

X86_FUNC(__imp__sub_004602C5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004602C5 push 0x5B7840
	{ uint32_t v = (uint32_t)(0x5B7840u); X86_PUSH32(v); }
	// 004602CA push 0xB55
	{ uint32_t v = (uint32_t)(0xB55u); X86_PUSH32(v); }
	// 004602CF call 0x0006800A
	X86_PUSH32(0x4602D4u); sub_0006800A(ctx, base);
	// 004602D4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004602D5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004602D6 mov [0x00655220], al
	{ uint32_t ea = (uint32_t)(0x655220u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004602DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004602C5, __imp__sub_004602C5)

X86_FUNC(__imp__sub_004602DC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004602DC push 0x5B7844
	{ uint32_t v = (uint32_t)(0x5B7844u); X86_PUSH32(v); }
	// 004602E1 push 0x9CA
	{ uint32_t v = (uint32_t)(0x9CAu); X86_PUSH32(v); }
	// 004602E6 call 0x0006800A
	X86_PUSH32(0x4602EBu); sub_0006800A(ctx, base);
	// 004602EB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004602EC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004602ED mov [0x00655221], al
	{ uint32_t ea = (uint32_t)(0x655221u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004602F2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004602DC, __imp__sub_004602DC)

X86_FUNC(__imp__sub_004602F3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004602F3 push 0x5B7848
	{ uint32_t v = (uint32_t)(0x5B7848u); X86_PUSH32(v); }
	// 004602F8 push 0x9C9
	{ uint32_t v = (uint32_t)(0x9C9u); X86_PUSH32(v); }
	// 004602FD call 0x0006800A
	X86_PUSH32(0x460302u); sub_0006800A(ctx, base);
	// 00460302 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460303 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460304 mov [0x00655222], al
	{ uint32_t ea = (uint32_t)(0x655222u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460309 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004602F3, __imp__sub_004602F3)

X86_FUNC(__imp__sub_0046030A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046030A push 0x5B784C
	{ uint32_t v = (uint32_t)(0x5B784Cu); X86_PUSH32(v); }
	// 0046030F push 0x526
	{ uint32_t v = (uint32_t)(0x526u); X86_PUSH32(v); }
	// 00460314 call 0x0006800A
	X86_PUSH32(0x460319u); sub_0006800A(ctx, base);
	// 00460319 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046031A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046031B mov [0x00655223], al
	{ uint32_t ea = (uint32_t)(0x655223u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460320 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046030A, __imp__sub_0046030A)

X86_FUNC(__imp__sub_00460321) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460321 push 0x5B7850
	{ uint32_t v = (uint32_t)(0x5B7850u); X86_PUSH32(v); }
	// 00460326 push 0x525
	{ uint32_t v = (uint32_t)(0x525u); X86_PUSH32(v); }
	// 0046032B call 0x0006800A
	X86_PUSH32(0x460330u); sub_0006800A(ctx, base);
	// 00460330 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460331 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460332 mov [0x00655224], al
	{ uint32_t ea = (uint32_t)(0x655224u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460337 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460321, __imp__sub_00460321)

X86_FUNC(__imp__sub_00460338) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460338 push 0x5B7854
	{ uint32_t v = (uint32_t)(0x5B7854u); X86_PUSH32(v); }
	// 0046033D push 0x58E
	{ uint32_t v = (uint32_t)(0x58Eu); X86_PUSH32(v); }
	// 00460342 call 0x0006800A
	X86_PUSH32(0x460347u); sub_0006800A(ctx, base);
	// 00460347 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460348 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460349 mov [0x00655225], al
	{ uint32_t ea = (uint32_t)(0x655225u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046034E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460338, __imp__sub_00460338)

X86_FUNC(__imp__sub_0046034F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046034F push 0x5B7858
	{ uint32_t v = (uint32_t)(0x5B7858u); X86_PUSH32(v); }
	// 00460354 push 0x587
	{ uint32_t v = (uint32_t)(0x587u); X86_PUSH32(v); }
	// 00460359 call 0x0006800A
	X86_PUSH32(0x46035Eu); sub_0006800A(ctx, base);
	// 0046035E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046035F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460360 mov [0x00655226], al
	{ uint32_t ea = (uint32_t)(0x655226u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460365 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046034F, __imp__sub_0046034F)

X86_FUNC(__imp__sub_00460366) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460366 push 0x5B785C
	{ uint32_t v = (uint32_t)(0x5B785Cu); X86_PUSH32(v); }
	// 0046036B push 0x57C
	{ uint32_t v = (uint32_t)(0x57Cu); X86_PUSH32(v); }
	// 00460370 call 0x0006800A
	X86_PUSH32(0x460375u); sub_0006800A(ctx, base);
	// 00460375 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460376 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460377 mov [0x00655227], al
	{ uint32_t ea = (uint32_t)(0x655227u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046037C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460366, __imp__sub_00460366)

X86_FUNC(__imp__sub_0046037D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046037D push 0x5B7860
	{ uint32_t v = (uint32_t)(0x5B7860u); X86_PUSH32(v); }
	// 00460382 push 0x57B
	{ uint32_t v = (uint32_t)(0x57Bu); X86_PUSH32(v); }
	// 00460387 call 0x0006800A
	X86_PUSH32(0x46038Cu); sub_0006800A(ctx, base);
	// 0046038C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046038D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046038E mov [0x00655228], al
	{ uint32_t ea = (uint32_t)(0x655228u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460393 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046037D, __imp__sub_0046037D)

X86_FUNC(__imp__sub_00460394) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460394 push 0x5B7864
	{ uint32_t v = (uint32_t)(0x5B7864u); X86_PUSH32(v); }
	// 00460399 push 0x201
	{ uint32_t v = (uint32_t)(0x201u); X86_PUSH32(v); }
	// 0046039E call 0x0006800A
	X86_PUSH32(0x4603A3u); sub_0006800A(ctx, base);
	// 004603A3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004603A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004603A5 mov [0x00655229], al
	{ uint32_t ea = (uint32_t)(0x655229u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004603AA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460394, __imp__sub_00460394)

X86_FUNC(__imp__sub_004603AB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004603AB push 0x5B7868
	{ uint32_t v = (uint32_t)(0x5B7868u); X86_PUSH32(v); }
	// 004603B0 push 0x200
	{ uint32_t v = (uint32_t)(0x200u); X86_PUSH32(v); }
	// 004603B5 call 0x0006800A
	X86_PUSH32(0x4603BAu); sub_0006800A(ctx, base);
	// 004603BA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004603BB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004603BC mov [0x0065522A], al
	{ uint32_t ea = (uint32_t)(0x65522Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004603C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004603AB, __imp__sub_004603AB)

X86_FUNC(__imp__sub_004603C2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004603C2 push 0x5B786C
	{ uint32_t v = (uint32_t)(0x5B786Cu); X86_PUSH32(v); }
	// 004603C7 push 0x5EC
	{ uint32_t v = (uint32_t)(0x5ECu); X86_PUSH32(v); }
	// 004603CC call 0x0006800A
	X86_PUSH32(0x4603D1u); sub_0006800A(ctx, base);
	// 004603D1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004603D2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004603D3 mov [0x0065522B], al
	{ uint32_t ea = (uint32_t)(0x65522Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004603D8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004603C2, __imp__sub_004603C2)

X86_FUNC(__imp__sub_004603D9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004603D9 push 0x5B7870
	{ uint32_t v = (uint32_t)(0x5B7870u); X86_PUSH32(v); }
	// 004603DE push 0x5EB
	{ uint32_t v = (uint32_t)(0x5EBu); X86_PUSH32(v); }
	// 004603E3 call 0x0006800A
	X86_PUSH32(0x4603E8u); sub_0006800A(ctx, base);
	// 004603E8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004603E9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004603EA mov [0x0065522C], al
	{ uint32_t ea = (uint32_t)(0x65522Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004603EF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004603D9, __imp__sub_004603D9)

X86_FUNC(__imp__sub_004603F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004603F0 push 0x5B7874
	{ uint32_t v = (uint32_t)(0x5B7874u); X86_PUSH32(v); }
	// 004603F5 push 0x5EA
	{ uint32_t v = (uint32_t)(0x5EAu); X86_PUSH32(v); }
	// 004603FA call 0x0006800A
	X86_PUSH32(0x4603FFu); sub_0006800A(ctx, base);
	// 004603FF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460400 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460401 mov [0x0065522D], al
	{ uint32_t ea = (uint32_t)(0x65522Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460406 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004603F0, __imp__sub_004603F0)

X86_FUNC(__imp__sub_00460407) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460407 push 0x5B7878
	{ uint32_t v = (uint32_t)(0x5B7878u); X86_PUSH32(v); }
	// 0046040C push 0x451
	{ uint32_t v = (uint32_t)(0x451u); X86_PUSH32(v); }
	// 00460411 call 0x0006800A
	X86_PUSH32(0x460416u); sub_0006800A(ctx, base);
	// 00460416 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460417 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460418 mov [0x0065522E], al
	{ uint32_t ea = (uint32_t)(0x65522Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046041D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460407, __imp__sub_00460407)

X86_FUNC(__imp__sub_0046041E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046041E push 0x5B787C
	{ uint32_t v = (uint32_t)(0x5B787Cu); X86_PUSH32(v); }
	// 00460423 push 0x453
	{ uint32_t v = (uint32_t)(0x453u); X86_PUSH32(v); }
	// 00460428 call 0x0006800A
	X86_PUSH32(0x46042Du); sub_0006800A(ctx, base);
	// 0046042D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046042E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046042F mov [0x0065522F], al
	{ uint32_t ea = (uint32_t)(0x65522Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460434 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046041E, __imp__sub_0046041E)

X86_FUNC(__imp__sub_00460435) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460435 push 0x5B7880
	{ uint32_t v = (uint32_t)(0x5B7880u); X86_PUSH32(v); }
	// 0046043A push 0x4D8
	{ uint32_t v = (uint32_t)(0x4D8u); X86_PUSH32(v); }
	// 0046043F call 0x0006800A
	X86_PUSH32(0x460444u); sub_0006800A(ctx, base);
	// 00460444 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460445 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460446 mov [0x00655230], al
	{ uint32_t ea = (uint32_t)(0x655230u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046044B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460435, __imp__sub_00460435)

X86_FUNC(__imp__sub_0046044C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046044C push 0x5B7884
	{ uint32_t v = (uint32_t)(0x5B7884u); X86_PUSH32(v); }
	// 00460451 push 0x5E9
	{ uint32_t v = (uint32_t)(0x5E9u); X86_PUSH32(v); }
	// 00460456 call 0x0006800A
	X86_PUSH32(0x46045Bu); sub_0006800A(ctx, base);
	// 0046045B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046045C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046045D mov [0x00655231], al
	{ uint32_t ea = (uint32_t)(0x655231u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460462 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046044C, __imp__sub_0046044C)

X86_FUNC(__imp__sub_00460463) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460463 push 0x5B7888
	{ uint32_t v = (uint32_t)(0x5B7888u); X86_PUSH32(v); }
	// 00460468 push 0xD80
	{ uint32_t v = (uint32_t)(0xD80u); X86_PUSH32(v); }
	// 0046046D call 0x0006800A
	X86_PUSH32(0x460472u); sub_0006800A(ctx, base);
	// 00460472 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460473 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460474 mov [0x00655232], al
	{ uint32_t ea = (uint32_t)(0x655232u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460479 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460463, __imp__sub_00460463)

X86_FUNC(__imp__sub_0046047A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046047A push 0x5B788C
	{ uint32_t v = (uint32_t)(0x5B788Cu); X86_PUSH32(v); }
	// 0046047F push 0x5E3
	{ uint32_t v = (uint32_t)(0x5E3u); X86_PUSH32(v); }
	// 00460484 call 0x0006800A
	X86_PUSH32(0x460489u); sub_0006800A(ctx, base);
	// 00460489 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046048A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046048B mov [0x00655233], al
	{ uint32_t ea = (uint32_t)(0x655233u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460490 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046047A, __imp__sub_0046047A)

X86_FUNC(__imp__sub_00460491) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460491 push 0x5B7890
	{ uint32_t v = (uint32_t)(0x5B7890u); X86_PUSH32(v); }
	// 00460496 push 0x57E
	{ uint32_t v = (uint32_t)(0x57Eu); X86_PUSH32(v); }
	// 0046049B call 0x0006800A
	X86_PUSH32(0x4604A0u); sub_0006800A(ctx, base);
	// 004604A0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004604A1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004604A2 mov [0x00655234], al
	{ uint32_t ea = (uint32_t)(0x655234u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004604A7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460491, __imp__sub_00460491)

X86_FUNC(__imp__sub_004604A8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004604A8 push 0x5B7894
	{ uint32_t v = (uint32_t)(0x5B7894u); X86_PUSH32(v); }
	// 004604AD push 0x57D
	{ uint32_t v = (uint32_t)(0x57Du); X86_PUSH32(v); }
	// 004604B2 call 0x0006800A
	X86_PUSH32(0x4604B7u); sub_0006800A(ctx, base);
	// 004604B7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004604B8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004604B9 mov [0x00655235], al
	{ uint32_t ea = (uint32_t)(0x655235u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004604BE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004604A8, __imp__sub_004604A8)

X86_FUNC(__imp__sub_004604BF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004604BF push 0x5B7898
	{ uint32_t v = (uint32_t)(0x5B7898u); X86_PUSH32(v); }
	// 004604C4 push 0x4D2
	{ uint32_t v = (uint32_t)(0x4D2u); X86_PUSH32(v); }
	// 004604C9 call 0x0006800A
	X86_PUSH32(0x4604CEu); sub_0006800A(ctx, base);
	// 004604CE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004604CF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004604D0 mov [0x00655236], al
	{ uint32_t ea = (uint32_t)(0x655236u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004604D5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004604BF, __imp__sub_004604BF)

X86_FUNC(__imp__sub_004604D6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004604D6 push 0x5B789C
	{ uint32_t v = (uint32_t)(0x5B789Cu); X86_PUSH32(v); }
	// 004604DB push 0x4D1
	{ uint32_t v = (uint32_t)(0x4D1u); X86_PUSH32(v); }
	// 004604E0 call 0x0006800A
	X86_PUSH32(0x4604E5u); sub_0006800A(ctx, base);
	// 004604E5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004604E6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004604E7 mov [0x00655237], al
	{ uint32_t ea = (uint32_t)(0x655237u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004604EC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004604D6, __imp__sub_004604D6)

X86_FUNC(__imp__sub_004604ED) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004604ED push 0x5B78A0
	{ uint32_t v = (uint32_t)(0x5B78A0u); X86_PUSH32(v); }
	// 004604F2 push 0x4D0
	{ uint32_t v = (uint32_t)(0x4D0u); X86_PUSH32(v); }
	// 004604F7 call 0x0006800A
	X86_PUSH32(0x4604FCu); sub_0006800A(ctx, base);
	// 004604FC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004604FD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004604FE mov [0x00655238], al
	{ uint32_t ea = (uint32_t)(0x655238u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460503 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004604ED, __imp__sub_004604ED)

X86_FUNC(__imp__sub_00460504) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460504 push 0x5B78A4
	{ uint32_t v = (uint32_t)(0x5B78A4u); X86_PUSH32(v); }
	// 00460509 push 0x4CF
	{ uint32_t v = (uint32_t)(0x4CFu); X86_PUSH32(v); }
	// 0046050E call 0x0006800A
	X86_PUSH32(0x460513u); sub_0006800A(ctx, base);
	// 00460513 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460514 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460515 mov [0x00655239], al
	{ uint32_t ea = (uint32_t)(0x655239u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046051A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460504, __imp__sub_00460504)

X86_FUNC(__imp__sub_0046051B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046051B push 0x5B78A8
	{ uint32_t v = (uint32_t)(0x5B78A8u); X86_PUSH32(v); }
	// 00460520 push 0x465
	{ uint32_t v = (uint32_t)(0x465u); X86_PUSH32(v); }
	// 00460525 call 0x0006800A
	X86_PUSH32(0x46052Au); sub_0006800A(ctx, base);
	// 0046052A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046052B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046052C mov [0x0065523A], al
	{ uint32_t ea = (uint32_t)(0x65523Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460531 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046051B, __imp__sub_0046051B)

X86_FUNC(__imp__sub_00460532) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460532 push 0x5B78AC
	{ uint32_t v = (uint32_t)(0x5B78ACu); X86_PUSH32(v); }
	// 00460537 push 0x5DD
	{ uint32_t v = (uint32_t)(0x5DDu); X86_PUSH32(v); }
	// 0046053C call 0x0006800A
	X86_PUSH32(0x460541u); sub_0006800A(ctx, base);
	// 00460541 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460542 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460543 mov [0x0065523B], al
	{ uint32_t ea = (uint32_t)(0x65523Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460548 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460532, __imp__sub_00460532)

X86_FUNC(__imp__sub_00460549) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460549 push 0x5B78B0
	{ uint32_t v = (uint32_t)(0x5B78B0u); X86_PUSH32(v); }
	// 0046054E push 0x228
	{ uint32_t v = (uint32_t)(0x228u); X86_PUSH32(v); }
	// 00460553 call 0x0006800A
	X86_PUSH32(0x460558u); sub_0006800A(ctx, base);
	// 00460558 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460559 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046055A mov [0x0065523C], al
	{ uint32_t ea = (uint32_t)(0x65523Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046055F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460549, __imp__sub_00460549)

X86_FUNC(__imp__sub_00460560) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460560 push 0x5B78B4
	{ uint32_t v = (uint32_t)(0x5B78B4u); X86_PUSH32(v); }
	// 00460565 push 0x227
	{ uint32_t v = (uint32_t)(0x227u); X86_PUSH32(v); }
	// 0046056A call 0x0006800A
	X86_PUSH32(0x46056Fu); sub_0006800A(ctx, base);
	// 0046056F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460570 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460571 mov [0x0065523D], al
	{ uint32_t ea = (uint32_t)(0x65523Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460576 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460560, __imp__sub_00460560)

X86_FUNC(__imp__sub_00460577) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460577 push 0x5B78B8
	{ uint32_t v = (uint32_t)(0x5B78B8u); X86_PUSH32(v); }
	// 0046057C push 0x226
	{ uint32_t v = (uint32_t)(0x226u); X86_PUSH32(v); }
	// 00460581 call 0x0006800A
	X86_PUSH32(0x460586u); sub_0006800A(ctx, base);
	// 00460586 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460587 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460588 mov [0x0065523E], al
	{ uint32_t ea = (uint32_t)(0x65523Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046058D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460577, __imp__sub_00460577)

X86_FUNC(__imp__sub_0046058E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046058E push 0x5B78BC
	{ uint32_t v = (uint32_t)(0x5B78BCu); X86_PUSH32(v); }
	// 00460593 push 0x225
	{ uint32_t v = (uint32_t)(0x225u); X86_PUSH32(v); }
	// 00460598 call 0x0006800A
	X86_PUSH32(0x46059Du); sub_0006800A(ctx, base);
	// 0046059D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046059E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046059F mov [0x0065523F], al
	{ uint32_t ea = (uint32_t)(0x65523Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004605A4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046058E, __imp__sub_0046058E)

X86_FUNC(__imp__sub_004605A5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004605A5 push 0x5B78C0
	{ uint32_t v = (uint32_t)(0x5B78C0u); X86_PUSH32(v); }
	// 004605AA push 0x141
	{ uint32_t v = (uint32_t)(0x141u); X86_PUSH32(v); }
	// 004605AF call 0x0006800A
	X86_PUSH32(0x4605B4u); sub_0006800A(ctx, base);
	// 004605B4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004605B5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004605B6 mov [0x00655240], al
	{ uint32_t ea = (uint32_t)(0x655240u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004605BB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004605A5, __imp__sub_004605A5)

X86_FUNC(__imp__sub_004605BC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004605BC push 0x5B78C4
	{ uint32_t v = (uint32_t)(0x5B78C4u); X86_PUSH32(v); }
	// 004605C1 push 0x138
	{ uint32_t v = (uint32_t)(0x138u); X86_PUSH32(v); }
	// 004605C6 call 0x0006800A
	X86_PUSH32(0x4605CBu); sub_0006800A(ctx, base);
	// 004605CB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004605CC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004605CD mov [0x00655241], al
	{ uint32_t ea = (uint32_t)(0x655241u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004605D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004605BC, __imp__sub_004605BC)

X86_FUNC(__imp__sub_004605D3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004605D3 push 0x5B78C8
	{ uint32_t v = (uint32_t)(0x5B78C8u); X86_PUSH32(v); }
	// 004605D8 push 0x137
	{ uint32_t v = (uint32_t)(0x137u); X86_PUSH32(v); }
	// 004605DD call 0x0006800A
	X86_PUSH32(0x4605E2u); sub_0006800A(ctx, base);
	// 004605E2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004605E3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004605E4 mov [0x00655242], al
	{ uint32_t ea = (uint32_t)(0x655242u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004605E9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004605D3, __imp__sub_004605D3)

X86_FUNC(__imp__sub_004605EA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004605EA push 0x5B78CC
	{ uint32_t v = (uint32_t)(0x5B78CCu); X86_PUSH32(v); }
	// 004605EF push 0x136
	{ uint32_t v = (uint32_t)(0x136u); X86_PUSH32(v); }
	// 004605F4 call 0x0006800A
	X86_PUSH32(0x4605F9u); sub_0006800A(ctx, base);
	// 004605F9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004605FA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004605FB mov [0x00655243], al
	{ uint32_t ea = (uint32_t)(0x655243u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460600 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004605EA, __imp__sub_004605EA)

X86_FUNC(__imp__sub_00460601) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460601 push 0x5B78D0
	{ uint32_t v = (uint32_t)(0x5B78D0u); X86_PUSH32(v); }
	// 00460606 push 0x133
	{ uint32_t v = (uint32_t)(0x133u); X86_PUSH32(v); }
	// 0046060B call 0x0006800A
	X86_PUSH32(0x460610u); sub_0006800A(ctx, base);
	// 00460610 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460611 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460612 mov [0x00655244], al
	{ uint32_t ea = (uint32_t)(0x655244u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460617 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460601, __imp__sub_00460601)

X86_FUNC(__imp__sub_00460618) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460618 push 0x5B78D4
	{ uint32_t v = (uint32_t)(0x5B78D4u); X86_PUSH32(v); }
	// 0046061D push 0x132
	{ uint32_t v = (uint32_t)(0x132u); X86_PUSH32(v); }
	// 00460622 call 0x0006800A
	X86_PUSH32(0x460627u); sub_0006800A(ctx, base);
	// 00460627 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460628 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460629 mov [0x00655245], al
	{ uint32_t ea = (uint32_t)(0x655245u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046062E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460618, __imp__sub_00460618)

X86_FUNC(__imp__sub_0046062F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046062F push 0x5B78D8
	{ uint32_t v = (uint32_t)(0x5B78D8u); X86_PUSH32(v); }
	// 00460634 push 0x131
	{ uint32_t v = (uint32_t)(0x131u); X86_PUSH32(v); }
	// 00460639 call 0x0006800A
	X86_PUSH32(0x46063Eu); sub_0006800A(ctx, base);
	// 0046063E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046063F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460640 mov [0x00655246], al
	{ uint32_t ea = (uint32_t)(0x655246u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460645 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046062F, __imp__sub_0046062F)

X86_FUNC(__imp__sub_00460646) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460646 push 0x5B78DC
	{ uint32_t v = (uint32_t)(0x5B78DCu); X86_PUSH32(v); }
	// 0046064B push 0x139
	{ uint32_t v = (uint32_t)(0x139u); X86_PUSH32(v); }
	// 00460650 call 0x0006800A
	X86_PUSH32(0x460655u); sub_0006800A(ctx, base);
	// 00460655 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460656 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460657 mov [0x00655247], al
	{ uint32_t ea = (uint32_t)(0x655247u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046065C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460646, __imp__sub_00460646)

X86_FUNC(__imp__sub_0046065D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046065D push 0x5B78E0
	{ uint32_t v = (uint32_t)(0x5B78E0u); X86_PUSH32(v); }
	// 00460662 push 0x130
	{ uint32_t v = (uint32_t)(0x130u); X86_PUSH32(v); }
	// 00460667 call 0x0006800A
	X86_PUSH32(0x46066Cu); sub_0006800A(ctx, base);
	// 0046066C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046066D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046066E mov [0x00655248], al
	{ uint32_t ea = (uint32_t)(0x655248u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460673 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046065D, __imp__sub_0046065D)

X86_FUNC(__imp__sub_00460674) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460674 push 0x5B78E4
	{ uint32_t v = (uint32_t)(0x5B78E4u); X86_PUSH32(v); }
	// 00460679 push 0xC0D
	{ uint32_t v = (uint32_t)(0xC0Du); X86_PUSH32(v); }
	// 0046067E call 0x0006800A
	X86_PUSH32(0x460683u); sub_0006800A(ctx, base);
	// 00460683 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460684 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460685 mov [0x00655249], al
	{ uint32_t ea = (uint32_t)(0x655249u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046068A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460674, __imp__sub_00460674)

X86_FUNC(__imp__sub_0046068B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046068B push 0x5B78E8
	{ uint32_t v = (uint32_t)(0x5B78E8u); X86_PUSH32(v); }
	// 00460690 push 0xC0C
	{ uint32_t v = (uint32_t)(0xC0Cu); X86_PUSH32(v); }
	// 00460695 call 0x0006800A
	X86_PUSH32(0x46069Au); sub_0006800A(ctx, base);
	// 0046069A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046069B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046069C mov [0x0065524A], al
	{ uint32_t ea = (uint32_t)(0x65524Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004606A1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046068B, __imp__sub_0046068B)

X86_FUNC(__imp__sub_004606A2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004606A2 push 0x5B78EC
	{ uint32_t v = (uint32_t)(0x5B78ECu); X86_PUSH32(v); }
	// 004606A7 push 0xC0B
	{ uint32_t v = (uint32_t)(0xC0Bu); X86_PUSH32(v); }
	// 004606AC call 0x0006800A
	X86_PUSH32(0x4606B1u); sub_0006800A(ctx, base);
	// 004606B1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004606B2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004606B3 mov [0x0065524B], al
	{ uint32_t ea = (uint32_t)(0x65524Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004606B8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004606A2, __imp__sub_004606A2)

X86_FUNC(__imp__sub_004606B9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004606B9 push 0x5B78F0
	{ uint32_t v = (uint32_t)(0x5B78F0u); X86_PUSH32(v); }
	// 004606BE push 0xC0A
	{ uint32_t v = (uint32_t)(0xC0Au); X86_PUSH32(v); }
	// 004606C3 call 0x0006800A
	X86_PUSH32(0x4606C8u); sub_0006800A(ctx, base);
	// 004606C8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004606C9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004606CA mov [0x0065524C], al
	{ uint32_t ea = (uint32_t)(0x65524Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004606CF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004606B9, __imp__sub_004606B9)

X86_FUNC(__imp__sub_004606D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004606D0 push 0x5B78F4
	{ uint32_t v = (uint32_t)(0x5B78F4u); X86_PUSH32(v); }
	// 004606D5 push 0x214
	{ uint32_t v = (uint32_t)(0x214u); X86_PUSH32(v); }
	// 004606DA call 0x0006800A
	X86_PUSH32(0x4606DFu); sub_0006800A(ctx, base);
	// 004606DF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004606E0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004606E1 mov [0x0065524D], al
	{ uint32_t ea = (uint32_t)(0x65524Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004606E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004606D0, __imp__sub_004606D0)

X86_FUNC(__imp__sub_004606E7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004606E7 push 0x5B78F8
	{ uint32_t v = (uint32_t)(0x5B78F8u); X86_PUSH32(v); }
	// 004606EC push 0x7C6
	{ uint32_t v = (uint32_t)(0x7C6u); X86_PUSH32(v); }
	// 004606F1 call 0x0006800A
	X86_PUSH32(0x4606F6u); sub_0006800A(ctx, base);
	// 004606F6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004606F7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004606F8 mov [0x0065524E], al
	{ uint32_t ea = (uint32_t)(0x65524Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004606FD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004606E7, __imp__sub_004606E7)

X86_FUNC(__imp__sub_004606FE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004606FE push 0x5B78FC
	{ uint32_t v = (uint32_t)(0x5B78FCu); X86_PUSH32(v); }
	// 00460703 push 0x7B8
	{ uint32_t v = (uint32_t)(0x7B8u); X86_PUSH32(v); }
	// 00460708 call 0x0006800A
	X86_PUSH32(0x46070Du); sub_0006800A(ctx, base);
	// 0046070D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046070E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046070F mov [0x0065524F], al
	{ uint32_t ea = (uint32_t)(0x65524Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460714 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004606FE, __imp__sub_004606FE)

X86_FUNC(__imp__sub_00460715) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460715 push 0x5B7900
	{ uint32_t v = (uint32_t)(0x5B7900u); X86_PUSH32(v); }
	// 0046071A push 0x7B6
	{ uint32_t v = (uint32_t)(0x7B6u); X86_PUSH32(v); }
	// 0046071F call 0x0006800A
	X86_PUSH32(0x460724u); sub_0006800A(ctx, base);
	// 00460724 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460725 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460726 mov [0x00655250], al
	{ uint32_t ea = (uint32_t)(0x655250u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046072B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460715, __imp__sub_00460715)

X86_FUNC(__imp__sub_0046072C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046072C push 0x5B7904
	{ uint32_t v = (uint32_t)(0x5B7904u); X86_PUSH32(v); }
	// 00460731 push 0x7B7
	{ uint32_t v = (uint32_t)(0x7B7u); X86_PUSH32(v); }
	// 00460736 call 0x0006800A
	X86_PUSH32(0x46073Bu); sub_0006800A(ctx, base);
	// 0046073B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046073C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046073D mov [0x00655251], al
	{ uint32_t ea = (uint32_t)(0x655251u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460742 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046072C, __imp__sub_0046072C)

X86_FUNC(__imp__sub_00460743) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460743 push 0x5B7908
	{ uint32_t v = (uint32_t)(0x5B7908u); X86_PUSH32(v); }
	// 00460748 push 0x684
	{ uint32_t v = (uint32_t)(0x684u); X86_PUSH32(v); }
	// 0046074D call 0x0006800A
	X86_PUSH32(0x460752u); sub_0006800A(ctx, base);
	// 00460752 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460753 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460754 mov [0x00655252], al
	{ uint32_t ea = (uint32_t)(0x655252u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460759 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460743, __imp__sub_00460743)

X86_FUNC(__imp__sub_0046075A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046075A push 0x5B790C
	{ uint32_t v = (uint32_t)(0x5B790Cu); X86_PUSH32(v); }
	// 0046075F push 0x67A
	{ uint32_t v = (uint32_t)(0x67Au); X86_PUSH32(v); }
	// 00460764 call 0x0006800A
	X86_PUSH32(0x460769u); sub_0006800A(ctx, base);
	// 00460769 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046076A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046076B mov [0x00655253], al
	{ uint32_t ea = (uint32_t)(0x655253u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460770 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046075A, __imp__sub_0046075A)

X86_FUNC(__imp__sub_00460771) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460771 push 0x5B7910
	{ uint32_t v = (uint32_t)(0x5B7910u); X86_PUSH32(v); }
	// 00460776 push 0x679
	{ uint32_t v = (uint32_t)(0x679u); X86_PUSH32(v); }
	// 0046077B call 0x0006800A
	X86_PUSH32(0x460780u); sub_0006800A(ctx, base);
	// 00460780 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460781 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460782 mov [0x00655254], al
	{ uint32_t ea = (uint32_t)(0x655254u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460787 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460771, __imp__sub_00460771)

X86_FUNC(__imp__sub_00460788) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460788 push 0x5B7914
	{ uint32_t v = (uint32_t)(0x5B7914u); X86_PUSH32(v); }
	// 0046078D push 0x6A2
	{ uint32_t v = (uint32_t)(0x6A2u); X86_PUSH32(v); }
	// 00460792 call 0x0006800A
	X86_PUSH32(0x460797u); sub_0006800A(ctx, base);
	// 00460797 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460798 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460799 mov [0x00655255], al
	{ uint32_t ea = (uint32_t)(0x655255u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046079E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460788, __imp__sub_00460788)

X86_FUNC(__imp__sub_0046079F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046079F push 0x5B7918
	{ uint32_t v = (uint32_t)(0x5B7918u); X86_PUSH32(v); }
	// 004607A4 push 0x69B
	{ uint32_t v = (uint32_t)(0x69Bu); X86_PUSH32(v); }
	// 004607A9 call 0x0006800A
	X86_PUSH32(0x4607AEu); sub_0006800A(ctx, base);
	// 004607AE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004607AF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004607B0 mov [0x00655256], al
	{ uint32_t ea = (uint32_t)(0x655256u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004607B5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046079F, __imp__sub_0046079F)

X86_FUNC(__imp__sub_004607B6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004607B6 push 0x5B791C
	{ uint32_t v = (uint32_t)(0x5B791Cu); X86_PUSH32(v); }
	// 004607BB push 0x660
	{ uint32_t v = (uint32_t)(0x660u); X86_PUSH32(v); }
	// 004607C0 call 0x0006800A
	X86_PUSH32(0x4607C5u); sub_0006800A(ctx, base);
	// 004607C5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004607C6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004607C7 mov [0x00655257], al
	{ uint32_t ea = (uint32_t)(0x655257u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004607CC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004607B6, __imp__sub_004607B6)

X86_FUNC(__imp__sub_004607CD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004607CD push 0x5B7920
	{ uint32_t v = (uint32_t)(0x5B7920u); X86_PUSH32(v); }
	// 004607D2 push 0x65D
	{ uint32_t v = (uint32_t)(0x65Du); X86_PUSH32(v); }
	// 004607D7 call 0x0006800A
	X86_PUSH32(0x4607DCu); sub_0006800A(ctx, base);
	// 004607DC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004607DD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004607DE mov [0x00655258], al
	{ uint32_t ea = (uint32_t)(0x655258u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004607E3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004607CD, __imp__sub_004607CD)

X86_FUNC(__imp__sub_004607E4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004607E4 push 0x5B7924
	{ uint32_t v = (uint32_t)(0x5B7924u); X86_PUSH32(v); }
	// 004607E9 push 0x65B
	{ uint32_t v = (uint32_t)(0x65Bu); X86_PUSH32(v); }
	// 004607EE call 0x0006800A
	X86_PUSH32(0x4607F3u); sub_0006800A(ctx, base);
	// 004607F3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004607F4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004607F5 mov [0x00655259], al
	{ uint32_t ea = (uint32_t)(0x655259u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004607FA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004607E4, __imp__sub_004607E4)

X86_FUNC(__imp__sub_004607FB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004607FB push 0x5B7928
	{ uint32_t v = (uint32_t)(0x5B7928u); X86_PUSH32(v); }
	// 00460800 push 0x65A
	{ uint32_t v = (uint32_t)(0x65Au); X86_PUSH32(v); }
	// 00460805 call 0x0006800A
	X86_PUSH32(0x46080Au); sub_0006800A(ctx, base);
	// 0046080A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046080B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046080C mov [0x0065525A], al
	{ uint32_t ea = (uint32_t)(0x65525Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460811 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004607FB, __imp__sub_004607FB)

X86_FUNC(__imp__sub_00460812) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460812 push 0x5B792C
	{ uint32_t v = (uint32_t)(0x5B792Cu); X86_PUSH32(v); }
	// 00460817 push 0x659
	{ uint32_t v = (uint32_t)(0x659u); X86_PUSH32(v); }
	// 0046081C call 0x0006800A
	X86_PUSH32(0x460821u); sub_0006800A(ctx, base);
	// 00460821 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460822 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460823 mov [0x0065525B], al
	{ uint32_t ea = (uint32_t)(0x65525Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460828 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460812, __imp__sub_00460812)

X86_FUNC(__imp__sub_00460829) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460829 push 0x5B7930
	{ uint32_t v = (uint32_t)(0x5B7930u); X86_PUSH32(v); }
	// 0046082E push 0x658
	{ uint32_t v = (uint32_t)(0x658u); X86_PUSH32(v); }
	// 00460833 call 0x0006800A
	X86_PUSH32(0x460838u); sub_0006800A(ctx, base);
	// 00460838 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460839 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046083A mov [0x0065525C], al
	{ uint32_t ea = (uint32_t)(0x65525Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046083F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460829, __imp__sub_00460829)

X86_FUNC(__imp__sub_00460840) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460840 push 0x5B7934
	{ uint32_t v = (uint32_t)(0x5B7934u); X86_PUSH32(v); }
	// 00460845 push 0x656
	{ uint32_t v = (uint32_t)(0x656u); X86_PUSH32(v); }
	// 0046084A call 0x0006800A
	X86_PUSH32(0x46084Fu); sub_0006800A(ctx, base);
	// 0046084F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460850 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460851 mov [0x0065525D], al
	{ uint32_t ea = (uint32_t)(0x65525Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460856 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460840, __imp__sub_00460840)

X86_FUNC(__imp__sub_00460857) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460857 push 0x5B7938
	{ uint32_t v = (uint32_t)(0x5B7938u); X86_PUSH32(v); }
	// 0046085C push 0x653
	{ uint32_t v = (uint32_t)(0x653u); X86_PUSH32(v); }
	// 00460861 call 0x0006800A
	X86_PUSH32(0x460866u); sub_0006800A(ctx, base);
	// 00460866 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460867 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460868 mov [0x0065525E], al
	{ uint32_t ea = (uint32_t)(0x65525Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046086D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460857, __imp__sub_00460857)

X86_FUNC(__imp__sub_0046086E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046086E push 0x5B793C
	{ uint32_t v = (uint32_t)(0x5B793Cu); X86_PUSH32(v); }
	// 00460873 push 0x652
	{ uint32_t v = (uint32_t)(0x652u); X86_PUSH32(v); }
	// 00460878 call 0x0006800A
	X86_PUSH32(0x46087Du); sub_0006800A(ctx, base);
	// 0046087D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046087E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046087F mov [0x0065525F], al
	{ uint32_t ea = (uint32_t)(0x65525Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460884 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046086E, __imp__sub_0046086E)

X86_FUNC(__imp__sub_00460885) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460885 push 0x5B7940
	{ uint32_t v = (uint32_t)(0x5B7940u); X86_PUSH32(v); }
	// 0046088A push 0x650
	{ uint32_t v = (uint32_t)(0x650u); X86_PUSH32(v); }
	// 0046088F call 0x0006800A
	X86_PUSH32(0x460894u); sub_0006800A(ctx, base);
	// 00460894 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460895 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460896 mov [0x00655260], al
	{ uint32_t ea = (uint32_t)(0x655260u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046089B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460885, __imp__sub_00460885)

X86_FUNC(__imp__sub_0046089C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046089C push 0x5B7944
	{ uint32_t v = (uint32_t)(0x5B7944u); X86_PUSH32(v); }
	// 004608A1 push 0x848
	{ uint32_t v = (uint32_t)(0x848u); X86_PUSH32(v); }
	// 004608A6 call 0x0006800A
	X86_PUSH32(0x4608ABu); sub_0006800A(ctx, base);
	// 004608AB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004608AC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004608AD mov [0x00655261], al
	{ uint32_t ea = (uint32_t)(0x655261u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004608B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046089C, __imp__sub_0046089C)

X86_FUNC(__imp__sub_004608B3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004608B3 push 0x5B7948
	{ uint32_t v = (uint32_t)(0x5B7948u); X86_PUSH32(v); }
	// 004608B8 push 0x46D
	{ uint32_t v = (uint32_t)(0x46Du); X86_PUSH32(v); }
	// 004608BD call 0x0006800A
	X86_PUSH32(0x4608C2u); sub_0006800A(ctx, base);
	// 004608C2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004608C3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004608C4 mov [0x00655262], al
	{ uint32_t ea = (uint32_t)(0x655262u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004608C9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004608B3, __imp__sub_004608B3)

X86_FUNC(__imp__sub_004608CA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004608CA push 0x5B794C
	{ uint32_t v = (uint32_t)(0x5B794Cu); X86_PUSH32(v); }
	// 004608CF push 0x46C
	{ uint32_t v = (uint32_t)(0x46Cu); X86_PUSH32(v); }
	// 004608D4 call 0x0006800A
	X86_PUSH32(0x4608D9u); sub_0006800A(ctx, base);
	// 004608D9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004608DA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004608DB mov [0x00655263], al
	{ uint32_t ea = (uint32_t)(0x655263u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004608E0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004608CA, __imp__sub_004608CA)

X86_FUNC(__imp__sub_004608E1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004608E1 push 0x5B7950
	{ uint32_t v = (uint32_t)(0x5B7950u); X86_PUSH32(v); }
	// 004608E6 push 0x46B
	{ uint32_t v = (uint32_t)(0x46Bu); X86_PUSH32(v); }
	// 004608EB call 0x0006800A
	X86_PUSH32(0x4608F0u); sub_0006800A(ctx, base);
	// 004608F0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004608F1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004608F2 mov [0x00655264], al
	{ uint32_t ea = (uint32_t)(0x655264u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004608F7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004608E1, __imp__sub_004608E1)

X86_FUNC(__imp__sub_004608F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004608F8 push 0x5B7954
	{ uint32_t v = (uint32_t)(0x5B7954u); X86_PUSH32(v); }
	// 004608FD push 0x46A
	{ uint32_t v = (uint32_t)(0x46Au); X86_PUSH32(v); }
	// 00460902 call 0x0006800A
	X86_PUSH32(0x460907u); sub_0006800A(ctx, base);
	// 00460907 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460908 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460909 mov [0x00655265], al
	{ uint32_t ea = (uint32_t)(0x655265u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046090E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004608F8, __imp__sub_004608F8)

X86_FUNC(__imp__sub_0046090F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046090F push 0x5B7958
	{ uint32_t v = (uint32_t)(0x5B7958u); X86_PUSH32(v); }
	// 00460914 push 0x642
	{ uint32_t v = (uint32_t)(0x642u); X86_PUSH32(v); }
	// 00460919 call 0x0006800A
	X86_PUSH32(0x46091Eu); sub_0006800A(ctx, base);
	// 0046091E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046091F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460920 mov [0x00655266], al
	{ uint32_t ea = (uint32_t)(0x655266u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460925 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046090F, __imp__sub_0046090F)

X86_FUNC(__imp__sub_00460926) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460926 push 0x5B795C
	{ uint32_t v = (uint32_t)(0x5B795Cu); X86_PUSH32(v); }
	// 0046092B push 0x64A
	{ uint32_t v = (uint32_t)(0x64Au); X86_PUSH32(v); }
	// 00460930 call 0x0006800A
	X86_PUSH32(0x460935u); sub_0006800A(ctx, base);
	// 00460935 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460936 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460937 mov [0x00655267], al
	{ uint32_t ea = (uint32_t)(0x655267u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046093C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460926, __imp__sub_00460926)

X86_FUNC(__imp__sub_0046093D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046093D push 0x5B7960
	{ uint32_t v = (uint32_t)(0x5B7960u); X86_PUSH32(v); }
	// 00460942 push 0x64B
	{ uint32_t v = (uint32_t)(0x64Bu); X86_PUSH32(v); }
	// 00460947 call 0x0006800A
	X86_PUSH32(0x46094Cu); sub_0006800A(ctx, base);
	// 0046094C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046094D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046094E mov [0x00655268], al
	{ uint32_t ea = (uint32_t)(0x655268u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460953 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046093D, __imp__sub_0046093D)

X86_FUNC(__imp__sub_00460954) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460954 push 0x5B7964
	{ uint32_t v = (uint32_t)(0x5B7964u); X86_PUSH32(v); }
	// 00460959 push 0x649
	{ uint32_t v = (uint32_t)(0x649u); X86_PUSH32(v); }
	// 0046095E call 0x0006800A
	X86_PUSH32(0x460963u); sub_0006800A(ctx, base);
	// 00460963 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460964 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460965 mov [0x00655269], al
	{ uint32_t ea = (uint32_t)(0x655269u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046096A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460954, __imp__sub_00460954)

X86_FUNC(__imp__sub_0046096B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046096B push 0x5B7968
	{ uint32_t v = (uint32_t)(0x5B7968u); X86_PUSH32(v); }
	// 00460970 push 0x698
	{ uint32_t v = (uint32_t)(0x698u); X86_PUSH32(v); }
	// 00460975 call 0x0006800A
	X86_PUSH32(0x46097Au); sub_0006800A(ctx, base);
	// 0046097A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046097B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046097C mov [0x0065526A], al
	{ uint32_t ea = (uint32_t)(0x65526Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460981 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046096B, __imp__sub_0046096B)

X86_FUNC(__imp__sub_00460982) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460982 push 0x5B796C
	{ uint32_t v = (uint32_t)(0x5B796Cu); X86_PUSH32(v); }
	// 00460987 push 0x648
	{ uint32_t v = (uint32_t)(0x648u); X86_PUSH32(v); }
	// 0046098C call 0x0006800A
	X86_PUSH32(0x460991u); sub_0006800A(ctx, base);
	// 00460991 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460992 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460993 mov [0x0065526B], al
	{ uint32_t ea = (uint32_t)(0x65526Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460998 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460982, __imp__sub_00460982)

X86_FUNC(__imp__sub_00460999) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460999 push 0x5B7970
	{ uint32_t v = (uint32_t)(0x5B7970u); X86_PUSH32(v); }
	// 0046099E push 0x64E
	{ uint32_t v = (uint32_t)(0x64Eu); X86_PUSH32(v); }
	// 004609A3 call 0x0006800A
	X86_PUSH32(0x4609A8u); sub_0006800A(ctx, base);
	// 004609A8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004609A9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004609AA mov [0x0065526C], al
	{ uint32_t ea = (uint32_t)(0x65526Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004609AF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460999, __imp__sub_00460999)

X86_FUNC(__imp__sub_004609B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004609B0 push 0x5B7974
	{ uint32_t v = (uint32_t)(0x5B7974u); X86_PUSH32(v); }
	// 004609B5 push 0x647
	{ uint32_t v = (uint32_t)(0x647u); X86_PUSH32(v); }
	// 004609BA call 0x0006800A
	X86_PUSH32(0x4609BFu); sub_0006800A(ctx, base);
	// 004609BF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004609C0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004609C1 mov [0x0065526D], al
	{ uint32_t ea = (uint32_t)(0x65526Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004609C6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004609B0, __imp__sub_004609B0)

X86_FUNC(__imp__sub_004609C7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004609C7 push 0x5B7978
	{ uint32_t v = (uint32_t)(0x5B7978u); X86_PUSH32(v); }
	// 004609CC push 0x643
	{ uint32_t v = (uint32_t)(0x643u); X86_PUSH32(v); }
	// 004609D1 call 0x0006800A
	X86_PUSH32(0x4609D6u); sub_0006800A(ctx, base);
	// 004609D6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004609D7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004609D8 mov [0x0065526E], al
	{ uint32_t ea = (uint32_t)(0x65526Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004609DD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004609C7, __imp__sub_004609C7)

X86_FUNC(__imp__sub_004609DE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004609DE push 0x5B797C
	{ uint32_t v = (uint32_t)(0x5B797Cu); X86_PUSH32(v); }
	// 004609E3 push 0x641
	{ uint32_t v = (uint32_t)(0x641u); X86_PUSH32(v); }
	// 004609E8 call 0x0006800A
	X86_PUSH32(0x4609EDu); sub_0006800A(ctx, base);
	// 004609ED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004609EE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004609EF mov [0x0065526F], al
	{ uint32_t ea = (uint32_t)(0x65526Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004609F4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004609DE, __imp__sub_004609DE)

X86_FUNC(__imp__sub_004609F5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004609F5 push 0x5B7980
	{ uint32_t v = (uint32_t)(0x5B7980u); X86_PUSH32(v); }
	// 004609FA push 0x646
	{ uint32_t v = (uint32_t)(0x646u); X86_PUSH32(v); }
	// 004609FF call 0x0006800A
	X86_PUSH32(0x460A04u); sub_0006800A(ctx, base);
	// 00460A04 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A05 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A06 mov [0x00655270], al
	{ uint32_t ea = (uint32_t)(0x655270u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460A0B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004609F5, __imp__sub_004609F5)

X86_FUNC(__imp__sub_00460A0C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460A0C push 0x5B7984
	{ uint32_t v = (uint32_t)(0x5B7984u); X86_PUSH32(v); }
	// 00460A11 push 0x645
	{ uint32_t v = (uint32_t)(0x645u); X86_PUSH32(v); }
	// 00460A16 call 0x0006800A
	X86_PUSH32(0x460A1Bu); sub_0006800A(ctx, base);
	// 00460A1B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A1C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A1D mov [0x00655271], al
	{ uint32_t ea = (uint32_t)(0x655271u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460A22 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460A0C, __imp__sub_00460A0C)

X86_FUNC(__imp__sub_00460A23) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460A23 push 0x5B7988
	{ uint32_t v = (uint32_t)(0x5B7988u); X86_PUSH32(v); }
	// 00460A28 push 0x644
	{ uint32_t v = (uint32_t)(0x644u); X86_PUSH32(v); }
	// 00460A2D call 0x0006800A
	X86_PUSH32(0x460A32u); sub_0006800A(ctx, base);
	// 00460A32 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A33 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A34 mov [0x00655272], al
	{ uint32_t ea = (uint32_t)(0x655272u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460A39 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460A23, __imp__sub_00460A23)

X86_FUNC(__imp__sub_00460A3A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460A3A push 0x5B798C
	{ uint32_t v = (uint32_t)(0x5B798Cu); X86_PUSH32(v); }
	// 00460A3F push 0x640
	{ uint32_t v = (uint32_t)(0x640u); X86_PUSH32(v); }
	// 00460A44 call 0x0006800A
	X86_PUSH32(0x460A49u); sub_0006800A(ctx, base);
	// 00460A49 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A4A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A4B mov [0x00655273], al
	{ uint32_t ea = (uint32_t)(0x655273u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460A50 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460A3A, __imp__sub_00460A3A)

X86_FUNC(__imp__sub_00460A51) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460A51 push 0x5B7990
	{ uint32_t v = (uint32_t)(0x5B7990u); X86_PUSH32(v); }
	// 00460A56 push 0x108
	{ uint32_t v = (uint32_t)(0x108u); X86_PUSH32(v); }
	// 00460A5B call 0x0006800A
	X86_PUSH32(0x460A60u); sub_0006800A(ctx, base);
	// 00460A60 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A61 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A62 mov [0x00655274], al
	{ uint32_t ea = (uint32_t)(0x655274u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460A67 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460A51, __imp__sub_00460A51)

X86_FUNC(__imp__sub_00460A68) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460A68 push 0x5B7994
	{ uint32_t v = (uint32_t)(0x5B7994u); X86_PUSH32(v); }
	// 00460A6D push 0x118
	{ uint32_t v = (uint32_t)(0x118u); X86_PUSH32(v); }
	// 00460A72 call 0x0006800A
	X86_PUSH32(0x460A77u); sub_0006800A(ctx, base);
	// 00460A77 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A78 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A79 mov [0x00655275], al
	{ uint32_t ea = (uint32_t)(0x655275u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460A7E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460A68, __imp__sub_00460A68)

X86_FUNC(__imp__sub_00460A7F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460A7F push 0x5B7998
	{ uint32_t v = (uint32_t)(0x5B7998u); X86_PUSH32(v); }
	// 00460A84 push 0x117
	{ uint32_t v = (uint32_t)(0x117u); X86_PUSH32(v); }
	// 00460A89 call 0x0006800A
	X86_PUSH32(0x460A8Eu); sub_0006800A(ctx, base);
	// 00460A8E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A8F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460A90 mov [0x00655276], al
	{ uint32_t ea = (uint32_t)(0x655276u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460A95 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460A7F, __imp__sub_00460A7F)

X86_FUNC(__imp__sub_00460A96) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460A96 push 0x5B799C
	{ uint32_t v = (uint32_t)(0x5B799Cu); X86_PUSH32(v); }
	// 00460A9B push 0x116
	{ uint32_t v = (uint32_t)(0x116u); X86_PUSH32(v); }
	// 00460AA0 call 0x0006800A
	X86_PUSH32(0x460AA5u); sub_0006800A(ctx, base);
	// 00460AA5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460AA6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460AA7 mov [0x00655277], al
	{ uint32_t ea = (uint32_t)(0x655277u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460AAC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460A96, __imp__sub_00460A96)

X86_FUNC(__imp__sub_00460AAD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460AAD push 0x5B79A0
	{ uint32_t v = (uint32_t)(0x5B79A0u); X86_PUSH32(v); }
	// 00460AB2 push 0x4CD
	{ uint32_t v = (uint32_t)(0x4CDu); X86_PUSH32(v); }
	// 00460AB7 call 0x0006800A
	X86_PUSH32(0x460ABCu); sub_0006800A(ctx, base);
	// 00460ABC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460ABD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460ABE mov [0x00655278], al
	{ uint32_t ea = (uint32_t)(0x655278u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460AC3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460AAD, __imp__sub_00460AAD)

X86_FUNC(__imp__sub_00460AC4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460AC4 push 0x5B79A4
	{ uint32_t v = (uint32_t)(0x5B79A4u); X86_PUSH32(v); }
	// 00460AC9 push 0x224
	{ uint32_t v = (uint32_t)(0x224u); X86_PUSH32(v); }
	// 00460ACE call 0x0006800A
	X86_PUSH32(0x460AD3u); sub_0006800A(ctx, base);
	// 00460AD3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460AD4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460AD5 mov [0x00655279], al
	{ uint32_t ea = (uint32_t)(0x655279u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460ADA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460AC4, __imp__sub_00460AC4)

X86_FUNC(__imp__sub_00460ADB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460ADB push 0x5B79A8
	{ uint32_t v = (uint32_t)(0x5B79A8u); X86_PUSH32(v); }
	// 00460AE0 push 0x115
	{ uint32_t v = (uint32_t)(0x115u); X86_PUSH32(v); }
	// 00460AE5 call 0x0006800A
	X86_PUSH32(0x460AEAu); sub_0006800A(ctx, base);
	// 00460AEA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460AEB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460AEC mov [0x0065527A], al
	{ uint32_t ea = (uint32_t)(0x65527Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460AF1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460ADB, __imp__sub_00460ADB)

X86_FUNC(__imp__sub_00460AF2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460AF2 push 0x5B79AC
	{ uint32_t v = (uint32_t)(0x5B79ACu); X86_PUSH32(v); }
	// 00460AF7 push 0x58B
	{ uint32_t v = (uint32_t)(0x58Bu); X86_PUSH32(v); }
	// 00460AFC call 0x0006800A
	X86_PUSH32(0x460B01u); sub_0006800A(ctx, base);
	// 00460B01 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B02 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B03 mov [0x0065527B], al
	{ uint32_t ea = (uint32_t)(0x65527Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460B08 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460AF2, __imp__sub_00460AF2)

X86_FUNC(__imp__sub_00460B09) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460B09 push 0x5B79B0
	{ uint32_t v = (uint32_t)(0x5B79B0u); X86_PUSH32(v); }
	// 00460B0E push 0xF82
	{ uint32_t v = (uint32_t)(0xF82u); X86_PUSH32(v); }
	// 00460B13 call 0x0006800A
	X86_PUSH32(0x460B18u); sub_0006800A(ctx, base);
	// 00460B18 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B19 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B1A mov [0x0065527C], al
	{ uint32_t ea = (uint32_t)(0x65527Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460B1F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460B09, __imp__sub_00460B09)

X86_FUNC(__imp__sub_00460B20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460B20 push 0x5B79B4
	{ uint32_t v = (uint32_t)(0x5B79B4u); X86_PUSH32(v); }
	// 00460B25 push 0x12D
	{ uint32_t v = (uint32_t)(0x12Du); X86_PUSH32(v); }
	// 00460B2A call 0x0006800A
	X86_PUSH32(0x460B2Fu); sub_0006800A(ctx, base);
	// 00460B2F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B30 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B31 mov [0x0065527D], al
	{ uint32_t ea = (uint32_t)(0x65527Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460B36 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460B20, __imp__sub_00460B20)

X86_FUNC(__imp__sub_00460B37) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460B37 push 0x5B79B8
	{ uint32_t v = (uint32_t)(0x5B79B8u); X86_PUSH32(v); }
	// 00460B3C push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460B3E call 0x0006800A
	X86_PUSH32(0x460B43u); sub_0006800A(ctx, base);
	// 00460B43 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B44 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B45 mov [0x0065527E], al
	{ uint32_t ea = (uint32_t)(0x65527Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460B4A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460B37, __imp__sub_00460B37)

X86_FUNC(__imp__sub_00460B4B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460B4B push 0x5B79BC
	{ uint32_t v = (uint32_t)(0x5B79BCu); X86_PUSH32(v); }
	// 00460B50 push 0x613
	{ uint32_t v = (uint32_t)(0x613u); X86_PUSH32(v); }
	// 00460B55 call 0x0006800A
	X86_PUSH32(0x460B5Au); sub_0006800A(ctx, base);
	// 00460B5A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B5B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B5C mov [0x0065527F], al
	{ uint32_t ea = (uint32_t)(0x65527Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460B61 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460B4B, __imp__sub_00460B4B)

X86_FUNC(__imp__sub_00460B62) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460B62 push 0x5B79C0
	{ uint32_t v = (uint32_t)(0x5B79C0u); X86_PUSH32(v); }
	// 00460B67 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460B69 call 0x0006800A
	X86_PUSH32(0x460B6Eu); sub_0006800A(ctx, base);
	// 00460B6E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B6F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B70 mov [0x00655280], al
	{ uint32_t ea = (uint32_t)(0x655280u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460B75 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460B62, __imp__sub_00460B62)

X86_FUNC(__imp__sub_00460B76) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460B76 push 0x5B79C4
	{ uint32_t v = (uint32_t)(0x5B79C4u); X86_PUSH32(v); }
	// 00460B7B push 0x6A9
	{ uint32_t v = (uint32_t)(0x6A9u); X86_PUSH32(v); }
	// 00460B80 call 0x0006800A
	X86_PUSH32(0x460B85u); sub_0006800A(ctx, base);
	// 00460B85 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B86 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B87 mov [0x00655281], al
	{ uint32_t ea = (uint32_t)(0x655281u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460B8C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460B76, __imp__sub_00460B76)

X86_FUNC(__imp__sub_00460B8D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460B8D push 0x5B79C8
	{ uint32_t v = (uint32_t)(0x5B79C8u); X86_PUSH32(v); }
	// 00460B92 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460B94 call 0x0006800A
	X86_PUSH32(0x460B99u); sub_0006800A(ctx, base);
	// 00460B99 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B9A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460B9B mov [0x00655282], al
	{ uint32_t ea = (uint32_t)(0x655282u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460BA0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460B8D, __imp__sub_00460B8D)

X86_FUNC(__imp__sub_00460BA1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460BA1 push 0x5B79CC
	{ uint32_t v = (uint32_t)(0x5B79CCu); X86_PUSH32(v); }
	// 00460BA6 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460BA8 call 0x0006800A
	X86_PUSH32(0x460BADu); sub_0006800A(ctx, base);
	// 00460BAD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460BAE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460BAF mov [0x00655283], al
	{ uint32_t ea = (uint32_t)(0x655283u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460BB4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460BA1, __imp__sub_00460BA1)

X86_FUNC(__imp__sub_00460BB5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460BB5 push 0x5B79D0
	{ uint32_t v = (uint32_t)(0x5B79D0u); X86_PUSH32(v); }
	// 00460BBA push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460BBC call 0x0006800A
	X86_PUSH32(0x460BC1u); sub_0006800A(ctx, base);
	// 00460BC1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460BC2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460BC3 mov [0x00655284], al
	{ uint32_t ea = (uint32_t)(0x655284u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460BC8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460BB5, __imp__sub_00460BB5)

X86_FUNC(__imp__sub_00460BC9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460BC9 push 0x5B79D4
	{ uint32_t v = (uint32_t)(0x5B79D4u); X86_PUSH32(v); }
	// 00460BCE push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460BD0 call 0x0006800A
	X86_PUSH32(0x460BD5u); sub_0006800A(ctx, base);
	// 00460BD5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460BD6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460BD7 mov [0x00655285], al
	{ uint32_t ea = (uint32_t)(0x655285u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460BDC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460BC9, __imp__sub_00460BC9)

X86_FUNC(__imp__sub_00460BDD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460BDD push 0x5B79D8
	{ uint32_t v = (uint32_t)(0x5B79D8u); X86_PUSH32(v); }
	// 00460BE2 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460BE4 call 0x0006800A
	X86_PUSH32(0x460BE9u); sub_0006800A(ctx, base);
	// 00460BE9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460BEA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460BEB mov [0x00655286], al
	{ uint32_t ea = (uint32_t)(0x655286u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460BF0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460BDD, __imp__sub_00460BDD)

X86_FUNC(__imp__sub_00460BF1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460BF1 push 0x5B79DC
	{ uint32_t v = (uint32_t)(0x5B79DCu); X86_PUSH32(v); }
	// 00460BF6 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460BF8 call 0x0006800A
	X86_PUSH32(0x460BFDu); sub_0006800A(ctx, base);
	// 00460BFD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460BFE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460BFF mov [0x00655287], al
	{ uint32_t ea = (uint32_t)(0x655287u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460C04 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460BF1, __imp__sub_00460BF1)

X86_FUNC(__imp__sub_00460C05) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460C05 push 0x5B79E0
	{ uint32_t v = (uint32_t)(0x5B79E0u); X86_PUSH32(v); }
	// 00460C0A push 0x4AF
	{ uint32_t v = (uint32_t)(0x4AFu); X86_PUSH32(v); }
	// 00460C0F call 0x0006800A
	X86_PUSH32(0x460C14u); sub_0006800A(ctx, base);
	// 00460C14 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C15 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C16 mov [0x00655288], al
	{ uint32_t ea = (uint32_t)(0x655288u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460C1B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460C05, __imp__sub_00460C05)

X86_FUNC(__imp__sub_00460C1C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460C1C push 0x5B79E4
	{ uint32_t v = (uint32_t)(0x5B79E4u); X86_PUSH32(v); }
	// 00460C21 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460C23 call 0x0006800A
	X86_PUSH32(0x460C28u); sub_0006800A(ctx, base);
	// 00460C28 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C29 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C2A mov [0x00655289], al
	{ uint32_t ea = (uint32_t)(0x655289u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460C2F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460C1C, __imp__sub_00460C1C)

X86_FUNC(__imp__sub_00460C30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460C30 push 0x5B79E8
	{ uint32_t v = (uint32_t)(0x5B79E8u); X86_PUSH32(v); }
	// 00460C35 push 0xF84
	{ uint32_t v = (uint32_t)(0xF84u); X86_PUSH32(v); }
	// 00460C3A call 0x0006800A
	X86_PUSH32(0x460C3Fu); sub_0006800A(ctx, base);
	// 00460C3F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C40 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C41 mov [0x0065528A], al
	{ uint32_t ea = (uint32_t)(0x65528Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460C46 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460C30, __imp__sub_00460C30)

X86_FUNC(__imp__sub_00460C47) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460C47 push 0x5B79EC
	{ uint32_t v = (uint32_t)(0x5B79ECu); X86_PUSH32(v); }
	// 00460C4C push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460C4E call 0x0006800A
	X86_PUSH32(0x460C53u); sub_0006800A(ctx, base);
	// 00460C53 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C54 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C55 mov [0x0065528B], al
	{ uint32_t ea = (uint32_t)(0x65528Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460C5A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460C47, __imp__sub_00460C47)

X86_FUNC(__imp__sub_00460C5B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460C5B push 0x5B79F0
	{ uint32_t v = (uint32_t)(0x5B79F0u); X86_PUSH32(v); }
	// 00460C60 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460C62 call 0x0006800A
	X86_PUSH32(0x460C67u); sub_0006800A(ctx, base);
	// 00460C67 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C68 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C69 mov [0x0065528C], al
	{ uint32_t ea = (uint32_t)(0x65528Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460C6E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460C5B, __imp__sub_00460C5B)

X86_FUNC(__imp__sub_00460C6F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460C6F push 0x5B79F4
	{ uint32_t v = (uint32_t)(0x5B79F4u); X86_PUSH32(v); }
	// 00460C74 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460C76 call 0x0006800A
	X86_PUSH32(0x460C7Bu); sub_0006800A(ctx, base);
	// 00460C7B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C7C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C7D mov [0x0065528D], al
	{ uint32_t ea = (uint32_t)(0x65528Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460C82 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460C6F, __imp__sub_00460C6F)

X86_FUNC(__imp__sub_00460C83) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460C83 push 0x5B79F8
	{ uint32_t v = (uint32_t)(0x5B79F8u); X86_PUSH32(v); }
	// 00460C88 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460C8A call 0x0006800A
	X86_PUSH32(0x460C8Fu); sub_0006800A(ctx, base);
	// 00460C8F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C90 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460C91 mov [0x0065528E], al
	{ uint32_t ea = (uint32_t)(0x65528Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460C96 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460C83, __imp__sub_00460C83)

X86_FUNC(__imp__sub_00460C97) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460C97 push 0x5B79FC
	{ uint32_t v = (uint32_t)(0x5B79FCu); X86_PUSH32(v); }
	// 00460C9C push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460C9E call 0x0006800A
	X86_PUSH32(0x460CA3u); sub_0006800A(ctx, base);
	// 00460CA3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460CA4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460CA5 mov [0x0065528F], al
	{ uint32_t ea = (uint32_t)(0x65528Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460CAA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460C97, __imp__sub_00460C97)

X86_FUNC(__imp__sub_00460CAB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460CAB push 0x5B7A00
	{ uint32_t v = (uint32_t)(0x5B7A00u); X86_PUSH32(v); }
	// 00460CB0 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460CB2 call 0x0006800A
	X86_PUSH32(0x460CB7u); sub_0006800A(ctx, base);
	// 00460CB7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460CB8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460CB9 mov [0x00655290], al
	{ uint32_t ea = (uint32_t)(0x655290u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460CBE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460CAB, __imp__sub_00460CAB)

X86_FUNC(__imp__sub_00460CBF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460CBF push 0x5B7A04
	{ uint32_t v = (uint32_t)(0x5B7A04u); X86_PUSH32(v); }
	// 00460CC4 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460CC6 call 0x0006800A
	X86_PUSH32(0x460CCBu); sub_0006800A(ctx, base);
	// 00460CCB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460CCC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460CCD mov [0x00655291], al
	{ uint32_t ea = (uint32_t)(0x655291u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460CD2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460CBF, __imp__sub_00460CBF)

X86_FUNC(__imp__sub_00460CD3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460CD3 push 0x5B7A08
	{ uint32_t v = (uint32_t)(0x5B7A08u); X86_PUSH32(v); }
	// 00460CD8 push 0x9D2
	{ uint32_t v = (uint32_t)(0x9D2u); X86_PUSH32(v); }
	// 00460CDD call 0x0006800A
	X86_PUSH32(0x460CE2u); sub_0006800A(ctx, base);
	// 00460CE2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460CE3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460CE4 mov [0x00655292], al
	{ uint32_t ea = (uint32_t)(0x655292u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460CE9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460CD3, __imp__sub_00460CD3)

X86_FUNC(__imp__sub_00460CEA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460CEA push 0x5B7A0C
	{ uint32_t v = (uint32_t)(0x5B7A0Cu); X86_PUSH32(v); }
	// 00460CEF push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460CF1 call 0x0006800A
	X86_PUSH32(0x460CF6u); sub_0006800A(ctx, base);
	// 00460CF6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460CF7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460CF8 mov [0x00655293], al
	{ uint32_t ea = (uint32_t)(0x655293u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460CFD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460CEA, __imp__sub_00460CEA)

X86_FUNC(__imp__sub_00460CFE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460CFE push 0x5B7A10
	{ uint32_t v = (uint32_t)(0x5B7A10u); X86_PUSH32(v); }
	// 00460D03 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460D05 call 0x0006800A
	X86_PUSH32(0x460D0Au); sub_0006800A(ctx, base);
	// 00460D0A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D0B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D0C mov [0x00655294], al
	{ uint32_t ea = (uint32_t)(0x655294u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460D11 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460CFE, __imp__sub_00460CFE)

X86_FUNC(__imp__sub_00460D12) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460D12 push 0x5B7A14
	{ uint32_t v = (uint32_t)(0x5B7A14u); X86_PUSH32(v); }
	// 00460D17 push 0x604
	{ uint32_t v = (uint32_t)(0x604u); X86_PUSH32(v); }
	// 00460D1C call 0x0006800A
	X86_PUSH32(0x460D21u); sub_0006800A(ctx, base);
	// 00460D21 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D22 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D23 mov [0x00655295], al
	{ uint32_t ea = (uint32_t)(0x655295u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460D28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460D12, __imp__sub_00460D12)

X86_FUNC(__imp__sub_00460D29) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460D29 push 0x5B7A18
	{ uint32_t v = (uint32_t)(0x5B7A18u); X86_PUSH32(v); }
	// 00460D2E push 0x488
	{ uint32_t v = (uint32_t)(0x488u); X86_PUSH32(v); }
	// 00460D33 call 0x0006800A
	X86_PUSH32(0x460D38u); sub_0006800A(ctx, base);
	// 00460D38 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D39 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D3A mov [0x00655296], al
	{ uint32_t ea = (uint32_t)(0x655296u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460D3F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460D29, __imp__sub_00460D29)

X86_FUNC(__imp__sub_00460D40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460D40 push 0x5B7A1C
	{ uint32_t v = (uint32_t)(0x5B7A1Cu); X86_PUSH32(v); }
	// 00460D45 push 0x4C2
	{ uint32_t v = (uint32_t)(0x4C2u); X86_PUSH32(v); }
	// 00460D4A call 0x0006800A
	X86_PUSH32(0x460D4Fu); sub_0006800A(ctx, base);
	// 00460D4F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D50 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D51 mov [0x00655297], al
	{ uint32_t ea = (uint32_t)(0x655297u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460D56 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460D40, __imp__sub_00460D40)

X86_FUNC(__imp__sub_00460D57) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460D57 push 0x5B7A20
	{ uint32_t v = (uint32_t)(0x5B7A20u); X86_PUSH32(v); }
	// 00460D5C push 0x490
	{ uint32_t v = (uint32_t)(0x490u); X86_PUSH32(v); }
	// 00460D61 call 0x0006800A
	X86_PUSH32(0x460D66u); sub_0006800A(ctx, base);
	// 00460D66 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D67 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D68 mov [0x00655298], al
	{ uint32_t ea = (uint32_t)(0x655298u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460D6D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460D57, __imp__sub_00460D57)

X86_FUNC(__imp__sub_00460D6E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460D6E push 0x5B7A24
	{ uint32_t v = (uint32_t)(0x5B7A24u); X86_PUSH32(v); }
	// 00460D73 push 0x60E
	{ uint32_t v = (uint32_t)(0x60Eu); X86_PUSH32(v); }
	// 00460D78 call 0x0006800A
	X86_PUSH32(0x460D7Du); sub_0006800A(ctx, base);
	// 00460D7D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D7E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D7F mov [0x00655299], al
	{ uint32_t ea = (uint32_t)(0x655299u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460D84 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460D6E, __imp__sub_00460D6E)

X86_FUNC(__imp__sub_00460D85) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460D85 push 0x5B7A28
	{ uint32_t v = (uint32_t)(0x5B7A28u); X86_PUSH32(v); }
	// 00460D8A push 0x456
	{ uint32_t v = (uint32_t)(0x456u); X86_PUSH32(v); }
	// 00460D8F call 0x0006800A
	X86_PUSH32(0x460D94u); sub_0006800A(ctx, base);
	// 00460D94 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D95 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460D96 mov [0x0065529A], al
	{ uint32_t ea = (uint32_t)(0x65529Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460D9B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460D85, __imp__sub_00460D85)

X86_FUNC(__imp__sub_00460D9C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460D9C push 0x5B7A2C
	{ uint32_t v = (uint32_t)(0x5B7A2Cu); X86_PUSH32(v); }
	// 00460DA1 push 0x4EC
	{ uint32_t v = (uint32_t)(0x4ECu); X86_PUSH32(v); }
	// 00460DA6 call 0x0006800A
	X86_PUSH32(0x460DABu); sub_0006800A(ctx, base);
	// 00460DAB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460DAC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460DAD mov [0x0065529B], al
	{ uint32_t ea = (uint32_t)(0x65529Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460DB2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460D9C, __imp__sub_00460D9C)

X86_FUNC(__imp__sub_00460DB3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460DB3 push 0x5B7A30
	{ uint32_t v = (uint32_t)(0x5B7A30u); X86_PUSH32(v); }
	// 00460DB8 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460DBA call 0x0006800A
	X86_PUSH32(0x460DBFu); sub_0006800A(ctx, base);
	// 00460DBF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460DC0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460DC1 mov [0x0065529C], al
	{ uint32_t ea = (uint32_t)(0x65529Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460DC6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460DB3, __imp__sub_00460DB3)

X86_FUNC(__imp__sub_00460DC7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460DC7 push 0x5B7A34
	{ uint32_t v = (uint32_t)(0x5B7A34u); X86_PUSH32(v); }
	// 00460DCC push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460DCE call 0x0006800A
	X86_PUSH32(0x460DD3u); sub_0006800A(ctx, base);
	// 00460DD3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460DD4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460DD5 mov [0x0065529D], al
	{ uint32_t ea = (uint32_t)(0x65529Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460DDA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460DC7, __imp__sub_00460DC7)

X86_FUNC(__imp__sub_00460DDB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460DDB push 0x5B7A38
	{ uint32_t v = (uint32_t)(0x5B7A38u); X86_PUSH32(v); }
	// 00460DE0 push 0x107
	{ uint32_t v = (uint32_t)(0x107u); X86_PUSH32(v); }
	// 00460DE5 call 0x0006800A
	X86_PUSH32(0x460DEAu); sub_0006800A(ctx, base);
	// 00460DEA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460DEB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460DEC mov [0x0065529E], al
	{ uint32_t ea = (uint32_t)(0x65529Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460DF1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460DDB, __imp__sub_00460DDB)

X86_FUNC(__imp__sub_00460DF2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460DF2 push 0x5B7A3C
	{ uint32_t v = (uint32_t)(0x5B7A3Cu); X86_PUSH32(v); }
	// 00460DF7 push 0x105
	{ uint32_t v = (uint32_t)(0x105u); X86_PUSH32(v); }
	// 00460DFC call 0x0006800A
	X86_PUSH32(0x460E01u); sub_0006800A(ctx, base);
	// 00460E01 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E02 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E03 mov [0x0065529F], al
	{ uint32_t ea = (uint32_t)(0x65529Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460E08 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460DF2, __imp__sub_00460DF2)

X86_FUNC(__imp__sub_00460E09) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460E09 push 0x5B7A40
	{ uint32_t v = (uint32_t)(0x5B7A40u); X86_PUSH32(v); }
	// 00460E0E push 0x11A
	{ uint32_t v = (uint32_t)(0x11Au); X86_PUSH32(v); }
	// 00460E13 call 0x0006800A
	X86_PUSH32(0x460E18u); sub_0006800A(ctx, base);
	// 00460E18 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E19 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E1A mov [0x006552A0], al
	{ uint32_t ea = (uint32_t)(0x6552A0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460E1F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460E09, __imp__sub_00460E09)

X86_FUNC(__imp__sub_00460E20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460E20 push 0x5B7A44
	{ uint32_t v = (uint32_t)(0x5B7A44u); X86_PUSH32(v); }
	// 00460E25 push 0x126
	{ uint32_t v = (uint32_t)(0x126u); X86_PUSH32(v); }
	// 00460E2A call 0x0006800A
	X86_PUSH32(0x460E2Fu); sub_0006800A(ctx, base);
	// 00460E2F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E30 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E31 mov [0x006552A1], al
	{ uint32_t ea = (uint32_t)(0x6552A1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460E36 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460E20, __imp__sub_00460E20)

X86_FUNC(__imp__sub_00460E37) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460E37 push 0x5B7A48
	{ uint32_t v = (uint32_t)(0x5B7A48u); X86_PUSH32(v); }
	// 00460E3C push 0x104
	{ uint32_t v = (uint32_t)(0x104u); X86_PUSH32(v); }
	// 00460E41 call 0x0006800A
	X86_PUSH32(0x460E46u); sub_0006800A(ctx, base);
	// 00460E46 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E47 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E48 mov [0x006552A2], al
	{ uint32_t ea = (uint32_t)(0x6552A2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460E4D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460E37, __imp__sub_00460E37)

X86_FUNC(__imp__sub_00460E4E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460E4E push 0x5B7A4C
	{ uint32_t v = (uint32_t)(0x5B7A4Cu); X86_PUSH32(v); }
	// 00460E53 push 0x103
	{ uint32_t v = (uint32_t)(0x103u); X86_PUSH32(v); }
	// 00460E58 call 0x0006800A
	X86_PUSH32(0x460E5Du); sub_0006800A(ctx, base);
	// 00460E5D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E5E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E5F mov [0x006552A3], al
	{ uint32_t ea = (uint32_t)(0x6552A3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460E64 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460E4E, __imp__sub_00460E4E)

X86_FUNC(__imp__sub_00460E65) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460E65 push 0x5B7A50
	{ uint32_t v = (uint32_t)(0x5B7A50u); X86_PUSH32(v); }
	// 00460E6A push 0x110
	{ uint32_t v = (uint32_t)(0x110u); X86_PUSH32(v); }
	// 00460E6F call 0x0006800A
	X86_PUSH32(0x460E74u); sub_0006800A(ctx, base);
	// 00460E74 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E75 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E76 mov [0x006552A4], al
	{ uint32_t ea = (uint32_t)(0x6552A4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460E7B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460E65, __imp__sub_00460E65)

X86_FUNC(__imp__sub_00460E7C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460E7C push 0x5B7A54
	{ uint32_t v = (uint32_t)(0x5B7A54u); X86_PUSH32(v); }
	// 00460E81 push 0x478
	{ uint32_t v = (uint32_t)(0x478u); X86_PUSH32(v); }
	// 00460E86 call 0x0006800A
	X86_PUSH32(0x460E8Bu); sub_0006800A(ctx, base);
	// 00460E8B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E8C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460E8D mov [0x006552A5], al
	{ uint32_t ea = (uint32_t)(0x6552A5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460E92 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460E7C, __imp__sub_00460E7C)

X86_FUNC(__imp__sub_00460E93) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460E93 push 0x5B7A58
	{ uint32_t v = (uint32_t)(0x5B7A58u); X86_PUSH32(v); }
	// 00460E98 push 0x12A
	{ uint32_t v = (uint32_t)(0x12Au); X86_PUSH32(v); }
	// 00460E9D call 0x0006800A
	X86_PUSH32(0x460EA2u); sub_0006800A(ctx, base);
	// 00460EA2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460EA3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460EA4 mov [0x006552A6], al
	{ uint32_t ea = (uint32_t)(0x6552A6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460EA9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460E93, __imp__sub_00460E93)

X86_FUNC(__imp__sub_00460EAA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460EAA push 0x5B7A5C
	{ uint32_t v = (uint32_t)(0x5B7A5Cu); X86_PUSH32(v); }
	// 00460EAF push 0xF83
	{ uint32_t v = (uint32_t)(0xF83u); X86_PUSH32(v); }
	// 00460EB4 call 0x0006800A
	X86_PUSH32(0x460EB9u); sub_0006800A(ctx, base);
	// 00460EB9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460EBA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460EBB mov [0x006552A7], al
	{ uint32_t ea = (uint32_t)(0x6552A7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460EC0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460EAA, __imp__sub_00460EAA)

X86_FUNC(__imp__sub_00460EC1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460EC1 push 0x5B7A60
	{ uint32_t v = (uint32_t)(0x5B7A60u); X86_PUSH32(v); }
	// 00460EC6 push 0xF81
	{ uint32_t v = (uint32_t)(0xF81u); X86_PUSH32(v); }
	// 00460ECB call 0x0006800A
	X86_PUSH32(0x460ED0u); sub_0006800A(ctx, base);
	// 00460ED0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460ED1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460ED2 mov [0x006552A8], al
	{ uint32_t ea = (uint32_t)(0x6552A8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460ED7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460EC1, __imp__sub_00460EC1)

X86_FUNC(__imp__sub_00460ED8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460ED8 push 0x5B7A64
	{ uint32_t v = (uint32_t)(0x5B7A64u); X86_PUSH32(v); }
	// 00460EDD push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460EDF call 0x0006800A
	X86_PUSH32(0x460EE4u); sub_0006800A(ctx, base);
	// 00460EE4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460EE5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460EE6 mov [0x006552A9], al
	{ uint32_t ea = (uint32_t)(0x6552A9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460EEB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460ED8, __imp__sub_00460ED8)

X86_FUNC(__imp__sub_00460EEC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460EEC push 0x5B7A68
	{ uint32_t v = (uint32_t)(0x5B7A68u); X86_PUSH32(v); }
	// 00460EF1 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460EF3 call 0x0006800A
	X86_PUSH32(0x460EF8u); sub_0006800A(ctx, base);
	// 00460EF8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460EF9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460EFA mov [0x006552AA], al
	{ uint32_t ea = (uint32_t)(0x6552AAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460EFF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460EEC, __imp__sub_00460EEC)

X86_FUNC(__imp__sub_00460F00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460F00 push 0x5B7A6C
	{ uint32_t v = (uint32_t)(0x5B7A6Cu); X86_PUSH32(v); }
	// 00460F05 push 0x12B
	{ uint32_t v = (uint32_t)(0x12Bu); X86_PUSH32(v); }
	// 00460F0A call 0x0006800A
	X86_PUSH32(0x460F0Fu); sub_0006800A(ctx, base);
	// 00460F0F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F10 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F11 mov [0x006552AB], al
	{ uint32_t ea = (uint32_t)(0x6552ABu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460F16 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460F00, __imp__sub_00460F00)

X86_FUNC(__imp__sub_00460F17) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460F17 push 0x5B7A70
	{ uint32_t v = (uint32_t)(0x5B7A70u); X86_PUSH32(v); }
	// 00460F1C push 0x10B
	{ uint32_t v = (uint32_t)(0x10Bu); X86_PUSH32(v); }
	// 00460F21 call 0x0006800A
	X86_PUSH32(0x460F26u); sub_0006800A(ctx, base);
	// 00460F26 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F27 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F28 mov [0x006552AC], al
	{ uint32_t ea = (uint32_t)(0x6552ACu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460F2D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460F17, __imp__sub_00460F17)

X86_FUNC(__imp__sub_00460F2E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460F2E push 0x5B7A74
	{ uint32_t v = (uint32_t)(0x5B7A74u); X86_PUSH32(v); }
	// 00460F33 push 0x10A
	{ uint32_t v = (uint32_t)(0x10Au); X86_PUSH32(v); }
	// 00460F38 call 0x0006800A
	X86_PUSH32(0x460F3Du); sub_0006800A(ctx, base);
	// 00460F3D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F3E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F3F mov [0x006552AD], al
	{ uint32_t ea = (uint32_t)(0x6552ADu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460F44 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460F2E, __imp__sub_00460F2E)

X86_FUNC(__imp__sub_00460F45) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460F45 push 0x5B7A78
	{ uint32_t v = (uint32_t)(0x5B7A78u); X86_PUSH32(v); }
	// 00460F4A push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460F4C call 0x0006800A
	X86_PUSH32(0x460F51u); sub_0006800A(ctx, base);
	// 00460F51 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F52 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F53 mov [0x006552AE], al
	{ uint32_t ea = (uint32_t)(0x6552AEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460F58 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460F45, __imp__sub_00460F45)

X86_FUNC(__imp__sub_00460F59) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460F59 push 0x5B7A7C
	{ uint32_t v = (uint32_t)(0x5B7A7Cu); X86_PUSH32(v); }
	// 00460F5E push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460F60 call 0x0006800A
	X86_PUSH32(0x460F65u); sub_0006800A(ctx, base);
	// 00460F65 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F66 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F67 mov [0x006552AF], al
	{ uint32_t ea = (uint32_t)(0x6552AFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460F6C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460F59, __imp__sub_00460F59)

X86_FUNC(__imp__sub_00460F6D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460F6D push 0x5B7A80
	{ uint32_t v = (uint32_t)(0x5B7A80u); X86_PUSH32(v); }
	// 00460F72 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00460F74 call 0x0006800A
	X86_PUSH32(0x460F79u); sub_0006800A(ctx, base);
	// 00460F79 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F7A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F7B mov [0x006552B0], al
	{ uint32_t ea = (uint32_t)(0x6552B0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460F80 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460F6D, __imp__sub_00460F6D)

X86_FUNC(__imp__sub_00460F81) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460F81 push 0x5B7A84
	{ uint32_t v = (uint32_t)(0x5B7A84u); X86_PUSH32(v); }
	// 00460F86 push 0x11B
	{ uint32_t v = (uint32_t)(0x11Bu); X86_PUSH32(v); }
	// 00460F8B call 0x0006800A
	X86_PUSH32(0x460F90u); sub_0006800A(ctx, base);
	// 00460F90 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F91 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460F92 mov [0x006552B1], al
	{ uint32_t ea = (uint32_t)(0x6552B1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460F97 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460F81, __imp__sub_00460F81)

X86_FUNC(__imp__sub_00460F98) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460F98 push 0x5B7A88
	{ uint32_t v = (uint32_t)(0x5B7A88u); X86_PUSH32(v); }
	// 00460F9D push 0x106
	{ uint32_t v = (uint32_t)(0x106u); X86_PUSH32(v); }
	// 00460FA2 call 0x0006800A
	X86_PUSH32(0x460FA7u); sub_0006800A(ctx, base);
	// 00460FA7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460FA8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460FA9 mov [0x006552B2], al
	{ uint32_t ea = (uint32_t)(0x6552B2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460FAE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460F98, __imp__sub_00460F98)

X86_FUNC(__imp__sub_00460FAF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460FAF push 0x5B7A8C
	{ uint32_t v = (uint32_t)(0x5B7A8Cu); X86_PUSH32(v); }
	// 00460FB4 push 0x8B4
	{ uint32_t v = (uint32_t)(0x8B4u); X86_PUSH32(v); }
	// 00460FB9 call 0x0006800A
	X86_PUSH32(0x460FBEu); sub_0006800A(ctx, base);
	// 00460FBE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460FBF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460FC0 mov [0x006552B3], al
	{ uint32_t ea = (uint32_t)(0x6552B3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460FC5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460FAF, __imp__sub_00460FAF)

X86_FUNC(__imp__sub_00460FC6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460FC6 push 0x5B7A90
	{ uint32_t v = (uint32_t)(0x5B7A90u); X86_PUSH32(v); }
	// 00460FCB push 0x55B
	{ uint32_t v = (uint32_t)(0x55Bu); X86_PUSH32(v); }
	// 00460FD0 call 0x0006800A
	X86_PUSH32(0x460FD5u); sub_0006800A(ctx, base);
	// 00460FD5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460FD6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460FD7 mov [0x006552B4], al
	{ uint32_t ea = (uint32_t)(0x6552B4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460FDC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460FC6, __imp__sub_00460FC6)

X86_FUNC(__imp__sub_00460FDD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460FDD push 0x5B7A94
	{ uint32_t v = (uint32_t)(0x5B7A94u); X86_PUSH32(v); }
	// 00460FE2 push 0x100
	{ uint32_t v = (uint32_t)(0x100u); X86_PUSH32(v); }
	// 00460FE7 call 0x0006800A
	X86_PUSH32(0x460FECu); sub_0006800A(ctx, base);
	// 00460FEC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460FED pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00460FEE mov [0x006552B5], al
	{ uint32_t ea = (uint32_t)(0x6552B5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00460FF3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460FDD, __imp__sub_00460FDD)

X86_FUNC(__imp__sub_00460FF4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00460FF4 push 0x5B7A98
	{ uint32_t v = (uint32_t)(0x5B7A98u); X86_PUSH32(v); }
	// 00460FF9 push 0xE9
	{ uint32_t v = (uint32_t)(0xE9u); X86_PUSH32(v); }
	// 00460FFE call 0x0006800A
	X86_PUSH32(0x461003u); sub_0006800A(ctx, base);
	// 00461003 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461004 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461005 mov [0x006552B6], al
	{ uint32_t ea = (uint32_t)(0x6552B6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046100A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00460FF4, __imp__sub_00460FF4)

X86_FUNC(__imp__sub_0046100B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046100B push 0x5B7A9C
	{ uint32_t v = (uint32_t)(0x5B7A9Cu); X86_PUSH32(v); }
	// 00461010 push 0x4A9
	{ uint32_t v = (uint32_t)(0x4A9u); X86_PUSH32(v); }
	// 00461015 call 0x0006800A
	X86_PUSH32(0x46101Au); sub_0006800A(ctx, base);
	// 0046101A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046101B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046101C mov [0x006552B7], al
	{ uint32_t ea = (uint32_t)(0x6552B7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461021 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046100B, __imp__sub_0046100B)

X86_FUNC(__imp__sub_00461022) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461022 push 0x5B7AA0
	{ uint32_t v = (uint32_t)(0x5B7AA0u); X86_PUSH32(v); }
	// 00461027 push 0x4A6
	{ uint32_t v = (uint32_t)(0x4A6u); X86_PUSH32(v); }
	// 0046102C call 0x0006800A
	X86_PUSH32(0x461031u); sub_0006800A(ctx, base);
	// 00461031 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461032 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461033 mov [0x006552B8], al
	{ uint32_t ea = (uint32_t)(0x6552B8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461038 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461022, __imp__sub_00461022)

X86_FUNC(__imp__sub_00461039) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461039 push 0x5B7AA4
	{ uint32_t v = (uint32_t)(0x5B7AA4u); X86_PUSH32(v); }
	// 0046103E push 0x49C
	{ uint32_t v = (uint32_t)(0x49Cu); X86_PUSH32(v); }
	// 00461043 call 0x0006800A
	X86_PUSH32(0x461048u); sub_0006800A(ctx, base);
	// 00461048 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461049 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046104A mov [0x006552B9], al
	{ uint32_t ea = (uint32_t)(0x6552B9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046104F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461039, __imp__sub_00461039)

X86_FUNC(__imp__sub_00461050) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461050 push 0x5B7AA8
	{ uint32_t v = (uint32_t)(0x5B7AA8u); X86_PUSH32(v); }
	// 00461055 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00461057 call 0x0006800A
	X86_PUSH32(0x46105Cu); sub_0006800A(ctx, base);
	// 0046105C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046105D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046105E mov [0x006552BA], al
	{ uint32_t ea = (uint32_t)(0x6552BAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461063 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461050, __imp__sub_00461050)

X86_FUNC(__imp__sub_00461064) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461064 push 0x5B7AAC
	{ uint32_t v = (uint32_t)(0x5B7AACu); X86_PUSH32(v); }
	// 00461069 push 0x8B0
	{ uint32_t v = (uint32_t)(0x8B0u); X86_PUSH32(v); }
	// 0046106E call 0x0006800A
	X86_PUSH32(0x461073u); sub_0006800A(ctx, base);
	// 00461073 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461074 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461075 mov [0x006552BB], al
	{ uint32_t ea = (uint32_t)(0x6552BBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046107A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461064, __imp__sub_00461064)

X86_FUNC(__imp__sub_0046107B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046107B push 0x5B7AB0
	{ uint32_t v = (uint32_t)(0x5B7AB0u); X86_PUSH32(v); }
	// 00461080 push 0x4A2
	{ uint32_t v = (uint32_t)(0x4A2u); X86_PUSH32(v); }
	// 00461085 call 0x0006800A
	X86_PUSH32(0x46108Au); sub_0006800A(ctx, base);
	// 0046108A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046108B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046108C mov [0x006552BC], al
	{ uint32_t ea = (uint32_t)(0x6552BCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461091 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046107B, __imp__sub_0046107B)

X86_FUNC(__imp__sub_00461092) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461092 push 0x5B7AB4
	{ uint32_t v = (uint32_t)(0x5B7AB4u); X86_PUSH32(v); }
	// 00461097 push 0x4A1
	{ uint32_t v = (uint32_t)(0x4A1u); X86_PUSH32(v); }
	// 0046109C call 0x0006800A
	X86_PUSH32(0x4610A1u); sub_0006800A(ctx, base);
	// 004610A1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004610A2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004610A3 mov [0x006552BD], al
	{ uint32_t ea = (uint32_t)(0x6552BDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004610A8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461092, __imp__sub_00461092)

X86_FUNC(__imp__sub_004610A9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004610A9 push 0x5B7AB8
	{ uint32_t v = (uint32_t)(0x5B7AB8u); X86_PUSH32(v); }
	// 004610AE push 0x48C
	{ uint32_t v = (uint32_t)(0x48Cu); X86_PUSH32(v); }
	// 004610B3 call 0x0006800A
	X86_PUSH32(0x4610B8u); sub_0006800A(ctx, base);
	// 004610B8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004610B9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004610BA mov [0x006552BE], al
	{ uint32_t ea = (uint32_t)(0x6552BEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004610BF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004610A9, __imp__sub_004610A9)

X86_FUNC(__imp__sub_004610C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004610C0 push 0x5B7ABC
	{ uint32_t v = (uint32_t)(0x5B7ABCu); X86_PUSH32(v); }
	// 004610C5 push 0x49D
	{ uint32_t v = (uint32_t)(0x49Du); X86_PUSH32(v); }
	// 004610CA call 0x0006800A
	X86_PUSH32(0x4610CFu); sub_0006800A(ctx, base);
	// 004610CF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004610D0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004610D1 mov [0x006552BF], al
	{ uint32_t ea = (uint32_t)(0x6552BFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004610D6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004610C0, __imp__sub_004610C0)

X86_FUNC(__imp__sub_004610D7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004610D7 push 0x5B7AC0
	{ uint32_t v = (uint32_t)(0x5B7AC0u); X86_PUSH32(v); }
	// 004610DC push 0x472
	{ uint32_t v = (uint32_t)(0x472u); X86_PUSH32(v); }
	// 004610E1 call 0x0006800A
	X86_PUSH32(0x4610E6u); sub_0006800A(ctx, base);
	// 004610E6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004610E7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004610E8 mov [0x006552C0], al
	{ uint32_t ea = (uint32_t)(0x6552C0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004610ED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004610D7, __imp__sub_004610D7)

X86_FUNC(__imp__sub_004610EE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004610EE push 0x5B7AC4
	{ uint32_t v = (uint32_t)(0x5B7AC4u); X86_PUSH32(v); }
	// 004610F3 push 0x471
	{ uint32_t v = (uint32_t)(0x471u); X86_PUSH32(v); }
	// 004610F8 call 0x0006800A
	X86_PUSH32(0x4610FDu); sub_0006800A(ctx, base);
	// 004610FD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004610FE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004610FF mov [0x006552C1], al
	{ uint32_t ea = (uint32_t)(0x6552C1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461104 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004610EE, __imp__sub_004610EE)

X86_FUNC(__imp__sub_00461105) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461105 push 0x5B7AC8
	{ uint32_t v = (uint32_t)(0x5B7AC8u); X86_PUSH32(v); }
	// 0046110A push 0xB57
	{ uint32_t v = (uint32_t)(0xB57u); X86_PUSH32(v); }
	// 0046110F call 0x0006800A
	X86_PUSH32(0x461114u); sub_0006800A(ctx, base);
	// 00461114 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461115 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461116 mov [0x006552C2], al
	{ uint32_t ea = (uint32_t)(0x6552C2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046111B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461105, __imp__sub_00461105)

X86_FUNC(__imp__sub_0046111C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046111C push 0x5B7ACC
	{ uint32_t v = (uint32_t)(0x5B7ACCu); X86_PUSH32(v); }
	// 00461121 push 0x73A
	{ uint32_t v = (uint32_t)(0x73Au); X86_PUSH32(v); }
	// 00461126 call 0x0006800A
	X86_PUSH32(0x46112Bu); sub_0006800A(ctx, base);
	// 0046112B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046112C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046112D mov [0x006552C3], al
	{ uint32_t ea = (uint32_t)(0x6552C3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461132 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046111C, __imp__sub_0046111C)

X86_FUNC(__imp__sub_00461133) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461133 push 0x5B7AD0
	{ uint32_t v = (uint32_t)(0x5B7AD0u); X86_PUSH32(v); }
	// 00461138 push 0x739
	{ uint32_t v = (uint32_t)(0x739u); X86_PUSH32(v); }
	// 0046113D call 0x0006800A
	X86_PUSH32(0x461142u); sub_0006800A(ctx, base);
	// 00461142 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461143 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461144 mov [0x006552C4], al
	{ uint32_t ea = (uint32_t)(0x6552C4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461149 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461133, __imp__sub_00461133)

X86_FUNC(__imp__sub_0046114A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046114A push 0x5B7AD4
	{ uint32_t v = (uint32_t)(0x5B7AD4u); X86_PUSH32(v); }
	// 0046114F push 0x738
	{ uint32_t v = (uint32_t)(0x738u); X86_PUSH32(v); }
	// 00461154 call 0x0006800A
	X86_PUSH32(0x461159u); sub_0006800A(ctx, base);
	// 00461159 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046115A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046115B mov [0x006552C5], al
	{ uint32_t ea = (uint32_t)(0x6552C5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461160 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046114A, __imp__sub_0046114A)

X86_FUNC(__imp__sub_00461161) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461161 push 0x5B7AD8
	{ uint32_t v = (uint32_t)(0x5B7AD8u); X86_PUSH32(v); }
	// 00461166 push 0x737
	{ uint32_t v = (uint32_t)(0x737u); X86_PUSH32(v); }
	// 0046116B call 0x0006800A
	X86_PUSH32(0x461170u); sub_0006800A(ctx, base);
	// 00461170 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461171 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461172 mov [0x006552C6], al
	{ uint32_t ea = (uint32_t)(0x6552C6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461177 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461161, __imp__sub_00461161)

X86_FUNC(__imp__sub_00461178) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461178 push 0x5B7ADC
	{ uint32_t v = (uint32_t)(0x5B7ADCu); X86_PUSH32(v); }
	// 0046117D push 0x736
	{ uint32_t v = (uint32_t)(0x736u); X86_PUSH32(v); }
	// 00461182 call 0x0006800A
	X86_PUSH32(0x461187u); sub_0006800A(ctx, base);
	// 00461187 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461188 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461189 mov [0x006552C7], al
	{ uint32_t ea = (uint32_t)(0x6552C7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046118E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461178, __imp__sub_00461178)

X86_FUNC(__imp__sub_0046118F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046118F push 0x5B7AE0
	{ uint32_t v = (uint32_t)(0x5B7AE0u); X86_PUSH32(v); }
	// 00461194 push 0x735
	{ uint32_t v = (uint32_t)(0x735u); X86_PUSH32(v); }
	// 00461199 call 0x0006800A
	X86_PUSH32(0x46119Eu); sub_0006800A(ctx, base);
	// 0046119E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046119F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004611A0 mov [0x006552C8], al
	{ uint32_t ea = (uint32_t)(0x6552C8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004611A5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046118F, __imp__sub_0046118F)

X86_FUNC(__imp__sub_004611A6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004611A6 push 0x5B7AE4
	{ uint32_t v = (uint32_t)(0x5B7AE4u); X86_PUSH32(v); }
	// 004611AB push 0x734
	{ uint32_t v = (uint32_t)(0x734u); X86_PUSH32(v); }
	// 004611B0 call 0x0006800A
	X86_PUSH32(0x4611B5u); sub_0006800A(ctx, base);
	// 004611B5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004611B6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004611B7 mov [0x006552C9], al
	{ uint32_t ea = (uint32_t)(0x6552C9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004611BC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004611A6, __imp__sub_004611A6)

X86_FUNC(__imp__sub_004611BD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004611BD push 0x5B7AE8
	{ uint32_t v = (uint32_t)(0x5B7AE8u); X86_PUSH32(v); }
	// 004611C2 push 0x733
	{ uint32_t v = (uint32_t)(0x733u); X86_PUSH32(v); }
	// 004611C7 call 0x0006800A
	X86_PUSH32(0x4611CCu); sub_0006800A(ctx, base);
	// 004611CC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004611CD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004611CE mov [0x006552CA], al
	{ uint32_t ea = (uint32_t)(0x6552CAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004611D3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004611BD, __imp__sub_004611BD)

X86_FUNC(__imp__sub_004611D4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004611D4 push 0x5B7AEC
	{ uint32_t v = (uint32_t)(0x5B7AECu); X86_PUSH32(v); }
	// 004611D9 push 0x732
	{ uint32_t v = (uint32_t)(0x732u); X86_PUSH32(v); }
	// 004611DE call 0x0006800A
	X86_PUSH32(0x4611E3u); sub_0006800A(ctx, base);
	// 004611E3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004611E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004611E5 mov [0x006552CB], al
	{ uint32_t ea = (uint32_t)(0x6552CBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004611EA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004611D4, __imp__sub_004611D4)

X86_FUNC(__imp__sub_004611EB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004611EB push 0x5B7AF0
	{ uint32_t v = (uint32_t)(0x5B7AF0u); X86_PUSH32(v); }
	// 004611F0 push 0x731
	{ uint32_t v = (uint32_t)(0x731u); X86_PUSH32(v); }
	// 004611F5 call 0x0006800A
	X86_PUSH32(0x4611FAu); sub_0006800A(ctx, base);
	// 004611FA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004611FB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004611FC mov [0x006552CC], al
	{ uint32_t ea = (uint32_t)(0x6552CCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461201 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004611EB, __imp__sub_004611EB)

X86_FUNC(__imp__sub_00461202) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461202 push 0x5B7AF4
	{ uint32_t v = (uint32_t)(0x5B7AF4u); X86_PUSH32(v); }
	// 00461207 push 0x730
	{ uint32_t v = (uint32_t)(0x730u); X86_PUSH32(v); }
	// 0046120C call 0x0006800A
	X86_PUSH32(0x461211u); sub_0006800A(ctx, base);
	// 00461211 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461212 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461213 mov [0x006552CD], al
	{ uint32_t ea = (uint32_t)(0x6552CDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461218 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461202, __imp__sub_00461202)

X86_FUNC(__imp__sub_00461219) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461219 push 0x5B7AF8
	{ uint32_t v = (uint32_t)(0x5B7AF8u); X86_PUSH32(v); }
	// 0046121E push 0x7D6
	{ uint32_t v = (uint32_t)(0x7D6u); X86_PUSH32(v); }
	// 00461223 call 0x0006800A
	X86_PUSH32(0x461228u); sub_0006800A(ctx, base);
	// 00461228 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461229 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046122A mov [0x006552CE], al
	{ uint32_t ea = (uint32_t)(0x6552CEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046122F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461219, __imp__sub_00461219)

X86_FUNC(__imp__sub_00461230) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461230 push 0x5B7AFC
	{ uint32_t v = (uint32_t)(0x5B7AFCu); X86_PUSH32(v); }
	// 00461235 push 0x7D5
	{ uint32_t v = (uint32_t)(0x7D5u); X86_PUSH32(v); }
	// 0046123A call 0x0006800A
	X86_PUSH32(0x46123Fu); sub_0006800A(ctx, base);
	// 0046123F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461240 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461241 mov [0x006552CF], al
	{ uint32_t ea = (uint32_t)(0x6552CFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461246 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461230, __imp__sub_00461230)

X86_FUNC(__imp__sub_00461247) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461247 push 0x5B7B00
	{ uint32_t v = (uint32_t)(0x5B7B00u); X86_PUSH32(v); }
	// 0046124C push 0x7D4
	{ uint32_t v = (uint32_t)(0x7D4u); X86_PUSH32(v); }
	// 00461251 call 0x0006800A
	X86_PUSH32(0x461256u); sub_0006800A(ctx, base);
	// 00461256 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461257 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461258 mov [0x006552D0], al
	{ uint32_t ea = (uint32_t)(0x6552D0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046125D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461247, __imp__sub_00461247)

X86_FUNC(__imp__sub_0046125E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046125E push 0x5B7B04
	{ uint32_t v = (uint32_t)(0x5B7B04u); X86_PUSH32(v); }
	// 00461263 push 0x7D3
	{ uint32_t v = (uint32_t)(0x7D3u); X86_PUSH32(v); }
	// 00461268 call 0x0006800A
	X86_PUSH32(0x46126Du); sub_0006800A(ctx, base);
	// 0046126D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046126E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046126F mov [0x006552D1], al
	{ uint32_t ea = (uint32_t)(0x6552D1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461274 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046125E, __imp__sub_0046125E)

X86_FUNC(__imp__sub_00461275) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461275 push 0x5B7B08
	{ uint32_t v = (uint32_t)(0x5B7B08u); X86_PUSH32(v); }
	// 0046127A push 0x7D2
	{ uint32_t v = (uint32_t)(0x7D2u); X86_PUSH32(v); }
	// 0046127F call 0x0006800A
	X86_PUSH32(0x461284u); sub_0006800A(ctx, base);
	// 00461284 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461285 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461286 mov [0x006552D2], al
	{ uint32_t ea = (uint32_t)(0x6552D2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046128B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461275, __imp__sub_00461275)

X86_FUNC(__imp__sub_0046128C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046128C push 0x5B7B0C
	{ uint32_t v = (uint32_t)(0x5B7B0Cu); X86_PUSH32(v); }
	// 00461291 push 0x5ED
	{ uint32_t v = (uint32_t)(0x5EDu); X86_PUSH32(v); }
	// 00461296 call 0x0006800A
	X86_PUSH32(0x46129Bu); sub_0006800A(ctx, base);
	// 0046129B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046129C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046129D mov [0x006552D3], al
	{ uint32_t ea = (uint32_t)(0x6552D3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004612A2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046128C, __imp__sub_0046128C)

X86_FUNC(__imp__sub_004612A3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004612A3 push 0x5B7B10
	{ uint32_t v = (uint32_t)(0x5B7B10u); X86_PUSH32(v); }
	// 004612A8 push 0x7D1
	{ uint32_t v = (uint32_t)(0x7D1u); X86_PUSH32(v); }
	// 004612AD call 0x0006800A
	X86_PUSH32(0x4612B2u); sub_0006800A(ctx, base);
	// 004612B2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004612B3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004612B4 mov [0x006552D4], al
	{ uint32_t ea = (uint32_t)(0x6552D4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004612B9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004612A3, __imp__sub_004612A3)

X86_FUNC(__imp__sub_004612BA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004612BA push 0x5B7B14
	{ uint32_t v = (uint32_t)(0x5B7B14u); X86_PUSH32(v); }
	// 004612BF push 0x7D0
	{ uint32_t v = (uint32_t)(0x7D0u); X86_PUSH32(v); }
	// 004612C4 call 0x0006800A
	X86_PUSH32(0x4612C9u); sub_0006800A(ctx, base);
	// 004612C9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004612CA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004612CB mov [0x006552D5], al
	{ uint32_t ea = (uint32_t)(0x6552D5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004612D0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004612BA, __imp__sub_004612BA)

X86_FUNC(__imp__sub_004612D1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004612D1 push 0x5B7B18
	{ uint32_t v = (uint32_t)(0x5B7B18u); X86_PUSH32(v); }
	// 004612D6 push 0x8D8
	{ uint32_t v = (uint32_t)(0x8D8u); X86_PUSH32(v); }
	// 004612DB call 0x0006800A
	X86_PUSH32(0x4612E0u); sub_0006800A(ctx, base);
	// 004612E0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004612E1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004612E2 mov [0x006552D6], al
	{ uint32_t ea = (uint32_t)(0x6552D6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004612E7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004612D1, __imp__sub_004612D1)

X86_FUNC(__imp__sub_004612E8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004612E8 push 0x5B7B1C
	{ uint32_t v = (uint32_t)(0x5B7B1Cu); X86_PUSH32(v); }
	// 004612ED push 0x8D5
	{ uint32_t v = (uint32_t)(0x8D5u); X86_PUSH32(v); }
	// 004612F2 call 0x0006800A
	X86_PUSH32(0x4612F7u); sub_0006800A(ctx, base);
	// 004612F7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004612F8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004612F9 mov [0x006552D7], al
	{ uint32_t ea = (uint32_t)(0x6552D7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004612FE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004612E8, __imp__sub_004612E8)

X86_FUNC(__imp__sub_004612FF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004612FF push 0x5B7B20
	{ uint32_t v = (uint32_t)(0x5B7B20u); X86_PUSH32(v); }
	// 00461304 push 0x8DA
	{ uint32_t v = (uint32_t)(0x8DAu); X86_PUSH32(v); }
	// 00461309 call 0x0006800A
	X86_PUSH32(0x46130Eu); sub_0006800A(ctx, base);
	// 0046130E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046130F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461310 mov [0x006552D8], al
	{ uint32_t ea = (uint32_t)(0x6552D8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461315 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004612FF, __imp__sub_004612FF)

X86_FUNC(__imp__sub_00461316) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461316 push 0x5B7B24
	{ uint32_t v = (uint32_t)(0x5B7B24u); X86_PUSH32(v); }
	// 0046131B push 0x8D4
	{ uint32_t v = (uint32_t)(0x8D4u); X86_PUSH32(v); }
	// 00461320 call 0x0006800A
	X86_PUSH32(0x461325u); sub_0006800A(ctx, base);
	// 00461325 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461326 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461327 mov [0x006552D9], al
	{ uint32_t ea = (uint32_t)(0x6552D9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046132C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461316, __imp__sub_00461316)

X86_FUNC(__imp__sub_0046132D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046132D push 0x5B7B28
	{ uint32_t v = (uint32_t)(0x5B7B28u); X86_PUSH32(v); }
	// 00461332 push 0x60F
	{ uint32_t v = (uint32_t)(0x60Fu); X86_PUSH32(v); }
	// 00461337 call 0x0006800A
	X86_PUSH32(0x46133Cu); sub_0006800A(ctx, base);
	// 0046133C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046133D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046133E mov [0x006552DA], al
	{ uint32_t ea = (uint32_t)(0x6552DAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461343 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046132D, __imp__sub_0046132D)

X86_FUNC(__imp__sub_00461344) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461344 push 0x5B7B2C
	{ uint32_t v = (uint32_t)(0x5B7B2Cu); X86_PUSH32(v); }
	// 00461349 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0046134B call 0x0006800A
	X86_PUSH32(0x461350u); sub_0006800A(ctx, base);
	// 00461350 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461351 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461352 mov [0x006552DB], al
	{ uint32_t ea = (uint32_t)(0x6552DBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461357 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461344, __imp__sub_00461344)

X86_FUNC(__imp__sub_00461358) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461358 push 0x5B7B30
	{ uint32_t v = (uint32_t)(0x5B7B30u); X86_PUSH32(v); }
	// 0046135D push 0x7EE
	{ uint32_t v = (uint32_t)(0x7EEu); X86_PUSH32(v); }
	// 00461362 call 0x0006800A
	X86_PUSH32(0x461367u); sub_0006800A(ctx, base);
	// 00461367 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461368 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461369 mov [0x006552DC], al
	{ uint32_t ea = (uint32_t)(0x6552DCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046136E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461358, __imp__sub_00461358)

X86_FUNC(__imp__sub_0046136F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046136F push 0x5B7B34
	{ uint32_t v = (uint32_t)(0x5B7B34u); X86_PUSH32(v); }
	// 00461374 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00461376 call 0x0006800A
	X86_PUSH32(0x46137Bu); sub_0006800A(ctx, base);
	// 0046137B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046137C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046137D mov [0x006552DD], al
	{ uint32_t ea = (uint32_t)(0x6552DDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461382 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046136F, __imp__sub_0046136F)

X86_FUNC(__imp__sub_00461383) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461383 push 0x5B7B38
	{ uint32_t v = (uint32_t)(0x5B7B38u); X86_PUSH32(v); }
	// 00461388 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0046138A call 0x0006800A
	X86_PUSH32(0x46138Fu); sub_0006800A(ctx, base);
	// 0046138F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461390 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461391 mov [0x006552DE], al
	{ uint32_t ea = (uint32_t)(0x6552DEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461396 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461383, __imp__sub_00461383)

X86_FUNC(__imp__sub_00461397) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461397 push 0x5B7B3C
	{ uint32_t v = (uint32_t)(0x5B7B3Cu); X86_PUSH32(v); }
	// 0046139C push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0046139E call 0x0006800A
	X86_PUSH32(0x4613A3u); sub_0006800A(ctx, base);
	// 004613A3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004613A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004613A5 mov [0x006552DF], al
	{ uint32_t ea = (uint32_t)(0x6552DFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004613AA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461397, __imp__sub_00461397)

X86_FUNC(__imp__sub_004613AB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004613AB push 0x5B7B40
	{ uint32_t v = (uint32_t)(0x5B7B40u); X86_PUSH32(v); }
	// 004613B0 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 004613B2 call 0x0006800A
	X86_PUSH32(0x4613B7u); sub_0006800A(ctx, base);
	// 004613B7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004613B8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004613B9 mov [0x006552E0], al
	{ uint32_t ea = (uint32_t)(0x6552E0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004613BE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004613AB, __imp__sub_004613AB)

X86_FUNC(__imp__sub_004613BF) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004613BF push 0x5B7B44
	{ uint32_t v = (uint32_t)(0x5B7B44u); X86_PUSH32(v); }
	// 004613C4 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 004613C6 call 0x0006800A
	X86_PUSH32(0x4613CBu); sub_0006800A(ctx, base);
	// 004613CB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004613CC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004613CD mov [0x006552E1], al
	{ uint32_t ea = (uint32_t)(0x6552E1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004613D2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004613BF, __imp__sub_004613BF)

X86_FUNC(__imp__sub_004613D3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004613D3 push 0x5B7B48
	{ uint32_t v = (uint32_t)(0x5B7B48u); X86_PUSH32(v); }
	// 004613D8 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 004613DA call 0x0006800A
	X86_PUSH32(0x4613DFu); sub_0006800A(ctx, base);
	// 004613DF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004613E0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004613E1 mov [0x006552E2], al
	{ uint32_t ea = (uint32_t)(0x6552E2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004613E6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004613D3, __imp__sub_004613D3)

X86_FUNC(__imp__sub_004613E7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004613E7 push 0x5B7B4C
	{ uint32_t v = (uint32_t)(0x5B7B4Cu); X86_PUSH32(v); }
	// 004613EC push 0x564
	{ uint32_t v = (uint32_t)(0x564u); X86_PUSH32(v); }
	// 004613F1 call 0x0006800A
	X86_PUSH32(0x4613F6u); sub_0006800A(ctx, base);
	// 004613F6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004613F7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004613F8 mov [0x006552E3], al
	{ uint32_t ea = (uint32_t)(0x6552E3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004613FD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004613E7, __imp__sub_004613E7)

X86_FUNC(__imp__sub_004613FE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004613FE push 0x5B7B50
	{ uint32_t v = (uint32_t)(0x5B7B50u); X86_PUSH32(v); }
	// 00461403 push 0x563
	{ uint32_t v = (uint32_t)(0x563u); X86_PUSH32(v); }
	// 00461408 call 0x0006800A
	X86_PUSH32(0x46140Du); sub_0006800A(ctx, base);
	// 0046140D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046140E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046140F mov [0x006552E4], al
	{ uint32_t ea = (uint32_t)(0x6552E4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461414 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004613FE, __imp__sub_004613FE)

X86_FUNC(__imp__sub_00461415) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461415 push 0x5B7B54
	{ uint32_t v = (uint32_t)(0x5B7B54u); X86_PUSH32(v); }
	// 0046141A push 0x562
	{ uint32_t v = (uint32_t)(0x562u); X86_PUSH32(v); }
	// 0046141F call 0x0006800A
	X86_PUSH32(0x461424u); sub_0006800A(ctx, base);
	// 00461424 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461425 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461426 mov [0x006552E5], al
	{ uint32_t ea = (uint32_t)(0x6552E5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046142B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461415, __imp__sub_00461415)

X86_FUNC(__imp__sub_0046142C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046142C push 0x5B7B58
	{ uint32_t v = (uint32_t)(0x5B7B58u); X86_PUSH32(v); }
	// 00461431 push 0x55C
	{ uint32_t v = (uint32_t)(0x55Cu); X86_PUSH32(v); }
	// 00461436 call 0x0006800A
	X86_PUSH32(0x46143Bu); sub_0006800A(ctx, base);
	// 0046143B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046143C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046143D mov [0x006552E6], al
	{ uint32_t ea = (uint32_t)(0x6552E6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461442 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046142C, __imp__sub_0046142C)

X86_FUNC(__imp__sub_00461443) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461443 push 0x5B7B5C
	{ uint32_t v = (uint32_t)(0x5B7B5Cu); X86_PUSH32(v); }
	// 00461448 push 0x55A
	{ uint32_t v = (uint32_t)(0x55Au); X86_PUSH32(v); }
	// 0046144D call 0x0006800A
	X86_PUSH32(0x461452u); sub_0006800A(ctx, base);
	// 00461452 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461453 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461454 mov [0x006552E7], al
	{ uint32_t ea = (uint32_t)(0x6552E7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461459 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461443, __imp__sub_00461443)

X86_FUNC(__imp__sub_0046145A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046145A push 0x5B7B60
	{ uint32_t v = (uint32_t)(0x5B7B60u); X86_PUSH32(v); }
	// 0046145F push 0x559
	{ uint32_t v = (uint32_t)(0x559u); X86_PUSH32(v); }
	// 00461464 call 0x0006800A
	X86_PUSH32(0x461469u); sub_0006800A(ctx, base);
	// 00461469 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046146A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046146B mov [0x006552E8], al
	{ uint32_t ea = (uint32_t)(0x6552E8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461470 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046145A, __imp__sub_0046145A)

X86_FUNC(__imp__sub_00461471) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461471 push 0x5B7B64
	{ uint32_t v = (uint32_t)(0x5B7B64u); X86_PUSH32(v); }
	// 00461476 push 0x9D1
	{ uint32_t v = (uint32_t)(0x9D1u); X86_PUSH32(v); }
	// 0046147B call 0x0006800A
	X86_PUSH32(0x461480u); sub_0006800A(ctx, base);
	// 00461480 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461481 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461482 mov [0x006552E9], al
	{ uint32_t ea = (uint32_t)(0x6552E9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461487 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461471, __imp__sub_00461471)

X86_FUNC(__imp__sub_00461488) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461488 push 0x5B7B68
	{ uint32_t v = (uint32_t)(0x5B7B68u); X86_PUSH32(v); }
	// 0046148D push 0x9D0
	{ uint32_t v = (uint32_t)(0x9D0u); X86_PUSH32(v); }
	// 00461492 call 0x0006800A
	X86_PUSH32(0x461497u); sub_0006800A(ctx, base);
	// 00461497 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461498 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461499 mov [0x006552EA], al
	{ uint32_t ea = (uint32_t)(0x6552EAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046149E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461488, __imp__sub_00461488)

X86_FUNC(__imp__sub_0046149F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046149F push 0x5B7B6C
	{ uint32_t v = (uint32_t)(0x5B7B6Cu); X86_PUSH32(v); }
	// 004614A4 push 0x9CF
	{ uint32_t v = (uint32_t)(0x9CFu); X86_PUSH32(v); }
	// 004614A9 call 0x0006800A
	X86_PUSH32(0x4614AEu); sub_0006800A(ctx, base);
	// 004614AE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004614AF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004614B0 mov [0x006552EB], al
	{ uint32_t ea = (uint32_t)(0x6552EBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004614B5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046149F, __imp__sub_0046149F)

X86_FUNC(__imp__sub_004614B6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004614B6 push 0x5B7B70
	{ uint32_t v = (uint32_t)(0x5B7B70u); X86_PUSH32(v); }
	// 004614BB push 0x55D
	{ uint32_t v = (uint32_t)(0x55Du); X86_PUSH32(v); }
	// 004614C0 call 0x0006800A
	X86_PUSH32(0x4614C5u); sub_0006800A(ctx, base);
	// 004614C5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004614C6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004614C7 mov [0x006552EC], al
	{ uint32_t ea = (uint32_t)(0x6552ECu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004614CC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004614B6, __imp__sub_004614B6)

X86_FUNC(__imp__sub_004614CD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004614CD push 0x5B7B74
	{ uint32_t v = (uint32_t)(0x5B7B74u); X86_PUSH32(v); }
	// 004614D2 push 0x469
	{ uint32_t v = (uint32_t)(0x469u); X86_PUSH32(v); }
	// 004614D7 call 0x0006800A
	X86_PUSH32(0x4614DCu); sub_0006800A(ctx, base);
	// 004614DC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004614DD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004614DE mov [0x006552ED], al
	{ uint32_t ea = (uint32_t)(0x6552EDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004614E3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004614CD, __imp__sub_004614CD)

X86_FUNC(__imp__sub_004614E4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004614E4 push 0x5B7B78
	{ uint32_t v = (uint32_t)(0x5B7B78u); X86_PUSH32(v); }
	// 004614E9 push 0x468
	{ uint32_t v = (uint32_t)(0x468u); X86_PUSH32(v); }
	// 004614EE call 0x0006800A
	X86_PUSH32(0x4614F3u); sub_0006800A(ctx, base);
	// 004614F3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004614F4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004614F5 mov [0x006552EE], al
	{ uint32_t ea = (uint32_t)(0x6552EEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004614FA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004614E4, __imp__sub_004614E4)

X86_FUNC(__imp__sub_004614FB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004614FB push 0x5B7B7C
	{ uint32_t v = (uint32_t)(0x5B7B7Cu); X86_PUSH32(v); }
	// 00461500 push 0x467
	{ uint32_t v = (uint32_t)(0x467u); X86_PUSH32(v); }
	// 00461505 call 0x0006800A
	X86_PUSH32(0x46150Au); sub_0006800A(ctx, base);
	// 0046150A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046150B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046150C mov [0x006552EF], al
	{ uint32_t ea = (uint32_t)(0x6552EFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461511 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004614FB, __imp__sub_004614FB)

X86_FUNC(__imp__sub_00461512) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461512 push 0x5B7B80
	{ uint32_t v = (uint32_t)(0x5B7B80u); X86_PUSH32(v); }
	// 00461517 push 0x462
	{ uint32_t v = (uint32_t)(0x462u); X86_PUSH32(v); }
	// 0046151C call 0x0006800A
	X86_PUSH32(0x461521u); sub_0006800A(ctx, base);
	// 00461521 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461522 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461523 mov [0x006552F0], al
	{ uint32_t ea = (uint32_t)(0x6552F0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461528 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461512, __imp__sub_00461512)

X86_FUNC(__imp__sub_00461529) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461529 push 0x5B7B84
	{ uint32_t v = (uint32_t)(0x5B7B84u); X86_PUSH32(v); }
	// 0046152E push 0x45A
	{ uint32_t v = (uint32_t)(0x45Au); X86_PUSH32(v); }
	// 00461533 call 0x0006800A
	X86_PUSH32(0x461538u); sub_0006800A(ctx, base);
	// 00461538 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461539 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046153A mov [0x006552F1], al
	{ uint32_t ea = (uint32_t)(0x6552F1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046153F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461529, __imp__sub_00461529)

X86_FUNC(__imp__sub_00461540) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461540 push 0x5B7B88
	{ uint32_t v = (uint32_t)(0x5B7B88u); X86_PUSH32(v); }
	// 00461545 push 0x458
	{ uint32_t v = (uint32_t)(0x458u); X86_PUSH32(v); }
	// 0046154A call 0x0006800A
	X86_PUSH32(0x46154Fu); sub_0006800A(ctx, base);
	// 0046154F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461550 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461551 mov [0x006552F2], al
	{ uint32_t ea = (uint32_t)(0x6552F2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461556 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461540, __imp__sub_00461540)

X86_FUNC(__imp__sub_00461557) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461557 push 0x5B7B8C
	{ uint32_t v = (uint32_t)(0x5B7B8Cu); X86_PUSH32(v); }
	// 0046155C push 0x464
	{ uint32_t v = (uint32_t)(0x464u); X86_PUSH32(v); }
	// 00461561 call 0x0006800A
	X86_PUSH32(0x461566u); sub_0006800A(ctx, base);
	// 00461566 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461567 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461568 mov [0x006552F3], al
	{ uint32_t ea = (uint32_t)(0x6552F3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046156D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461557, __imp__sub_00461557)

X86_FUNC(__imp__sub_0046156E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046156E push 0x5B7B90
	{ uint32_t v = (uint32_t)(0x5B7B90u); X86_PUSH32(v); }
	// 00461573 push 0x463
	{ uint32_t v = (uint32_t)(0x463u); X86_PUSH32(v); }
	// 00461578 call 0x0006800A
	X86_PUSH32(0x46157Du); sub_0006800A(ctx, base);
	// 0046157D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046157E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046157F mov [0x006552F4], al
	{ uint32_t ea = (uint32_t)(0x6552F4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461584 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046156E, __imp__sub_0046156E)

X86_FUNC(__imp__sub_00461585) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461585 push 0x5B7B94
	{ uint32_t v = (uint32_t)(0x5B7B94u); X86_PUSH32(v); }
	// 0046158A push 0x499
	{ uint32_t v = (uint32_t)(0x499u); X86_PUSH32(v); }
	// 0046158F call 0x0006800A
	X86_PUSH32(0x461594u); sub_0006800A(ctx, base);
	// 00461594 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461595 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461596 mov [0x006552F5], al
	{ uint32_t ea = (uint32_t)(0x6552F5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046159B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461585, __imp__sub_00461585)

X86_FUNC(__imp__sub_0046159C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046159C push 0x5B7B98
	{ uint32_t v = (uint32_t)(0x5B7B98u); X86_PUSH32(v); }
	// 004615A1 push 0x455
	{ uint32_t v = (uint32_t)(0x455u); X86_PUSH32(v); }
	// 004615A6 call 0x0006800A
	X86_PUSH32(0x4615ABu); sub_0006800A(ctx, base);
	// 004615AB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004615AC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004615AD mov [0x006552F6], al
	{ uint32_t ea = (uint32_t)(0x6552F6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004615B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046159C, __imp__sub_0046159C)

X86_FUNC(__imp__sub_004615B3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004615B3 push 0x5B7B9C
	{ uint32_t v = (uint32_t)(0x5B7B9Cu); X86_PUSH32(v); }
	// 004615B8 push 0x4A0
	{ uint32_t v = (uint32_t)(0x4A0u); X86_PUSH32(v); }
	// 004615BD call 0x0006800A
	X86_PUSH32(0x4615C2u); sub_0006800A(ctx, base);
	// 004615C2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004615C3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004615C4 mov [0x006552F7], al
	{ uint32_t ea = (uint32_t)(0x6552F7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004615C9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004615B3, __imp__sub_004615B3)

X86_FUNC(__imp__sub_004615CA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004615CA push 0x5B7BA0
	{ uint32_t v = (uint32_t)(0x5B7BA0u); X86_PUSH32(v); }
	// 004615CF push 0x49F
	{ uint32_t v = (uint32_t)(0x49Fu); X86_PUSH32(v); }
	// 004615D4 call 0x0006800A
	X86_PUSH32(0x4615D9u); sub_0006800A(ctx, base);
	// 004615D9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004615DA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004615DB mov [0x006552F8], al
	{ uint32_t ea = (uint32_t)(0x6552F8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004615E0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004615CA, __imp__sub_004615CA)

X86_FUNC(__imp__sub_004615E1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004615E1 push 0x5B7BA4
	{ uint32_t v = (uint32_t)(0x5B7BA4u); X86_PUSH32(v); }
	// 004615E6 push 0x461
	{ uint32_t v = (uint32_t)(0x461u); X86_PUSH32(v); }
	// 004615EB call 0x0006800A
	X86_PUSH32(0x4615F0u); sub_0006800A(ctx, base);
	// 004615F0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004615F1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004615F2 mov [0x006552F9], al
	{ uint32_t ea = (uint32_t)(0x6552F9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004615F7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004615E1, __imp__sub_004615E1)

X86_FUNC(__imp__sub_004615F8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004615F8 push 0x5B7BA8
	{ uint32_t v = (uint32_t)(0x5B7BA8u); X86_PUSH32(v); }
	// 004615FD push 0x45C
	{ uint32_t v = (uint32_t)(0x45Cu); X86_PUSH32(v); }
	// 00461602 call 0x0006800A
	X86_PUSH32(0x461607u); sub_0006800A(ctx, base);
	// 00461607 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461608 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461609 mov [0x006552FA], al
	{ uint32_t ea = (uint32_t)(0x6552FAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046160E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004615F8, __imp__sub_004615F8)

X86_FUNC(__imp__sub_0046160F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046160F push 0x5B7BAC
	{ uint32_t v = (uint32_t)(0x5B7BACu); X86_PUSH32(v); }
	// 00461614 push 0x45B
	{ uint32_t v = (uint32_t)(0x45Bu); X86_PUSH32(v); }
	// 00461619 call 0x0006800A
	X86_PUSH32(0x46161Eu); sub_0006800A(ctx, base);
	// 0046161E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046161F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461620 mov [0x006552FB], al
	{ uint32_t ea = (uint32_t)(0x6552FBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461625 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046160F, __imp__sub_0046160F)

X86_FUNC(__imp__sub_00461626) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461626 push 0x5B7BB0
	{ uint32_t v = (uint32_t)(0x5B7BB0u); X86_PUSH32(v); }
	// 0046162B push 0x450
	{ uint32_t v = (uint32_t)(0x450u); X86_PUSH32(v); }
	// 00461630 call 0x0006800A
	X86_PUSH32(0x461635u); sub_0006800A(ctx, base);
	// 00461635 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461636 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461637 mov [0x006552FC], al
	{ uint32_t ea = (uint32_t)(0x6552FCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046163C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461626, __imp__sub_00461626)

X86_FUNC(__imp__sub_0046163D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046163D push 0x5B7BB4
	{ uint32_t v = (uint32_t)(0x5B7BB4u); X86_PUSH32(v); }
	// 00461642 push 0x52A
	{ uint32_t v = (uint32_t)(0x52Au); X86_PUSH32(v); }
	// 00461647 call 0x0006800A
	X86_PUSH32(0x46164Cu); sub_0006800A(ctx, base);
	// 0046164C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046164D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046164E mov [0x006552FD], al
	{ uint32_t ea = (uint32_t)(0x6552FDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461653 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046163D, __imp__sub_0046163D)

X86_FUNC(__imp__sub_00461654) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461654 push 0x5B7BB8
	{ uint32_t v = (uint32_t)(0x5B7BB8u); X86_PUSH32(v); }
	// 00461659 push 0x529
	{ uint32_t v = (uint32_t)(0x529u); X86_PUSH32(v); }
	// 0046165E call 0x0006800A
	X86_PUSH32(0x461663u); sub_0006800A(ctx, base);
	// 00461663 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461664 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461665 mov [0x006552FE], al
	{ uint32_t ea = (uint32_t)(0x6552FEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046166A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461654, __imp__sub_00461654)

X86_FUNC(__imp__sub_0046166B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046166B push 0x5B7BBC
	{ uint32_t v = (uint32_t)(0x5B7BBCu); X86_PUSH32(v); }
	// 00461670 push 0x53D
	{ uint32_t v = (uint32_t)(0x53Du); X86_PUSH32(v); }
	// 00461675 call 0x0006800A
	X86_PUSH32(0x46167Au); sub_0006800A(ctx, base);
	// 0046167A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046167B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046167C mov [0x006552FF], al
	{ uint32_t ea = (uint32_t)(0x6552FFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461681 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046166B, __imp__sub_0046166B)

X86_FUNC(__imp__sub_00461682) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461682 push 0x5B7BC0
	{ uint32_t v = (uint32_t)(0x5B7BC0u); X86_PUSH32(v); }
	// 00461687 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00461689 call 0x0006800A
	X86_PUSH32(0x46168Eu); sub_0006800A(ctx, base);
	// 0046168E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046168F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461690 mov [0x00655300], al
	{ uint32_t ea = (uint32_t)(0x655300u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461695 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461682, __imp__sub_00461682)

X86_FUNC(__imp__sub_00461696) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461696 push 0x5B7BC4
	{ uint32_t v = (uint32_t)(0x5B7BC4u); X86_PUSH32(v); }
	// 0046169B push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0046169D call 0x0006800A
	X86_PUSH32(0x4616A2u); sub_0006800A(ctx, base);
	// 004616A2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004616A3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004616A4 mov [0x00655301], al
	{ uint32_t ea = (uint32_t)(0x655301u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004616A9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461696, __imp__sub_00461696)

X86_FUNC(__imp__sub_004616AA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004616AA push 0x5B7BC8
	{ uint32_t v = (uint32_t)(0x5B7BC8u); X86_PUSH32(v); }
	// 004616AF push 0x73B
	{ uint32_t v = (uint32_t)(0x73Bu); X86_PUSH32(v); }
	// 004616B4 call 0x0006800A
	X86_PUSH32(0x4616B9u); sub_0006800A(ctx, base);
	// 004616B9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004616BA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004616BB mov [0x00655302], al
	{ uint32_t ea = (uint32_t)(0x655302u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004616C0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004616AA, __imp__sub_004616AA)

X86_FUNC(__imp__sub_004616C1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004616C1 push 0x5B7BCC
	{ uint32_t v = (uint32_t)(0x5B7BCCu); X86_PUSH32(v); }
	// 004616C6 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 004616C8 call 0x0006800A
	X86_PUSH32(0x4616CDu); sub_0006800A(ctx, base);
	// 004616CD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004616CE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004616CF mov [0x00655303], al
	{ uint32_t ea = (uint32_t)(0x655303u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004616D4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004616C1, __imp__sub_004616C1)

X86_FUNC(__imp__sub_004616D5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004616D5 push 0x5B7BD0
	{ uint32_t v = (uint32_t)(0x5B7BD0u); X86_PUSH32(v); }
	// 004616DA push 0x80B
	{ uint32_t v = (uint32_t)(0x80Bu); X86_PUSH32(v); }
	// 004616DF call 0x0006800A
	X86_PUSH32(0x4616E4u); sub_0006800A(ctx, base);
	// 004616E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004616E5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004616E6 mov [0x00655304], al
	{ uint32_t ea = (uint32_t)(0x655304u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004616EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004616D5, __imp__sub_004616D5)

X86_FUNC(__imp__sub_004616EC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004616EC push 0x5B7BD4
	{ uint32_t v = (uint32_t)(0x5B7BD4u); X86_PUSH32(v); }
	// 004616F1 push 0x80A
	{ uint32_t v = (uint32_t)(0x80Au); X86_PUSH32(v); }
	// 004616F6 call 0x0006800A
	X86_PUSH32(0x4616FBu); sub_0006800A(ctx, base);
	// 004616FB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004616FC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004616FD mov [0x00655305], al
	{ uint32_t ea = (uint32_t)(0x655305u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461702 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004616EC, __imp__sub_004616EC)

X86_FUNC(__imp__sub_00461703) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461703 push 0x5B7BD8
	{ uint32_t v = (uint32_t)(0x5B7BD8u); X86_PUSH32(v); }
	// 00461708 push 0x223
	{ uint32_t v = (uint32_t)(0x223u); X86_PUSH32(v); }
	// 0046170D call 0x0006800A
	X86_PUSH32(0x461712u); sub_0006800A(ctx, base);
	// 00461712 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461713 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461714 mov [0x00655306], al
	{ uint32_t ea = (uint32_t)(0x655306u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461719 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461703, __imp__sub_00461703)

X86_FUNC(__imp__sub_0046171A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046171A push 0x5B7BDC
	{ uint32_t v = (uint32_t)(0x5B7BDCu); X86_PUSH32(v); }
	// 0046171F push 0x9C5
	{ uint32_t v = (uint32_t)(0x9C5u); X86_PUSH32(v); }
	// 00461724 call 0x0006800A
	X86_PUSH32(0x461729u); sub_0006800A(ctx, base);
	// 00461729 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046172A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046172B mov [0x00655307], al
	{ uint32_t ea = (uint32_t)(0x655307u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461730 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046171A, __imp__sub_0046171A)

X86_FUNC(__imp__sub_00461731) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461731 push 0x5B7BE0
	{ uint32_t v = (uint32_t)(0x5B7BE0u); X86_PUSH32(v); }
	// 00461736 push 0xF8D
	{ uint32_t v = (uint32_t)(0xF8Du); X86_PUSH32(v); }
	// 0046173B call 0x0006800A
	X86_PUSH32(0x461740u); sub_0006800A(ctx, base);
	// 00461740 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461741 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461742 mov [0x00655308], al
	{ uint32_t ea = (uint32_t)(0x655308u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461747 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461731, __imp__sub_00461731)

X86_FUNC(__imp__sub_00461748) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461748 push 0x5B7BE4
	{ uint32_t v = (uint32_t)(0x5B7BE4u); X86_PUSH32(v); }
	// 0046174D push 0xF8C
	{ uint32_t v = (uint32_t)(0xF8Cu); X86_PUSH32(v); }
	// 00461752 call 0x0006800A
	X86_PUSH32(0x461757u); sub_0006800A(ctx, base);
	// 00461757 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461758 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461759 mov [0x00655309], al
	{ uint32_t ea = (uint32_t)(0x655309u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046175E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461748, __imp__sub_00461748)

X86_FUNC(__imp__sub_0046175F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046175F push 0x5B7BE8
	{ uint32_t v = (uint32_t)(0x5B7BE8u); X86_PUSH32(v); }
	// 00461764 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00461766 call 0x0006800A
	X86_PUSH32(0x46176Bu); sub_0006800A(ctx, base);
	// 0046176B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046176C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046176D mov [0x0065530A], al
	{ uint32_t ea = (uint32_t)(0x65530Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461772 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046175F, __imp__sub_0046175F)

X86_FUNC(__imp__sub_00461773) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461773 push 0x5B7BEC
	{ uint32_t v = (uint32_t)(0x5B7BECu); X86_PUSH32(v); }
	// 00461778 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0046177A call 0x0006800A
	X86_PUSH32(0x46177Fu); sub_0006800A(ctx, base);
	// 0046177F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461780 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461781 mov [0x0065530B], al
	{ uint32_t ea = (uint32_t)(0x65530Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461786 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461773, __imp__sub_00461773)

X86_FUNC(__imp__sub_00461787) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461787 push 0x5B7BF0
	{ uint32_t v = (uint32_t)(0x5B7BF0u); X86_PUSH32(v); }
	// 0046178C push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0046178E call 0x0006800A
	X86_PUSH32(0x461793u); sub_0006800A(ctx, base);
	// 00461793 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461794 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461795 mov [0x0065530C], al
	{ uint32_t ea = (uint32_t)(0x65530Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046179A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461787, __imp__sub_00461787)

X86_FUNC(__imp__sub_0046179B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046179B push 0x5B7BF4
	{ uint32_t v = (uint32_t)(0x5B7BF4u); X86_PUSH32(v); }
	// 004617A0 push 0x222
	{ uint32_t v = (uint32_t)(0x222u); X86_PUSH32(v); }
	// 004617A5 call 0x0006800A
	X86_PUSH32(0x4617AAu); sub_0006800A(ctx, base);
	// 004617AA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004617AB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004617AC mov [0x0065530D], al
	{ uint32_t ea = (uint32_t)(0x65530Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004617B1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046179B, __imp__sub_0046179B)

X86_FUNC(__imp__sub_004617B2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004617B2 push 0x5B7BF8
	{ uint32_t v = (uint32_t)(0x5B7BF8u); X86_PUSH32(v); }
	// 004617B7 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 004617B9 call 0x0006800A
	X86_PUSH32(0x4617BEu); sub_0006800A(ctx, base);
	// 004617BE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004617BF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004617C0 mov [0x0065530E], al
	{ uint32_t ea = (uint32_t)(0x65530Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004617C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004617B2, __imp__sub_004617B2)

X86_FUNC(__imp__sub_004617C6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004617C6 push 0x5B7BFC
	{ uint32_t v = (uint32_t)(0x5B7BFCu); X86_PUSH32(v); }
	// 004617CB push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 004617CD call 0x0006800A
	X86_PUSH32(0x4617D2u); sub_0006800A(ctx, base);
	// 004617D2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004617D3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004617D4 mov [0x0065530F], al
	{ uint32_t ea = (uint32_t)(0x65530Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004617D9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004617C6, __imp__sub_004617C6)

X86_FUNC(__imp__sub_004617DA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004617DA push 0x5B7C00
	{ uint32_t v = (uint32_t)(0x5B7C00u); X86_PUSH32(v); }
	// 004617DF push 0x220
	{ uint32_t v = (uint32_t)(0x220u); X86_PUSH32(v); }
	// 004617E4 call 0x0006800A
	X86_PUSH32(0x4617E9u); sub_0006800A(ctx, base);
	// 004617E9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004617EA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004617EB mov [0x00655310], al
	{ uint32_t ea = (uint32_t)(0x655310u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004617F0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004617DA, __imp__sub_004617DA)

X86_FUNC(__imp__sub_004617F1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004617F1 push 0x5B7C04
	{ uint32_t v = (uint32_t)(0x5B7C04u); X86_PUSH32(v); }
	// 004617F6 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 004617F8 call 0x0006800A
	X86_PUSH32(0x4617FDu); sub_0006800A(ctx, base);
	// 004617FD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004617FE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004617FF mov [0x00655311], al
	{ uint32_t ea = (uint32_t)(0x655311u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461804 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004617F1, __imp__sub_004617F1)

X86_FUNC(__imp__sub_00461805) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461805 push 0x5B7C08
	{ uint32_t v = (uint32_t)(0x5B7C08u); X86_PUSH32(v); }
	// 0046180A push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0046180C call 0x0006800A
	X86_PUSH32(0x461811u); sub_0006800A(ctx, base);
	// 00461811 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461812 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461813 mov [0x00655312], al
	{ uint32_t ea = (uint32_t)(0x655312u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461818 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461805, __imp__sub_00461805)

X86_FUNC(__imp__sub_00461819) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461819 push 0x5B7C0C
	{ uint32_t v = (uint32_t)(0x5B7C0Cu); X86_PUSH32(v); }
	// 0046181E push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 00461820 call 0x0006800A
	X86_PUSH32(0x461825u); sub_0006800A(ctx, base);
	// 00461825 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461826 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461827 mov [0x00655313], al
	{ uint32_t ea = (uint32_t)(0x655313u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046182C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461819, __imp__sub_00461819)

X86_FUNC(__imp__sub_0046182D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046182D push 0x5B7C10
	{ uint32_t v = (uint32_t)(0x5B7C10u); X86_PUSH32(v); }
	// 00461832 push 0x44E
	{ uint32_t v = (uint32_t)(0x44Eu); X86_PUSH32(v); }
	// 00461837 call 0x0006800A
	X86_PUSH32(0x46183Cu); sub_0006800A(ctx, base);
	// 0046183C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046183D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046183E mov [0x00655314], al
	{ uint32_t ea = (uint32_t)(0x655314u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461843 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046182D, __imp__sub_0046182D)

X86_FUNC(__imp__sub_00461844) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461844 push 0x5B7C14
	{ uint32_t v = (uint32_t)(0x5B7C14u); X86_PUSH32(v); }
	// 00461849 push 0x44C
	{ uint32_t v = (uint32_t)(0x44Cu); X86_PUSH32(v); }
	// 0046184E call 0x0006800A
	X86_PUSH32(0x461853u); sub_0006800A(ctx, base);
	// 00461853 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461854 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461855 mov [0x00655315], al
	{ uint32_t ea = (uint32_t)(0x655315u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046185A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461844, __imp__sub_00461844)

X86_FUNC(__imp__sub_0046185B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046185B push 0x5B7C18
	{ uint32_t v = (uint32_t)(0x5B7C18u); X86_PUSH32(v); }
	// 00461860 push 0x216
	{ uint32_t v = (uint32_t)(0x216u); X86_PUSH32(v); }
	// 00461865 call 0x0006800A
	X86_PUSH32(0x46186Au); sub_0006800A(ctx, base);
	// 0046186A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046186B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046186C mov [0x00655316], al
	{ uint32_t ea = (uint32_t)(0x655316u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461871 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046185B, __imp__sub_0046185B)

X86_FUNC(__imp__sub_00461872) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461872 push 0x5B7C1C
	{ uint32_t v = (uint32_t)(0x5B7C1Cu); X86_PUSH32(v); }
	// 00461877 push 0x213
	{ uint32_t v = (uint32_t)(0x213u); X86_PUSH32(v); }
	// 0046187C call 0x0006800A
	X86_PUSH32(0x461881u); sub_0006800A(ctx, base);
	// 00461881 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461882 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461883 mov [0x00655317], al
	{ uint32_t ea = (uint32_t)(0x655317u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461888 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461872, __imp__sub_00461872)

X86_FUNC(__imp__sub_00461889) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461889 push 0x5B7C20
	{ uint32_t v = (uint32_t)(0x5B7C20u); X86_PUSH32(v); }
	// 0046188E push 0x212
	{ uint32_t v = (uint32_t)(0x212u); X86_PUSH32(v); }
	// 00461893 call 0x0006800A
	X86_PUSH32(0x461898u); sub_0006800A(ctx, base);
	// 00461898 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461899 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046189A mov [0x00655318], al
	{ uint32_t ea = (uint32_t)(0x655318u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046189F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461889, __imp__sub_00461889)

X86_FUNC(__imp__sub_004618A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004618A0 push 0x5B7C24
	{ uint32_t v = (uint32_t)(0x5B7C24u); X86_PUSH32(v); }
	// 004618A5 push 0x211
	{ uint32_t v = (uint32_t)(0x211u); X86_PUSH32(v); }
	// 004618AA call 0x0006800A
	X86_PUSH32(0x4618AFu); sub_0006800A(ctx, base);
	// 004618AF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004618B0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004618B1 mov [0x00655319], al
	{ uint32_t ea = (uint32_t)(0x655319u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004618B6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004618A0, __imp__sub_004618A0)

X86_FUNC(__imp__sub_004618B7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004618B7 push 0x5B7C28
	{ uint32_t v = (uint32_t)(0x5B7C28u); X86_PUSH32(v); }
	// 004618BC push 0x20F
	{ uint32_t v = (uint32_t)(0x20Fu); X86_PUSH32(v); }
	// 004618C1 call 0x0006800A
	X86_PUSH32(0x4618C6u); sub_0006800A(ctx, base);
	// 004618C6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004618C7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004618C8 mov [0x0065531A], al
	{ uint32_t ea = (uint32_t)(0x65531Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004618CD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004618B7, __imp__sub_004618B7)

X86_FUNC(__imp__sub_004618CE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004618CE push 0x5B7C2C
	{ uint32_t v = (uint32_t)(0x5B7C2Cu); X86_PUSH32(v); }
	// 004618D3 push 0x20E
	{ uint32_t v = (uint32_t)(0x20Eu); X86_PUSH32(v); }
	// 004618D8 call 0x0006800A
	X86_PUSH32(0x4618DDu); sub_0006800A(ctx, base);
	// 004618DD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004618DE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004618DF mov [0x0065531B], al
	{ uint32_t ea = (uint32_t)(0x65531Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004618E4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004618CE, __imp__sub_004618CE)

X86_FUNC(__imp__sub_004618E5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004618E5 push 0x5B7C30
	{ uint32_t v = (uint32_t)(0x5B7C30u); X86_PUSH32(v); }
	// 004618EA push 0x208
	{ uint32_t v = (uint32_t)(0x208u); X86_PUSH32(v); }
	// 004618EF call 0x0006800A
	X86_PUSH32(0x4618F4u); sub_0006800A(ctx, base);
	// 004618F4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004618F5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004618F6 mov [0x0065531C], al
	{ uint32_t ea = (uint32_t)(0x65531Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004618FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004618E5, __imp__sub_004618E5)

X86_FUNC(__imp__sub_004618FC) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004618FC push 0x5B7C34
	{ uint32_t v = (uint32_t)(0x5B7C34u); X86_PUSH32(v); }
	// 00461901 push 0x209
	{ uint32_t v = (uint32_t)(0x209u); X86_PUSH32(v); }
	// 00461906 call 0x0006800A
	X86_PUSH32(0x46190Bu); sub_0006800A(ctx, base);
	// 0046190B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046190C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046190D mov [0x0065531D], al
	{ uint32_t ea = (uint32_t)(0x65531Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461912 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004618FC, __imp__sub_004618FC)

X86_FUNC(__imp__sub_00461913) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461913 push 0x5B7C38
	{ uint32_t v = (uint32_t)(0x5B7C38u); X86_PUSH32(v); }
	// 00461918 push 0x20B
	{ uint32_t v = (uint32_t)(0x20Bu); X86_PUSH32(v); }
	// 0046191D call 0x0006800A
	X86_PUSH32(0x461922u); sub_0006800A(ctx, base);
	// 00461922 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461923 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461924 mov [0x0065531E], al
	{ uint32_t ea = (uint32_t)(0x65531Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461929 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461913, __imp__sub_00461913)

X86_FUNC(__imp__sub_0046192A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046192A push 0x5B7C3C
	{ uint32_t v = (uint32_t)(0x5B7C3Cu); X86_PUSH32(v); }
	// 0046192F push 0x215
	{ uint32_t v = (uint32_t)(0x215u); X86_PUSH32(v); }
	// 00461934 call 0x0006800A
	X86_PUSH32(0x461939u); sub_0006800A(ctx, base);
	// 00461939 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046193A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046193B mov [0x0065531F], al
	{ uint32_t ea = (uint32_t)(0x65531Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461940 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046192A, __imp__sub_0046192A)

X86_FUNC(__imp__sub_00461941) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461941 push 0x5B7C40
	{ uint32_t v = (uint32_t)(0x5B7C40u); X86_PUSH32(v); }
	// 00461946 push 0x1FC
	{ uint32_t v = (uint32_t)(0x1FCu); X86_PUSH32(v); }
	// 0046194B call 0x0006800A
	X86_PUSH32(0x461950u); sub_0006800A(ctx, base);
	// 00461950 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461951 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461952 mov [0x00655320], al
	{ uint32_t ea = (uint32_t)(0x655320u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461957 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461941, __imp__sub_00461941)

X86_FUNC(__imp__sub_00461958) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461958 push 0x5B7C44
	{ uint32_t v = (uint32_t)(0x5B7C44u); X86_PUSH32(v); }
	// 0046195D push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 0046195F call 0x0006800A
	X86_PUSH32(0x461964u); sub_0006800A(ctx, base);
	// 00461964 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461965 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461966 mov [0x00655321], al
	{ uint32_t ea = (uint32_t)(0x655321u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 0046196B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461958, __imp__sub_00461958)

X86_FUNC(__imp__sub_0046196C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046196C push 0x5B7C48
	{ uint32_t v = (uint32_t)(0x5B7C48u); X86_PUSH32(v); }
	// 00461971 push 0x135
	{ uint32_t v = (uint32_t)(0x135u); X86_PUSH32(v); }
	// 00461976 call 0x0006800A
	X86_PUSH32(0x46197Bu); sub_0006800A(ctx, base);
	// 0046197B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046197C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046197D mov [0x00655322], al
	{ uint32_t ea = (uint32_t)(0x655322u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461982 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046196C, __imp__sub_0046196C)

X86_FUNC(__imp__sub_00461983) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461983 push 0x5B7C4C
	{ uint32_t v = (uint32_t)(0x5B7C4Cu); X86_PUSH32(v); }
	// 00461988 push 0x134
	{ uint32_t v = (uint32_t)(0x134u); X86_PUSH32(v); }
	// 0046198D call 0x0006800A
	X86_PUSH32(0x461992u); sub_0006800A(ctx, base);
	// 00461992 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461993 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461994 mov [0x00655323], al
	{ uint32_t ea = (uint32_t)(0x655323u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461999 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461983, __imp__sub_00461983)

X86_FUNC(__imp__sub_0046199A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046199A push 0x5B7C50
	{ uint32_t v = (uint32_t)(0x5B7C50u); X86_PUSH32(v); }
	// 0046199F push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 004619A1 call 0x0006800A
	X86_PUSH32(0x4619A6u); sub_0006800A(ctx, base);
	// 004619A6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004619A7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004619A8 mov [0x00655324], al
	{ uint32_t ea = (uint32_t)(0x655324u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004619AD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046199A, __imp__sub_0046199A)

X86_FUNC(__imp__sub_004619AE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004619AE push 0x5B7C54
	{ uint32_t v = (uint32_t)(0x5B7C54u); X86_PUSH32(v); }
	// 004619B3 push 0xFFFFFFFF
	{ uint32_t v = (uint32_t)(0xFFFFFFFFu); X86_PUSH32(v); }
	// 004619B5 call 0x0006800A
	X86_PUSH32(0x4619BAu); sub_0006800A(ctx, base);
	// 004619BA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004619BB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004619BC mov [0x00655325], al
	{ uint32_t ea = (uint32_t)(0x655325u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004619C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004619AE, __imp__sub_004619AE)

X86_FUNC(__imp__sub_004619C2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004619C2 push 0x5B7C58
	{ uint32_t v = (uint32_t)(0x5B7C58u); X86_PUSH32(v); }
	// 004619C7 push 0xCEE
	{ uint32_t v = (uint32_t)(0xCEEu); X86_PUSH32(v); }
	// 004619CC call 0x0006800A
	X86_PUSH32(0x4619D1u); sub_0006800A(ctx, base);
	// 004619D1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004619D2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004619D3 mov [0x00655326], al
	{ uint32_t ea = (uint32_t)(0x655326u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004619D8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004619C2, __imp__sub_004619C2)

X86_FUNC(__imp__sub_004619D9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004619D9 push 0x5B7C5C
	{ uint32_t v = (uint32_t)(0x5B7C5Cu); X86_PUSH32(v); }
	// 004619DE push 0x9D8
	{ uint32_t v = (uint32_t)(0x9D8u); X86_PUSH32(v); }
	// 004619E3 call 0x0006800A
	X86_PUSH32(0x4619E8u); sub_0006800A(ctx, base);
	// 004619E8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004619E9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004619EA mov [0x00655327], al
	{ uint32_t ea = (uint32_t)(0x655327u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 004619EF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004619D9, __imp__sub_004619D9)

X86_FUNC(__imp__sub_004619F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004619F0 push 0x5B7C60
	{ uint32_t v = (uint32_t)(0x5B7C60u); X86_PUSH32(v); }
	// 004619F5 push 0x56C
	{ uint32_t v = (uint32_t)(0x56Cu); X86_PUSH32(v); }
	// 004619FA call 0x0006800A
	X86_PUSH32(0x4619FFu); sub_0006800A(ctx, base);
	// 004619FF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A00 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A01 mov [0x00655328], al
	{ uint32_t ea = (uint32_t)(0x655328u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461A06 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004619F0, __imp__sub_004619F0)

X86_FUNC(__imp__sub_00461A07) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461A07 push 0x5B7C64
	{ uint32_t v = (uint32_t)(0x5B7C64u); X86_PUSH32(v); }
	// 00461A0C push 0x56B
	{ uint32_t v = (uint32_t)(0x56Bu); X86_PUSH32(v); }
	// 00461A11 call 0x0006800A
	X86_PUSH32(0x461A16u); sub_0006800A(ctx, base);
	// 00461A16 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A17 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A18 mov [0x00655329], al
	{ uint32_t ea = (uint32_t)(0x655329u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461A1D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461A07, __imp__sub_00461A07)

X86_FUNC(__imp__sub_00461A1E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461A1E push 0x5B7C68
	{ uint32_t v = (uint32_t)(0x5B7C68u); X86_PUSH32(v); }
	// 00461A23 push 0x56A
	{ uint32_t v = (uint32_t)(0x56Au); X86_PUSH32(v); }
	// 00461A28 call 0x0006800A
	X86_PUSH32(0x461A2Du); sub_0006800A(ctx, base);
	// 00461A2D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A2E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A2F mov [0x0065532A], al
	{ uint32_t ea = (uint32_t)(0x65532Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461A34 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461A1E, __imp__sub_00461A1E)

X86_FUNC(__imp__sub_00461A35) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461A35 push 0x5B7C6C
	{ uint32_t v = (uint32_t)(0x5B7C6Cu); X86_PUSH32(v); }
	// 00461A3A push 0x569
	{ uint32_t v = (uint32_t)(0x569u); X86_PUSH32(v); }
	// 00461A3F call 0x0006800A
	X86_PUSH32(0x461A44u); sub_0006800A(ctx, base);
	// 00461A44 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A45 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A46 mov [0x0065532B], al
	{ uint32_t ea = (uint32_t)(0x65532Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461A4B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461A35, __imp__sub_00461A35)

X86_FUNC(__imp__sub_00461A4C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461A4C push 0x5B7C70
	{ uint32_t v = (uint32_t)(0x5B7C70u); X86_PUSH32(v); }
	// 00461A51 push 0x568
	{ uint32_t v = (uint32_t)(0x568u); X86_PUSH32(v); }
	// 00461A56 call 0x0006800A
	X86_PUSH32(0x461A5Bu); sub_0006800A(ctx, base);
	// 00461A5B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A5C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A5D mov [0x0065532C], al
	{ uint32_t ea = (uint32_t)(0x65532Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461A62 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461A4C, __imp__sub_00461A4C)

X86_FUNC(__imp__sub_00461A63) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461A63 push 0x5B7C74
	{ uint32_t v = (uint32_t)(0x5B7C74u); X86_PUSH32(v); }
	// 00461A68 push 0x605
	{ uint32_t v = (uint32_t)(0x605u); X86_PUSH32(v); }
	// 00461A6D call 0x0006800A
	X86_PUSH32(0x461A72u); sub_0006800A(ctx, base);
	// 00461A72 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A73 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A74 mov [0x0065532D], al
	{ uint32_t ea = (uint32_t)(0x65532Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461A79 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461A63, __imp__sub_00461A63)

X86_FUNC(__imp__sub_00461A7A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461A7A push 0x5B7C78
	{ uint32_t v = (uint32_t)(0x5B7C78u); X86_PUSH32(v); }
	// 00461A7F push 0x567
	{ uint32_t v = (uint32_t)(0x567u); X86_PUSH32(v); }
	// 00461A84 call 0x0006800A
	X86_PUSH32(0x461A89u); sub_0006800A(ctx, base);
	// 00461A89 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A8A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461A8B mov [0x0065532E], al
	{ uint32_t ea = (uint32_t)(0x65532Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461A90 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461A7A, __imp__sub_00461A7A)

X86_FUNC(__imp__sub_00461A91) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461A91 push 0x5B7C7C
	{ uint32_t v = (uint32_t)(0x5B7C7Cu); X86_PUSH32(v); }
	// 00461A96 push 0x566
	{ uint32_t v = (uint32_t)(0x566u); X86_PUSH32(v); }
	// 00461A9B call 0x0006800A
	X86_PUSH32(0x461AA0u); sub_0006800A(ctx, base);
	// 00461AA0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461AA1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461AA2 mov [0x0065532F], al
	{ uint32_t ea = (uint32_t)(0x65532Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461AA7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461A91, __imp__sub_00461A91)

X86_FUNC(__imp__sub_00461AA8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461AA8 mov ecx, 0x6553B8
	{ ctx.ecx = (uint32_t)(0x6553B8u); }
	// 00461AAD call 0x0029D874
	X86_PUSH32(0x461AB2u); sub_0029D874(ctx, base);
	// 00461AB2 push 0x4649BE
	{ uint32_t v = (uint32_t)(0x4649BEu); X86_PUSH32(v); }
	// 00461AB7 call 0x00366943
	X86_PUSH32(0x461ABCu); sub_00366943(ctx, base);
	// 00461ABC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461ABD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461AA8, __imp__sub_00461AA8)

X86_FUNC(__imp__sub_00461ABE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461ABE push 0x4649C9
	{ uint32_t v = (uint32_t)(0x4649C9u); X86_PUSH32(v); }
	// 00461AC3 call 0x00366943
	X86_PUSH32(0x461AC8u); sub_00366943(ctx, base);
	// 00461AC8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461AC9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461ABE, __imp__sub_00461ABE)

X86_FUNC(__imp__sub_00461ACA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461ACA push 0x4649DD
	{ uint32_t v = (uint32_t)(0x4649DDu); X86_PUSH32(v); }
	// 00461ACF call 0x00366943
	X86_PUSH32(0x461AD4u); sub_00366943(ctx, base);
	// 00461AD4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461AD5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461ACA, __imp__sub_00461ACA)

X86_FUNC(__imp__sub_00461AD6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461AD6 push 0x464A05
	{ uint32_t v = (uint32_t)(0x464A05u); X86_PUSH32(v); }
	// 00461ADB call 0x00366943
	X86_PUSH32(0x461AE0u); sub_00366943(ctx, base);
	// 00461AE0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461AE1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461AD6, __imp__sub_00461AD6)

X86_FUNC(__imp__sub_00461AE2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461AE2 push 0x464A06
	{ uint32_t v = (uint32_t)(0x464A06u); X86_PUSH32(v); }
	// 00461AE7 call 0x00366943
	X86_PUSH32(0x461AECu); sub_00366943(ctx, base);
	// 00461AEC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461AED ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461AE2, __imp__sub_00461AE2)

X86_FUNC(__imp__sub_00461AEE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461AEE push 0x464A1A
	{ uint32_t v = (uint32_t)(0x464A1Au); X86_PUSH32(v); }
	// 00461AF3 call 0x00366943
	X86_PUSH32(0x461AF8u); sub_00366943(ctx, base);
	// 00461AF8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461AF9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461AEE, __imp__sub_00461AEE)

X86_FUNC(__imp__sub_00461AFA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461AFA push 0x464A1B
	{ uint32_t v = (uint32_t)(0x464A1Bu); X86_PUSH32(v); }
	// 00461AFF call 0x00366943
	X86_PUSH32(0x461B04u); sub_00366943(ctx, base);
	// 00461B04 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461B05 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461AFA, __imp__sub_00461AFA)

X86_FUNC(__imp__sub_00461B06) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461B06 push 0x464A1C
	{ uint32_t v = (uint32_t)(0x464A1Cu); X86_PUSH32(v); }
	// 00461B0B call 0x00366943
	X86_PUSH32(0x461B10u); sub_00366943(ctx, base);
	// 00461B10 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461B11 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461B06, __imp__sub_00461B06)

X86_FUNC(__imp__sub_00461B12) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461B12 push 0x464A1D
	{ uint32_t v = (uint32_t)(0x464A1Du); X86_PUSH32(v); }
	// 00461B17 call 0x00366943
	X86_PUSH32(0x461B1Cu); sub_00366943(ctx, base);
	// 00461B1C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461B1D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461B12, __imp__sub_00461B12)

X86_FUNC(__imp__sub_00461B1E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461B1E push 0x464A1E
	{ uint32_t v = (uint32_t)(0x464A1Eu); X86_PUSH32(v); }
	// 00461B23 call 0x00366943
	X86_PUSH32(0x461B28u); sub_00366943(ctx, base);
	// 00461B28 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461B29 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461B1E, __imp__sub_00461B1E)

X86_FUNC(__imp__sub_00461B2A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461B2A push 0x464A1F
	{ uint32_t v = (uint32_t)(0x464A1Fu); X86_PUSH32(v); }
	// 00461B2F call 0x00366943
	X86_PUSH32(0x461B34u); sub_00366943(ctx, base);
	// 00461B34 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461B35 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461B2A, __imp__sub_00461B2A)

X86_FUNC(__imp__sub_00461B36) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461B36 mov ecx, 0x657ED8
	{ ctx.ecx = (uint32_t)(0x657ED8u); }
	// 00461B3B jmp 0x0029DCAC
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0029DCAC(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00461B36, __imp__sub_00461B36)

X86_FUNC(__imp__sub_00461B40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461B40 push 0x5B82FC
	{ uint32_t v = (uint32_t)(0x5B82FCu); X86_PUSH32(v); }
	// 00461B45 push 0x210
	{ uint32_t v = (uint32_t)(0x210u); X86_PUSH32(v); }
	// 00461B4A call 0x0006800A
	X86_PUSH32(0x461B4Fu); sub_0006800A(ctx, base);
	// 00461B4F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461B50 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461B51 mov [0x00671A34], al
	{ uint32_t ea = (uint32_t)(0x671A34u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461B56 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461B40, __imp__sub_00461B40)

X86_FUNC(__imp__sub_00461B57) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461B57 push 0x5B8300
	{ uint32_t v = (uint32_t)(0x5B8300u); X86_PUSH32(v); }
	// 00461B5C push 0x1FD
	{ uint32_t v = (uint32_t)(0x1FDu); X86_PUSH32(v); }
	// 00461B61 call 0x0006800A
	X86_PUSH32(0x461B66u); sub_0006800A(ctx, base);
	// 00461B66 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461B67 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461B68 mov [0x00671A35], al
	{ uint32_t ea = (uint32_t)(0x671A35u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461B6D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461B57, __imp__sub_00461B57)

X86_FUNC(__imp__sub_00461B6E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461B6E push 0x464AB4
	{ uint32_t v = (uint32_t)(0x464AB4u); X86_PUSH32(v); }
	// 00461B73 call 0x00366943
	X86_PUSH32(0x461B78u); sub_00366943(ctx, base);
	// 00461B78 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461B79 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461B6E, __imp__sub_00461B6E)

X86_FUNC(__imp__sub_00461B7A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461B7A push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00461B7B push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00461B7C push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00461B7E mov esi, 0x6722A0
	{ ctx.esi = (uint32_t)(0x6722A0u); }
	// 00461B83 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_00461B84:
	// 00461B84 mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 00461B86 call 0x0007D06E
	X86_PUSH32(0x461B8Bu); sub_0007D06E(ctx, base);
	// 00461B8B add esi, 0x80
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x80u); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00461B91 dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00461B92 jnz 0x00461B84
	if (!zf) { X86_BARRIER(); goto loc_00461B84; }
	// 00461B94 push 0x464AC8
	{ uint32_t v = (uint32_t)(0x464AC8u); X86_PUSH32(v); }
	// 00461B99 call 0x00366943
	X86_PUSH32(0x461B9Eu); sub_00366943(ctx, base);
	// 00461B9E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461B9F pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00461BA0 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00461BA1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461B7A, __imp__sub_00461B7A)

X86_FUNC(__imp__sub_00461BA2) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461BA2 push 0x5B8700
	{ uint32_t v = (uint32_t)(0x5B8700u); X86_PUSH32(v); }
	// 00461BA7 push 0x1D0
	{ uint32_t v = (uint32_t)(0x1D0u); X86_PUSH32(v); }
	// 00461BAC call 0x0006800A
	X86_PUSH32(0x461BB1u); sub_0006800A(ctx, base);
	// 00461BB1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461BB2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461BB3 mov [0x00672524], al
	{ uint32_t ea = (uint32_t)(0x672524u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461BB8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461BA2, __imp__sub_00461BA2)

X86_FUNC(__imp__sub_00461BB9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461BB9 push 0x5B8704
	{ uint32_t v = (uint32_t)(0x5B8704u); X86_PUSH32(v); }
	// 00461BBE push 0x1D1
	{ uint32_t v = (uint32_t)(0x1D1u); X86_PUSH32(v); }
	// 00461BC3 call 0x0006800A
	X86_PUSH32(0x461BC8u); sub_0006800A(ctx, base);
	// 00461BC8 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461BC9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461BCA mov [0x00672525], al
	{ uint32_t ea = (uint32_t)(0x672525u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461BCF ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461BB9, __imp__sub_00461BB9)

X86_FUNC(__imp__sub_00461BD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461BD0 push 0x5B8708
	{ uint32_t v = (uint32_t)(0x5B8708u); X86_PUSH32(v); }
	// 00461BD5 push 0x1D2
	{ uint32_t v = (uint32_t)(0x1D2u); X86_PUSH32(v); }
	// 00461BDA call 0x0006800A
	X86_PUSH32(0x461BDFu); sub_0006800A(ctx, base);
	// 00461BDF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461BE0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461BE1 mov [0x00672526], al
	{ uint32_t ea = (uint32_t)(0x672526u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461BE6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461BD0, __imp__sub_00461BD0)

X86_FUNC(__imp__sub_00461BE7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461BE7 push 0x5B870C
	{ uint32_t v = (uint32_t)(0x5B870Cu); X86_PUSH32(v); }
	// 00461BEC push 0x1D3
	{ uint32_t v = (uint32_t)(0x1D3u); X86_PUSH32(v); }
	// 00461BF1 call 0x0006800A
	X86_PUSH32(0x461BF6u); sub_0006800A(ctx, base);
	// 00461BF6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461BF7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461BF8 mov [0x00672527], al
	{ uint32_t ea = (uint32_t)(0x672527u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461BFD ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461BE7, __imp__sub_00461BE7)

X86_FUNC(__imp__sub_00461BFE) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461BFE push 0x5B8710
	{ uint32_t v = (uint32_t)(0x5B8710u); X86_PUSH32(v); }
	// 00461C03 push 0x1D4
	{ uint32_t v = (uint32_t)(0x1D4u); X86_PUSH32(v); }
	// 00461C08 call 0x0006800A
	X86_PUSH32(0x461C0Du); sub_0006800A(ctx, base);
	// 00461C0D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C0E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C0F mov [0x00672528], al
	{ uint32_t ea = (uint32_t)(0x672528u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461C14 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461BFE, __imp__sub_00461BFE)

X86_FUNC(__imp__sub_00461C15) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461C15 push 0x5B8714
	{ uint32_t v = (uint32_t)(0x5B8714u); X86_PUSH32(v); }
	// 00461C1A push 0x1D5
	{ uint32_t v = (uint32_t)(0x1D5u); X86_PUSH32(v); }
	// 00461C1F call 0x0006800A
	X86_PUSH32(0x461C24u); sub_0006800A(ctx, base);
	// 00461C24 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C25 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C26 mov [0x00672529], al
	{ uint32_t ea = (uint32_t)(0x672529u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461C2B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461C15, __imp__sub_00461C15)

X86_FUNC(__imp__sub_00461C2C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461C2C push 0x5B8718
	{ uint32_t v = (uint32_t)(0x5B8718u); X86_PUSH32(v); }
	// 00461C31 push 0x1D6
	{ uint32_t v = (uint32_t)(0x1D6u); X86_PUSH32(v); }
	// 00461C36 call 0x0006800A
	X86_PUSH32(0x461C3Bu); sub_0006800A(ctx, base);
	// 00461C3B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C3C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C3D mov [0x0067252A], al
	{ uint32_t ea = (uint32_t)(0x67252Au); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461C42 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461C2C, __imp__sub_00461C2C)

X86_FUNC(__imp__sub_00461C43) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461C43 push 0x5B871C
	{ uint32_t v = (uint32_t)(0x5B871Cu); X86_PUSH32(v); }
	// 00461C48 push 0x1E0
	{ uint32_t v = (uint32_t)(0x1E0u); X86_PUSH32(v); }
	// 00461C4D call 0x0006800A
	X86_PUSH32(0x461C52u); sub_0006800A(ctx, base);
	// 00461C52 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C53 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C54 mov [0x0067252B], al
	{ uint32_t ea = (uint32_t)(0x67252Bu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461C59 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461C43, __imp__sub_00461C43)

X86_FUNC(__imp__sub_00461C5A) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461C5A push 0x5B8720
	{ uint32_t v = (uint32_t)(0x5B8720u); X86_PUSH32(v); }
	// 00461C5F push 0x1E1
	{ uint32_t v = (uint32_t)(0x1E1u); X86_PUSH32(v); }
	// 00461C64 call 0x0006800A
	X86_PUSH32(0x461C69u); sub_0006800A(ctx, base);
	// 00461C69 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C6A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C6B mov [0x0067252C], al
	{ uint32_t ea = (uint32_t)(0x67252Cu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461C70 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461C5A, __imp__sub_00461C5A)

X86_FUNC(__imp__sub_00461C71) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461C71 push 0x5B8724
	{ uint32_t v = (uint32_t)(0x5B8724u); X86_PUSH32(v); }
	// 00461C76 push 0x1E2
	{ uint32_t v = (uint32_t)(0x1E2u); X86_PUSH32(v); }
	// 00461C7B call 0x0006800A
	X86_PUSH32(0x461C80u); sub_0006800A(ctx, base);
	// 00461C80 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C81 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C82 mov [0x0067252D], al
	{ uint32_t ea = (uint32_t)(0x67252Du); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461C87 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461C71, __imp__sub_00461C71)

X86_FUNC(__imp__sub_00461C88) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461C88 push 0x5B8728
	{ uint32_t v = (uint32_t)(0x5B8728u); X86_PUSH32(v); }
	// 00461C8D push 0x1E3
	{ uint32_t v = (uint32_t)(0x1E3u); X86_PUSH32(v); }
	// 00461C92 call 0x0006800A
	X86_PUSH32(0x461C97u); sub_0006800A(ctx, base);
	// 00461C97 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C98 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461C99 mov [0x0067252E], al
	{ uint32_t ea = (uint32_t)(0x67252Eu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461C9E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461C88, __imp__sub_00461C88)

X86_FUNC(__imp__sub_00461C9F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461C9F push 0x5B872C
	{ uint32_t v = (uint32_t)(0x5B872Cu); X86_PUSH32(v); }
	// 00461CA4 push 0x1E5
	{ uint32_t v = (uint32_t)(0x1E5u); X86_PUSH32(v); }
	// 00461CA9 call 0x0006800A
	X86_PUSH32(0x461CAEu); sub_0006800A(ctx, base);
	// 00461CAE pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461CAF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461CB0 mov [0x0067252F], al
	{ uint32_t ea = (uint32_t)(0x67252Fu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461CB5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461C9F, __imp__sub_00461C9F)

X86_FUNC(__imp__sub_00461CB6) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461CB6 push 0x5B8730
	{ uint32_t v = (uint32_t)(0x5B8730u); X86_PUSH32(v); }
	// 00461CBB push 0x1E4
	{ uint32_t v = (uint32_t)(0x1E4u); X86_PUSH32(v); }
	// 00461CC0 call 0x0006800A
	X86_PUSH32(0x461CC5u); sub_0006800A(ctx, base);
	// 00461CC5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461CC6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461CC7 mov [0x00672530], al
	{ uint32_t ea = (uint32_t)(0x672530u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461CCC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461CB6, __imp__sub_00461CB6)

X86_FUNC(__imp__sub_00461CCD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461CCD push 0x5B8734
	{ uint32_t v = (uint32_t)(0x5B8734u); X86_PUSH32(v); }
	// 00461CD2 push 0x520
	{ uint32_t v = (uint32_t)(0x520u); X86_PUSH32(v); }
	// 00461CD7 call 0x0006800A
	X86_PUSH32(0x461CDCu); sub_0006800A(ctx, base);
	// 00461CDC pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461CDD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461CDE mov [0x00672531], al
	{ uint32_t ea = (uint32_t)(0x672531u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461CE3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461CCD, __imp__sub_00461CCD)

X86_FUNC(__imp__sub_00461CE4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461CE4 push 0x5B8738
	{ uint32_t v = (uint32_t)(0x5B8738u); X86_PUSH32(v); }
	// 00461CE9 push 0x521
	{ uint32_t v = (uint32_t)(0x521u); X86_PUSH32(v); }
	// 00461CEE call 0x0006800A
	X86_PUSH32(0x461CF3u); sub_0006800A(ctx, base);
	// 00461CF3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461CF4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461CF5 mov [0x00672532], al
	{ uint32_t ea = (uint32_t)(0x672532u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461CFA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461CE4, __imp__sub_00461CE4)

X86_FUNC(__imp__sub_00461CFB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461CFB push 0x5B873C
	{ uint32_t v = (uint32_t)(0x5B873Cu); X86_PUSH32(v); }
	// 00461D00 push 0x522
	{ uint32_t v = (uint32_t)(0x522u); X86_PUSH32(v); }
	// 00461D05 call 0x0006800A
	X86_PUSH32(0x461D0Au); sub_0006800A(ctx, base);
	// 00461D0A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461D0B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461D0C mov [0x00672533], al
	{ uint32_t ea = (uint32_t)(0x672533u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461D11 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461CFB, __imp__sub_00461CFB)

X86_FUNC(__imp__sub_00461D12) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461D12 push 0x5B8740
	{ uint32_t v = (uint32_t)(0x5B8740u); X86_PUSH32(v); }
	// 00461D17 push 0x523
	{ uint32_t v = (uint32_t)(0x523u); X86_PUSH32(v); }
	// 00461D1C call 0x0006800A
	X86_PUSH32(0x461D21u); sub_0006800A(ctx, base);
	// 00461D21 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461D22 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461D23 mov [0x00672534], al
	{ uint32_t ea = (uint32_t)(0x672534u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461D28 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461D12, __imp__sub_00461D12)

X86_FUNC(__imp__sub_00461D29) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461D29 push 0x464ADF
	{ uint32_t v = (uint32_t)(0x464ADFu); X86_PUSH32(v); }
	// 00461D2E call 0x00366943
	X86_PUSH32(0x461D33u); sub_00366943(ctx, base);
	// 00461D33 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461D34 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461D29, __imp__sub_00461D29)

X86_FUNC(__imp__sub_00461D35) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461D35 push 0x464AFD
	{ uint32_t v = (uint32_t)(0x464AFDu); X86_PUSH32(v); }
	// 00461D3A call 0x00366943
	X86_PUSH32(0x461D3Fu); sub_00366943(ctx, base);
	// 00461D3F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461D40 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461D35, __imp__sub_00461D35)

X86_FUNC(__imp__sub_00461D41) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461D41 push 0x464B07
	{ uint32_t v = (uint32_t)(0x464B07u); X86_PUSH32(v); }
	// 00461D46 call 0x00366943
	X86_PUSH32(0x461D4Bu); sub_00366943(ctx, base);
	// 00461D4B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461D4C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461D41, __imp__sub_00461D41)

X86_FUNC(__imp__sub_00461D4D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461D4D mov ecx, 0x6729DC
	{ ctx.ecx = (uint32_t)(0x6729DCu); }
	// 00461D52 call 0x002548A8
	X86_PUSH32(0x461D57u); sub_002548A8(ctx, base);
	// 00461D57 and dword ptr [0x006729E4], 0x00
	{ uint32_t ea = (uint32_t)(0x6729E4u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00461D5E push 0x464B25
	{ uint32_t v = (uint32_t)(0x464B25u); X86_PUSH32(v); }
	// 00461D63 mov [0x006729E0], eax
	{ uint32_t ea = (uint32_t)(0x6729E0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00461D68 call 0x00366943
	X86_PUSH32(0x461D6Du); sub_00366943(ctx, base);
	// 00461D6D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461D6E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461D4D, __imp__sub_00461D4D)

X86_FUNC(__imp__sub_00461D6F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461D6F mov ecx, 0x6729F0
	{ ctx.ecx = (uint32_t)(0x6729F0u); }
	// 00461D74 jmp 0x0017D106
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0017D106(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00461D6F, __imp__sub_00461D6F)

X86_FUNC(__imp__sub_00461D79) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461D79 push 0x464B11
	{ uint32_t v = (uint32_t)(0x464B11u); X86_PUSH32(v); }
	// 00461D7E call 0x00366943
	X86_PUSH32(0x461D83u); sub_00366943(ctx, base);
	// 00461D83 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461D84 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461D79, __imp__sub_00461D79)

X86_FUNC(__imp__sub_00461D85) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461D85 push 0x464B1B
	{ uint32_t v = (uint32_t)(0x464B1Bu); X86_PUSH32(v); }
	// 00461D8A call 0x00366943
	X86_PUSH32(0x461D8Fu); sub_00366943(ctx, base);
	// 00461D8F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461D90 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461D85, __imp__sub_00461D85)

X86_FUNC(__imp__sub_00461D91) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461D91 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00461D93 mov ecx, 0x672F44
	{ ctx.ecx = (uint32_t)(0x672F44u); }
	// 00461D98 call 0x0040C150
	X86_PUSH32(0x461D9Du); sub_0040C150(ctx, base);
	// 00461D9D push 0x464AE9
	{ uint32_t v = (uint32_t)(0x464AE9u); X86_PUSH32(v); }
	// 00461DA2 call 0x00366943
	X86_PUSH32(0x461DA7u); sub_00366943(ctx, base);
	// 00461DA7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461DA8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461D91, __imp__sub_00461D91)

X86_FUNC(__imp__sub_00461DA9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461DA9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00461DAB mov ecx, 0x672F48
	{ ctx.ecx = (uint32_t)(0x672F48u); }
	// 00461DB0 call 0x0040C150
	X86_PUSH32(0x461DB5u); sub_0040C150(ctx, base);
	// 00461DB5 push 0x464AF3
	{ uint32_t v = (uint32_t)(0x464AF3u); X86_PUSH32(v); }
	// 00461DBA call 0x00366943
	X86_PUSH32(0x461DBFu); sub_00366943(ctx, base);
	// 00461DBF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461DC0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461DA9, __imp__sub_00461DA9)

X86_FUNC(__imp__sub_00461DC1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461DC1 push 0x464B2F
	{ uint32_t v = (uint32_t)(0x464B2Fu); X86_PUSH32(v); }
	// 00461DC6 call 0x00366943
	X86_PUSH32(0x461DCBu); sub_00366943(ctx, base);
	// 00461DCB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461DCC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461DC1, __imp__sub_00461DC1)

X86_FUNC(__imp__sub_00461DCD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461DCD push 0x464B39
	{ uint32_t v = (uint32_t)(0x464B39u); X86_PUSH32(v); }
	// 00461DD2 call 0x00366943
	X86_PUSH32(0x461DD7u); sub_00366943(ctx, base);
	// 00461DD7 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461DD8 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461DCD, __imp__sub_00461DCD)

X86_FUNC(__imp__sub_00461DD9) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461DD9 push 0x464B43
	{ uint32_t v = (uint32_t)(0x464B43u); X86_PUSH32(v); }
	// 00461DDE call 0x00366943
	X86_PUSH32(0x461DE3u); sub_00366943(ctx, base);
	// 00461DE3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461DE4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461DD9, __imp__sub_00461DD9)

X86_FUNC(__imp__sub_00461DE5) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461DE5 push 0x464B4D
	{ uint32_t v = (uint32_t)(0x464B4Du); X86_PUSH32(v); }
	// 00461DEA call 0x00366943
	X86_PUSH32(0x461DEFu); sub_00366943(ctx, base);
	// 00461DEF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461DF0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461DE5, __imp__sub_00461DE5)

X86_FUNC(__imp__sub_00461DF1) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461DF1 push 0x464B57
	{ uint32_t v = (uint32_t)(0x464B57u); X86_PUSH32(v); }
	// 00461DF6 call 0x00366943
	X86_PUSH32(0x461DFBu); sub_00366943(ctx, base);
	// 00461DFB pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461DFC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461DF1, __imp__sub_00461DF1)

X86_FUNC(__imp__sub_00461DFD) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461DFD push 0x464B61
	{ uint32_t v = (uint32_t)(0x464B61u); X86_PUSH32(v); }
	// 00461E02 call 0x00366943
	X86_PUSH32(0x461E07u); sub_00366943(ctx, base);
	// 00461E07 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E08 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461DFD, __imp__sub_00461DFD)

X86_FUNC(__imp__sub_00461E09) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461E09 push 0x464B6B
	{ uint32_t v = (uint32_t)(0x464B6Bu); X86_PUSH32(v); }
	// 00461E0E call 0x00366943
	X86_PUSH32(0x461E13u); sub_00366943(ctx, base);
	// 00461E13 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E14 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461E09, __imp__sub_00461E09)

X86_FUNC(__imp__sub_00461E15) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461E15 push 0x464B75
	{ uint32_t v = (uint32_t)(0x464B75u); X86_PUSH32(v); }
	// 00461E1A call 0x00366943
	X86_PUSH32(0x461E1Fu); sub_00366943(ctx, base);
	// 00461E1F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E20 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461E15, __imp__sub_00461E15)

X86_FUNC(__imp__sub_00461E21) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461E21 push 0x464B7F
	{ uint32_t v = (uint32_t)(0x464B7Fu); X86_PUSH32(v); }
	// 00461E26 call 0x00366943
	X86_PUSH32(0x461E2Bu); sub_00366943(ctx, base);
	// 00461E2B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E2C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461E21, __imp__sub_00461E21)

X86_FUNC(__imp__sub_00461E2D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461E2D push 0x464B89
	{ uint32_t v = (uint32_t)(0x464B89u); X86_PUSH32(v); }
	// 00461E32 call 0x00366943
	X86_PUSH32(0x461E37u); sub_00366943(ctx, base);
	// 00461E37 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E38 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461E2D, __imp__sub_00461E2D)

X86_FUNC(__imp__sub_00461E39) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461E39 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00461E3A xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00461E3C mov edi, 0x673060
	{ ctx.edi = (uint32_t)(0x673060u); }
	// 00461E41 stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 00461E42 stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 00461E43 stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 00461E44 stosd
	{ int32_t d = ctx.df ? -4 : 4; X86_MEM32(ctx.edi) = (uint32_t)ctx.eax; ctx.edi += d; }
	// 00461E45 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00461E46 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461E39, __imp__sub_00461E39)

X86_FUNC(__imp__sub_00461E47) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461E47 push 0x5B883C
	{ uint32_t v = (uint32_t)(0x5B883Cu); X86_PUSH32(v); }
	// 00461E4C push 0x182
	{ uint32_t v = (uint32_t)(0x182u); X86_PUSH32(v); }
	// 00461E51 call 0x0006800A
	X86_PUSH32(0x461E56u); sub_0006800A(ctx, base);
	// 00461E56 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E57 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E58 mov [0x00673070], al
	{ uint32_t ea = (uint32_t)(0x673070u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461E5D ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461E47, __imp__sub_00461E47)

X86_FUNC(__imp__sub_00461E5E) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461E5E push 0x5B8840
	{ uint32_t v = (uint32_t)(0x5B8840u); X86_PUSH32(v); }
	// 00461E63 push 0x180
	{ uint32_t v = (uint32_t)(0x180u); X86_PUSH32(v); }
	// 00461E68 call 0x0006800A
	X86_PUSH32(0x461E6Du); sub_0006800A(ctx, base);
	// 00461E6D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E6E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E6F mov [0x00673071], al
	{ uint32_t ea = (uint32_t)(0x673071u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461E74 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461E5E, __imp__sub_00461E5E)

X86_FUNC(__imp__sub_00461E75) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461E75 push 0x5B8844
	{ uint32_t v = (uint32_t)(0x5B8844u); X86_PUSH32(v); }
	// 00461E7A push 0x181
	{ uint32_t v = (uint32_t)(0x181u); X86_PUSH32(v); }
	// 00461E7F call 0x0006800A
	X86_PUSH32(0x461E84u); sub_0006800A(ctx, base);
	// 00461E84 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E85 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E86 mov [0x00673072], al
	{ uint32_t ea = (uint32_t)(0x673072u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461E8B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461E75, __imp__sub_00461E75)

X86_FUNC(__imp__sub_00461E8C) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461E8C push 0x5B8848
	{ uint32_t v = (uint32_t)(0x5B8848u); X86_PUSH32(v); }
	// 00461E91 push 0x12E
	{ uint32_t v = (uint32_t)(0x12Eu); X86_PUSH32(v); }
	// 00461E96 call 0x0006800A
	X86_PUSH32(0x461E9Bu); sub_0006800A(ctx, base);
	// 00461E9B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E9C pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461E9D mov [0x00673073], al
	{ uint32_t ea = (uint32_t)(0x673073u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461EA2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461E8C, __imp__sub_00461E8C)

X86_FUNC(__imp__sub_00461EA3) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461EA3 push 0x5B8850
	{ uint32_t v = (uint32_t)(0x5B8850u); X86_PUSH32(v); }
	// 00461EA8 push 0x44D
	{ uint32_t v = (uint32_t)(0x44Du); X86_PUSH32(v); }
	// 00461EAD call 0x0006800A
	X86_PUSH32(0x461EB2u); sub_0006800A(ctx, base);
	// 00461EB2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461EB3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461EB4 mov [0x00673078], al
	{ uint32_t ea = (uint32_t)(0x673078u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.eax)); }
	// 00461EB9 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461EA3, __imp__sub_00461EA3)

X86_FUNC(__imp__sub_00461EBA) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461EBA movss xmm0, dword ptr [0x004FE574]
	{ uint32_t ea = (uint32_t)(0x4FE574u); ctx.xmm[0].u[0] = X86_MEM32(ea); ctx.xmm[0].u[1] = ctx.xmm[0].u[2] = ctx.xmm[0].u[3] = 0; }
	// 00461EC2 sub esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00461EC5 mov eax, esp
	{ ctx.eax = (uint32_t)(ctx.esp); }
	// 00461EC7 movss [eax], xmm0
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00461ECB movss [eax+0x04], xmm0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00461ED0 movss [eax+0x08], xmm0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00461ED5 sub esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00461ED8 mov eax, esp
	{ ctx.eax = (uint32_t)(ctx.esp); }
	// 00461EDA movss [eax], xmm0
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00461EDE movss [eax+0x04], xmm0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00461EE3 movss [eax+0x08], xmm0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00461EE8 sub esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00461EEB mov eax, esp
	{ ctx.eax = (uint32_t)(ctx.esp); }
	// 00461EED mov ecx, 0x673088
	{ ctx.ecx = (uint32_t)(0x673088u); }
	// 00461EF2 movss [eax], xmm0
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00461EF6 movss [eax+0x04], xmm0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00461EFB movss [eax+0x08], xmm0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = ctx.xmm[0].u[0]; }
	// 00461F00 call 0x0007CF03
	X86_PUSH32(0x461F05u); sub_0007CF03(ctx, base);
	// 00461F05 push 0x464B93
	{ uint32_t v = (uint32_t)(0x464B93u); X86_PUSH32(v); }
	// 00461F0A call 0x00366943
	X86_PUSH32(0x461F0Fu); sub_00366943(ctx, base);
	// 00461F0F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461F10 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461EBA, __imp__sub_00461EBA)

X86_FUNC(__imp__sub_00461F11) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461F11 mov ecx, 0x6730A8
	{ ctx.ecx = (uint32_t)(0x6730A8u); }
	// 00461F16 jmp 0x0029DCAC
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0029DCAC(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00461F11, __imp__sub_00461F11)

X86_FUNC(__imp__sub_00461F1B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461F1B mov ecx, 0x6730F4
	{ ctx.ecx = (uint32_t)(0x6730F4u); }
	// 00461F20 call 0x00285351
	X86_PUSH32(0x461F25u); sub_00285351(ctx, base);
	// 00461F25 push 0x464B94
	{ uint32_t v = (uint32_t)(0x464B94u); X86_PUSH32(v); }
	// 00461F2A call 0x00366943
	X86_PUSH32(0x461F2Fu); sub_00366943(ctx, base);
	// 00461F2F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461F30 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461F1B, __imp__sub_00461F1B)

X86_FUNC(__imp__sub_00461F31) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461F31 mov ecx, 0x6831B8
	{ ctx.ecx = (uint32_t)(0x6831B8u); }
	// 00461F36 jmp 0x0029DCAC
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0029DCAC(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00461F31, __imp__sub_00461F31)

X86_FUNC(__imp__sub_00461F3B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461F3B mov ecx, 0x683258
	{ ctx.ecx = (uint32_t)(0x683258u); }
	// 00461F40 call 0x00294159
	X86_PUSH32(0x461F45u); sub_00294159(ctx, base);
	// 00461F45 push 0x464B9E
	{ uint32_t v = (uint32_t)(0x464B9Eu); X86_PUSH32(v); }
	// 00461F4A call 0x00366943
	X86_PUSH32(0x461F4Fu); sub_00366943(ctx, base);
	// 00461F4F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461F50 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461F3B, __imp__sub_00461F3B)

X86_FUNC(__imp__sub_00461F51) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461F51 mov ecx, 0x6833F0
	{ ctx.ecx = (uint32_t)(0x6833F0u); }
	// 00461F56 call 0x0029745F
	X86_PUSH32(0x461F5Bu); sub_0029745F(ctx, base);
	// 00461F5B push 0x464BA8
	{ uint32_t v = (uint32_t)(0x464BA8u); X86_PUSH32(v); }
	// 00461F60 call 0x00366943
	X86_PUSH32(0x461F65u); sub_00366943(ctx, base);
	// 00461F65 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461F66 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461F51, __imp__sub_00461F51)

X86_FUNC(__imp__sub_00461F67) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461F67 mov ecx, 0x683500
	{ ctx.ecx = (uint32_t)(0x683500u); }
	// 00461F6C call 0x0029A472
	X86_PUSH32(0x461F71u); sub_0029A472(ctx, base);
	// 00461F71 push 0x464BB2
	{ uint32_t v = (uint32_t)(0x464BB2u); X86_PUSH32(v); }
	// 00461F76 call 0x00366943
	X86_PUSH32(0x461F7Bu); sub_00366943(ctx, base);
	// 00461F7B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461F7C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461F67, __imp__sub_00461F67)

X86_FUNC(__imp__sub_00461F7D) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461F7D push 0x464BC6
	{ uint32_t v = (uint32_t)(0x464BC6u); X86_PUSH32(v); }
	// 00461F82 call 0x00366943
	X86_PUSH32(0x461F87u); sub_00366943(ctx, base);
	// 00461F87 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461F88 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461F7D, __imp__sub_00461F7D)

X86_FUNC(__imp__sub_00461F89) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461F89 mov ecx, 0x69B590
	{ ctx.ecx = (uint32_t)(0x69B590u); }
	// 00461F8E jmp 0x0029DCAC
	X86_BARRIER();
	{ X86_SAVE_FLAGS(); sub_0029DCAC(ctx, base); return; }
}
X86_WEAK_FUNC(sub_00461F89, __imp__sub_00461F89)

X86_FUNC(__imp__sub_00461F93) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461F93 push 0x464BD0
	{ uint32_t v = (uint32_t)(0x464BD0u); X86_PUSH32(v); }
	// 00461F98 call 0x00366943
	X86_PUSH32(0x461F9Du); sub_00366943(ctx, base);
	// 00461F9D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461F9E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461F93, __imp__sub_00461F93)

X86_FUNC(__imp__sub_00461F9F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461F9F push 0x464BDA
	{ uint32_t v = (uint32_t)(0x464BDAu); X86_PUSH32(v); }
	// 00461FA4 call 0x00366943
	X86_PUSH32(0x461FA9u); sub_00366943(ctx, base);
	// 00461FA9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461FAA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461F9F, __imp__sub_00461F9F)

X86_FUNC(__imp__sub_00461FAB) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461FAB push 0x464BE4
	{ uint32_t v = (uint32_t)(0x464BE4u); X86_PUSH32(v); }
	// 00461FB0 call 0x00366943
	X86_PUSH32(0x461FB5u); sub_00366943(ctx, base);
	// 00461FB5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461FB6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461FAB, __imp__sub_00461FAB)

X86_FUNC(__imp__sub_00461FB7) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461FB7 mov ecx, 0x69C28C
	{ ctx.ecx = (uint32_t)(0x69C28Cu); }
	// 00461FBC call 0x002A55CA
	X86_PUSH32(0x461FC1u); sub_002A55CA(ctx, base);
	// 00461FC1 and dword ptr [0x0069C2C4], 0x00
	{ uint32_t ea = (uint32_t)(0x69C2C4u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00461FC8 inc [0x0069C294]
	{ uint32_t ea = (uint32_t)(0x69C294u); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a + 1); X86_MEM32(ea) = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00461FCE push 0x464BEE
	{ uint32_t v = (uint32_t)(0x464BEEu); X86_PUSH32(v); }
	// 00461FD3 mov dword ptr [0x0069C28C], 0x566690
	{ uint32_t ea = (uint32_t)(0x69C28Cu); X86_MEM32(ea) = (uint32_t)(0x566690u); }
	// 00461FDD call 0x00366943
	X86_PUSH32(0x461FE2u); sub_00366943(ctx, base);
	// 00461FE2 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00461FE3 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461FB7, __imp__sub_00461FB7)

X86_FUNC(__imp__sub_00461FE4) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00461FE4 mov ecx, 0x69C2D4
	{ ctx.ecx = (uint32_t)(0x69C2D4u); }
	// 00461FE9 call 0x002A55CA
	X86_PUSH32(0x461FEEu); sub_002A55CA(ctx, base);
	// 00461FEE and dword ptr [0x0069C30C], 0x00
	{ uint32_t ea = (uint32_t)(0x69C30Cu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00461FF5 inc [0x0069C2DC]
	{ uint32_t ea = (uint32_t)(0x69C2DCu); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a + 1); X86_MEM32(ea) = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00461FFB push 0x464BF8
	{ uint32_t v = (uint32_t)(0x464BF8u); X86_PUSH32(v); }
	// 00462000 mov dword ptr [0x0069C2D4], 0x5669CC
	{ uint32_t ea = (uint32_t)(0x69C2D4u); X86_MEM32(ea) = (uint32_t)(0x5669CCu); }
	// 0046200A call 0x00366943
	X86_PUSH32(0x46200Fu); sub_00366943(ctx, base);
	// 0046200F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462010 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00461FE4, __imp__sub_00461FE4)

X86_FUNC(__imp__sub_00462011) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462011 mov ecx, 0x69C318
	{ ctx.ecx = (uint32_t)(0x69C318u); }
	// 00462016 call 0x002A55CA
	X86_PUSH32(0x46201Bu); sub_002A55CA(ctx, base);
	// 0046201B and dword ptr [0x0069C350], 0x00
	{ uint32_t ea = (uint32_t)(0x69C350u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x0u); uint32_t r = (uint32_t)(a & b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00462022 add dword ptr [0x0069C320], 0x02
	{ uint32_t ea = (uint32_t)(0x69C320u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x2u); uint32_t r = (uint32_t)(a + b); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00462029 push 0x464C02
	{ uint32_t v = (uint32_t)(0x464C02u); X86_PUSH32(v); }
	// 0046202E mov dword ptr [0x0069C318], 0x5669DC
	{ uint32_t ea = (uint32_t)(0x69C318u); X86_MEM32(ea) = (uint32_t)(0x5669DCu); }
	// 00462038 call 0x00366943
	X86_PUSH32(0x46203Du); sub_00366943(ctx, base);
	// 0046203D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046203E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462011, __imp__sub_00462011)

X86_FUNC(__imp__sub_0046203F) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046203F mov ecx, 0x69C360
	{ ctx.ecx = (uint32_t)(0x69C360u); }
	// 00462044 call 0x002A5B6E
	X86_PUSH32(0x462049u); sub_002A5B6E(ctx, base);
	// 00462049 push 0x464C0C
	{ uint32_t v = (uint32_t)(0x464C0Cu); X86_PUSH32(v); }
	// 0046204E call 0x00366943
	X86_PUSH32(0x462053u); sub_00366943(ctx, base);
	// 00462053 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462054 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046203F, __imp__sub_0046203F)

X86_FUNC(__imp__sub_00462055) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462055 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00462057 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00462058 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00462059 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0046205A push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0046205B push 0x84
	{ uint32_t v = (uint32_t)(0x84u); X86_PUSH32(v); }
	// 00462060 push 0x5C8954
	{ uint32_t v = (uint32_t)(0x5C8954u); X86_PUSH32(v); }
	// 00462065 push 0x6A9708
	{ uint32_t v = (uint32_t)(0x6A9708u); X86_PUSH32(v); }
	// 0046206A push [0x005C8950]
	{ uint32_t ea = (uint32_t)(0x5C8950u); uint32_t v = (uint32_t)(X86_MEM32(ea)); X86_PUSH32(v); }
	// 00462070 mov ecx, 0x69C3BC
	{ ctx.ecx = (uint32_t)(0x69C3BCu); }
	// 00462075 call 0x00309B50
	X86_PUSH32(0x46207Au); sub_00309B50(ctx, base);
	// 0046207A push 0x464C20
	{ uint32_t v = (uint32_t)(0x464C20u); X86_PUSH32(v); }
	// 0046207F call 0x00366943
	X86_PUSH32(0x462084u); sub_00366943(ctx, base);
	// 00462084 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462085 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462055, __imp__sub_00462055)

X86_FUNC(__imp__sub_00462086) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00462086;
loc_002BA0EE:
	// 002BA0EE push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 002BA0EF mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 002BA0F1 sub esp, 0x11C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x11Cu); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA0F7 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 002BA0F8 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002BA0F9 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002BA0FA xor esi, esi
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(ctx.esi); uint32_t r = (uint32_t)(a ^ b); ctx.esi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA0FC mov [ebp-0x18], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002BA0FF xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA101 mov ebx, 0x1000
	{ ctx.ebx = (uint32_t)(0x1000u); }
loc_002BA106:
	// 002BA106 lea eax, [edi+0x01]
	ctx.eax = (uint32_t)((uint32_t)(ctx.edi + 0x1u));
	// 002BA109 mov [ebp-0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002BA10C fild [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); x87_push(ctx, (double)(int32_t)X86_MEM32(ea)); }
	// 002BA10F push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002BA110 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002BA111 fmul [0x00567AE0]
	{ uint32_t ea = (uint32_t)(0x567AE0u); double s = X86_MEMF64(ea); double d = X87_ST(0); X87_ST(0) = (d * s); }
	// 002BA117 fstp [esp]
	{ uint32_t ea = (uint32_t)(ctx.esp); X86_MEMF64(ea) = X87_ST(0); x87_pop(ctx); }
	// 002BA11A call 0x0038B2B8
	X86_PUSH32(0x2BA11Fu); sub_0038B2B8(ctx, base);
	// 002BA11F mov eax, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002BA122 fstp [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002BA125 movss xmm1, dword ptr [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.xmm[1].u[0] = X86_MEM32(ea); ctx.xmm[1].u[1] = ctx.xmm[1].u[2] = ctx.xmm[1].u[3] = 0; }
	// 002BA12A movaps xmm0, xmm1
	{ ctx.xmm[0] = ctx.xmm[1]; }
	// 002BA12D mulss xmm0, xmm1
	{ float a = ctx.xmm[0].f[0], b = ctx.xmm[1].f[0]; (void)a; ctx.xmm[0].f[0] = a * b; }
	// 002BA131 movaps xmm2, xmm0
	{ ctx.xmm[2] = ctx.xmm[0]; }
	// 002BA134 mulss xmm0, [0x005A6F98]
	{ uint32_t ea = (uint32_t)(0x5A6F98u); float a = ctx.xmm[0].f[0], b = X86_MEMF32(ea); (void)a; ctx.xmm[0].f[0] = a * b; }
	// 002BA13C mulss xmm2, xmm1
	{ float a = ctx.xmm[2].f[0], b = ctx.xmm[1].f[0]; (void)a; ctx.xmm[2].f[0] = a * b; }
	// 002BA140 mulss xmm2, [0x005A6F28]
	{ uint32_t ea = (uint32_t)(0x5A6F28u); float a = ctx.xmm[2].f[0], b = X86_MEMF32(ea); (void)a; ctx.xmm[2].f[0] = a * b; }
	// 002BA148 subss xmm2, xmm0
	{ float a = ctx.xmm[2].f[0], b = ctx.xmm[0].f[0]; (void)a; ctx.xmm[2].f[0] = a - b; }
	// 002BA14C addss xmm2, [0x005A6F20]
	{ uint32_t ea = (uint32_t)(0x5A6F20u); float a = ctx.xmm[2].f[0], b = X86_MEMF32(ea); (void)a; ctx.xmm[2].f[0] = a + b; }
	// 002BA154 divss xmm2, xmm1
	{ float a = ctx.xmm[2].f[0], b = ctx.xmm[1].f[0]; (void)a; ctx.xmm[2].f[0] = a / b; }
	// 002BA158 movss [eax+edi*4], xmm2
	{ uint32_t ea = (uint32_t)(ctx.eax + ctx.edi * 4u); X86_MEM32(ea) = ctx.xmm[2].u[0]; }
	// 002BA15D mov edi, [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002BA160 cmp edi, ebx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA162 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 002BA163 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 002BA164 jb 0x002BA106
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_002BA106; }
	// 002BA166 mov [ebp-0x08], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA169 xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002BA16B:
	// 002BA16B fld1
	{ x87_push(ctx, 1.0); }
	// 002BA16D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002BA16E fstp [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002BA171 mov eax, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002BA174 and eax, 0xFF800000
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xFF800000u); uint32_t r = (uint32_t)(a & b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA179 add eax, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA17C mov [ebp-0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002BA17F fld [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002BA182 fstp [esp]
	{ uint32_t ea = (uint32_t)(ctx.esp); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002BA185 call 0x00067AB9
	X86_PUSH32(0x2BA18Au); sub_00067AB9(ctx, base);
	// 002BA18A fstp [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002BA18D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002BA18E fld [0x00508868]
	{ uint32_t ea = (uint32_t)(0x508868u); x87_push(ctx, X86_MEMF64(ea)); }
	// 002BA194 sub dword ptr [ebp-0x04], 0x20000000
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x20000000u); uint32_t r = (uint32_t)(a - b); X86_MEM32(ea) = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA19B fstp [esp]
	{ uint32_t ea = (uint32_t)(ctx.esp); X86_MEMF64(ea) = X87_ST(0); x87_pop(ctx); }
	// 002BA19E call 0x0038B2B8
	X86_PUSH32(0x2BA1A3u); sub_0038B2B8(ctx, base);
	// 002BA1A3 fmul [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); double s = (double)X86_MEMF32(ea); double d = X87_ST(0); X87_ST(0) = (d * s); }
	// 002BA1A6 add dword ptr [ebp-0x08], 0x2000
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x2000u); uint32_t r = (uint32_t)(a + b); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA1AD fstp [edi+0x69F648]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x69F648u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002BA1B3 add edi, 0x04
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA1B6 cmp edi, ebx
	{ uint32_t a = (uint32_t)(ctx.edi), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA1B8 fld [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002BA1BB fadd st0, st0
	{ double s = X87_ST(0); double d = X87_ST(0); X87_ST(0) = (d + s); }
	// 002BA1BD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 002BA1BE fstp [edi+0x6A0644]
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x6A0644u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002BA1C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 002BA1C5 jb 0x002BA16B
	if ((uint32_t)ca < (uint32_t)cb) { X86_BARRIER(); goto loc_002BA16B; }
	// 002BA1C7 fld [0x004F9610]
	{ uint32_t ea = (uint32_t)(0x4F9610u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002BA1CD push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002BA1CE fstp [esp]
	{ uint32_t ea = (uint32_t)(ctx.esp); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002BA1D1 push 0x69CE48
	{ uint32_t v = (uint32_t)(0x69CE48u); X86_PUSH32(v); }
	// 002BA1D6 push 0x69E648
	{ uint32_t v = (uint32_t)(0x69E648u); X86_PUSH32(v); }
	// 002BA1DB call 0x002B9F23
	X86_PUSH32(0x2BA1E0u); sub_002B9F23(ctx, base);
	// 002BA1E0 fld [0x005A6ED4]
	{ uint32_t ea = (uint32_t)(0x5A6ED4u); x87_push(ctx, (double)X86_MEMF32(ea)); }
	// 002BA1E6 add esp, 0x08
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA1E9 fstp [esp]
	{ uint32_t ea = (uint32_t)(ctx.esp); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002BA1EC push 0x69C648
	{ uint32_t v = (uint32_t)(0x69C648u); X86_PUSH32(v); }
	// 002BA1F1 push 0x69D648
	{ uint32_t v = (uint32_t)(0x69D648u); X86_PUSH32(v); }
	// 002BA1F6 call 0x002B9F23
	X86_PUSH32(0x2BA1FBu); sub_002B9F23(ctx, base);
	// 002BA1FB add esp, 0x0C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0xCu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA1FE push 0x18
	{ uint32_t v = (uint32_t)(0x18u); X86_PUSH32(v); }
	// 002BA200 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 002BA201 push 0x28
	{ uint32_t v = (uint32_t)(0x28u); X86_PUSH32(v); }
	// 002BA203 pop eax
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.eax = (uint32_t)(v); }
	// 002BA204 mov [ebp-0x11C], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEE4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA20A mov [ebp-0x118], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEE8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002BA210 mov [ebp-0x114], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEECu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002BA216 mov [ebp-0x110], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEF0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002BA21C mov [ebp-0x10C], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEF4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA222 mov [ebp-0x108], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEF8u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA228 mov [ebp-0x104], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFEFCu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA22E mov [ebp-0x100], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF00u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA234 mov [ebp-0xFC], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF04u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA23A mov [ebp-0xF8], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF08u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002BA240 mov dword ptr [ebp-0xF4], 0x40
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF0Cu); X86_MEM32(ea) = (uint32_t)(0x40u); }
	// 002BA24A mov [ebp-0xF0], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF10u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002BA250 mov [ebp-0xEC], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF14u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA256 mov [ebp-0xE8], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF18u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA25C mov [ebp-0xE4], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF1Cu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA262 mov [ebp-0xE0], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF20u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA268 mov [ebp-0xDC], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF24u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA26E mov [ebp-0xD8], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF28u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002BA274 mov [ebp-0xD4], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF2Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002BA27A mov [ebp-0xD0], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF30u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002BA280 mov [ebp-0xCC], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF34u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA286 mov [ebp-0xC8], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF38u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA28C mov [ebp-0xC4], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF3Cu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA292 mov [ebp-0xC0], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF40u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA298 mov [ebp-0xBC], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF44u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA29E mov [ebp-0xB8], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF48u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2A4 mov [ebp-0xB4], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF4Cu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2AA mov [ebp-0xB0], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF50u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2B0 mov [ebp-0xAC], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF54u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2B6 mov [ebp-0xA8], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF58u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2BC mov [ebp-0xA4], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF5Cu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2C2 mov [ebp-0xA0], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF60u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2C8 mov [ebp-0x9C], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF64u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2CE mov [ebp-0x98], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF68u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2D4 mov [ebp-0x94], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF6Cu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2DA mov [ebp-0x90], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF70u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2E0 mov [ebp-0x8C], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF74u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2E6 mov [ebp-0x88], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF78u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2EC mov [ebp-0x84], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF7Cu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2F2 mov [ebp-0x80], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF80u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2F5 mov [ebp-0x7C], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF84u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2F8 mov [ebp-0x78], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF88u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2FB mov [ebp-0x74], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF8Cu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA2FE mov [ebp-0x70], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF90u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA301 mov [ebp-0x6C], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF94u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA304 mov [ebp-0x68], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF98u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA307 mov [ebp-0x64], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFF9Cu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA30A mov [ebp-0x60], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA0u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA30D mov [ebp-0x5C], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA310 mov [ebp-0x58], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFA8u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA313 mov [ebp-0x54], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFACu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA316 mov [ebp-0x50], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFB0u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA319 mov [ebp-0x4C], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFB4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA31C mov [ebp-0x48], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFB8u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA31F mov [ebp-0x44], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFBCu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA322 mov [ebp-0x40], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC0u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA325 mov [ebp-0x3C], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA328 mov [ebp-0x38], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFC8u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA32B mov [ebp-0x34], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFCCu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA32E mov [ebp-0x30], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD0u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA331 mov [ebp-0x2C], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA334 mov [ebp-0x28], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFD8u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA337 mov [ebp-0x24], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFDCu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA33A mov [ebp-0x20], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE0u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA33D push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 002BA33F xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA341 lea eax, [ebp-0x11C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.ebp + 0xFFFFFEE4u));
	// 002BA347 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_002BA348:
	// 002BA348 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 002BA34A pop edx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edx = (uint32_t)(v); }
loc_002BA34B:
	// 002BA34B add ecx, [eax]
	{ uint32_t ea = (uint32_t)(ctx.eax); uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA34D add eax, 0x04
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA350 dec edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a - 1); ctx.edx = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA351 jnz 0x002BA34B
	if (!zf) { X86_BARRIER(); goto loc_002BA34B; }
	// 002BA353 dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA354 jnz 0x002BA348
	if (!zf) { X86_BARRIER(); goto loc_002BA348; }
	// 002BA356 mov edi, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002BA359 mov [ebp-0x1C], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002BA35C mov [ebp-0x08], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA35F add edi, 0x4000
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0x4000u); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002BA365:
	// 002BA365 mov [ebp-0x14], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
loc_002BA368:
	// 002BA368 mov [edi], esi
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA36A mov [ebp-0x10], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA36D mov [ebp-0x0C], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA370 mov [ebp-0x04], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
loc_002BA373:
	// 002BA373 xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA375 xor edx, edx
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a ^ b); ctx.edx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002BA377:
	// 002BA377 mov ecx, [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002BA37A xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA37C add ecx, edx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA37E inc ebx
	{ uint32_t a = (uint32_t)(ctx.ebx);  uint32_t r = (uint32_t)(a + 1); ctx.ebx = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA37F shl ebx, cl
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t c = (uint32_t)(((uint8_t)ctx.ecx)) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.ebx = (uint32_t)(r); } }
	// 002BA381 test [ebp-0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a & b); ca = a; cb = b; cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA384 jz 0x002BA392
	if (((uint32_t)(ca & cb)) == 0) { goto loc_002BA392; }
	// 002BA386 mov ecx, [ebp-0x14]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002BA389 add ecx, edx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.edx); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA38B add eax, [ebp+ecx*4-0x11C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + ctx.ecx * 4u + 0xFFFFFEE4u); uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(X86_MEM32(ea)); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
loc_002BA392:
	// 002BA392 inc edx
	{ uint32_t a = (uint32_t)(ctx.edx);  uint32_t r = (uint32_t)(a + 1); ctx.edx = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA393 cmp edx, 0x08
	{ uint32_t a = (uint32_t)(ctx.edx), b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA396 jl 0x002BA377
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_002BA377; }
	// 002BA398 imul eax, eax, 0xFF
	{ int64_t p = (int64_t)(int32_t)(ctx.eax) * (int64_t)(int32_t)(0xFFu); uint32_t r = (uint32_t)p; cf = of = p != (int32_t)r; ctx.eax = (uint32_t)(r); }
	// 002BA39E cdq
	ctx.edx = (uint32_t)((int32_t)ctx.eax >> 31);
	// 002BA39F idiv [ebp-0x1C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE4u); int64_t n = (int64_t)(((uint64_t)ctx.edx << 32) | ctx.eax); int32_t d = (int32_t)X86_MEM32(ea); if (!d) x86_trap(ctx, 0x2BA39F, "divide error"); if (n == INT64_MIN && d == -1) x86_trap(ctx, 0x2BA39F, "divide error"); int64_t q = n / d; if (q != (int32_t)q) x86_trap(ctx, 0x2BA39F, "divide error"); ctx.eax = (uint32_t)q; ctx.edx = (uint32_t)(n % d); }
	// 002BA3A2 mov ecx, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 002BA3A5 add dword ptr [ebp-0x04], 0x08
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA3A9 shl eax, cl
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t c = (uint32_t)(((uint8_t)ctx.ecx)) & 31; if (c) { uint32_t r = (uint32_t)((uint32_t)a << c); cf = c <= 32 ? ((uint32_t)a >> (32 - c)) & 1 : 0; of = ((uint32_t)(r >> 31) & 1) ^ cf; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); ctx.eax = (uint32_t)(r); } }
	// 002BA3AB add [ebp-0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a + b); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA3AE inc [ebp-0x10]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF0u); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a + 1); X86_MEM32(ea) = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA3B1 cmp dword ptr [ebp-0x04], 0x20
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA3B5 jl 0x002BA373
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_002BA373; }
	// 002BA3B7 mov eax, [ebp-0x0C]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 002BA3BA add dword ptr [ebp-0x14], 0x08
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0x8u); uint32_t r = (uint32_t)(a + b); X86_MEM32(ea) = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA3BE mov [edi], eax
	{ uint32_t ea = (uint32_t)(ctx.edi); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 002BA3C0 add edi, 0x04
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.edi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA3C3 cmp dword ptr [ebp-0x14], 0x20
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFECu); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA3C7 jl 0x002BA368
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_002BA368; }
	// 002BA3C9 inc [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a + 1); X86_MEM32(ea) = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA3CC cmp dword ptr [ebp-0x08], 0x80
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x80u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002BA3D3 jl 0x002BA365
	if ((int32_t)ca < (int32_t)cb) { X86_BARRIER(); goto loc_002BA365; }
	// 002BA3D5 mov edi, [ebp-0x18]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFE8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002BA3D8 push 0x4000
	{ uint32_t v = (uint32_t)(0x4000u); X86_PUSH32(v); }
	// 002BA3DD lea ecx, [edi+0x4800]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.edi + 0x4800u));
	// 002BA3E3 call 0x0008018B
	X86_PUSH32(0x2BA3E8u); sub_0008018B(ctx, base);
	// 002BA3E8 mov [edi+0x4810], esi
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x4810u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002BA3EE mov eax, edi
	{ ctx.eax = (uint32_t)(ctx.edi); }
	// 002BA3F0 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002BA3F1 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002BA3F2 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 002BA3F3 leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 002BA3F4 ret
	ctx.esp += 4; return;
loc_00462086:
	// 00462086 mov ecx, 0x6A1650
	{ ctx.ecx = (uint32_t)(0x6A1650u); }
	// 0046208B jmp 0x002BA0EE
	X86_BARRIER();
	goto loc_002BA0EE;
}
X86_WEAK_FUNC(sub_00462086, __imp__sub_00462086)

X86_FUNC(__imp__sub_00462090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462090 mov dword ptr [0x006A5E64], 0x6A5E50
	{ uint32_t ea = (uint32_t)(0x6A5E64u); X86_MEM32(ea) = (uint32_t)(0x6A5E50u); }
	// 0046209A ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462090, __imp__sub_00462090)

X86_FUNC(__imp__sub_0046209B) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 0046209B push 0x464C5E
	{ uint32_t v = (uint32_t)(0x464C5Eu); X86_PUSH32(v); }
	// 004620A0 call 0x00366943
	X86_PUSH32(0x4620A5u); sub_00366943(ctx, base);
	// 004620A5 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004620A6 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_0046209B, __imp__sub_0046209B)

X86_FUNC(__imp__sub_004620B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004620B0 mov ecx, 0x6A5F8C
	{ ctx.ecx = (uint32_t)(0x6A5F8Cu); }
	// 004620B5 call 0x002C5BD0
	X86_PUSH32(0x4620BAu); sub_002C5BD0(ctx, base);
	// 004620BA push 0x464C70
	{ uint32_t v = (uint32_t)(0x464C70u); X86_PUSH32(v); }
	// 004620BF call 0x00366943
	X86_PUSH32(0x4620C4u); sub_00366943(ctx, base);
	// 004620C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004620C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004620B0, __imp__sub_004620B0)

X86_FUNC(__imp__sub_004620D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004620D0 mov ecx, 0x6A6420
	{ ctx.ecx = (uint32_t)(0x6A6420u); }
	// 004620D5 call 0x002C5BD0
	X86_PUSH32(0x4620DAu); sub_002C5BD0(ctx, base);
	// 004620DA push 0x464C80
	{ uint32_t v = (uint32_t)(0x464C80u); X86_PUSH32(v); }
	// 004620DF call 0x00366943
	X86_PUSH32(0x4620E4u); sub_00366943(ctx, base);
	// 004620E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004620E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004620D0, __imp__sub_004620D0)

X86_FUNC(__imp__sub_004620F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004620F0 mov ecx, 0x6A645C
	{ ctx.ecx = (uint32_t)(0x6A645Cu); }
	// 004620F5 call 0x002C5BD0
	X86_PUSH32(0x4620FAu); sub_002C5BD0(ctx, base);
	// 004620FA push 0x464C90
	{ uint32_t v = (uint32_t)(0x464C90u); X86_PUSH32(v); }
	// 004620FF call 0x00366943
	X86_PUSH32(0x462104u); sub_00366943(ctx, base);
	// 00462104 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462105 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004620F0, __imp__sub_004620F0)

X86_FUNC(__imp__sub_00462110) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462110 mov ecx, 0x6A64C0
	{ ctx.ecx = (uint32_t)(0x6A64C0u); }
	// 00462115 call 0x002C5BD0
	X86_PUSH32(0x46211Au); sub_002C5BD0(ctx, base);
	// 0046211A push 0x464CA0
	{ uint32_t v = (uint32_t)(0x464CA0u); X86_PUSH32(v); }
	// 0046211F call 0x00366943
	X86_PUSH32(0x462124u); sub_00366943(ctx, base);
	// 00462124 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462125 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462110, __imp__sub_00462110)

X86_FUNC(__imp__sub_00462130) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462130 mov ecx, 0x6A64D4
	{ ctx.ecx = (uint32_t)(0x6A64D4u); }
	// 00462135 call 0x002C5BD0
	X86_PUSH32(0x46213Au); sub_002C5BD0(ctx, base);
	// 0046213A push 0x464CB0
	{ uint32_t v = (uint32_t)(0x464CB0u); X86_PUSH32(v); }
	// 0046213F call 0x00366943
	X86_PUSH32(0x462144u); sub_00366943(ctx, base);
	// 00462144 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462145 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462130, __imp__sub_00462130)

X86_FUNC(__imp__sub_00462150) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462150 mov ecx, 0x6A6510
	{ ctx.ecx = (uint32_t)(0x6A6510u); }
	// 00462155 call 0x002C5BD0
	X86_PUSH32(0x46215Au); sub_002C5BD0(ctx, base);
	// 0046215A push 0x464CC0
	{ uint32_t v = (uint32_t)(0x464CC0u); X86_PUSH32(v); }
	// 0046215F call 0x00366943
	X86_PUSH32(0x462164u); sub_00366943(ctx, base);
	// 00462164 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462165 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462150, __imp__sub_00462150)

X86_FUNC(__imp__sub_00462170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462170 mov ecx, 0x6A6580
	{ ctx.ecx = (uint32_t)(0x6A6580u); }
	// 00462175 call 0x002C5BD0
	X86_PUSH32(0x46217Au); sub_002C5BD0(ctx, base);
	// 0046217A push 0x464CD0
	{ uint32_t v = (uint32_t)(0x464CD0u); X86_PUSH32(v); }
	// 0046217F call 0x00366943
	X86_PUSH32(0x462184u); sub_00366943(ctx, base);
	// 00462184 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462185 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462170, __imp__sub_00462170)

X86_FUNC(__imp__sub_00462190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462190 mov ecx, 0x6A65BC
	{ ctx.ecx = (uint32_t)(0x6A65BCu); }
	// 00462195 call 0x002C5BD0
	X86_PUSH32(0x46219Au); sub_002C5BD0(ctx, base);
	// 0046219A push 0x464CE0
	{ uint32_t v = (uint32_t)(0x464CE0u); X86_PUSH32(v); }
	// 0046219F call 0x00366943
	X86_PUSH32(0x4621A4u); sub_00366943(ctx, base);
	// 004621A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004621A5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462190, __imp__sub_00462190)

X86_FUNC(__imp__sub_004621B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004621B0 mov ecx, 0x6A65F8
	{ ctx.ecx = (uint32_t)(0x6A65F8u); }
	// 004621B5 call 0x002C5BD0
	X86_PUSH32(0x4621BAu); sub_002C5BD0(ctx, base);
	// 004621BA push 0x464CF0
	{ uint32_t v = (uint32_t)(0x464CF0u); X86_PUSH32(v); }
	// 004621BF call 0x00366943
	X86_PUSH32(0x4621C4u); sub_00366943(ctx, base);
	// 004621C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004621C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004621B0, __imp__sub_004621B0)

X86_FUNC(__imp__sub_004621D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004621D0 mov ecx, 0x6A6738
	{ ctx.ecx = (uint32_t)(0x6A6738u); }
	// 004621D5 call 0x002C5BD0
	X86_PUSH32(0x4621DAu); sub_002C5BD0(ctx, base);
	// 004621DA push 0x464D00
	{ uint32_t v = (uint32_t)(0x464D00u); X86_PUSH32(v); }
	// 004621DF call 0x00366943
	X86_PUSH32(0x4621E4u); sub_00366943(ctx, base);
	// 004621E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004621E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004621D0, __imp__sub_004621D0)

X86_FUNC(__imp__sub_004621F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004621F0 mov ecx, 0x6A6774
	{ ctx.ecx = (uint32_t)(0x6A6774u); }
	// 004621F5 call 0x002C5BD0
	X86_PUSH32(0x4621FAu); sub_002C5BD0(ctx, base);
	// 004621FA push 0x464D10
	{ uint32_t v = (uint32_t)(0x464D10u); X86_PUSH32(v); }
	// 004621FF call 0x00366943
	X86_PUSH32(0x462204u); sub_00366943(ctx, base);
	// 00462204 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462205 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004621F0, __imp__sub_004621F0)

X86_FUNC(__imp__sub_00462210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462210 mov ecx, 0x6A67B0
	{ ctx.ecx = (uint32_t)(0x6A67B0u); }
	// 00462215 call 0x002C5BD0
	X86_PUSH32(0x46221Au); sub_002C5BD0(ctx, base);
	// 0046221A push 0x464D20
	{ uint32_t v = (uint32_t)(0x464D20u); X86_PUSH32(v); }
	// 0046221F call 0x00366943
	X86_PUSH32(0x462224u); sub_00366943(ctx, base);
	// 00462224 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462225 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462210, __imp__sub_00462210)

X86_FUNC(__imp__sub_00462230) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462230 mov ecx, 0x6A6814
	{ ctx.ecx = (uint32_t)(0x6A6814u); }
	// 00462235 call 0x002C5BD0
	X86_PUSH32(0x46223Au); sub_002C5BD0(ctx, base);
	// 0046223A push 0x464D30
	{ uint32_t v = (uint32_t)(0x464D30u); X86_PUSH32(v); }
	// 0046223F call 0x00366943
	X86_PUSH32(0x462244u); sub_00366943(ctx, base);
	// 00462244 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462245 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462230, __imp__sub_00462230)

X86_FUNC(__imp__sub_00462250) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462250 mov ecx, 0x6A6850
	{ ctx.ecx = (uint32_t)(0x6A6850u); }
	// 00462255 call 0x002C5BD0
	X86_PUSH32(0x46225Au); sub_002C5BD0(ctx, base);
	// 0046225A push 0x464D40
	{ uint32_t v = (uint32_t)(0x464D40u); X86_PUSH32(v); }
	// 0046225F call 0x00366943
	X86_PUSH32(0x462264u); sub_00366943(ctx, base);
	// 00462264 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462265 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462250, __imp__sub_00462250)

X86_FUNC(__imp__sub_00462270) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462270 mov ecx, 0x6A688C
	{ ctx.ecx = (uint32_t)(0x6A688Cu); }
	// 00462275 call 0x002C5BD0
	X86_PUSH32(0x46227Au); sub_002C5BD0(ctx, base);
	// 0046227A push 0x464D50
	{ uint32_t v = (uint32_t)(0x464D50u); X86_PUSH32(v); }
	// 0046227F call 0x00366943
	X86_PUSH32(0x462284u); sub_00366943(ctx, base);
	// 00462284 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462285 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462270, __imp__sub_00462270)

X86_FUNC(__imp__sub_00462290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462290 mov ecx, 0x6A68A0
	{ ctx.ecx = (uint32_t)(0x6A68A0u); }
	// 00462295 call 0x002C5BD0
	X86_PUSH32(0x46229Au); sub_002C5BD0(ctx, base);
	// 0046229A push 0x464D60
	{ uint32_t v = (uint32_t)(0x464D60u); X86_PUSH32(v); }
	// 0046229F call 0x00366943
	X86_PUSH32(0x4622A4u); sub_00366943(ctx, base);
	// 004622A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004622A5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462290, __imp__sub_00462290)

X86_FUNC(__imp__sub_004622B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004622B0 mov ecx, 0x6A68B4
	{ ctx.ecx = (uint32_t)(0x6A68B4u); }
	// 004622B5 call 0x002C5BD0
	X86_PUSH32(0x4622BAu); sub_002C5BD0(ctx, base);
	// 004622BA push 0x464D70
	{ uint32_t v = (uint32_t)(0x464D70u); X86_PUSH32(v); }
	// 004622BF call 0x00366943
	X86_PUSH32(0x4622C4u); sub_00366943(ctx, base);
	// 004622C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004622C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004622B0, __imp__sub_004622B0)

X86_FUNC(__imp__sub_004622D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004622D0 mov ecx, 0x6A68C8
	{ ctx.ecx = (uint32_t)(0x6A68C8u); }
	// 004622D5 call 0x002C5BD0
	X86_PUSH32(0x4622DAu); sub_002C5BD0(ctx, base);
	// 004622DA push 0x464D80
	{ uint32_t v = (uint32_t)(0x464D80u); X86_PUSH32(v); }
	// 004622DF call 0x00366943
	X86_PUSH32(0x4622E4u); sub_00366943(ctx, base);
	// 004622E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004622E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004622D0, __imp__sub_004622D0)

X86_FUNC(__imp__sub_004622F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004622F0 mov ecx, 0x6A68DC
	{ ctx.ecx = (uint32_t)(0x6A68DCu); }
	// 004622F5 call 0x002C5BD0
	X86_PUSH32(0x4622FAu); sub_002C5BD0(ctx, base);
	// 004622FA push 0x464D90
	{ uint32_t v = (uint32_t)(0x464D90u); X86_PUSH32(v); }
	// 004622FF call 0x00366943
	X86_PUSH32(0x462304u); sub_00366943(ctx, base);
	// 00462304 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462305 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004622F0, __imp__sub_004622F0)

X86_FUNC(__imp__sub_00462310) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462310 mov ecx, 0x6A6948
	{ ctx.ecx = (uint32_t)(0x6A6948u); }
	// 00462315 call 0x002C5BD0
	X86_PUSH32(0x46231Au); sub_002C5BD0(ctx, base);
	// 0046231A push 0x464DA0
	{ uint32_t v = (uint32_t)(0x464DA0u); X86_PUSH32(v); }
	// 0046231F call 0x00366943
	X86_PUSH32(0x462324u); sub_00366943(ctx, base);
	// 00462324 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462325 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462310, __imp__sub_00462310)

X86_FUNC(__imp__sub_00462330) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462330 mov ecx, 0x6A89DC
	{ ctx.ecx = (uint32_t)(0x6A89DCu); }
	// 00462335 call 0x002C5BD0
	X86_PUSH32(0x46233Au); sub_002C5BD0(ctx, base);
	// 0046233A push 0x464DB0
	{ uint32_t v = (uint32_t)(0x464DB0u); X86_PUSH32(v); }
	// 0046233F call 0x00366943
	X86_PUSH32(0x462344u); sub_00366943(ctx, base);
	// 00462344 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462345 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462330, __imp__sub_00462330)

X86_FUNC(__imp__sub_00462350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462350 mov ecx, 0x6A8A18
	{ ctx.ecx = (uint32_t)(0x6A8A18u); }
	// 00462355 call 0x002C5BD0
	X86_PUSH32(0x46235Au); sub_002C5BD0(ctx, base);
	// 0046235A push 0x464DC0
	{ uint32_t v = (uint32_t)(0x464DC0u); X86_PUSH32(v); }
	// 0046235F call 0x00366943
	X86_PUSH32(0x462364u); sub_00366943(ctx, base);
	// 00462364 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462365 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462350, __imp__sub_00462350)

X86_FUNC(__imp__sub_00462370) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462370 mov ecx, 0x6A8A54
	{ ctx.ecx = (uint32_t)(0x6A8A54u); }
	// 00462375 call 0x002C5BD0
	X86_PUSH32(0x46237Au); sub_002C5BD0(ctx, base);
	// 0046237A push 0x464DD0
	{ uint32_t v = (uint32_t)(0x464DD0u); X86_PUSH32(v); }
	// 0046237F call 0x00366943
	X86_PUSH32(0x462384u); sub_00366943(ctx, base);
	// 00462384 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462385 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462370, __imp__sub_00462370)

X86_FUNC(__imp__sub_00462390) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462390 mov ecx, 0x6A8A90
	{ ctx.ecx = (uint32_t)(0x6A8A90u); }
	// 00462395 call 0x002C5BD0
	X86_PUSH32(0x46239Au); sub_002C5BD0(ctx, base);
	// 0046239A push 0x464DE0
	{ uint32_t v = (uint32_t)(0x464DE0u); X86_PUSH32(v); }
	// 0046239F call 0x00366943
	X86_PUSH32(0x4623A4u); sub_00366943(ctx, base);
	// 004623A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004623A5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462390, __imp__sub_00462390)

X86_FUNC(__imp__sub_004623B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004623B0 mov ecx, 0x6A8ACC
	{ ctx.ecx = (uint32_t)(0x6A8ACCu); }
	// 004623B5 call 0x002C5BD0
	X86_PUSH32(0x4623BAu); sub_002C5BD0(ctx, base);
	// 004623BA push 0x464DF0
	{ uint32_t v = (uint32_t)(0x464DF0u); X86_PUSH32(v); }
	// 004623BF call 0x00366943
	X86_PUSH32(0x4623C4u); sub_00366943(ctx, base);
	// 004623C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004623C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004623B0, __imp__sub_004623B0)

X86_FUNC(__imp__sub_004623D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004623D0 mov ecx, 0x6A8B08
	{ ctx.ecx = (uint32_t)(0x6A8B08u); }
	// 004623D5 call 0x002C5BD0
	X86_PUSH32(0x4623DAu); sub_002C5BD0(ctx, base);
	// 004623DA push 0x464E00
	{ uint32_t v = (uint32_t)(0x464E00u); X86_PUSH32(v); }
	// 004623DF call 0x00366943
	X86_PUSH32(0x4623E4u); sub_00366943(ctx, base);
	// 004623E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004623E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004623D0, __imp__sub_004623D0)

X86_FUNC(__imp__sub_004623F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004623F0 mov ecx, 0x6A8B44
	{ ctx.ecx = (uint32_t)(0x6A8B44u); }
	// 004623F5 call 0x002C5BD0
	X86_PUSH32(0x4623FAu); sub_002C5BD0(ctx, base);
	// 004623FA push 0x464E10
	{ uint32_t v = (uint32_t)(0x464E10u); X86_PUSH32(v); }
	// 004623FF call 0x00366943
	X86_PUSH32(0x462404u); sub_00366943(ctx, base);
	// 00462404 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462405 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004623F0, __imp__sub_004623F0)

X86_FUNC(__imp__sub_00462410) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462410 mov ecx, 0x6A8B80
	{ ctx.ecx = (uint32_t)(0x6A8B80u); }
	// 00462415 call 0x002C5BD0
	X86_PUSH32(0x46241Au); sub_002C5BD0(ctx, base);
	// 0046241A push 0x464E20
	{ uint32_t v = (uint32_t)(0x464E20u); X86_PUSH32(v); }
	// 0046241F call 0x00366943
	X86_PUSH32(0x462424u); sub_00366943(ctx, base);
	// 00462424 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462425 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462410, __imp__sub_00462410)

X86_FUNC(__imp__sub_00462430) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462430 mov ecx, 0x6A8BBC
	{ ctx.ecx = (uint32_t)(0x6A8BBCu); }
	// 00462435 call 0x002C5BD0
	X86_PUSH32(0x46243Au); sub_002C5BD0(ctx, base);
	// 0046243A push 0x464E30
	{ uint32_t v = (uint32_t)(0x464E30u); X86_PUSH32(v); }
	// 0046243F call 0x00366943
	X86_PUSH32(0x462444u); sub_00366943(ctx, base);
	// 00462444 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462445 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462430, __imp__sub_00462430)

X86_FUNC(__imp__sub_00462450) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462450 mov ecx, 0x6A8BF8
	{ ctx.ecx = (uint32_t)(0x6A8BF8u); }
	// 00462455 call 0x002C5BD0
	X86_PUSH32(0x46245Au); sub_002C5BD0(ctx, base);
	// 0046245A push 0x464E40
	{ uint32_t v = (uint32_t)(0x464E40u); X86_PUSH32(v); }
	// 0046245F call 0x00366943
	X86_PUSH32(0x462464u); sub_00366943(ctx, base);
	// 00462464 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462465 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462450, __imp__sub_00462450)

X86_FUNC(__imp__sub_00462470) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462470 mov ecx, 0x6A8C34
	{ ctx.ecx = (uint32_t)(0x6A8C34u); }
	// 00462475 call 0x002C5BD0
	X86_PUSH32(0x46247Au); sub_002C5BD0(ctx, base);
	// 0046247A push 0x464E50
	{ uint32_t v = (uint32_t)(0x464E50u); X86_PUSH32(v); }
	// 0046247F call 0x00366943
	X86_PUSH32(0x462484u); sub_00366943(ctx, base);
	// 00462484 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462485 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462470, __imp__sub_00462470)

X86_FUNC(__imp__sub_00462490) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462490 mov ecx, 0x6A8C70
	{ ctx.ecx = (uint32_t)(0x6A8C70u); }
	// 00462495 call 0x002C5BD0
	X86_PUSH32(0x46249Au); sub_002C5BD0(ctx, base);
	// 0046249A push 0x464E60
	{ uint32_t v = (uint32_t)(0x464E60u); X86_PUSH32(v); }
	// 0046249F call 0x00366943
	X86_PUSH32(0x4624A4u); sub_00366943(ctx, base);
	// 004624A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004624A5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462490, __imp__sub_00462490)

X86_FUNC(__imp__sub_004624B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004624B0 mov ecx, 0x6A8CAC
	{ ctx.ecx = (uint32_t)(0x6A8CACu); }
	// 004624B5 call 0x002C5BD0
	X86_PUSH32(0x4624BAu); sub_002C5BD0(ctx, base);
	// 004624BA push 0x464E70
	{ uint32_t v = (uint32_t)(0x464E70u); X86_PUSH32(v); }
	// 004624BF call 0x00366943
	X86_PUSH32(0x4624C4u); sub_00366943(ctx, base);
	// 004624C4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004624C5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004624B0, __imp__sub_004624B0)

X86_FUNC(__imp__sub_004624D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004624D0 mov ecx, 0x6A8CE8
	{ ctx.ecx = (uint32_t)(0x6A8CE8u); }
	// 004624D5 call 0x002C5BD0
	X86_PUSH32(0x4624DAu); sub_002C5BD0(ctx, base);
	// 004624DA push 0x464E80
	{ uint32_t v = (uint32_t)(0x464E80u); X86_PUSH32(v); }
	// 004624DF call 0x00366943
	X86_PUSH32(0x4624E4u); sub_00366943(ctx, base);
	// 004624E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004624E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004624D0, __imp__sub_004624D0)

X86_FUNC(__imp__sub_004624F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004624F0 mov ecx, 0x6A8D24
	{ ctx.ecx = (uint32_t)(0x6A8D24u); }
	// 004624F5 call 0x002C5BD0
	X86_PUSH32(0x4624FAu); sub_002C5BD0(ctx, base);
	// 004624FA push 0x464E90
	{ uint32_t v = (uint32_t)(0x464E90u); X86_PUSH32(v); }
	// 004624FF call 0x00366943
	X86_PUSH32(0x462504u); sub_00366943(ctx, base);
	// 00462504 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462505 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004624F0, __imp__sub_004624F0)

X86_FUNC(__imp__sub_00462510) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462510 mov ecx, 0x6A8D60
	{ ctx.ecx = (uint32_t)(0x6A8D60u); }
	// 00462515 call 0x002C5BD0
	X86_PUSH32(0x46251Au); sub_002C5BD0(ctx, base);
	// 0046251A push 0x464EA0
	{ uint32_t v = (uint32_t)(0x464EA0u); X86_PUSH32(v); }
	// 0046251F call 0x00366943
	X86_PUSH32(0x462524u); sub_00366943(ctx, base);
	// 00462524 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462525 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462510, __imp__sub_00462510)

X86_FUNC(__imp__sub_00462526) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_00462526;
loc_002E3869:
	// 002E3869 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 002E386A mov ebp, esp
	{ ctx.ebp = (uint32_t)(ctx.esp); }
	// 002E386C push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002E386D push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 002E386E mov eax, ecx
	{ ctx.eax = (uint32_t)(ctx.ecx); }
	// 002E3870 fldz
	{ x87_push(ctx, 0.0); }
	// 002E3872 fstp [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002E3875 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 002E3876 xor ebx, ebx
	{ uint32_t a = (uint32_t)(ctx.ebx); uint32_t b = (uint32_t)(ctx.ebx); uint32_t r = (uint32_t)(a ^ b); ctx.ebx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3878 fldz
	{ x87_push(ctx, 0.0); }
	// 002E387A mov edx, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002E387D fstp [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002E3880 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 002E3881 fld1
	{ x87_push(ctx, 1.0); }
	// 002E3883 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 002E3884 mov [eax+0xF0], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xF0u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002E388A mov edx, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002E388D fstp [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002E3890 xor ecx, ecx
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(ctx.ecx); uint32_t r = (uint32_t)(a ^ b); ctx.ecx = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3892 inc ecx
	{ uint32_t a = (uint32_t)(ctx.ecx);  uint32_t r = (uint32_t)(a + 1); ctx.ecx = (uint32_t)(r); of = r == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3893 or dword ptr [eax+0xFC], 0xFFFFFFFF
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFCu); uint32_t a = (uint32_t)(X86_MEM32(ea)); uint32_t b = (uint32_t)(0xFFFFFFFFu); uint32_t r = (uint32_t)(a | b); X86_MEM32(ea) = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E389A push 0x40
	{ uint32_t v = (uint32_t)(0x40u); X86_PUSH32(v); }
	// 002E389C mov [eax+0xF4], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xF4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002E38A2 mov edx, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 002E38A5 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002E38A6 mov esi, 0x207
	{ ctx.esi = (uint32_t)(0x207u); }
	// 002E38AB mov dword ptr [eax], 0x8B
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x8Bu); }
	// 002E38B1 mov [eax+0x5A4], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5A4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E38B7 mov dword ptr [eax+0xB4], 0x1B02
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xB4u); X86_MEM32(ea) = (uint32_t)(0x1B02u); }
	// 002E38C1 mov dword ptr [eax+0x04], 0x93
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(0x93u); }
	// 002E38C8 mov [eax+0x5A5], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5A5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E38CE mov dword ptr [eax+0xB8], 0x900
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xB8u); X86_MEM32(ea) = (uint32_t)(0x900u); }
	// 002E38D8 mov dword ptr [eax+0x08], 0x43
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = (uint32_t)(0x43u); }
	// 002E38DF mov [eax+0x5A6], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5A6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E38E5 mov dword ptr [eax+0xBC], 0x1010101
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xBCu); X86_MEM32(ea) = (uint32_t)(0x1010101u); }
	// 002E38EF mov dword ptr [eax+0x0C], 0x8F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(0x8Fu); }
	// 002E38F6 mov [eax+0x5A7], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5A7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E38FC mov [eax+0xC0], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xC0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3902 mov [eax+0x10], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 002E3905 mov [eax+0x5A8], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5A8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E390B mov [eax+0xC4], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xC4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3911 mov dword ptr [eax+0x14], 0x39
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); X86_MEM32(ea) = (uint32_t)(0x39u); }
	// 002E3918 mov [eax+0x5A9], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5A9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E391E mov dword ptr [eax+0xC8], 0x203
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xC8u); X86_MEM32(ea) = (uint32_t)(0x203u); }
	// 002E3928 mov dword ptr [eax+0x18], 0x4A
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x18u); X86_MEM32(ea) = (uint32_t)(0x4Au); }
	// 002E392F mov [eax+0x5AA], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5AAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3935 mov dword ptr [eax+0xCC], 0x8006
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCCu); X86_MEM32(ea) = (uint32_t)(0x8006u); }
	// 002E393F mov dword ptr [eax+0x1C], 0x3E
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x3Eu); }
	// 002E3946 mov [eax+0x5AB], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5ABu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E394C mov [eax+0xD0], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xD0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3952 mov dword ptr [eax+0x20], 0x3F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x20u); X86_MEM32(ea) = (uint32_t)(0x3Fu); }
	// 002E3959 mov [eax+0x5AC], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5ACu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E395F mov [eax+0xD4], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xD4u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002E3965 mov dword ptr [eax+0x24], 0x3C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x24u); X86_MEM32(ea) = (uint32_t)(0x3Cu); }
	// 002E396C mov [eax+0x5AD], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5ADu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3972 mov [eax+0xD8], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xD8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002E3978 mov dword ptr [eax+0x28], 0x3B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); X86_MEM32(ea) = (uint32_t)(0x3Bu); }
	// 002E397F mov [eax+0x5AE], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5AEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3985 mov [eax+0xDC], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xDCu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002E398B mov dword ptr [eax+0x2C], 0x3A
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x2Cu); X86_MEM32(ea) = (uint32_t)(0x3Au); }
	// 002E3992 mov [eax+0x5AF], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5AFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3998 mov [eax+0xE0], esi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xE0u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002E399E mov dword ptr [eax+0x30], 0x3D
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x30u); X86_MEM32(ea) = (uint32_t)(0x3Du); }
	// 002E39A5 mov [eax+0x5B0], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5B0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E39AB mov [eax+0xE4], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xE4u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002E39B1 mov dword ptr [eax+0x34], 0x9C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x9Cu); }
	// 002E39B8 mov [eax+0x5B1], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5B1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E39BE mov dword ptr [eax+0xE8], 0x200
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xE8u); X86_MEM32(ea) = (uint32_t)(0x200u); }
	// 002E39C8 mov dword ptr [eax+0x38], 0x51
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x38u); X86_MEM32(ea) = (uint32_t)(0x51u); }
	// 002E39CF mov [eax+0x5B2], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5B2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E39D5 mov [eax+0xEC], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xECu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002E39DB mov dword ptr [eax+0x3C], 0x4E
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x4Eu); }
	// 002E39E2 mov [eax+0x5B3], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5B3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E39E8 mov dword ptr [eax+0x40], 0x4D
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x40u); X86_MEM32(ea) = (uint32_t)(0x4Du); }
	// 002E39EF mov [eax+0x5B4], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5B4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E39F5 mov dword ptr [eax+0x44], 0x7F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x44u); X86_MEM32(ea) = (uint32_t)(0x7Fu); }
	// 002E39FC mov [eax+0x5B5], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5B5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3A02 mov dword ptr [eax+0xF8], 0x80000002
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xF8u); X86_MEM32(ea) = (uint32_t)(0x80000002u); }
	// 002E3A0C mov dword ptr [eax+0x48], 0x94
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x48u); X86_MEM32(ea) = (uint32_t)(0x94u); }
	// 002E3A13 mov [eax+0x5B6], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5B6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3A19 mov dword ptr [eax+0x4C], 0x74
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x74u); }
	// 002E3A20 mov [eax+0x5B7], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5B7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3A26 mov [eax+0x100], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x100u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002E3A2C mov dword ptr [eax+0x50], 0x90
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x50u); X86_MEM32(ea) = (uint32_t)(0x90u); }
	// 002E3A33 mov [eax+0x5B8], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5B8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3A39 mov edx, 0x1E00
	{ ctx.edx = (uint32_t)(0x1E00u); }
	// 002E3A3E push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 002E3A40 mov [eax+0x108], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x108u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002E3A46 mov [eax+0x10C], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002E3A4C mov [eax+0x110], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x110u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 002E3A52 mov [eax+0x114], esi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x114u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002E3A58 mov [eax+0x104], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x104u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3A5E mov dword ptr [eax+0x54], 0x91
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x54u); X86_MEM32(ea) = (uint32_t)(0x91u); }
	// 002E3A65 mov [eax+0x5B9], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5B9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3A6B mov dword ptr [eax+0x58], 0x44
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x58u); X86_MEM32(ea) = (uint32_t)(0x44u); }
	// 002E3A72 mov [eax+0x5BA], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5BAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3A78 mov dword ptr [eax+0x5C], 0x45
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x45u); }
	// 002E3A7F mov [eax+0x5BB], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5BBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3A85 mov dword ptr [eax+0x60], 0x46
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x60u); X86_MEM32(ea) = (uint32_t)(0x46u); }
	// 002E3A8C mov [eax+0x5BC], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5BCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3A92 mov dword ptr [eax+0x64], 0x47
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x64u); X86_MEM32(ea) = (uint32_t)(0x47u); }
	// 002E3A99 mov [eax+0x5BD], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5BDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3A9F mov [eax+0x118], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x118u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3AA5 mov dword ptr [eax+0x68], 0x48
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x68u); X86_MEM32(ea) = (uint32_t)(0x48u); }
	// 002E3AAC mov [eax+0x5BE], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5BEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3AB2 mov [eax+0x11C], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x11Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3AB8 mov dword ptr [eax+0x6C], 0x49
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x6Cu); X86_MEM32(ea) = (uint32_t)(0x49u); }
	// 002E3ABF mov [eax+0x5BF], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5BFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3AC5 mov [eax+0x120], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x120u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3ACB mov [eax+0x70], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x70u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002E3ACE mov [eax+0x5C0], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5C0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3AD4 lea edx, [eax+0x124]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x124u));
	// 002E3ADA pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_002E3ADB:
	// 002E3ADB mov [edx], ecx
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3ADD add edx, edi
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3ADF dec esi
	{ uint32_t a = (uint32_t)(ctx.esi);  uint32_t r = (uint32_t)(a - 1); ctx.esi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3AE0 jnz 0x002E3ADB
	if (!zf) { X86_BARRIER(); goto loc_002E3ADB; }
	// 002E3AE2 push 0x0D
	{ uint32_t v = (uint32_t)(0xDu); X86_PUSH32(v); }
	// 002E3AE4 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002E3AE5 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 002E3AE7 lea edx, [eax+0x1E4]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x1E4u));
	// 002E3AED pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_002E3AEE:
	// 002E3AEE mov [edx], esi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002E3AF0 add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3AF3 dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3AF4 jnz 0x002E3AEE
	if (!zf) { X86_BARRIER(); goto loc_002E3AEE; }
	// 002E3AF6 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 002E3AF8 mov [eax+0x74], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x74u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3AFB mov [eax+0x5C1], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5C1u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3B01 lea edx, [eax+0x128]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x128u));
	// 002E3B07 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_002E3B08:
	// 002E3B08 mov [edx], ecx
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3B0A add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B0D dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B0E jnz 0x002E3B08
	if (!zf) { X86_BARRIER(); goto loc_002E3B08; }
	// 002E3B10 push 0x0D
	{ uint32_t v = (uint32_t)(0xDu); X86_PUSH32(v); }
	// 002E3B12 lea edx, [eax+0x1E8]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x1E8u));
	// 002E3B18 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_002E3B19:
	// 002E3B19 mov [edx], esi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002E3B1B add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B1E dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B1F jnz 0x002E3B19
	if (!zf) { X86_BARRIER(); goto loc_002E3B19; }
	// 002E3B21 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 002E3B23 mov dword ptr [eax+0x78], 0x02
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x78u); X86_MEM32(ea) = (uint32_t)(0x2u); }
	// 002E3B2A mov [eax+0x5C2], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5C2u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3B30 lea edx, [eax+0x12C]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x12Cu));
	// 002E3B36 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_002E3B37:
	// 002E3B37 mov [edx], ecx
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3B39 add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B3C dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B3D jnz 0x002E3B37
	if (!zf) { X86_BARRIER(); goto loc_002E3B37; }
	// 002E3B3F push 0x0D
	{ uint32_t v = (uint32_t)(0xDu); X86_PUSH32(v); }
	// 002E3B41 lea edx, [eax+0x1EC]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x1ECu));
	// 002E3B47 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_002E3B48:
	// 002E3B48 mov [edx], esi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002E3B4A add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B4D dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B4E jnz 0x002E3B48
	if (!zf) { X86_BARRIER(); goto loc_002E3B48; }
	// 002E3B50 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 002E3B52 mov dword ptr [eax+0x7C], 0x1D
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x7Cu); X86_MEM32(ea) = (uint32_t)(0x1Du); }
	// 002E3B59 mov [eax+0x5C3], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5C3u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3B5F lea edx, [eax+0x130]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x130u));
	// 002E3B65 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_002E3B66:
	// 002E3B66 mov [edx], ebx
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002E3B68 add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B6B dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B6C jnz 0x002E3B66
	if (!zf) { X86_BARRIER(); goto loc_002E3B66; }
	// 002E3B6E push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 002E3B70 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002E3B71 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 002E3B73 mov [eax+0x80], esi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x80u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002E3B79 mov [eax+0x5C4], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5C4u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3B7F lea edx, [eax+0x134]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x134u));
	// 002E3B85 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_002E3B86:
	// 002E3B86 mov [edx], esi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002E3B88 add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B8B dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3B8C jnz 0x002E3B86
	if (!zf) { X86_BARRIER(); goto loc_002E3B86; }
	// 002E3B8E push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 002E3B90 mov dword ptr [eax+0x84], 0x04
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x84u); X86_MEM32(ea) = (uint32_t)(0x4u); }
	// 002E3B9A mov [eax+0x5C5], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5C5u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3BA0 lea edx, [eax+0x138]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x138u));
	// 002E3BA6 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
loc_002E3BA7:
	// 002E3BA7 mov [edx], esi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 002E3BA9 add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3BAC dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3BAD jnz 0x002E3BA7
	if (!zf) { X86_BARRIER(); goto loc_002E3BA7; }
	// 002E3BAF push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 002E3BB1 mov dword ptr [eax+0x88], 0x05
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x88u); X86_MEM32(ea) = (uint32_t)(0x5u); }
	// 002E3BBB mov [eax+0x5C6], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5C6u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3BC1 lea edx, [eax+0x13C]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x13Cu));
	// 002E3BC7 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_002E3BC8:
	// 002E3BC8 mov [edx], ecx
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3BCA add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3BCD dec esi
	{ uint32_t a = (uint32_t)(ctx.esi);  uint32_t r = (uint32_t)(a - 1); ctx.esi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3BCE jnz 0x002E3BC8
	if (!zf) { X86_BARRIER(); goto loc_002E3BC8; }
	// 002E3BD0 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 002E3BD2 mov dword ptr [eax+0x8C], 0x07
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8Cu); X86_MEM32(ea) = (uint32_t)(0x7u); }
	// 002E3BDC mov [eax+0x5C7], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5C7u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3BE2 lea edx, [eax+0x140]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x140u));
	// 002E3BE8 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_002E3BE9:
	// 002E3BE9 mov [edx], ebx
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002E3BEB add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3BEE dec esi
	{ uint32_t a = (uint32_t)(ctx.esi);  uint32_t r = (uint32_t)(a - 1); ctx.esi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3BEF jnz 0x002E3BE9
	if (!zf) { X86_BARRIER(); goto loc_002E3BE9; }
	// 002E3BF1 push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 002E3BF3 mov dword ptr [eax+0x90], 0x06
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x90u); X86_MEM32(ea) = (uint32_t)(0x6u); }
	// 002E3BFD mov [eax+0x5C8], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5C8u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3C03 mov dword ptr [ebp-0x04], 0xBF000000
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(0xBF000000u); }
	// 002E3C0A lea edx, [eax+0x144]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x144u));
	// 002E3C10 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_002E3C11:
	// 002E3C11 mov edi, [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002E3C14 mov [edx], edi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 002E3C16 add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3C19 dec esi
	{ uint32_t a = (uint32_t)(ctx.esi);  uint32_t r = (uint32_t)(a - 1); ctx.esi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3C1A jnz 0x002E3C11
	if (!zf) { X86_BARRIER(); goto loc_002E3C11; }
	// 002E3C1C push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 002E3C1E mov dword ptr [eax+0x94], 0x08
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x94u); X86_MEM32(ea) = (uint32_t)(0x8u); }
	// 002E3C28 mov [eax+0x5C9], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5C9u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3C2E lea edx, [eax+0x148]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x148u));
	// 002E3C34 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
loc_002E3C35:
	// 002E3C35 mov [edx], ecx
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 002E3C37 add edx, 0x40
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x40u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3C3A dec esi
	{ uint32_t a = (uint32_t)(ctx.esi);  uint32_t r = (uint32_t)(a - 1); ctx.esi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3C3B jnz 0x002E3C35
	if (!zf) { X86_BARRIER(); goto loc_002E3C35; }
	// 002E3C3D push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 002E3C3F fld1
	{ x87_push(ctx, 1.0); }
	// 002E3C41 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002E3C42 fstp [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002E3C45 mov dword ptr [eax+0x98], 0x16
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x98u); X86_MEM32(ea) = (uint32_t)(0x16u); }
	// 002E3C4F mov [eax+0x5CA], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5CAu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3C55 lea edx, [eax+0x524]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x524u));
	// 002E3C5B mov [ebp-0x04], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
loc_002E3C5E:
	// 002E3C5E mov edi, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002E3C61 mov [edx], edi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 002E3C63 add edx, 0x20
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3C66 dec [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a - 1); X86_MEM32(ea) = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3C69 jnz 0x002E3C5E
	if (!zf) { X86_BARRIER(); goto loc_002E3C5E; }
	// 002E3C6B fldz
	{ x87_push(ctx, 0.0); }
	// 002E3C6D mov dword ptr [eax+0x9C], 0x17
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x17u); }
	// 002E3C77 fstp [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002E3C7A mov [eax+0x5CB], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5CBu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3C80 lea edx, [eax+0x528]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x528u));
	// 002E3C86 mov [ebp-0x04], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
loc_002E3C89:
	// 002E3C89 mov edi, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002E3C8C mov [edx], edi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 002E3C8E add edx, 0x20
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3C91 dec [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a - 1); X86_MEM32(ea) = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3C94 jnz 0x002E3C89
	if (!zf) { X86_BARRIER(); goto loc_002E3C89; }
	// 002E3C96 fldz
	{ x87_push(ctx, 0.0); }
	// 002E3C98 mov dword ptr [eax+0xA0], 0x19
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xA0u); X86_MEM32(ea) = (uint32_t)(0x19u); }
	// 002E3CA2 fstp [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002E3CA5 mov [eax+0x5CC], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5CCu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3CAB lea edx, [eax+0x52C]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x52Cu));
	// 002E3CB1 mov [ebp-0x04], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
loc_002E3CB4:
	// 002E3CB4 mov edi, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002E3CB7 mov [edx], edi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 002E3CB9 add edx, 0x20
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3CBC dec [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a - 1); X86_MEM32(ea) = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3CBF jnz 0x002E3CB4
	if (!zf) { X86_BARRIER(); goto loc_002E3CB4; }
	// 002E3CC1 fld1
	{ x87_push(ctx, 1.0); }
	// 002E3CC3 mov dword ptr [eax+0xA4], 0x18
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xA4u); X86_MEM32(ea) = (uint32_t)(0x18u); }
	// 002E3CCD fstp [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002E3CD0 mov [eax+0x5CD], bl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5CDu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ebx)); }
	// 002E3CD6 lea edx, [eax+0x530]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x530u));
	// 002E3CDC mov [ebp-0x04], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
loc_002E3CDF:
	// 002E3CDF mov edi, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002E3CE2 mov [edx], edi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 002E3CE4 add edx, 0x20
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3CE7 dec [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a - 1); X86_MEM32(ea) = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3CEA jnz 0x002E3CDF
	if (!zf) { X86_BARRIER(); goto loc_002E3CDF; }
	// 002E3CEC fld1
	{ x87_push(ctx, 1.0); }
	// 002E3CEE mov dword ptr [eax+0xA8], 0x1A
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xA8u); X86_MEM32(ea) = (uint32_t)(0x1Au); }
	// 002E3CF8 fstp [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002E3CFB mov [eax+0x5CE], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5CEu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3D01 lea edx, [eax+0x534]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x534u));
	// 002E3D07 mov [ebp-0x04], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
loc_002E3D0A:
	// 002E3D0A mov edi, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002E3D0D mov [edx], edi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 002E3D0F add edx, 0x20
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3D12 dec [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a - 1); X86_MEM32(ea) = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3D15 jnz 0x002E3D0A
	if (!zf) { X86_BARRIER(); goto loc_002E3D0A; }
	// 002E3D17 fldz
	{ x87_push(ctx, 0.0); }
	// 002E3D19 mov dword ptr [eax+0xAC], 0x1B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xACu); X86_MEM32(ea) = (uint32_t)(0x1Bu); }
	// 002E3D23 fstp [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 002E3D26 mov [eax+0x5CF], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5CFu); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3D2C lea edx, [eax+0x538]
	ctx.edx = (uint32_t)((uint32_t)(ctx.eax + 0x538u));
	// 002E3D32 mov [ebp-0x04], esi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
loc_002E3D35:
	// 002E3D35 mov edi, [ebp-0x08]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFF8u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 002E3D38 mov [edx], edi
	{ uint32_t ea = (uint32_t)(ctx.edx); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 002E3D3A add edx, 0x20
	{ uint32_t a = (uint32_t)(ctx.edx); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.edx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3D3D dec [ebp-0x04]
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFFFFFFFCu); uint32_t a = (uint32_t)(X86_MEM32(ea));  uint32_t r = (uint32_t)(a - 1); X86_MEM32(ea) = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3D40 jnz 0x002E3D35
	if (!zf) { X86_BARRIER(); goto loc_002E3D35; }
	// 002E3D42 mov dword ptr [eax+0xB0], 0x15
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xB0u); X86_MEM32(ea) = (uint32_t)(0x15u); }
	// 002E3D4C mov [eax+0x5D0], cl
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5D0u); X86_MEM8(ea) = (uint8_t)(((uint8_t)ctx.ecx)); }
	// 002E3D52 lea ecx, [eax+0x53C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.eax + 0x53Cu));
loc_002E3D58:
	// 002E3D58 mov [ecx], ebx
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 002E3D5A add ecx, 0x20
	{ uint32_t a = (uint32_t)(ctx.ecx); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.ecx = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3D5D dec esi
	{ uint32_t a = (uint32_t)(ctx.esi);  uint32_t r = (uint32_t)(a - 1); ctx.esi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 002E3D5E jnz 0x002E3D58
	if (!zf) { X86_BARRIER(); goto loc_002E3D58; }
	// 002E3D60 pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 002E3D61 pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 002E3D62 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 002E3D63 leave
	ctx.esp = ctx.ebp; ctx.ebp = X86_MEM32(ctx.esp); ctx.esp += 4;
	// 002E3D64 ret
	ctx.esp += 4; return;
loc_00462526:
	// 00462526 mov ecx, 0x6A8EB8
	{ ctx.ecx = (uint32_t)(0x6A8EB8u); }
	// 0046252B jmp 0x002E3869
	X86_BARRIER();
	goto loc_002E3869;
}
X86_WEAK_FUNC(sub_00462526, __imp__sub_00462526)

X86_FUNC(__imp__sub_00462530) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462530 mov eax, [0x005DB098]
	{ uint32_t ea = (uint32_t)(0x5DB098u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00462535 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462537 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462539 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046253B push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046253D push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046253F push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462541 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462543 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00462544 mov ecx, 0x6A960C
	{ ctx.ecx = (uint32_t)(0x6A960Cu); }
	// 00462549 call 0x00309B50
	X86_PUSH32(0x46254Eu); sub_00309B50(ctx, base);
	// 0046254E push 0x464EB0
	{ uint32_t v = (uint32_t)(0x464EB0u); X86_PUSH32(v); }
	// 00462553 call 0x00366943
	X86_PUSH32(0x462558u); sub_00366943(ctx, base);
	// 00462558 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462559 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462530, __imp__sub_00462530)

X86_FUNC(__imp__sub_00462560) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462560 mov eax, [0x006A9664]
	{ uint32_t ea = (uint32_t)(0x6A9664u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00462565 mov [0x005DB0A0], eax
	{ uint32_t ea = (uint32_t)(0x5DB0A0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0046256A mov dword ptr [0x006A9664], 0x5DB09C
	{ uint32_t ea = (uint32_t)(0x6A9664u); X86_MEM32(ea) = (uint32_t)(0x5DB09Cu); }
	// 00462574 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462560, __imp__sub_00462560)

X86_FUNC(__imp__sub_00462580) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462580 mov eax, [0x006A9664]
	{ uint32_t ea = (uint32_t)(0x6A9664u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00462585 mov [0x005DB0B4], eax
	{ uint32_t ea = (uint32_t)(0x5DB0B4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0046258A mov dword ptr [0x006A9664], 0x5DB0B0
	{ uint32_t ea = (uint32_t)(0x6A9664u); X86_MEM32(ea) = (uint32_t)(0x5DB0B0u); }
	// 00462594 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462580, __imp__sub_00462580)

X86_FUNC(__imp__sub_004625A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004625A0 mov eax, [0x006A9664]
	{ uint32_t ea = (uint32_t)(0x6A9664u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004625A5 mov [0x005DB0C0], eax
	{ uint32_t ea = (uint32_t)(0x5DB0C0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004625AA mov dword ptr [0x006A9664], 0x5DB0BC
	{ uint32_t ea = (uint32_t)(0x6A9664u); X86_MEM32(ea) = (uint32_t)(0x5DB0BCu); }
	// 004625B4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004625A0, __imp__sub_004625A0)

X86_FUNC(__imp__sub_004625C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004625C0 push 0x06
	{ uint32_t v = (uint32_t)(0x6u); X86_PUSH32(v); }
	// 004625C2 push 0x56A758
	{ uint32_t v = (uint32_t)(0x56A758u); X86_PUSH32(v); }
	// 004625C7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004625C9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004625CB push 0x18
	{ uint32_t v = (uint32_t)(0x18u); X86_PUSH32(v); }
	// 004625CD push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004625CF push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004625D1 push 0x56A928
	{ uint32_t v = (uint32_t)(0x56A928u); X86_PUSH32(v); }
	// 004625D6 mov ecx, 0x6A9668
	{ ctx.ecx = (uint32_t)(0x6A9668u); }
	// 004625DB call 0x00309B50
	X86_PUSH32(0x4625E0u); sub_00309B50(ctx, base);
	// 004625E0 push 0x464ED0
	{ uint32_t v = (uint32_t)(0x464ED0u); X86_PUSH32(v); }
	// 004625E5 call 0x00366943
	X86_PUSH32(0x4625EAu); sub_00366943(ctx, base);
	// 004625EA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004625EB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004625C0, __imp__sub_004625C0)

X86_FUNC(__imp__sub_004625F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004625F0 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 004625F2 push 0x56A7B8
	{ uint32_t v = (uint32_t)(0x56A7B8u); X86_PUSH32(v); }
	// 004625F7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004625F9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004625FB push 0x20
	{ uint32_t v = (uint32_t)(0x20u); X86_PUSH32(v); }
	// 004625FD push 0x56A838
	{ uint32_t v = (uint32_t)(0x56A838u); X86_PUSH32(v); }
	// 00462602 push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 00462607 push 0x56A938
	{ uint32_t v = (uint32_t)(0x56A938u); X86_PUSH32(v); }
	// 0046260C mov ecx, 0x6A9690
	{ ctx.ecx = (uint32_t)(0x6A9690u); }
	// 00462611 call 0x00309B50
	X86_PUSH32(0x462616u); sub_00309B50(ctx, base);
	// 00462616 push 0x464EC0
	{ uint32_t v = (uint32_t)(0x464EC0u); X86_PUSH32(v); }
	// 0046261B call 0x00366943
	X86_PUSH32(0x462620u); sub_00366943(ctx, base);
	// 00462620 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462621 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004625F0, __imp__sub_004625F0)

X86_FUNC(__imp__sub_00462630) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462630 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462632 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462634 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462636 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462638 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0046263A push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046263C push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 00462641 push 0x56AF28
	{ uint32_t v = (uint32_t)(0x56AF28u); X86_PUSH32(v); }
	// 00462646 mov ecx, 0x6A96B8
	{ ctx.ecx = (uint32_t)(0x6A96B8u); }
	// 0046264B call 0x00309B50
	X86_PUSH32(0x462650u); sub_00309B50(ctx, base);
	// 00462650 push 0x464EE0
	{ uint32_t v = (uint32_t)(0x464EE0u); X86_PUSH32(v); }
	// 00462655 call 0x00366943
	X86_PUSH32(0x46265Au); sub_00366943(ctx, base);
	// 0046265A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046265B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462630, __imp__sub_00462630)

X86_FUNC(__imp__sub_00462660) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462660 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00462662 push 0x56AF3C
	{ uint32_t v = (uint32_t)(0x56AF3Cu); X86_PUSH32(v); }
	// 00462667 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462669 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046266B push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 0046266D push 0x56AF4C
	{ uint32_t v = (uint32_t)(0x56AF4Cu); X86_PUSH32(v); }
	// 00462672 push 0x6A96B8
	{ uint32_t v = (uint32_t)(0x6A96B8u); X86_PUSH32(v); }
	// 00462677 push 0x56AF78
	{ uint32_t v = (uint32_t)(0x56AF78u); X86_PUSH32(v); }
	// 0046267C mov ecx, 0x6A96E0
	{ ctx.ecx = (uint32_t)(0x6A96E0u); }
	// 00462681 call 0x00309B50
	X86_PUSH32(0x462686u); sub_00309B50(ctx, base);
	// 00462686 push 0x464EF0
	{ uint32_t v = (uint32_t)(0x464EF0u); X86_PUSH32(v); }
	// 0046268B call 0x00366943
	X86_PUSH32(0x462690u); sub_00366943(ctx, base);
	// 00462690 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462691 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462660, __imp__sub_00462660)

X86_FUNC(__imp__sub_004626A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004626A0 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 004626A2 push 0x56B080
	{ uint32_t v = (uint32_t)(0x56B080u); X86_PUSH32(v); }
	// 004626A7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004626A9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004626AB push 0x84
	{ uint32_t v = (uint32_t)(0x84u); X86_PUSH32(v); }
	// 004626B0 push 0x56B0A0
	{ uint32_t v = (uint32_t)(0x56B0A0u); X86_PUSH32(v); }
	// 004626B5 push 0x6A96B8
	{ uint32_t v = (uint32_t)(0x6A96B8u); X86_PUSH32(v); }
	// 004626BA push 0x56B0E4
	{ uint32_t v = (uint32_t)(0x56B0E4u); X86_PUSH32(v); }
	// 004626BF mov ecx, 0x6A9708
	{ ctx.ecx = (uint32_t)(0x6A9708u); }
	// 004626C4 call 0x00309B50
	X86_PUSH32(0x4626C9u); sub_00309B50(ctx, base);
	// 004626C9 push 0x464F00
	{ uint32_t v = (uint32_t)(0x464F00u); X86_PUSH32(v); }
	// 004626CE call 0x00366943
	X86_PUSH32(0x4626D3u); sub_00366943(ctx, base);
	// 004626D3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004626D4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004626A0, __imp__sub_004626A0)

X86_FUNC(__imp__sub_004626E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004626E0 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 004626E2 push 0x56B0F4
	{ uint32_t v = (uint32_t)(0x56B0F4u); X86_PUSH32(v); }
	// 004626E7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004626E9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004626EB push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 004626ED push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004626EF push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 004626F4 push 0x56B110
	{ uint32_t v = (uint32_t)(0x56B110u); X86_PUSH32(v); }
	// 004626F9 mov ecx, 0x6A9730
	{ ctx.ecx = (uint32_t)(0x6A9730u); }
	// 004626FE call 0x00309B50
	X86_PUSH32(0x462703u); sub_00309B50(ctx, base);
	// 00462703 push 0x464F10
	{ uint32_t v = (uint32_t)(0x464F10u); X86_PUSH32(v); }
	// 00462708 call 0x00366943
	X86_PUSH32(0x46270Du); sub_00366943(ctx, base);
	// 0046270D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046270E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004626E0, __imp__sub_004626E0)

X86_FUNC(__imp__sub_00462710) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462710 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462712 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462714 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462716 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462718 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 0046271A push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046271C push 0x6A9730
	{ uint32_t v = (uint32_t)(0x6A9730u); X86_PUSH32(v); }
	// 00462721 push 0x56B118
	{ uint32_t v = (uint32_t)(0x56B118u); X86_PUSH32(v); }
	// 00462726 mov ecx, 0x6A9758
	{ ctx.ecx = (uint32_t)(0x6A9758u); }
	// 0046272B call 0x00309B50
	X86_PUSH32(0x462730u); sub_00309B50(ctx, base);
	// 00462730 push 0x464F20
	{ uint32_t v = (uint32_t)(0x464F20u); X86_PUSH32(v); }
	// 00462735 call 0x00366943
	X86_PUSH32(0x46273Au); sub_00366943(ctx, base);
	// 0046273A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046273B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462710, __imp__sub_00462710)

X86_FUNC(__imp__sub_00462740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462740 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00462742 push 0x56B12C
	{ uint32_t v = (uint32_t)(0x56B12Cu); X86_PUSH32(v); }
	// 00462747 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462749 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046274B push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 0046274D push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046274F push 0x6A9758
	{ uint32_t v = (uint32_t)(0x6A9758u); X86_PUSH32(v); }
	// 00462754 push 0x56B144
	{ uint32_t v = (uint32_t)(0x56B144u); X86_PUSH32(v); }
	// 00462759 mov ecx, 0x6A9780
	{ ctx.ecx = (uint32_t)(0x6A9780u); }
	// 0046275E call 0x00309B50
	X86_PUSH32(0x462763u); sub_00309B50(ctx, base);
	// 00462763 push 0x464F30
	{ uint32_t v = (uint32_t)(0x464F30u); X86_PUSH32(v); }
	// 00462768 call 0x00366943
	X86_PUSH32(0x46276Du); sub_00366943(ctx, base);
	// 0046276D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046276E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462740, __imp__sub_00462740)

X86_FUNC(__imp__sub_00462770) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462770 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00462772 push 0x56B154
	{ uint32_t v = (uint32_t)(0x56B154u); X86_PUSH32(v); }
	// 00462777 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462779 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046277B push 0x20
	{ uint32_t v = (uint32_t)(0x20u); X86_PUSH32(v); }
	// 0046277D push 0x56B164
	{ uint32_t v = (uint32_t)(0x56B164u); X86_PUSH32(v); }
	// 00462782 push 0x6A9780
	{ uint32_t v = (uint32_t)(0x6A9780u); X86_PUSH32(v); }
	// 00462787 push 0x56B188
	{ uint32_t v = (uint32_t)(0x56B188u); X86_PUSH32(v); }
	// 0046278C mov ecx, 0x6A97A8
	{ ctx.ecx = (uint32_t)(0x6A97A8u); }
	// 00462791 call 0x00309B50
	X86_PUSH32(0x462796u); sub_00309B50(ctx, base);
	// 00462796 push 0x464F40
	{ uint32_t v = (uint32_t)(0x464F40u); X86_PUSH32(v); }
	// 0046279B call 0x00366943
	X86_PUSH32(0x4627A0u); sub_00366943(ctx, base);
	// 004627A0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004627A1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462770, __imp__sub_00462770)

X86_FUNC(__imp__sub_004627B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004627B0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004627B2 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004627B4 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004627B6 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004627B8 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 004627BA push 0x56B194
	{ uint32_t v = (uint32_t)(0x56B194u); X86_PUSH32(v); }
	// 004627BF push 0x6A9780
	{ uint32_t v = (uint32_t)(0x6A9780u); X86_PUSH32(v); }
	// 004627C4 push 0x56B1AC
	{ uint32_t v = (uint32_t)(0x56B1ACu); X86_PUSH32(v); }
	// 004627C9 mov ecx, 0x6A97D0
	{ ctx.ecx = (uint32_t)(0x6A97D0u); }
	// 004627CE call 0x00309B50
	X86_PUSH32(0x4627D3u); sub_00309B50(ctx, base);
	// 004627D3 push 0x464F50
	{ uint32_t v = (uint32_t)(0x464F50u); X86_PUSH32(v); }
	// 004627D8 call 0x00366943
	X86_PUSH32(0x4627DDu); sub_00366943(ctx, base);
	// 004627DD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004627DE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004627B0, __imp__sub_004627B0)

X86_FUNC(__imp__sub_004627E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004627E0 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 004627E2 push 0x56B1BC
	{ uint32_t v = (uint32_t)(0x56B1BCu); X86_PUSH32(v); }
	// 004627E7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004627E9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004627EB push 0x20
	{ uint32_t v = (uint32_t)(0x20u); X86_PUSH32(v); }
	// 004627ED push 0x56B1DC
	{ uint32_t v = (uint32_t)(0x56B1DCu); X86_PUSH32(v); }
	// 004627F2 push 0x6A9780
	{ uint32_t v = (uint32_t)(0x6A9780u); X86_PUSH32(v); }
	// 004627F7 push 0x56B210
	{ uint32_t v = (uint32_t)(0x56B210u); X86_PUSH32(v); }
	// 004627FC mov ecx, 0x6A97F8
	{ ctx.ecx = (uint32_t)(0x6A97F8u); }
	// 00462801 call 0x00309B50
	X86_PUSH32(0x462806u); sub_00309B50(ctx, base);
	// 00462806 push 0x464F60
	{ uint32_t v = (uint32_t)(0x464F60u); X86_PUSH32(v); }
	// 0046280B call 0x00366943
	X86_PUSH32(0x462810u); sub_00366943(ctx, base);
	// 00462810 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462811 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004627E0, __imp__sub_004627E0)

X86_FUNC(__imp__sub_00462820) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462820 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00462822 push 0x56B228
	{ uint32_t v = (uint32_t)(0x56B228u); X86_PUSH32(v); }
	// 00462827 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462829 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046282B push 0x30
	{ uint32_t v = (uint32_t)(0x30u); X86_PUSH32(v); }
	// 0046282D push 0x56B248
	{ uint32_t v = (uint32_t)(0x56B248u); X86_PUSH32(v); }
	// 00462832 push 0x6A9780
	{ uint32_t v = (uint32_t)(0x6A9780u); X86_PUSH32(v); }
	// 00462837 push 0x56B270
	{ uint32_t v = (uint32_t)(0x56B270u); X86_PUSH32(v); }
	// 0046283C mov ecx, 0x6A9820
	{ ctx.ecx = (uint32_t)(0x6A9820u); }
	// 00462841 call 0x00309B50
	X86_PUSH32(0x462846u); sub_00309B50(ctx, base);
	// 00462846 push 0x464F70
	{ uint32_t v = (uint32_t)(0x464F70u); X86_PUSH32(v); }
	// 0046284B call 0x00366943
	X86_PUSH32(0x462850u); sub_00366943(ctx, base);
	// 00462850 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462851 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462820, __imp__sub_00462820)

X86_FUNC(__imp__sub_00462860) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462860 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00462862 push 0x56B294
	{ uint32_t v = (uint32_t)(0x56B294u); X86_PUSH32(v); }
	// 00462867 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462869 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046286B push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 0046286D push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046286F push 0x6A9730
	{ uint32_t v = (uint32_t)(0x6A9730u); X86_PUSH32(v); }
	// 00462874 push 0x56B2B4
	{ uint32_t v = (uint32_t)(0x56B2B4u); X86_PUSH32(v); }
	// 00462879 mov ecx, 0x6A9848
	{ ctx.ecx = (uint32_t)(0x6A9848u); }
	// 0046287E call 0x00309B50
	X86_PUSH32(0x462883u); sub_00309B50(ctx, base);
	// 00462883 push 0x464F80
	{ uint32_t v = (uint32_t)(0x464F80u); X86_PUSH32(v); }
	// 00462888 call 0x00366943
	X86_PUSH32(0x46288Du); sub_00366943(ctx, base);
	// 0046288D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046288E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462860, __imp__sub_00462860)

X86_FUNC(__imp__sub_00462890) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462890 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00462892 push 0x56B2C4
	{ uint32_t v = (uint32_t)(0x56B2C4u); X86_PUSH32(v); }
	// 00462897 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462899 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046289B push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 0046289D push 0x56B2D4
	{ uint32_t v = (uint32_t)(0x56B2D4u); X86_PUSH32(v); }
	// 004628A2 push 0x6A9848
	{ uint32_t v = (uint32_t)(0x6A9848u); X86_PUSH32(v); }
	// 004628A7 push 0x56B2F4
	{ uint32_t v = (uint32_t)(0x56B2F4u); X86_PUSH32(v); }
	// 004628AC mov ecx, 0x6A9870
	{ ctx.ecx = (uint32_t)(0x6A9870u); }
	// 004628B1 call 0x00309B50
	X86_PUSH32(0x4628B6u); sub_00309B50(ctx, base);
	// 004628B6 push 0x464F90
	{ uint32_t v = (uint32_t)(0x464F90u); X86_PUSH32(v); }
	// 004628BB call 0x00366943
	X86_PUSH32(0x4628C0u); sub_00366943(ctx, base);
	// 004628C0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004628C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462890, __imp__sub_00462890)

X86_FUNC(__imp__sub_004628D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004628D0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004628D2 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004628D4 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004628D6 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004628D8 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 004628DA push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004628DC push 0x6A9730
	{ uint32_t v = (uint32_t)(0x6A9730u); X86_PUSH32(v); }
	// 004628E1 push 0x56B37C
	{ uint32_t v = (uint32_t)(0x56B37Cu); X86_PUSH32(v); }
	// 004628E6 mov ecx, 0x6A9898
	{ ctx.ecx = (uint32_t)(0x6A9898u); }
	// 004628EB call 0x00309B50
	X86_PUSH32(0x4628F0u); sub_00309B50(ctx, base);
	// 004628F0 push 0x464FA0
	{ uint32_t v = (uint32_t)(0x464FA0u); X86_PUSH32(v); }
	// 004628F5 call 0x00366943
	X86_PUSH32(0x4628FAu); sub_00366943(ctx, base);
	// 004628FA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004628FB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004628D0, __imp__sub_004628D0)

X86_FUNC(__imp__sub_00462900) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462900 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00462902 push 0x56B390
	{ uint32_t v = (uint32_t)(0x56B390u); X86_PUSH32(v); }
	// 00462907 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462909 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046290B push 0x40
	{ uint32_t v = (uint32_t)(0x40u); X86_PUSH32(v); }
	// 0046290D push 0x56B3C0
	{ uint32_t v = (uint32_t)(0x56B3C0u); X86_PUSH32(v); }
	// 00462912 push 0x6A9780
	{ uint32_t v = (uint32_t)(0x6A9780u); X86_PUSH32(v); }
	// 00462917 push 0x56B3E0
	{ uint32_t v = (uint32_t)(0x56B3E0u); X86_PUSH32(v); }
	// 0046291C mov ecx, 0x6A98C0
	{ ctx.ecx = (uint32_t)(0x6A98C0u); }
	// 00462921 call 0x00309B50
	X86_PUSH32(0x462926u); sub_00309B50(ctx, base);
	// 00462926 push 0x464FB0
	{ uint32_t v = (uint32_t)(0x464FB0u); X86_PUSH32(v); }
	// 0046292B call 0x00366943
	X86_PUSH32(0x462930u); sub_00366943(ctx, base);
	// 00462930 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462931 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462900, __imp__sub_00462900)

X86_FUNC(__imp__sub_00462940) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462940 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00462942 push 0x56B3F0
	{ uint32_t v = (uint32_t)(0x56B3F0u); X86_PUSH32(v); }
	// 00462947 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462949 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046294B push 0x2C
	{ uint32_t v = (uint32_t)(0x2Cu); X86_PUSH32(v); }
	// 0046294D push 0x56B430
	{ uint32_t v = (uint32_t)(0x56B430u); X86_PUSH32(v); }
	// 00462952 push 0x6A9898
	{ uint32_t v = (uint32_t)(0x6A9898u); X86_PUSH32(v); }
	// 00462957 push 0x56B480
	{ uint32_t v = (uint32_t)(0x56B480u); X86_PUSH32(v); }
	// 0046295C mov ecx, 0x6A98E8
	{ ctx.ecx = (uint32_t)(0x6A98E8u); }
	// 00462961 call 0x00309B50
	X86_PUSH32(0x462966u); sub_00309B50(ctx, base);
	// 00462966 push 0x464FC0
	{ uint32_t v = (uint32_t)(0x464FC0u); X86_PUSH32(v); }
	// 0046296B call 0x00366943
	X86_PUSH32(0x462970u); sub_00366943(ctx, base);
	// 00462970 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462971 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462940, __imp__sub_00462940)

X86_FUNC(__imp__sub_00462980) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462980 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00462982 push 0x56BFA0
	{ uint32_t v = (uint32_t)(0x56BFA0u); X86_PUSH32(v); }
	// 00462987 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462989 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046298B push 0x1C
	{ uint32_t v = (uint32_t)(0x1Cu); X86_PUSH32(v); }
	// 0046298D push 0x56BFC0
	{ uint32_t v = (uint32_t)(0x56BFC0u); X86_PUSH32(v); }
	// 00462992 push 0x6A9898
	{ uint32_t v = (uint32_t)(0x6A9898u); X86_PUSH32(v); }
	// 00462997 push 0x56BFFC
	{ uint32_t v = (uint32_t)(0x56BFFCu); X86_PUSH32(v); }
	// 0046299C mov ecx, 0x6A9914
	{ ctx.ecx = (uint32_t)(0x6A9914u); }
	// 004629A1 call 0x00309B50
	X86_PUSH32(0x4629A6u); sub_00309B50(ctx, base);
	// 004629A6 push 0x464FD0
	{ uint32_t v = (uint32_t)(0x464FD0u); X86_PUSH32(v); }
	// 004629AB call 0x00366943
	X86_PUSH32(0x4629B0u); sub_00366943(ctx, base);
	// 004629B0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004629B1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462980, __imp__sub_00462980)

X86_FUNC(__imp__sub_004629C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004629C0 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 004629C2 push 0x56C008
	{ uint32_t v = (uint32_t)(0x56C008u); X86_PUSH32(v); }
	// 004629C7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004629C9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004629CB push 0x50
	{ uint32_t v = (uint32_t)(0x50u); X86_PUSH32(v); }
	// 004629CD push 0x56C028
	{ uint32_t v = (uint32_t)(0x56C028u); X86_PUSH32(v); }
	// 004629D2 push 0x6A9730
	{ uint32_t v = (uint32_t)(0x6A9730u); X86_PUSH32(v); }
	// 004629D7 push 0x56C058
	{ uint32_t v = (uint32_t)(0x56C058u); X86_PUSH32(v); }
	// 004629DC mov ecx, 0x6A993C
	{ ctx.ecx = (uint32_t)(0x6A993Cu); }
	// 004629E1 call 0x00309B50
	X86_PUSH32(0x4629E6u); sub_00309B50(ctx, base);
	// 004629E6 push 0x464FE0
	{ uint32_t v = (uint32_t)(0x464FE0u); X86_PUSH32(v); }
	// 004629EB call 0x00366943
	X86_PUSH32(0x4629F0u); sub_00366943(ctx, base);
	// 004629F0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004629F1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004629C0, __imp__sub_004629C0)

X86_FUNC(__imp__sub_00462A00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462A00 mov ecx, 0x6A9B10
	{ ctx.ecx = (uint32_t)(0x6A9B10u); }
	// 00462A05 call 0x00332580
	X86_PUSH32(0x462A0Au); sub_00332580(ctx, base);
	// 00462A0A push 0x464FF0
	{ uint32_t v = (uint32_t)(0x464FF0u); X86_PUSH32(v); }
	// 00462A0F call 0x00366943
	X86_PUSH32(0x462A14u); sub_00366943(ctx, base);
	// 00462A14 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462A15 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462A00, __imp__sub_00462A00)

X86_FUNC(__imp__sub_00462A20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462A20 fld [0x0056C238]
	{ uint32_t ea = (uint32_t)(0x56C238u); x87_push(ctx, X86_MEMF64(ea)); }
	// 00462A26 fcos
	{ X87_ST(0) = std::cos(X87_ST(0)); ctx.fsw &= ~0x400; }
	// 00462A28 fstp [0x006A9B1C]
	{ uint32_t ea = (uint32_t)(0x6A9B1Cu); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 00462A2E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462A20, __imp__sub_00462A20)

X86_FUNC(__imp__sub_00462A30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462A30 fld [0x0056C238]
	{ uint32_t ea = (uint32_t)(0x56C238u); x87_push(ctx, X86_MEMF64(ea)); }
	// 00462A36 fcos
	{ X87_ST(0) = std::cos(X87_ST(0)); ctx.fsw &= ~0x400; }
	// 00462A38 fstp [0x006A9B20]
	{ uint32_t ea = (uint32_t)(0x6A9B20u); X86_MEMF32(ea) = (float)X87_ST(0); x87_pop(ctx); }
	// 00462A3E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462A30, __imp__sub_00462A30)

X86_FUNC(__imp__sub_00462A40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462A40 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 00462A42 push 0x56C308
	{ uint32_t v = (uint32_t)(0x56C308u); X86_PUSH32(v); }
	// 00462A47 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462A49 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462A4B push 0x20
	{ uint32_t v = (uint32_t)(0x20u); X86_PUSH32(v); }
	// 00462A4D push 0x56C358
	{ uint32_t v = (uint32_t)(0x56C358u); X86_PUSH32(v); }
	// 00462A52 push 0x6A9E6C
	{ uint32_t v = (uint32_t)(0x6A9E6Cu); X86_PUSH32(v); }
	// 00462A57 push 0x56C3B4
	{ uint32_t v = (uint32_t)(0x56C3B4u); X86_PUSH32(v); }
	// 00462A5C mov ecx, 0x6A9B24
	{ ctx.ecx = (uint32_t)(0x6A9B24u); }
	// 00462A61 call 0x00309B50
	X86_PUSH32(0x462A66u); sub_00309B50(ctx, base);
	// 00462A66 push 0x465000
	{ uint32_t v = (uint32_t)(0x465000u); X86_PUSH32(v); }
	// 00462A6B call 0x00366943
	X86_PUSH32(0x462A70u); sub_00366943(ctx, base);
	// 00462A70 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462A71 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462A40, __imp__sub_00462A40)

X86_FUNC(__imp__sub_00462A80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462A80 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00462A82 push 0x56C3CC
	{ uint32_t v = (uint32_t)(0x56C3CCu); X86_PUSH32(v); }
	// 00462A87 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462A89 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462A8B push 0x18
	{ uint32_t v = (uint32_t)(0x18u); X86_PUSH32(v); }
	// 00462A8D push 0x56C3FC
	{ uint32_t v = (uint32_t)(0x56C3FCu); X86_PUSH32(v); }
	// 00462A92 push 0x6A9E6C
	{ uint32_t v = (uint32_t)(0x6A9E6Cu); X86_PUSH32(v); }
	// 00462A97 push 0x56C420
	{ uint32_t v = (uint32_t)(0x56C420u); X86_PUSH32(v); }
	// 00462A9C mov ecx, 0x6A9B4C
	{ ctx.ecx = (uint32_t)(0x6A9B4Cu); }
	// 00462AA1 call 0x00309B50
	X86_PUSH32(0x462AA6u); sub_00309B50(ctx, base);
	// 00462AA6 push 0x465010
	{ uint32_t v = (uint32_t)(0x465010u); X86_PUSH32(v); }
	// 00462AAB call 0x00366943
	X86_PUSH32(0x462AB0u); sub_00366943(ctx, base);
	// 00462AB0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462AB1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462A80, __imp__sub_00462A80)

X86_FUNC(__imp__sub_00462AC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462AC0 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00462AC2 push 0x56C688
	{ uint32_t v = (uint32_t)(0x56C688u); X86_PUSH32(v); }
	// 00462AC7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462AC9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462ACB push 0x30
	{ uint32_t v = (uint32_t)(0x30u); X86_PUSH32(v); }
	// 00462ACD push 0x56C6A8
	{ uint32_t v = (uint32_t)(0x56C6A8u); X86_PUSH32(v); }
	// 00462AD2 push 0x6A9EE4
	{ uint32_t v = (uint32_t)(0x6A9EE4u); X86_PUSH32(v); }
	// 00462AD7 push 0x56C6D8
	{ uint32_t v = (uint32_t)(0x56C6D8u); X86_PUSH32(v); }
	// 00462ADC mov ecx, 0x6A9B74
	{ ctx.ecx = (uint32_t)(0x6A9B74u); }
	// 00462AE1 call 0x00309B50
	X86_PUSH32(0x462AE6u); sub_00309B50(ctx, base);
	// 00462AE6 push 0x465020
	{ uint32_t v = (uint32_t)(0x465020u); X86_PUSH32(v); }
	// 00462AEB call 0x00366943
	X86_PUSH32(0x462AF0u); sub_00366943(ctx, base);
	// 00462AF0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462AF1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462AC0, __imp__sub_00462AC0)

X86_FUNC(__imp__sub_00462AF8) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462AF8 int3
	x86_trap(ctx, 0x462AF8, "int3");
}
X86_WEAK_FUNC(sub_00462AF8, __imp__sub_00462AF8)

X86_FUNC(__imp__sub_00462B00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462B00 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00462B02 push 0x56C6F4
	{ uint32_t v = (uint32_t)(0x56C6F4u); X86_PUSH32(v); }
	// 00462B07 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462B09 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462B0B push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 00462B0D push 0x56C714
	{ uint32_t v = (uint32_t)(0x56C714u); X86_PUSH32(v); }
	// 00462B12 push 0x6A9F0C
	{ uint32_t v = (uint32_t)(0x6A9F0Cu); X86_PUSH32(v); }
	// 00462B17 push 0x56C748
	{ uint32_t v = (uint32_t)(0x56C748u); X86_PUSH32(v); }
	// 00462B1C mov ecx, 0x6A9B9C
	{ ctx.ecx = (uint32_t)(0x6A9B9Cu); }
	// 00462B21 call 0x00309B50
	X86_PUSH32(0x462B26u); sub_00309B50(ctx, base);
	// 00462B26 push 0x465030
	{ uint32_t v = (uint32_t)(0x465030u); X86_PUSH32(v); }
	// 00462B2B call 0x00366943
	X86_PUSH32(0x462B30u); sub_00366943(ctx, base);
	// 00462B30 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462B31 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462B00, __imp__sub_00462B00)

X86_FUNC(__imp__sub_00462B40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462B40 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00462B42 push 0x56C758
	{ uint32_t v = (uint32_t)(0x56C758u); X86_PUSH32(v); }
	// 00462B47 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462B49 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462B4B push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 00462B4D push 0x56C778
	{ uint32_t v = (uint32_t)(0x56C778u); X86_PUSH32(v); }
	// 00462B52 push 0x6A9F0C
	{ uint32_t v = (uint32_t)(0x6A9F0Cu); X86_PUSH32(v); }
	// 00462B57 push 0x56C7A0
	{ uint32_t v = (uint32_t)(0x56C7A0u); X86_PUSH32(v); }
	// 00462B5C mov ecx, 0x6A9BC4
	{ ctx.ecx = (uint32_t)(0x6A9BC4u); }
	// 00462B61 call 0x00309B50
	X86_PUSH32(0x462B66u); sub_00309B50(ctx, base);
	// 00462B66 push 0x465040
	{ uint32_t v = (uint32_t)(0x465040u); X86_PUSH32(v); }
	// 00462B6B call 0x00366943
	X86_PUSH32(0x462B70u); sub_00366943(ctx, base);
	// 00462B70 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462B71 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462B40, __imp__sub_00462B40)

X86_FUNC(__imp__sub_00462B80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462B80 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00462B82 push 0x56C7B8
	{ uint32_t v = (uint32_t)(0x56C7B8u); X86_PUSH32(v); }
	// 00462B87 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462B89 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462B8B push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 00462B8D push 0x56C7F8
	{ uint32_t v = (uint32_t)(0x56C7F8u); X86_PUSH32(v); }
	// 00462B92 push 0x6A9F0C
	{ uint32_t v = (uint32_t)(0x6A9F0Cu); X86_PUSH32(v); }
	// 00462B97 push 0x56C824
	{ uint32_t v = (uint32_t)(0x56C824u); X86_PUSH32(v); }
	// 00462B9C mov ecx, 0x6A9BEC
	{ ctx.ecx = (uint32_t)(0x6A9BECu); }
	// 00462BA1 call 0x00309B50
	X86_PUSH32(0x462BA6u); sub_00309B50(ctx, base);
	// 00462BA6 push 0x465050
	{ uint32_t v = (uint32_t)(0x465050u); X86_PUSH32(v); }
	// 00462BAB call 0x00366943
	X86_PUSH32(0x462BB0u); sub_00366943(ctx, base);
	// 00462BB0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462BB1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462B80, __imp__sub_00462B80)

X86_FUNC(__imp__sub_00462BC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462BC0 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00462BC2 push 0x56C868
	{ uint32_t v = (uint32_t)(0x56C868u); X86_PUSH32(v); }
	// 00462BC7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462BC9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462BCB push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 00462BCD push 0x56C8A8
	{ uint32_t v = (uint32_t)(0x56C8A8u); X86_PUSH32(v); }
	// 00462BD2 push 0x6A9F0C
	{ uint32_t v = (uint32_t)(0x6A9F0Cu); X86_PUSH32(v); }
	// 00462BD7 push 0x56C8C0
	{ uint32_t v = (uint32_t)(0x56C8C0u); X86_PUSH32(v); }
	// 00462BDC mov ecx, 0x6A9C14
	{ ctx.ecx = (uint32_t)(0x6A9C14u); }
	// 00462BE1 call 0x00309B50
	X86_PUSH32(0x462BE6u); sub_00309B50(ctx, base);
	// 00462BE6 push 0x465060
	{ uint32_t v = (uint32_t)(0x465060u); X86_PUSH32(v); }
	// 00462BEB call 0x00366943
	X86_PUSH32(0x462BF0u); sub_00366943(ctx, base);
	// 00462BF0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462BF1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462BC0, __imp__sub_00462BC0)

X86_FUNC(__imp__sub_00462C00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462C00 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00462C02 push 0x56C944
	{ uint32_t v = (uint32_t)(0x56C944u); X86_PUSH32(v); }
	// 00462C07 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462C09 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462C0B push 0xA0
	{ uint32_t v = (uint32_t)(0xA0u); X86_PUSH32(v); }
	// 00462C10 push 0x56C974
	{ uint32_t v = (uint32_t)(0x56C974u); X86_PUSH32(v); }
	// 00462C15 push 0x6A9D7C
	{ uint32_t v = (uint32_t)(0x6A9D7Cu); X86_PUSH32(v); }
	// 00462C1A push 0x56C9B4
	{ uint32_t v = (uint32_t)(0x56C9B4u); X86_PUSH32(v); }
	// 00462C1F mov ecx, 0x6A9C3C
	{ ctx.ecx = (uint32_t)(0x6A9C3Cu); }
	// 00462C24 call 0x00309B50
	X86_PUSH32(0x462C29u); sub_00309B50(ctx, base);
	// 00462C29 push 0x465070
	{ uint32_t v = (uint32_t)(0x465070u); X86_PUSH32(v); }
	// 00462C2E call 0x00366943
	X86_PUSH32(0x462C33u); sub_00366943(ctx, base);
	// 00462C33 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462C34 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462C00, __imp__sub_00462C00)

X86_FUNC(__imp__sub_00462C40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462C40 push 0x09
	{ uint32_t v = (uint32_t)(0x9u); X86_PUSH32(v); }
	// 00462C42 push 0x56CA00
	{ uint32_t v = (uint32_t)(0x56CA00u); X86_PUSH32(v); }
	// 00462C47 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462C49 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462C4B push 0xA0
	{ uint32_t v = (uint32_t)(0xA0u); X86_PUSH32(v); }
	// 00462C50 push 0x56CA90
	{ uint32_t v = (uint32_t)(0x56CA90u); X86_PUSH32(v); }
	// 00462C55 push 0x6A9EE4
	{ uint32_t v = (uint32_t)(0x6A9EE4u); X86_PUSH32(v); }
	// 00462C5A push 0x56CB14
	{ uint32_t v = (uint32_t)(0x56CB14u); X86_PUSH32(v); }
	// 00462C5F mov ecx, 0x6A9C64
	{ ctx.ecx = (uint32_t)(0x6A9C64u); }
	// 00462C64 call 0x00309B50
	X86_PUSH32(0x462C69u); sub_00309B50(ctx, base);
	// 00462C69 push 0x465080
	{ uint32_t v = (uint32_t)(0x465080u); X86_PUSH32(v); }
	// 00462C6E call 0x00366943
	X86_PUSH32(0x462C73u); sub_00366943(ctx, base);
	// 00462C73 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462C74 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462C40, __imp__sub_00462C40)

X86_FUNC(__imp__sub_00462C80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462C80 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00462C82 push 0x56CB58
	{ uint32_t v = (uint32_t)(0x56CB58u); X86_PUSH32(v); }
	// 00462C87 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462C89 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462C8B push 0x40
	{ uint32_t v = (uint32_t)(0x40u); X86_PUSH32(v); }
	// 00462C8D push 0x56CB88
	{ uint32_t v = (uint32_t)(0x56CB88u); X86_PUSH32(v); }
	// 00462C92 push 0x6A9EE4
	{ uint32_t v = (uint32_t)(0x6A9EE4u); X86_PUSH32(v); }
	// 00462C97 push 0x56CBB0
	{ uint32_t v = (uint32_t)(0x56CBB0u); X86_PUSH32(v); }
	// 00462C9C mov ecx, 0x6A9C8C
	{ ctx.ecx = (uint32_t)(0x6A9C8Cu); }
	// 00462CA1 call 0x00309B50
	X86_PUSH32(0x462CA6u); sub_00309B50(ctx, base);
	// 00462CA6 push 0x465090
	{ uint32_t v = (uint32_t)(0x465090u); X86_PUSH32(v); }
	// 00462CAB call 0x00366943
	X86_PUSH32(0x462CB0u); sub_00366943(ctx, base);
	// 00462CB0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462CB1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462C80, __imp__sub_00462C80)

X86_FUNC(__imp__sub_00462CC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462CC0 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 00462CC2 push 0x56CC60
	{ uint32_t v = (uint32_t)(0x56CC60u); X86_PUSH32(v); }
	// 00462CC7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462CC9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462CCB push 0xD0
	{ uint32_t v = (uint32_t)(0xD0u); X86_PUSH32(v); }
	// 00462CD0 push 0x56CCB0
	{ uint32_t v = (uint32_t)(0x56CCB0u); X86_PUSH32(v); }
	// 00462CD5 push 0x6A9D54
	{ uint32_t v = (uint32_t)(0x6A9D54u); X86_PUSH32(v); }
	// 00462CDA push 0x56CD18
	{ uint32_t v = (uint32_t)(0x56CD18u); X86_PUSH32(v); }
	// 00462CDF mov ecx, 0x6A9CB4
	{ ctx.ecx = (uint32_t)(0x6A9CB4u); }
	// 00462CE4 call 0x00309B50
	X86_PUSH32(0x462CE9u); sub_00309B50(ctx, base);
	// 00462CE9 push 0x4650A0
	{ uint32_t v = (uint32_t)(0x4650A0u); X86_PUSH32(v); }
	// 00462CEE call 0x00366943
	X86_PUSH32(0x462CF3u); sub_00366943(ctx, base);
	// 00462CF3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462CF4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462CC0, __imp__sub_00462CC0)

X86_FUNC(__imp__sub_00462D00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462D00 push 0x0D
	{ uint32_t v = (uint32_t)(0xDu); X86_PUSH32(v); }
	// 00462D02 push 0x56CF50
	{ uint32_t v = (uint32_t)(0x56CF50u); X86_PUSH32(v); }
	// 00462D07 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00462D09 push 0x5DB150
	{ uint32_t v = (uint32_t)(0x5DB150u); X86_PUSH32(v); }
	// 00462D0E push 0xC0
	{ uint32_t v = (uint32_t)(0xC0u); X86_PUSH32(v); }
	// 00462D13 push 0x56D020
	{ uint32_t v = (uint32_t)(0x56D020u); X86_PUSH32(v); }
	// 00462D18 push 0x6A9E44
	{ uint32_t v = (uint32_t)(0x6A9E44u); X86_PUSH32(v); }
	// 00462D1D push 0x56D228
	{ uint32_t v = (uint32_t)(0x56D228u); X86_PUSH32(v); }
	// 00462D22 mov ecx, 0x6A9CDC
	{ ctx.ecx = (uint32_t)(0x6A9CDCu); }
	// 00462D27 call 0x00309B50
	X86_PUSH32(0x462D2Cu); sub_00309B50(ctx, base);
	// 00462D2C push 0x4650B0
	{ uint32_t v = (uint32_t)(0x4650B0u); X86_PUSH32(v); }
	// 00462D31 call 0x00366943
	X86_PUSH32(0x462D36u); sub_00366943(ctx, base);
	// 00462D36 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462D37 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462D00, __imp__sub_00462D00)

X86_FUNC(__imp__sub_00462D40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462D40 push 0x1A
	{ uint32_t v = (uint32_t)(0x1Au); X86_PUSH32(v); }
	// 00462D42 push 0x56D2A0
	{ uint32_t v = (uint32_t)(0x56D2A0u); X86_PUSH32(v); }
	// 00462D47 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00462D49 push 0x5DB158
	{ uint32_t v = (uint32_t)(0x5DB158u); X86_PUSH32(v); }
	// 00462D4E push 0x90
	{ uint32_t v = (uint32_t)(0x90u); X86_PUSH32(v); }
	// 00462D53 push 0x56D440
	{ uint32_t v = (uint32_t)(0x56D440u); X86_PUSH32(v); }
	// 00462D58 push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 00462D5D push 0x56D7EC
	{ uint32_t v = (uint32_t)(0x56D7ECu); X86_PUSH32(v); }
	// 00462D62 mov ecx, 0x6A9D04
	{ ctx.ecx = (uint32_t)(0x6A9D04u); }
	// 00462D67 call 0x00309B50
	X86_PUSH32(0x462D6Cu); sub_00309B50(ctx, base);
	// 00462D6C push 0x4650C0
	{ uint32_t v = (uint32_t)(0x4650C0u); X86_PUSH32(v); }
	// 00462D71 call 0x00366943
	X86_PUSH32(0x462D76u); sub_00366943(ctx, base);
	// 00462D76 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462D77 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462D40, __imp__sub_00462D40)

X86_FUNC(__imp__sub_00462D80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462D80 push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 00462D82 push 0x56D820
	{ uint32_t v = (uint32_t)(0x56D820u); X86_PUSH32(v); }
	// 00462D87 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462D89 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462D8B push 0xA0
	{ uint32_t v = (uint32_t)(0xA0u); X86_PUSH32(v); }
	// 00462D90 push 0x56D8E0
	{ uint32_t v = (uint32_t)(0x56D8E0u); X86_PUSH32(v); }
	// 00462D95 push 0x6A9EE4
	{ uint32_t v = (uint32_t)(0x6A9EE4u); X86_PUSH32(v); }
	// 00462D9A push 0x56D9B8
	{ uint32_t v = (uint32_t)(0x56D9B8u); X86_PUSH32(v); }
	// 00462D9F mov ecx, 0x6A9D2C
	{ ctx.ecx = (uint32_t)(0x6A9D2Cu); }
	// 00462DA4 call 0x00309B50
	X86_PUSH32(0x462DA9u); sub_00309B50(ctx, base);
	// 00462DA9 push 0x4650D0
	{ uint32_t v = (uint32_t)(0x4650D0u); X86_PUSH32(v); }
	// 00462DAE call 0x00366943
	X86_PUSH32(0x462DB3u); sub_00366943(ctx, base);
	// 00462DB3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462DB4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462D80, __imp__sub_00462D80)

X86_FUNC(__imp__sub_00462DC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462DC0 push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 00462DC2 push 0x56DA10
	{ uint32_t v = (uint32_t)(0x56DA10u); X86_PUSH32(v); }
	// 00462DC7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462DC9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462DCB push 0x90
	{ uint32_t v = (uint32_t)(0x90u); X86_PUSH32(v); }
	// 00462DD0 push 0x56DAD0
	{ uint32_t v = (uint32_t)(0x56DAD0u); X86_PUSH32(v); }
	// 00462DD5 push 0x6A9EE4
	{ uint32_t v = (uint32_t)(0x6A9EE4u); X86_PUSH32(v); }
	// 00462DDA push 0x56DB90
	{ uint32_t v = (uint32_t)(0x56DB90u); X86_PUSH32(v); }
	// 00462DDF mov ecx, 0x6A9D54
	{ ctx.ecx = (uint32_t)(0x6A9D54u); }
	// 00462DE4 call 0x00309B50
	X86_PUSH32(0x462DE9u); sub_00309B50(ctx, base);
	// 00462DE9 push 0x4650E0
	{ uint32_t v = (uint32_t)(0x4650E0u); X86_PUSH32(v); }
	// 00462DEE call 0x00366943
	X86_PUSH32(0x462DF3u); sub_00366943(ctx, base);
	// 00462DF3 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462DF4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462DC0, __imp__sub_00462DC0)

X86_FUNC(__imp__sub_00462E00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462E00 push 0x0A
	{ uint32_t v = (uint32_t)(0xAu); X86_PUSH32(v); }
	// 00462E02 push 0x56DBD8
	{ uint32_t v = (uint32_t)(0x56DBD8u); X86_PUSH32(v); }
	// 00462E07 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462E09 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462E0B push 0x90
	{ uint32_t v = (uint32_t)(0x90u); X86_PUSH32(v); }
	// 00462E10 push 0x56DC78
	{ uint32_t v = (uint32_t)(0x56DC78u); X86_PUSH32(v); }
	// 00462E15 push 0x6A9EE4
	{ uint32_t v = (uint32_t)(0x6A9EE4u); X86_PUSH32(v); }
	// 00462E1A push 0x56DCE8
	{ uint32_t v = (uint32_t)(0x56DCE8u); X86_PUSH32(v); }
	// 00462E1F mov ecx, 0x6A9D7C
	{ ctx.ecx = (uint32_t)(0x6A9D7Cu); }
	// 00462E24 call 0x00309B50
	X86_PUSH32(0x462E29u); sub_00309B50(ctx, base);
	// 00462E29 push 0x4650F0
	{ uint32_t v = (uint32_t)(0x4650F0u); X86_PUSH32(v); }
	// 00462E2E call 0x00366943
	X86_PUSH32(0x462E33u); sub_00366943(ctx, base);
	// 00462E33 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462E34 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462E00, __imp__sub_00462E00)

X86_FUNC(__imp__sub_00462E40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462E40 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 00462E42 push 0x56DD30
	{ uint32_t v = (uint32_t)(0x56DD30u); X86_PUSH32(v); }
	// 00462E47 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462E49 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462E4B push 0x60
	{ uint32_t v = (uint32_t)(0x60u); X86_PUSH32(v); }
	// 00462E4D push 0x56DD80
	{ uint32_t v = (uint32_t)(0x56DD80u); X86_PUSH32(v); }
	// 00462E52 push 0x6A9EE4
	{ uint32_t v = (uint32_t)(0x6A9EE4u); X86_PUSH32(v); }
	// 00462E57 push 0x56DD98
	{ uint32_t v = (uint32_t)(0x56DD98u); X86_PUSH32(v); }
	// 00462E5C mov ecx, 0x6A9DA4
	{ ctx.ecx = (uint32_t)(0x6A9DA4u); }
	// 00462E61 call 0x00309B50
	X86_PUSH32(0x462E66u); sub_00309B50(ctx, base);
	// 00462E66 push 0x465100
	{ uint32_t v = (uint32_t)(0x465100u); X86_PUSH32(v); }
	// 00462E6B call 0x00366943
	X86_PUSH32(0x462E70u); sub_00366943(ctx, base);
	// 00462E70 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462E71 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462E40, __imp__sub_00462E40)

X86_FUNC(__imp__sub_00462E80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462E80 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00462E82 push 0x56DE20
	{ uint32_t v = (uint32_t)(0x56DE20u); X86_PUSH32(v); }
	// 00462E87 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00462E89 push 0x5DB15C
	{ uint32_t v = (uint32_t)(0x5DB15Cu); X86_PUSH32(v); }
	// 00462E8E push 0xA0
	{ uint32_t v = (uint32_t)(0xA0u); X86_PUSH32(v); }
	// 00462E93 push 0x56DE60
	{ uint32_t v = (uint32_t)(0x56DE60u); X86_PUSH32(v); }
	// 00462E98 push 0x6A9EE4
	{ uint32_t v = (uint32_t)(0x6A9EE4u); X86_PUSH32(v); }
	// 00462E9D push 0x56DF64
	{ uint32_t v = (uint32_t)(0x56DF64u); X86_PUSH32(v); }
	// 00462EA2 mov ecx, 0x6A9DCC
	{ ctx.ecx = (uint32_t)(0x6A9DCCu); }
	// 00462EA7 call 0x00309B50
	X86_PUSH32(0x462EACu); sub_00309B50(ctx, base);
	// 00462EAC push 0x465110
	{ uint32_t v = (uint32_t)(0x465110u); X86_PUSH32(v); }
	// 00462EB1 call 0x00366943
	X86_PUSH32(0x462EB6u); sub_00366943(ctx, base);
	// 00462EB6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462EB7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462E80, __imp__sub_00462E80)

X86_FUNC(__imp__sub_00462EC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462EC0 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00462EC2 push 0x56DFAC
	{ uint32_t v = (uint32_t)(0x56DFACu); X86_PUSH32(v); }
	// 00462EC7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462EC9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462ECB push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 00462ECD push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462ECF push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462ED1 push 0x56E0B4
	{ uint32_t v = (uint32_t)(0x56E0B4u); X86_PUSH32(v); }
	// 00462ED6 mov ecx, 0x6A9DF4
	{ ctx.ecx = (uint32_t)(0x6A9DF4u); }
	// 00462EDB call 0x00309B50
	X86_PUSH32(0x462EE0u); sub_00309B50(ctx, base);
	// 00462EE0 push 0x465130
	{ uint32_t v = (uint32_t)(0x465130u); X86_PUSH32(v); }
	// 00462EE5 call 0x00366943
	X86_PUSH32(0x462EEAu); sub_00366943(ctx, base);
	// 00462EEA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462EEB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462EC0, __imp__sub_00462EC0)

X86_FUNC(__imp__sub_00462EF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462EF0 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00462EF2 push 0x56DFD0
	{ uint32_t v = (uint32_t)(0x56DFD0u); X86_PUSH32(v); }
	// 00462EF7 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00462EF9 push 0x5DB160
	{ uint32_t v = (uint32_t)(0x5DB160u); X86_PUSH32(v); }
	// 00462EFE push 0x18
	{ uint32_t v = (uint32_t)(0x18u); X86_PUSH32(v); }
	// 00462F00 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462F02 push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 00462F07 push 0x56E0C0
	{ uint32_t v = (uint32_t)(0x56E0C0u); X86_PUSH32(v); }
	// 00462F0C mov ecx, 0x6A9E1C
	{ ctx.ecx = (uint32_t)(0x6A9E1Cu); }
	// 00462F11 call 0x00309B50
	X86_PUSH32(0x462F16u); sub_00309B50(ctx, base);
	// 00462F16 push 0x465120
	{ uint32_t v = (uint32_t)(0x465120u); X86_PUSH32(v); }
	// 00462F1B call 0x00366943
	X86_PUSH32(0x462F20u); sub_00366943(ctx, base);
	// 00462F20 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462F21 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462EF0, __imp__sub_00462EF0)

X86_FUNC(__imp__sub_00462F30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462F30 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00462F32 push 0x56E104
	{ uint32_t v = (uint32_t)(0x56E104u); X86_PUSH32(v); }
	// 00462F37 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00462F39 push 0x5DB164
	{ uint32_t v = (uint32_t)(0x5DB164u); X86_PUSH32(v); }
	// 00462F3E push 0x1C
	{ uint32_t v = (uint32_t)(0x1Cu); X86_PUSH32(v); }
	// 00462F40 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462F42 push 0x6A9E1C
	{ uint32_t v = (uint32_t)(0x6A9E1Cu); X86_PUSH32(v); }
	// 00462F47 push 0x56E1C4
	{ uint32_t v = (uint32_t)(0x56E1C4u); X86_PUSH32(v); }
	// 00462F4C mov ecx, 0x6A9E44
	{ ctx.ecx = (uint32_t)(0x6A9E44u); }
	// 00462F51 call 0x00309B50
	X86_PUSH32(0x462F56u); sub_00309B50(ctx, base);
	// 00462F56 push 0x465140
	{ uint32_t v = (uint32_t)(0x465140u); X86_PUSH32(v); }
	// 00462F5B call 0x00366943
	X86_PUSH32(0x462F60u); sub_00366943(ctx, base);
	// 00462F60 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462F61 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462F30, __imp__sub_00462F30)

X86_FUNC(__imp__sub_00462F70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462F70 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00462F72 push 0x56E1D0
	{ uint32_t v = (uint32_t)(0x56E1D0u); X86_PUSH32(v); }
	// 00462F77 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462F79 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462F7B push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 00462F7D push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462F7F push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 00462F84 push 0x56E210
	{ uint32_t v = (uint32_t)(0x56E210u); X86_PUSH32(v); }
	// 00462F89 mov ecx, 0x6A9E6C
	{ ctx.ecx = (uint32_t)(0x6A9E6Cu); }
	// 00462F8E call 0x00309B50
	X86_PUSH32(0x462F93u); sub_00309B50(ctx, base);
	// 00462F93 push 0x465150
	{ uint32_t v = (uint32_t)(0x465150u); X86_PUSH32(v); }
	// 00462F98 call 0x00366943
	X86_PUSH32(0x462F9Du); sub_00366943(ctx, base);
	// 00462F9D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462F9E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462F70, __imp__sub_00462F70)

X86_FUNC(__imp__sub_00462FA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462FA0 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00462FA2 push 0x56E2F4
	{ uint32_t v = (uint32_t)(0x56E2F4u); X86_PUSH32(v); }
	// 00462FA7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462FA9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462FAB push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00462FAD push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462FAF push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 00462FB4 push 0x56E304
	{ uint32_t v = (uint32_t)(0x56E304u); X86_PUSH32(v); }
	// 00462FB9 mov ecx, 0x6A9E94
	{ ctx.ecx = (uint32_t)(0x6A9E94u); }
	// 00462FBE call 0x00309B50
	X86_PUSH32(0x462FC3u); sub_00309B50(ctx, base);
	// 00462FC3 push 0x465160
	{ uint32_t v = (uint32_t)(0x465160u); X86_PUSH32(v); }
	// 00462FC8 call 0x00366943
	X86_PUSH32(0x462FCDu); sub_00366943(ctx, base);
	// 00462FCD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462FCE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462FA0, __imp__sub_00462FA0)

X86_FUNC(__imp__sub_00462FD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00462FD0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462FD2 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462FD4 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462FD6 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462FD8 push 0x18
	{ uint32_t v = (uint32_t)(0x18u); X86_PUSH32(v); }
	// 00462FDA push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00462FDC push 0x6A9E1C
	{ uint32_t v = (uint32_t)(0x6A9E1Cu); X86_PUSH32(v); }
	// 00462FE1 push 0x56E310
	{ uint32_t v = (uint32_t)(0x56E310u); X86_PUSH32(v); }
	// 00462FE6 mov ecx, 0x6A9EBC
	{ ctx.ecx = (uint32_t)(0x6A9EBCu); }
	// 00462FEB call 0x00309B50
	X86_PUSH32(0x462FF0u); sub_00309B50(ctx, base);
	// 00462FF0 push 0x465170
	{ uint32_t v = (uint32_t)(0x465170u); X86_PUSH32(v); }
	// 00462FF5 call 0x00366943
	X86_PUSH32(0x462FFAu); sub_00366943(ctx, base);
	// 00462FFA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00462FFB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00462FD0, __imp__sub_00462FD0)

X86_FUNC(__imp__sub_00463000) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463000 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463002 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463004 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463006 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463008 push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 0046300A push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046300C push 0x6A9E6C
	{ uint32_t v = (uint32_t)(0x6A9E6Cu); X86_PUSH32(v); }
	// 00463011 push 0x56E31C
	{ uint32_t v = (uint32_t)(0x56E31Cu); X86_PUSH32(v); }
	// 00463016 mov ecx, 0x6A9EE4
	{ ctx.ecx = (uint32_t)(0x6A9EE4u); }
	// 0046301B call 0x00309B50
	X86_PUSH32(0x463020u); sub_00309B50(ctx, base);
	// 00463020 push 0x465180
	{ uint32_t v = (uint32_t)(0x465180u); X86_PUSH32(v); }
	// 00463025 call 0x00366943
	X86_PUSH32(0x46302Au); sub_00366943(ctx, base);
	// 0046302A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046302B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463000, __imp__sub_00463000)

X86_FUNC(__imp__sub_00463030) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463030 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463032 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463034 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463036 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463038 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0046303A push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046303C push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 00463041 push 0x56E330
	{ uint32_t v = (uint32_t)(0x56E330u); X86_PUSH32(v); }
	// 00463046 mov ecx, 0x6A9F0C
	{ ctx.ecx = (uint32_t)(0x6A9F0Cu); }
	// 0046304B call 0x00309B50
	X86_PUSH32(0x463050u); sub_00309B50(ctx, base);
	// 00463050 push 0x465190
	{ uint32_t v = (uint32_t)(0x465190u); X86_PUSH32(v); }
	// 00463055 call 0x00366943
	X86_PUSH32(0x46305Au); sub_00366943(ctx, base);
	// 0046305A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046305B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463030, __imp__sub_00463030)

X86_FUNC(__imp__sub_00463060) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463060 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00463062 push 0x56E344
	{ uint32_t v = (uint32_t)(0x56E344u); X86_PUSH32(v); }
	// 00463067 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463069 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046306B push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 0046306D push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046306F push 0x6A9E94
	{ uint32_t v = (uint32_t)(0x6A9E94u); X86_PUSH32(v); }
	// 00463074 push 0x56E35C
	{ uint32_t v = (uint32_t)(0x56E35Cu); X86_PUSH32(v); }
	// 00463079 mov ecx, 0x6A9F34
	{ ctx.ecx = (uint32_t)(0x6A9F34u); }
	// 0046307E call 0x00309B50
	X86_PUSH32(0x463083u); sub_00309B50(ctx, base);
	// 00463083 push 0x4651A0
	{ uint32_t v = (uint32_t)(0x4651A0u); X86_PUSH32(v); }
	// 00463088 call 0x00366943
	X86_PUSH32(0x46308Du); sub_00366943(ctx, base);
	// 0046308D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046308E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463060, __imp__sub_00463060)

X86_FUNC(__imp__sub_00463090) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463090 mov ecx, 0x6A9F5C
	{ ctx.ecx = (uint32_t)(0x6A9F5Cu); }
	// 00463095 call 0x0034C390
	X86_PUSH32(0x46309Au); sub_0034C390(ctx, base);
	// 0046309A push 0x4651B0
	{ uint32_t v = (uint32_t)(0x4651B0u); X86_PUSH32(v); }
	// 0046309F call 0x00366943
	X86_PUSH32(0x4630A4u); sub_00366943(ctx, base);
	// 004630A4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004630A5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463090, __imp__sub_00463090)

X86_FUNC(__imp__sub_004630B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004630B0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004630B2 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004630B4 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004630B6 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004630B8 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 004630BA push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004630BC push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 004630C1 push 0x56E5B4
	{ uint32_t v = (uint32_t)(0x56E5B4u); X86_PUSH32(v); }
	// 004630C6 mov ecx, 0x6A9F64
	{ ctx.ecx = (uint32_t)(0x6A9F64u); }
	// 004630CB call 0x00309B50
	X86_PUSH32(0x4630D0u); sub_00309B50(ctx, base);
	// 004630D0 push 0x4651C0
	{ uint32_t v = (uint32_t)(0x4651C0u); X86_PUSH32(v); }
	// 004630D5 call 0x00366943
	X86_PUSH32(0x4630DAu); sub_00366943(ctx, base);
	// 004630DA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004630DB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004630B0, __imp__sub_004630B0)

X86_FUNC(__imp__sub_004630E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004630E0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004630E2 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004630E4 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004630E6 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004630E8 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 004630EA push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004630EC push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 004630F1 push 0x56E614
	{ uint32_t v = (uint32_t)(0x56E614u); X86_PUSH32(v); }
	// 004630F6 mov ecx, 0x6A9F8C
	{ ctx.ecx = (uint32_t)(0x6A9F8Cu); }
	// 004630FB call 0x00309B50
	X86_PUSH32(0x463100u); sub_00309B50(ctx, base);
	// 00463100 push 0x4651D0
	{ uint32_t v = (uint32_t)(0x4651D0u); X86_PUSH32(v); }
	// 00463105 call 0x00366943
	X86_PUSH32(0x46310Au); sub_00366943(ctx, base);
	// 0046310A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046310B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004630E0, __imp__sub_004630E0)

X86_FUNC(__imp__sub_00463110) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463110 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463112 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463114 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463116 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463118 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0046311A push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046311C push 0x6A9F8C
	{ uint32_t v = (uint32_t)(0x6A9F8Cu); X86_PUSH32(v); }
	// 00463121 push 0x56E628
	{ uint32_t v = (uint32_t)(0x56E628u); X86_PUSH32(v); }
	// 00463126 mov ecx, 0x6A9FB4
	{ ctx.ecx = (uint32_t)(0x6A9FB4u); }
	// 0046312B call 0x00309B50
	X86_PUSH32(0x463130u); sub_00309B50(ctx, base);
	// 00463130 push 0x4651E0
	{ uint32_t v = (uint32_t)(0x4651E0u); X86_PUSH32(v); }
	// 00463135 call 0x00366943
	X86_PUSH32(0x46313Au); sub_00366943(ctx, base);
	// 0046313A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046313B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463110, __imp__sub_00463110)

X86_FUNC(__imp__sub_00463140) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463140 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463142 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463144 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463146 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463148 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0046314A push 0x56E640
	{ uint32_t v = (uint32_t)(0x56E640u); X86_PUSH32(v); }
	// 0046314F push 0x6A9FB4
	{ uint32_t v = (uint32_t)(0x6A9FB4u); X86_PUSH32(v); }
	// 00463154 push 0x56E658
	{ uint32_t v = (uint32_t)(0x56E658u); X86_PUSH32(v); }
	// 00463159 mov ecx, 0x6A9FDC
	{ ctx.ecx = (uint32_t)(0x6A9FDCu); }
	// 0046315E call 0x00309B50
	X86_PUSH32(0x463163u); sub_00309B50(ctx, base);
	// 00463163 push 0x4651F0
	{ uint32_t v = (uint32_t)(0x4651F0u); X86_PUSH32(v); }
	// 00463168 call 0x00366943
	X86_PUSH32(0x46316Du); sub_00366943(ctx, base);
	// 0046316D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046316E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463140, __imp__sub_00463140)

X86_FUNC(__imp__sub_00463170) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463170 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 00463172 push 0x56E678
	{ uint32_t v = (uint32_t)(0x56E678u); X86_PUSH32(v); }
	// 00463177 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463179 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046317B push 0x14
	{ uint32_t v = (uint32_t)(0x14u); X86_PUSH32(v); }
	// 0046317D push 0x56E6C8
	{ uint32_t v = (uint32_t)(0x56E6C8u); X86_PUSH32(v); }
	// 00463182 push 0x6A9FB4
	{ uint32_t v = (uint32_t)(0x6A9FB4u); X86_PUSH32(v); }
	// 00463187 push 0x56E758
	{ uint32_t v = (uint32_t)(0x56E758u); X86_PUSH32(v); }
	// 0046318C mov ecx, 0x6AA004
	{ ctx.ecx = (uint32_t)(0x6AA004u); }
	// 00463191 call 0x00309B50
	X86_PUSH32(0x463196u); sub_00309B50(ctx, base);
	// 00463196 push 0x465200
	{ uint32_t v = (uint32_t)(0x465200u); X86_PUSH32(v); }
	// 0046319B call 0x00366943
	X86_PUSH32(0x4631A0u); sub_00366943(ctx, base);
	// 004631A0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004631A1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463170, __imp__sub_00463170)

X86_FUNC(__imp__sub_004631B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004631B0 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 004631B2 push 0x56E7E0
	{ uint32_t v = (uint32_t)(0x56E7E0u); X86_PUSH32(v); }
	// 004631B7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004631B9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004631BB push 0x30
	{ uint32_t v = (uint32_t)(0x30u); X86_PUSH32(v); }
	// 004631BD push 0x56E820
	{ uint32_t v = (uint32_t)(0x56E820u); X86_PUSH32(v); }
	// 004631C2 push 0x6A9F34
	{ uint32_t v = (uint32_t)(0x6A9F34u); X86_PUSH32(v); }
	// 004631C7 push 0x56E85C
	{ uint32_t v = (uint32_t)(0x56E85Cu); X86_PUSH32(v); }
	// 004631CC mov ecx, 0x6AA040
	{ ctx.ecx = (uint32_t)(0x6AA040u); }
	// 004631D1 call 0x00309B50
	X86_PUSH32(0x4631D6u); sub_00309B50(ctx, base);
	// 004631D6 push 0x465210
	{ uint32_t v = (uint32_t)(0x465210u); X86_PUSH32(v); }
	// 004631DB call 0x00366943
	X86_PUSH32(0x4631E0u); sub_00366943(ctx, base);
	// 004631E0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004631E1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004631B0, __imp__sub_004631B0)

X86_FUNC(__imp__sub_004631F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004631F0 mov eax, [0x006A9664]
	{ uint32_t ea = (uint32_t)(0x6A9664u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004631F5 mov [0x005DB1C4], eax
	{ uint32_t ea = (uint32_t)(0x5DB1C4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004631FA mov dword ptr [0x006A9664], 0x5DB1C0
	{ uint32_t ea = (uint32_t)(0x6A9664u); X86_MEM32(ea) = (uint32_t)(0x5DB1C0u); }
	// 00463204 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004631F0, __imp__sub_004631F0)

X86_FUNC(__imp__sub_00463210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463210 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00463212 push 0x56E9A8
	{ uint32_t v = (uint32_t)(0x56E9A8u); X86_PUSH32(v); }
	// 00463217 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463219 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046321B push 0x18
	{ uint32_t v = (uint32_t)(0x18u); X86_PUSH32(v); }
	// 0046321D push 0x56E9C8
	{ uint32_t v = (uint32_t)(0x56E9C8u); X86_PUSH32(v); }
	// 00463222 push 0x6A96B8
	{ uint32_t v = (uint32_t)(0x6A96B8u); X86_PUSH32(v); }
	// 00463227 push 0x56EA00
	{ uint32_t v = (uint32_t)(0x56EA00u); X86_PUSH32(v); }
	// 0046322C mov ecx, 0x6AA0FC
	{ ctx.ecx = (uint32_t)(0x6AA0FCu); }
	// 00463231 call 0x00309B50
	X86_PUSH32(0x463236u); sub_00309B50(ctx, base);
	// 00463236 push 0x465220
	{ uint32_t v = (uint32_t)(0x465220u); X86_PUSH32(v); }
	// 0046323B call 0x00366943
	X86_PUSH32(0x463240u); sub_00366943(ctx, base);
	// 00463240 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463241 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463210, __imp__sub_00463210)

X86_FUNC(__imp__sub_00463250) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463250 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00463252 push 0x56EA20
	{ uint32_t v = (uint32_t)(0x56EA20u); X86_PUSH32(v); }
	// 00463257 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463259 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046325B push 0x14
	{ uint32_t v = (uint32_t)(0x14u); X86_PUSH32(v); }
	// 0046325D push 0x56EA50
	{ uint32_t v = (uint32_t)(0x56EA50u); X86_PUSH32(v); }
	// 00463262 push 0x6A9780
	{ uint32_t v = (uint32_t)(0x6A9780u); X86_PUSH32(v); }
	// 00463267 push 0x56EA94
	{ uint32_t v = (uint32_t)(0x56EA94u); X86_PUSH32(v); }
	// 0046326C mov ecx, 0x6AA124
	{ ctx.ecx = (uint32_t)(0x6AA124u); }
	// 00463271 call 0x00309B50
	X86_PUSH32(0x463276u); sub_00309B50(ctx, base);
	// 00463276 push 0x465230
	{ uint32_t v = (uint32_t)(0x465230u); X86_PUSH32(v); }
	// 0046327B call 0x00366943
	X86_PUSH32(0x463280u); sub_00366943(ctx, base);
	// 00463280 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463281 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463250, __imp__sub_00463250)

X86_FUNC(__imp__sub_00463290) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463290 push 0x07
	{ uint32_t v = (uint32_t)(0x7u); X86_PUSH32(v); }
	// 00463292 push 0x56EB18
	{ uint32_t v = (uint32_t)(0x56EB18u); X86_PUSH32(v); }
	// 00463297 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463299 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046329B push 0x40
	{ uint32_t v = (uint32_t)(0x40u); X86_PUSH32(v); }
	// 0046329D push 0x56EB88
	{ uint32_t v = (uint32_t)(0x56EB88u); X86_PUSH32(v); }
	// 004632A2 push 0x6AAFF8
	{ uint32_t v = (uint32_t)(0x6AAFF8u); X86_PUSH32(v); }
	// 004632A7 push 0x56EBE4
	{ uint32_t v = (uint32_t)(0x56EBE4u); X86_PUSH32(v); }
	// 004632AC mov ecx, 0x6AA14C
	{ ctx.ecx = (uint32_t)(0x6AA14Cu); }
	// 004632B1 call 0x00309B50
	X86_PUSH32(0x4632B6u); sub_00309B50(ctx, base);
	// 004632B6 push 0x465240
	{ uint32_t v = (uint32_t)(0x465240u); X86_PUSH32(v); }
	// 004632BB call 0x00366943
	X86_PUSH32(0x4632C0u); sub_00366943(ctx, base);
	// 004632C0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004632C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463290, __imp__sub_00463290)

X86_FUNC(__imp__sub_004632D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004632D0 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 004632D2 push 0x56EC00
	{ uint32_t v = (uint32_t)(0x56EC00u); X86_PUSH32(v); }
	// 004632D7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004632D9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004632DB push 0x40
	{ uint32_t v = (uint32_t)(0x40u); X86_PUSH32(v); }
	// 004632DD push 0x56EC40
	{ uint32_t v = (uint32_t)(0x56EC40u); X86_PUSH32(v); }
	// 004632E2 push 0x6AAFF8
	{ uint32_t v = (uint32_t)(0x6AAFF8u); X86_PUSH32(v); }
	// 004632E7 push 0x56EC58
	{ uint32_t v = (uint32_t)(0x56EC58u); X86_PUSH32(v); }
	// 004632EC mov ecx, 0x6AA174
	{ ctx.ecx = (uint32_t)(0x6AA174u); }
	// 004632F1 call 0x00309B50
	X86_PUSH32(0x4632F6u); sub_00309B50(ctx, base);
	// 004632F6 push 0x465250
	{ uint32_t v = (uint32_t)(0x465250u); X86_PUSH32(v); }
	// 004632FB call 0x00366943
	X86_PUSH32(0x463300u); sub_00366943(ctx, base);
	// 00463300 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463301 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004632D0, __imp__sub_004632D0)

X86_FUNC(__imp__sub_00463310) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463310 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00463312 push 0x56EC6C
	{ uint32_t v = (uint32_t)(0x56EC6Cu); X86_PUSH32(v); }
	// 00463317 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463319 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046331B push 0x30
	{ uint32_t v = (uint32_t)(0x30u); X86_PUSH32(v); }
	// 0046331D push 0x56EC9C
	{ uint32_t v = (uint32_t)(0x56EC9Cu); X86_PUSH32(v); }
	// 00463322 push 0x6AAFF8
	{ uint32_t v = (uint32_t)(0x6AAFF8u); X86_PUSH32(v); }
	// 00463327 push 0x56ECB4
	{ uint32_t v = (uint32_t)(0x56ECB4u); X86_PUSH32(v); }
	// 0046332C mov ecx, 0x6AA19C
	{ ctx.ecx = (uint32_t)(0x6AA19Cu); }
	// 00463331 call 0x00309B50
	X86_PUSH32(0x463336u); sub_00309B50(ctx, base);
	// 00463336 push 0x465260
	{ uint32_t v = (uint32_t)(0x465260u); X86_PUSH32(v); }
	// 0046333B call 0x00366943
	X86_PUSH32(0x463340u); sub_00366943(ctx, base);
	// 00463340 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463341 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463310, __imp__sub_00463310)

X86_FUNC(__imp__sub_00463350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463350 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00463352 push 0x56ECD0
	{ uint32_t v = (uint32_t)(0x56ECD0u); X86_PUSH32(v); }
	// 00463357 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463359 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046335B push 0x18
	{ uint32_t v = (uint32_t)(0x18u); X86_PUSH32(v); }
	// 0046335D push 0x56ECF0
	{ uint32_t v = (uint32_t)(0x56ECF0u); X86_PUSH32(v); }
	// 00463362 push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 00463367 push 0x56ED38
	{ uint32_t v = (uint32_t)(0x56ED38u); X86_PUSH32(v); }
	// 0046336C mov ecx, 0x6AA1C4
	{ ctx.ecx = (uint32_t)(0x6AA1C4u); }
	// 00463371 call 0x00309B50
	X86_PUSH32(0x463376u); sub_00309B50(ctx, base);
	// 00463376 push 0x465270
	{ uint32_t v = (uint32_t)(0x465270u); X86_PUSH32(v); }
	// 0046337B call 0x00366943
	X86_PUSH32(0x463380u); sub_00366943(ctx, base);
	// 00463380 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463381 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463350, __imp__sub_00463350)

X86_FUNC(__imp__sub_00463390) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463390 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00463392 push 0x56ED5C
	{ uint32_t v = (uint32_t)(0x56ED5Cu); X86_PUSH32(v); }
	// 00463397 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463399 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046339B push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 0046339D push 0x56ED6C
	{ uint32_t v = (uint32_t)(0x56ED6Cu); X86_PUSH32(v); }
	// 004633A2 push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 004633A7 push 0x56EDA0
	{ uint32_t v = (uint32_t)(0x56EDA0u); X86_PUSH32(v); }
	// 004633AC mov ecx, 0x6AA1EC
	{ ctx.ecx = (uint32_t)(0x6AA1ECu); }
	// 004633B1 call 0x00309B50
	X86_PUSH32(0x4633B6u); sub_00309B50(ctx, base);
	// 004633B6 push 0x465280
	{ uint32_t v = (uint32_t)(0x465280u); X86_PUSH32(v); }
	// 004633BB call 0x00366943
	X86_PUSH32(0x4633C0u); sub_00366943(ctx, base);
	// 004633C0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004633C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463390, __imp__sub_00463390)

X86_FUNC(__imp__sub_004633D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004633D0 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 004633D2 push 0x56EDC4
	{ uint32_t v = (uint32_t)(0x56EDC4u); X86_PUSH32(v); }
	// 004633D7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004633D9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004633DB push 0x40
	{ uint32_t v = (uint32_t)(0x40u); X86_PUSH32(v); }
	// 004633DD push 0x56EDD4
	{ uint32_t v = (uint32_t)(0x56EDD4u); X86_PUSH32(v); }
	// 004633E2 push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 004633E7 push 0x56EE00
	{ uint32_t v = (uint32_t)(0x56EE00u); X86_PUSH32(v); }
	// 004633EC mov ecx, 0x6AA214
	{ ctx.ecx = (uint32_t)(0x6AA214u); }
	// 004633F1 call 0x00309B50
	X86_PUSH32(0x4633F6u); sub_00309B50(ctx, base);
	// 004633F6 push 0x465290
	{ uint32_t v = (uint32_t)(0x465290u); X86_PUSH32(v); }
	// 004633FB call 0x00366943
	X86_PUSH32(0x463400u); sub_00366943(ctx, base);
	// 00463400 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463401 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004633D0, __imp__sub_004633D0)

X86_FUNC(__imp__sub_00463410) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463410 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00463412 push 0x56EEA8
	{ uint32_t v = (uint32_t)(0x56EEA8u); X86_PUSH32(v); }
	// 00463417 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463419 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046341B push 0x84
	{ uint32_t v = (uint32_t)(0x84u); X86_PUSH32(v); }
	// 00463420 push 0x56EEC8
	{ uint32_t v = (uint32_t)(0x56EEC8u); X86_PUSH32(v); }
	// 00463425 push 0x6A96B8
	{ uint32_t v = (uint32_t)(0x6A96B8u); X86_PUSH32(v); }
	// 0046342A push 0x56EF08
	{ uint32_t v = (uint32_t)(0x56EF08u); X86_PUSH32(v); }
	// 0046342F mov ecx, 0x6AA23C
	{ ctx.ecx = (uint32_t)(0x6AA23Cu); }
	// 00463434 call 0x00309B50
	X86_PUSH32(0x463439u); sub_00309B50(ctx, base);
	// 00463439 push 0x4652A0
	{ uint32_t v = (uint32_t)(0x4652A0u); X86_PUSH32(v); }
	// 0046343E call 0x00366943
	X86_PUSH32(0x463443u); sub_00366943(ctx, base);
	// 00463443 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463444 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463410, __imp__sub_00463410)

X86_FUNC(__imp__sub_00463450) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463450 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00463452 push 0x56EF24
	{ uint32_t v = (uint32_t)(0x56EF24u); X86_PUSH32(v); }
	// 00463457 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463459 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046345B push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 0046345D push 0x56EF34
	{ uint32_t v = (uint32_t)(0x56EF34u); X86_PUSH32(v); }
	// 00463462 push 0x6A96B8
	{ uint32_t v = (uint32_t)(0x6A96B8u); X86_PUSH32(v); }
	// 00463467 push 0x56EF60
	{ uint32_t v = (uint32_t)(0x56EF60u); X86_PUSH32(v); }
	// 0046346C mov ecx, 0x6AA264
	{ ctx.ecx = (uint32_t)(0x6AA264u); }
	// 00463471 call 0x00309B50
	X86_PUSH32(0x463476u); sub_00309B50(ctx, base);
	// 00463476 push 0x4652B0
	{ uint32_t v = (uint32_t)(0x4652B0u); X86_PUSH32(v); }
	// 0046347B call 0x00366943
	X86_PUSH32(0x463480u); sub_00366943(ctx, base);
	// 00463480 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463481 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463450, __imp__sub_00463450)

X86_FUNC(__imp__sub_00463490) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463490 mov eax, [0x006A9664]
	{ uint32_t ea = (uint32_t)(0x6A9664u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00463495 mov [0x005DB1D0], eax
	{ uint32_t ea = (uint32_t)(0x5DB1D0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0046349A mov dword ptr [0x006A9664], 0x5DB1CC
	{ uint32_t ea = (uint32_t)(0x6A9664u); X86_MEM32(ea) = (uint32_t)(0x5DB1CCu); }
	// 004634A4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463490, __imp__sub_00463490)

X86_FUNC(__imp__sub_004634B0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004634B0 mov eax, [0x006A9664]
	{ uint32_t ea = (uint32_t)(0x6A9664u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004634B5 mov [0x005DB1E0], eax
	{ uint32_t ea = (uint32_t)(0x5DB1E0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004634BA mov dword ptr [0x006A9664], 0x5DB1DC
	{ uint32_t ea = (uint32_t)(0x6A9664u); X86_MEM32(ea) = (uint32_t)(0x5DB1DCu); }
	// 004634C4 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004634B0, __imp__sub_004634B0)

X86_FUNC(__imp__sub_004634D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004634D0 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 004634D2 push 0x56F0F0
	{ uint32_t v = (uint32_t)(0x56F0F0u); X86_PUSH32(v); }
	// 004634D7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004634D9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004634DB push 0x30
	{ uint32_t v = (uint32_t)(0x30u); X86_PUSH32(v); }
	// 004634DD push 0x56F140
	{ uint32_t v = (uint32_t)(0x56F140u); X86_PUSH32(v); }
	// 004634E2 push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 004634E7 push 0x56F1A4
	{ uint32_t v = (uint32_t)(0x56F1A4u); X86_PUSH32(v); }
	// 004634EC mov ecx, 0x6AA298
	{ ctx.ecx = (uint32_t)(0x6AA298u); }
	// 004634F1 call 0x00309B50
	X86_PUSH32(0x4634F6u); sub_00309B50(ctx, base);
	// 004634F6 push 0x4652C0
	{ uint32_t v = (uint32_t)(0x4652C0u); X86_PUSH32(v); }
	// 004634FB call 0x00366943
	X86_PUSH32(0x463500u); sub_00366943(ctx, base);
	// 00463500 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463501 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004634D0, __imp__sub_004634D0)

X86_FUNC(__imp__sub_00463510) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463510 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00463512 push 0x56F1B8
	{ uint32_t v = (uint32_t)(0x56F1B8u); X86_PUSH32(v); }
	// 00463517 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463519 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046351B push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 0046351D push 0x56F1F8
	{ uint32_t v = (uint32_t)(0x56F1F8u); X86_PUSH32(v); }
	// 00463522 push 0x6AA4A0
	{ uint32_t v = (uint32_t)(0x6AA4A0u); X86_PUSH32(v); }
	// 00463527 push 0x56F24C
	{ uint32_t v = (uint32_t)(0x56F24Cu); X86_PUSH32(v); }
	// 0046352C mov ecx, 0x6AA2C0
	{ ctx.ecx = (uint32_t)(0x6AA2C0u); }
	// 00463531 call 0x00309B50
	X86_PUSH32(0x463536u); sub_00309B50(ctx, base);
	// 00463536 push 0x4652D0
	{ uint32_t v = (uint32_t)(0x4652D0u); X86_PUSH32(v); }
	// 0046353B call 0x00366943
	X86_PUSH32(0x463540u); sub_00366943(ctx, base);
	// 00463540 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463541 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463510, __imp__sub_00463510)

X86_FUNC(__imp__sub_00463550) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463550 push 0x0B
	{ uint32_t v = (uint32_t)(0xBu); X86_PUSH32(v); }
	// 00463552 push 0x56F268
	{ uint32_t v = (uint32_t)(0x56F268u); X86_PUSH32(v); }
	// 00463557 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463559 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046355B push 0x5C
	{ uint32_t v = (uint32_t)(0x5Cu); X86_PUSH32(v); }
	// 0046355D push 0x56F318
	{ uint32_t v = (uint32_t)(0x56F318u); X86_PUSH32(v); }
	// 00463562 push 0x6AA478
	{ uint32_t v = (uint32_t)(0x6AA478u); X86_PUSH32(v); }
	// 00463567 push 0x56F42C
	{ uint32_t v = (uint32_t)(0x56F42Cu); X86_PUSH32(v); }
	// 0046356C mov ecx, 0x6AA2E8
	{ ctx.ecx = (uint32_t)(0x6AA2E8u); }
	// 00463571 call 0x00309B50
	X86_PUSH32(0x463576u); sub_00309B50(ctx, base);
	// 00463576 push 0x4652E0
	{ uint32_t v = (uint32_t)(0x4652E0u); X86_PUSH32(v); }
	// 0046357B call 0x00366943
	X86_PUSH32(0x463580u); sub_00366943(ctx, base);
	// 00463580 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463581 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463550, __imp__sub_00463550)

X86_FUNC(__imp__sub_00463590) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463590 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00463592 push 0x56F440
	{ uint32_t v = (uint32_t)(0x56F440u); X86_PUSH32(v); }
	// 00463597 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463599 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046359B push 0x48
	{ uint32_t v = (uint32_t)(0x48u); X86_PUSH32(v); }
	// 0046359D push 0x56F470
	{ uint32_t v = (uint32_t)(0x56F470u); X86_PUSH32(v); }
	// 004635A2 push 0x6AA4F0
	{ uint32_t v = (uint32_t)(0x6AA4F0u); X86_PUSH32(v); }
	// 004635A7 push 0x56F4CC
	{ uint32_t v = (uint32_t)(0x56F4CCu); X86_PUSH32(v); }
	// 004635AC mov ecx, 0x6AA310
	{ ctx.ecx = (uint32_t)(0x6AA310u); }
	// 004635B1 call 0x00309B50
	X86_PUSH32(0x4635B6u); sub_00309B50(ctx, base);
	// 004635B6 push 0x4652F0
	{ uint32_t v = (uint32_t)(0x4652F0u); X86_PUSH32(v); }
	// 004635BB call 0x00366943
	X86_PUSH32(0x4635C0u); sub_00366943(ctx, base);
	// 004635C0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004635C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463590, __imp__sub_00463590)

X86_FUNC(__imp__sub_004635D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004635D0 push 0x05
	{ uint32_t v = (uint32_t)(0x5u); X86_PUSH32(v); }
	// 004635D2 push 0x56F4E0
	{ uint32_t v = (uint32_t)(0x56F4E0u); X86_PUSH32(v); }
	// 004635D7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004635D9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004635DB push 0x20
	{ uint32_t v = (uint32_t)(0x20u); X86_PUSH32(v); }
	// 004635DD push 0x56F530
	{ uint32_t v = (uint32_t)(0x56F530u); X86_PUSH32(v); }
	// 004635E2 push 0x6AA518
	{ uint32_t v = (uint32_t)(0x6AA518u); X86_PUSH32(v); }
	// 004635E7 push 0x56F590
	{ uint32_t v = (uint32_t)(0x56F590u); X86_PUSH32(v); }
	// 004635EC mov ecx, 0x6AA338
	{ ctx.ecx = (uint32_t)(0x6AA338u); }
	// 004635F1 call 0x00309B50
	X86_PUSH32(0x4635F6u); sub_00309B50(ctx, base);
	// 004635F6 push 0x465300
	{ uint32_t v = (uint32_t)(0x465300u); X86_PUSH32(v); }
	// 004635FB call 0x00366943
	X86_PUSH32(0x463600u); sub_00366943(ctx, base);
	// 00463600 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463601 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004635D0, __imp__sub_004635D0)

X86_FUNC(__imp__sub_00463610) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463610 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00463612 push 0x56F5A8
	{ uint32_t v = (uint32_t)(0x56F5A8u); X86_PUSH32(v); }
	// 00463617 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463619 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046361B push 0x2C
	{ uint32_t v = (uint32_t)(0x2Cu); X86_PUSH32(v); }
	// 0046361D push 0x56F5E8
	{ uint32_t v = (uint32_t)(0x56F5E8u); X86_PUSH32(v); }
	// 00463622 push 0x6AA540
	{ uint32_t v = (uint32_t)(0x6AA540u); X86_PUSH32(v); }
	// 00463627 push 0x56F66C
	{ uint32_t v = (uint32_t)(0x56F66Cu); X86_PUSH32(v); }
	// 0046362C mov ecx, 0x6AA360
	{ ctx.ecx = (uint32_t)(0x6AA360u); }
	// 00463631 call 0x00309B50
	X86_PUSH32(0x463636u); sub_00309B50(ctx, base);
	// 00463636 push 0x465310
	{ uint32_t v = (uint32_t)(0x465310u); X86_PUSH32(v); }
	// 0046363B call 0x00366943
	X86_PUSH32(0x463640u); sub_00366943(ctx, base);
	// 00463640 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463641 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463610, __imp__sub_00463610)

X86_FUNC(__imp__sub_00463650) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463650 push 0x07
	{ uint32_t v = (uint32_t)(0x7u); X86_PUSH32(v); }
	// 00463652 push 0x56F680
	{ uint32_t v = (uint32_t)(0x56F680u); X86_PUSH32(v); }
	// 00463657 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463659 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046365B push 0x30
	{ uint32_t v = (uint32_t)(0x30u); X86_PUSH32(v); }
	// 0046365D push 0x56F6F0
	{ uint32_t v = (uint32_t)(0x56F6F0u); X86_PUSH32(v); }
	// 00463662 push 0x6AA568
	{ uint32_t v = (uint32_t)(0x6AA568u); X86_PUSH32(v); }
	// 00463667 push 0x56F784
	{ uint32_t v = (uint32_t)(0x56F784u); X86_PUSH32(v); }
	// 0046366C mov ecx, 0x6AA388
	{ ctx.ecx = (uint32_t)(0x6AA388u); }
	// 00463671 call 0x00309B50
	X86_PUSH32(0x463676u); sub_00309B50(ctx, base);
	// 00463676 push 0x465320
	{ uint32_t v = (uint32_t)(0x465320u); X86_PUSH32(v); }
	// 0046367B call 0x00366943
	X86_PUSH32(0x463680u); sub_00366943(ctx, base);
	// 00463680 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463681 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463650, __imp__sub_00463650)

X86_FUNC(__imp__sub_00463690) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463690 push 0x0A
	{ uint32_t v = (uint32_t)(0xAu); X86_PUSH32(v); }
	// 00463692 push 0x56F7A0
	{ uint32_t v = (uint32_t)(0x56F7A0u); X86_PUSH32(v); }
	// 00463697 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463699 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046369B push 0x28
	{ uint32_t v = (uint32_t)(0x28u); X86_PUSH32(v); }
	// 0046369D push 0x56F840
	{ uint32_t v = (uint32_t)(0x56F840u); X86_PUSH32(v); }
	// 004636A2 push 0x6AA590
	{ uint32_t v = (uint32_t)(0x6AA590u); X86_PUSH32(v); }
	// 004636A7 push 0x56F90C
	{ uint32_t v = (uint32_t)(0x56F90Cu); X86_PUSH32(v); }
	// 004636AC mov ecx, 0x6AA3B0
	{ ctx.ecx = (uint32_t)(0x6AA3B0u); }
	// 004636B1 call 0x00309B50
	X86_PUSH32(0x4636B6u); sub_00309B50(ctx, base);
	// 004636B6 push 0x465330
	{ uint32_t v = (uint32_t)(0x465330u); X86_PUSH32(v); }
	// 004636BB call 0x00366943
	X86_PUSH32(0x4636C0u); sub_00366943(ctx, base);
	// 004636C0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004636C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463690, __imp__sub_00463690)

X86_FUNC(__imp__sub_004636D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004636D0 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 004636D2 push 0x56F91C
	{ uint32_t v = (uint32_t)(0x56F91Cu); X86_PUSH32(v); }
	// 004636D7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004636D9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004636DB push 0x18
	{ uint32_t v = (uint32_t)(0x18u); X86_PUSH32(v); }
	// 004636DD push 0x56F94C
	{ uint32_t v = (uint32_t)(0x56F94Cu); X86_PUSH32(v); }
	// 004636E2 push 0x6AA5B8
	{ uint32_t v = (uint32_t)(0x6AA5B8u); X86_PUSH32(v); }
	// 004636E7 push 0x56F9A4
	{ uint32_t v = (uint32_t)(0x56F9A4u); X86_PUSH32(v); }
	// 004636EC mov ecx, 0x6AA3D8
	{ ctx.ecx = (uint32_t)(0x6AA3D8u); }
	// 004636F1 call 0x00309B50
	X86_PUSH32(0x4636F6u); sub_00309B50(ctx, base);
	// 004636F6 push 0x465340
	{ uint32_t v = (uint32_t)(0x465340u); X86_PUSH32(v); }
	// 004636FB call 0x00366943
	X86_PUSH32(0x463700u); sub_00366943(ctx, base);
	// 00463700 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463701 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004636D0, __imp__sub_004636D0)

X86_FUNC(__imp__sub_00463710) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463710 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463712 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463714 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463716 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463718 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0046371A push 0x56F9B8
	{ uint32_t v = (uint32_t)(0x56F9B8u); X86_PUSH32(v); }
	// 0046371F push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 00463724 push 0x56F9E8
	{ uint32_t v = (uint32_t)(0x56F9E8u); X86_PUSH32(v); }
	// 00463729 mov ecx, 0x6AA400
	{ ctx.ecx = (uint32_t)(0x6AA400u); }
	// 0046372E call 0x00309B50
	X86_PUSH32(0x463733u); sub_00309B50(ctx, base);
	// 00463733 push 0x465350
	{ uint32_t v = (uint32_t)(0x465350u); X86_PUSH32(v); }
	// 00463738 call 0x00366943
	X86_PUSH32(0x46373Du); sub_00366943(ctx, base);
	// 0046373D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046373E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463710, __imp__sub_00463710)

X86_FUNC(__imp__sub_00463740) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463740 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463742 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463744 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463746 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463748 push 0x64
	{ uint32_t v = (uint32_t)(0x64u); X86_PUSH32(v); }
	// 0046374A push 0x56F9FC
	{ uint32_t v = (uint32_t)(0x56F9FCu); X86_PUSH32(v); }
	// 0046374F push 0x6AA5E0
	{ uint32_t v = (uint32_t)(0x6AA5E0u); X86_PUSH32(v); }
	// 00463754 push 0x56FA14
	{ uint32_t v = (uint32_t)(0x56FA14u); X86_PUSH32(v); }
	// 00463759 mov ecx, 0x6AA428
	{ ctx.ecx = (uint32_t)(0x6AA428u); }
	// 0046375E call 0x00309B50
	X86_PUSH32(0x463763u); sub_00309B50(ctx, base);
	// 00463763 push 0x465360
	{ uint32_t v = (uint32_t)(0x465360u); X86_PUSH32(v); }
	// 00463768 call 0x00366943
	X86_PUSH32(0x46376Du); sub_00366943(ctx, base);
	// 0046376D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046376E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463740, __imp__sub_00463740)

X86_FUNC(__imp__sub_00463770) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463770 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463772 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463774 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463776 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463778 push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 0046377A push 0x56FA24
	{ uint32_t v = (uint32_t)(0x56FA24u); X86_PUSH32(v); }
	// 0046377F push 0x6AA608
	{ uint32_t v = (uint32_t)(0x6AA608u); X86_PUSH32(v); }
	// 00463784 push 0x56FA3C
	{ uint32_t v = (uint32_t)(0x56FA3Cu); X86_PUSH32(v); }
	// 00463789 mov ecx, 0x6AA450
	{ ctx.ecx = (uint32_t)(0x6AA450u); }
	// 0046378E call 0x00309B50
	X86_PUSH32(0x463793u); sub_00309B50(ctx, base);
	// 00463793 push 0x465370
	{ uint32_t v = (uint32_t)(0x465370u); X86_PUSH32(v); }
	// 00463798 call 0x00366943
	X86_PUSH32(0x46379Du); sub_00366943(ctx, base);
	// 0046379D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046379E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463770, __imp__sub_00463770)

X86_FUNC(__imp__sub_004637A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004637A0 push 0x0A
	{ uint32_t v = (uint32_t)(0xAu); X86_PUSH32(v); }
	// 004637A2 push 0x56FA50
	{ uint32_t v = (uint32_t)(0x56FA50u); X86_PUSH32(v); }
	// 004637A7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004637A9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004637AB push 0x28
	{ uint32_t v = (uint32_t)(0x28u); X86_PUSH32(v); }
	// 004637AD push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004637AF push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 004637B4 push 0x56FB68
	{ uint32_t v = (uint32_t)(0x56FB68u); X86_PUSH32(v); }
	// 004637B9 mov ecx, 0x6AA478
	{ ctx.ecx = (uint32_t)(0x6AA478u); }
	// 004637BE call 0x00309B50
	X86_PUSH32(0x4637C3u); sub_00309B50(ctx, base);
	// 004637C3 push 0x465380
	{ uint32_t v = (uint32_t)(0x465380u); X86_PUSH32(v); }
	// 004637C8 call 0x00366943
	X86_PUSH32(0x4637CDu); sub_00366943(ctx, base);
	// 004637CD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004637CE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004637A0, __imp__sub_004637A0)

X86_FUNC(__imp__sub_004637D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004637D0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004637D2 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004637D4 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004637D6 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004637D8 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 004637DA push 0x56FB94
	{ uint32_t v = (uint32_t)(0x56FB94u); X86_PUSH32(v); }
	// 004637DF push 0x6AA400
	{ uint32_t v = (uint32_t)(0x6AA400u); X86_PUSH32(v); }
	// 004637E4 push 0x56FBC4
	{ uint32_t v = (uint32_t)(0x56FBC4u); X86_PUSH32(v); }
	// 004637E9 mov ecx, 0x6AA4A0
	{ ctx.ecx = (uint32_t)(0x6AA4A0u); }
	// 004637EE call 0x00309B50
	X86_PUSH32(0x4637F3u); sub_00309B50(ctx, base);
	// 004637F3 push 0x465390
	{ uint32_t v = (uint32_t)(0x465390u); X86_PUSH32(v); }
	// 004637F8 call 0x00366943
	X86_PUSH32(0x4637FDu); sub_00366943(ctx, base);
	// 004637FD pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004637FE ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004637D0, __imp__sub_004637D0)

X86_FUNC(__imp__sub_00463800) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463800 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463802 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463804 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463806 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463808 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0046380A push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046380C push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 00463811 push 0x56FBFC
	{ uint32_t v = (uint32_t)(0x56FBFCu); X86_PUSH32(v); }
	// 00463816 mov ecx, 0x6AA4C8
	{ ctx.ecx = (uint32_t)(0x6AA4C8u); }
	// 0046381B call 0x00309B50
	X86_PUSH32(0x463820u); sub_00309B50(ctx, base);
	// 00463820 push 0x4653A0
	{ uint32_t v = (uint32_t)(0x4653A0u); X86_PUSH32(v); }
	// 00463825 call 0x00366943
	X86_PUSH32(0x46382Au); sub_00366943(ctx, base);
	// 0046382A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046382B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463800, __imp__sub_00463800)

X86_FUNC(__imp__sub_00463830) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463830 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00463832 push 0x56FC60
	{ uint32_t v = (uint32_t)(0x56FC60u); X86_PUSH32(v); }
	// 00463837 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463839 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046383B push 0x24
	{ uint32_t v = (uint32_t)(0x24u); X86_PUSH32(v); }
	// 0046383D push 0x56FC90
	{ uint32_t v = (uint32_t)(0x56FC90u); X86_PUSH32(v); }
	// 00463842 push 0x6AA400
	{ uint32_t v = (uint32_t)(0x6AA400u); X86_PUSH32(v); }
	// 00463847 push 0x56FCE0
	{ uint32_t v = (uint32_t)(0x56FCE0u); X86_PUSH32(v); }
	// 0046384C mov ecx, 0x6AA4F0
	{ ctx.ecx = (uint32_t)(0x6AA4F0u); }
	// 00463851 call 0x00309B50
	X86_PUSH32(0x463856u); sub_00309B50(ctx, base);
	// 00463856 push 0x4653B0
	{ uint32_t v = (uint32_t)(0x4653B0u); X86_PUSH32(v); }
	// 0046385B call 0x00366943
	X86_PUSH32(0x463860u); sub_00366943(ctx, base);
	// 00463860 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463861 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463830, __imp__sub_00463830)

X86_FUNC(__imp__sub_00463870) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463870 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463872 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463874 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463876 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463878 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0046387A push 0x56FD10
	{ uint32_t v = (uint32_t)(0x56FD10u); X86_PUSH32(v); }
	// 0046387F push 0x6AA400
	{ uint32_t v = (uint32_t)(0x6AA400u); X86_PUSH32(v); }
	// 00463884 push 0x56FD28
	{ uint32_t v = (uint32_t)(0x56FD28u); X86_PUSH32(v); }
	// 00463889 mov ecx, 0x6AA518
	{ ctx.ecx = (uint32_t)(0x6AA518u); }
	// 0046388E call 0x00309B50
	X86_PUSH32(0x463893u); sub_00309B50(ctx, base);
	// 00463893 push 0x4653C0
	{ uint32_t v = (uint32_t)(0x4653C0u); X86_PUSH32(v); }
	// 00463898 call 0x00366943
	X86_PUSH32(0x46389Du); sub_00366943(ctx, base);
	// 0046389D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046389E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463870, __imp__sub_00463870)

X86_FUNC(__imp__sub_004638A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004638A0 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 004638A2 push 0x56FD58
	{ uint32_t v = (uint32_t)(0x56FD58u); X86_PUSH32(v); }
	// 004638A7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004638A9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004638AB push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 004638AD push 0x56FD68
	{ uint32_t v = (uint32_t)(0x56FD68u); X86_PUSH32(v); }
	// 004638B2 push 0x6AA400
	{ uint32_t v = (uint32_t)(0x6AA400u); X86_PUSH32(v); }
	// 004638B7 push 0x56FD8C
	{ uint32_t v = (uint32_t)(0x56FD8Cu); X86_PUSH32(v); }
	// 004638BC mov ecx, 0x6AA540
	{ ctx.ecx = (uint32_t)(0x6AA540u); }
	// 004638C1 call 0x00309B50
	X86_PUSH32(0x4638C6u); sub_00309B50(ctx, base);
	// 004638C6 push 0x4653D0
	{ uint32_t v = (uint32_t)(0x4653D0u); X86_PUSH32(v); }
	// 004638CB call 0x00366943
	X86_PUSH32(0x4638D0u); sub_00366943(ctx, base);
	// 004638D0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004638D1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004638A0, __imp__sub_004638A0)

X86_FUNC(__imp__sub_004638E0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004638E0 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 004638E2 push 0x56FDC0
	{ uint32_t v = (uint32_t)(0x56FDC0u); X86_PUSH32(v); }
	// 004638E7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004638E9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004638EB push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 004638ED push 0x56FDD0
	{ uint32_t v = (uint32_t)(0x56FDD0u); X86_PUSH32(v); }
	// 004638F2 push 0x6AA400
	{ uint32_t v = (uint32_t)(0x6AA400u); X86_PUSH32(v); }
	// 004638F7 push 0x56FDE8
	{ uint32_t v = (uint32_t)(0x56FDE8u); X86_PUSH32(v); }
	// 004638FC mov ecx, 0x6AA568
	{ ctx.ecx = (uint32_t)(0x6AA568u); }
	// 00463901 call 0x00309B50
	X86_PUSH32(0x463906u); sub_00309B50(ctx, base);
	// 00463906 push 0x4653E0
	{ uint32_t v = (uint32_t)(0x4653E0u); X86_PUSH32(v); }
	// 0046390B call 0x00366943
	X86_PUSH32(0x463910u); sub_00366943(ctx, base);
	// 00463910 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463911 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004638E0, __imp__sub_004638E0)

X86_FUNC(__imp__sub_00463920) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463920 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463922 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463924 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463926 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463928 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0046392A push 0x56FE00
	{ uint32_t v = (uint32_t)(0x56FE00u); X86_PUSH32(v); }
	// 0046392F push 0x6AA400
	{ uint32_t v = (uint32_t)(0x6AA400u); X86_PUSH32(v); }
	// 00463934 push 0x56FE30
	{ uint32_t v = (uint32_t)(0x56FE30u); X86_PUSH32(v); }
	// 00463939 mov ecx, 0x6AA590
	{ ctx.ecx = (uint32_t)(0x6AA590u); }
	// 0046393E call 0x00309B50
	X86_PUSH32(0x463943u); sub_00309B50(ctx, base);
	// 00463943 push 0x4653F0
	{ uint32_t v = (uint32_t)(0x4653F0u); X86_PUSH32(v); }
	// 00463948 call 0x00366943
	X86_PUSH32(0x46394Du); sub_00366943(ctx, base);
	// 0046394D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046394E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463920, __imp__sub_00463920)

X86_FUNC(__imp__sub_00463950) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463950 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00463952 push 0x56FE74
	{ uint32_t v = (uint32_t)(0x56FE74u); X86_PUSH32(v); }
	// 00463957 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463959 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046395B push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 0046395D push 0x56FE84
	{ uint32_t v = (uint32_t)(0x56FE84u); X86_PUSH32(v); }
	// 00463962 push 0x6AA400
	{ uint32_t v = (uint32_t)(0x6AA400u); X86_PUSH32(v); }
	// 00463967 push 0x56FE9C
	{ uint32_t v = (uint32_t)(0x56FE9Cu); X86_PUSH32(v); }
	// 0046396C mov ecx, 0x6AA5B8
	{ ctx.ecx = (uint32_t)(0x6AA5B8u); }
	// 00463971 call 0x00309B50
	X86_PUSH32(0x463976u); sub_00309B50(ctx, base);
	// 00463976 push 0x465400
	{ uint32_t v = (uint32_t)(0x465400u); X86_PUSH32(v); }
	// 0046397B call 0x00366943
	X86_PUSH32(0x463980u); sub_00366943(ctx, base);
	// 00463980 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463981 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463950, __imp__sub_00463950)

X86_FUNC(__imp__sub_00463990) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463990 push 0x09
	{ uint32_t v = (uint32_t)(0x9u); X86_PUSH32(v); }
	// 00463992 push 0x56FEC8
	{ uint32_t v = (uint32_t)(0x56FEC8u); X86_PUSH32(v); }
	// 00463997 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463999 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 0046399B push 0x64
	{ uint32_t v = (uint32_t)(0x64u); X86_PUSH32(v); }
	// 0046399D push 0x56FF58
	{ uint32_t v = (uint32_t)(0x56FF58u); X86_PUSH32(v); }
	// 004639A2 push 0x6AA400
	{ uint32_t v = (uint32_t)(0x6AA400u); X86_PUSH32(v); }
	// 004639A7 push 0x57001C
	{ uint32_t v = (uint32_t)(0x57001Cu); X86_PUSH32(v); }
	// 004639AC mov ecx, 0x6AA5E0
	{ ctx.ecx = (uint32_t)(0x6AA5E0u); }
	// 004639B1 call 0x00309B50
	X86_PUSH32(0x4639B6u); sub_00309B50(ctx, base);
	// 004639B6 push 0x465410
	{ uint32_t v = (uint32_t)(0x465410u); X86_PUSH32(v); }
	// 004639BB call 0x00366943
	X86_PUSH32(0x4639C0u); sub_00366943(ctx, base);
	// 004639C0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004639C1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463990, __imp__sub_00463990)

X86_FUNC(__imp__sub_004639D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004639D0 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 004639D2 push 0x57009C
	{ uint32_t v = (uint32_t)(0x57009Cu); X86_PUSH32(v); }
	// 004639D7 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 004639D9 push 0x5DB23C
	{ uint32_t v = (uint32_t)(0x5DB23Cu); X86_PUSH32(v); }
	// 004639DE push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 004639E0 push 0x5700BC
	{ uint32_t v = (uint32_t)(0x5700BCu); X86_PUSH32(v); }
	// 004639E5 push 0x6A960C
	{ uint32_t v = (uint32_t)(0x6A960Cu); X86_PUSH32(v); }
	// 004639EA push 0x5702BC
	{ uint32_t v = (uint32_t)(0x5702BCu); X86_PUSH32(v); }
	// 004639EF mov ecx, 0x6AA608
	{ ctx.ecx = (uint32_t)(0x6AA608u); }
	// 004639F4 call 0x00309B50
	X86_PUSH32(0x4639F9u); sub_00309B50(ctx, base);
	// 004639F9 push 0x465420
	{ uint32_t v = (uint32_t)(0x465420u); X86_PUSH32(v); }
	// 004639FE call 0x00366943
	X86_PUSH32(0x463A03u); sub_00366943(ctx, base);
	// 00463A03 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463A04 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004639D0, __imp__sub_004639D0)

X86_FUNC(__imp__sub_00463A10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463A10 mov eax, [0x006A9664]
	{ uint32_t ea = (uint32_t)(0x6A9664u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00463A15 mov [0x005DE6A4], eax
	{ uint32_t ea = (uint32_t)(0x5DE6A4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00463A1A mov dword ptr [0x006A9664], 0x5DE6A0
	{ uint32_t ea = (uint32_t)(0x6A9664u); X86_MEM32(ea) = (uint32_t)(0x5DE6A0u); }
	// 00463A24 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463A10, __imp__sub_00463A10)

X86_FUNC(__imp__sub_00463A30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463A30 mov eax, [0x006A9664]
	{ uint32_t ea = (uint32_t)(0x6A9664u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00463A35 mov [0x005DE6B0], eax
	{ uint32_t ea = (uint32_t)(0x5DE6B0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00463A3A mov dword ptr [0x006A9664], 0x5DE6AC
	{ uint32_t ea = (uint32_t)(0x6A9664u); X86_MEM32(ea) = (uint32_t)(0x5DE6ACu); }
	// 00463A44 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463A30, __imp__sub_00463A30)

X86_FUNC(__imp__sub_00463A50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463A50 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463A52 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463A54 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463A56 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463A58 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00463A5A push 0x595AD4
	{ uint32_t v = (uint32_t)(0x595AD4u); X86_PUSH32(v); }
	// 00463A5F push 0x6A96B8
	{ uint32_t v = (uint32_t)(0x6A96B8u); X86_PUSH32(v); }
	// 00463A64 push 0x56F09C
	{ uint32_t v = (uint32_t)(0x56F09Cu); X86_PUSH32(v); }
	// 00463A69 mov ecx, 0x6AAE20
	{ ctx.ecx = (uint32_t)(0x6AAE20u); }
	// 00463A6E call 0x00309B50
	X86_PUSH32(0x463A73u); sub_00309B50(ctx, base);
	// 00463A73 push 0x465430
	{ uint32_t v = (uint32_t)(0x465430u); X86_PUSH32(v); }
	// 00463A78 call 0x00366943
	X86_PUSH32(0x463A7Du); sub_00366943(ctx, base);
	// 00463A7D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463A7E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463A50, __imp__sub_00463A50)

X86_FUNC(__imp__sub_00463A80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463A80 push 0x0F
	{ uint32_t v = (uint32_t)(0xFu); X86_PUSH32(v); }
	// 00463A82 push 0x595B90
	{ uint32_t v = (uint32_t)(0x595B90u); X86_PUSH32(v); }
	// 00463A87 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00463A89 push 0x5DE728
	{ uint32_t v = (uint32_t)(0x5DE728u); X86_PUSH32(v); }
	// 00463A8E push 0xC0
	{ uint32_t v = (uint32_t)(0xC0u); X86_PUSH32(v); }
	// 00463A93 push 0x595C80
	{ uint32_t v = (uint32_t)(0x595C80u); X86_PUSH32(v); }
	// 00463A98 push 0x6A9898
	{ uint32_t v = (uint32_t)(0x6A9898u); X86_PUSH32(v); }
	// 00463A9D push 0x595DB8
	{ uint32_t v = (uint32_t)(0x595DB8u); X86_PUSH32(v); }
	// 00463AA2 mov ecx, 0x6AAE48
	{ ctx.ecx = (uint32_t)(0x6AAE48u); }
	// 00463AA7 call 0x00309B50
	X86_PUSH32(0x463AACu); sub_00309B50(ctx, base);
	// 00463AAC push 0x465440
	{ uint32_t v = (uint32_t)(0x465440u); X86_PUSH32(v); }
	// 00463AB1 call 0x00366943
	X86_PUSH32(0x463AB6u); sub_00366943(ctx, base);
	// 00463AB6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463AB7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463A80, __imp__sub_00463A80)

X86_FUNC(__imp__sub_00463AC0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463AC0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463AC2 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463AC4 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463AC6 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463AC8 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00463ACA push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463ACC push 0x6A9730
	{ uint32_t v = (uint32_t)(0x6A9730u); X86_PUSH32(v); }
	// 00463AD1 push 0x595DC4
	{ uint32_t v = (uint32_t)(0x595DC4u); X86_PUSH32(v); }
	// 00463AD6 mov ecx, 0x6AAE70
	{ ctx.ecx = (uint32_t)(0x6AAE70u); }
	// 00463ADB call 0x00309B50
	X86_PUSH32(0x463AE0u); sub_00309B50(ctx, base);
	// 00463AE0 push 0x465450
	{ uint32_t v = (uint32_t)(0x465450u); X86_PUSH32(v); }
	// 00463AE5 call 0x00366943
	X86_PUSH32(0x463AEAu); sub_00366943(ctx, base);
	// 00463AEA pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463AEB ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463AC0, __imp__sub_00463AC0)

X86_FUNC(__imp__sub_00463AF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463AF0 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00463AF2 push 0x595DDC
	{ uint32_t v = (uint32_t)(0x595DDCu); X86_PUSH32(v); }
	// 00463AF7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463AF9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463AFB push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 00463AFD push 0x595DEC
	{ uint32_t v = (uint32_t)(0x595DECu); X86_PUSH32(v); }
	// 00463B02 push 0x6A9758
	{ uint32_t v = (uint32_t)(0x6A9758u); X86_PUSH32(v); }
	// 00463B07 push 0x595E0C
	{ uint32_t v = (uint32_t)(0x595E0Cu); X86_PUSH32(v); }
	// 00463B0C mov ecx, 0x6AAE98
	{ ctx.ecx = (uint32_t)(0x6AAE98u); }
	// 00463B11 call 0x00309B50
	X86_PUSH32(0x463B16u); sub_00309B50(ctx, base);
	// 00463B16 push 0x465460
	{ uint32_t v = (uint32_t)(0x465460u); X86_PUSH32(v); }
	// 00463B1B call 0x00366943
	X86_PUSH32(0x463B20u); sub_00366943(ctx, base);
	// 00463B20 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463B21 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463AF0, __imp__sub_00463AF0)

X86_FUNC(__imp__sub_00463B30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463B30 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00463B32 push 0x595E20
	{ uint32_t v = (uint32_t)(0x595E20u); X86_PUSH32(v); }
	// 00463B37 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463B39 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463B3B push 0x10
	{ uint32_t v = (uint32_t)(0x10u); X86_PUSH32(v); }
	// 00463B3D push 0x595E30
	{ uint32_t v = (uint32_t)(0x595E30u); X86_PUSH32(v); }
	// 00463B42 push 0x6A9730
	{ uint32_t v = (uint32_t)(0x6A9730u); X86_PUSH32(v); }
	// 00463B47 push 0x595E50
	{ uint32_t v = (uint32_t)(0x595E50u); X86_PUSH32(v); }
	// 00463B4C mov ecx, 0x6AAEC0
	{ ctx.ecx = (uint32_t)(0x6AAEC0u); }
	// 00463B51 call 0x00309B50
	X86_PUSH32(0x463B56u); sub_00309B50(ctx, base);
	// 00463B56 push 0x465470
	{ uint32_t v = (uint32_t)(0x465470u); X86_PUSH32(v); }
	// 00463B5B call 0x00366943
	X86_PUSH32(0x463B60u); sub_00366943(ctx, base);
	// 00463B60 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463B61 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463B30, __imp__sub_00463B30)

X86_FUNC(__imp__sub_00463B70) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463B70 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00463B72 push 0x595E60
	{ uint32_t v = (uint32_t)(0x595E60u); X86_PUSH32(v); }
	// 00463B77 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463B79 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463B7B push 0x08
	{ uint32_t v = (uint32_t)(0x8u); X86_PUSH32(v); }
	// 00463B7D push 0x595E70
	{ uint32_t v = (uint32_t)(0x595E70u); X86_PUSH32(v); }
	// 00463B82 push 0x6A9730
	{ uint32_t v = (uint32_t)(0x6A9730u); X86_PUSH32(v); }
	// 00463B87 push 0x595EC8
	{ uint32_t v = (uint32_t)(0x595EC8u); X86_PUSH32(v); }
	// 00463B8C mov ecx, 0x6AAEE8
	{ ctx.ecx = (uint32_t)(0x6AAEE8u); }
	// 00463B91 call 0x00309B50
	X86_PUSH32(0x463B96u); sub_00309B50(ctx, base);
	// 00463B96 push 0x465480
	{ uint32_t v = (uint32_t)(0x465480u); X86_PUSH32(v); }
	// 00463B9B call 0x00366943
	X86_PUSH32(0x463BA0u); sub_00366943(ctx, base);
	// 00463BA0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463BA1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463B70, __imp__sub_00463B70)

X86_FUNC(__imp__sub_00463BB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463BB0 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00463BB2 push 0x595EDC
	{ uint32_t v = (uint32_t)(0x595EDCu); X86_PUSH32(v); }
	// 00463BB7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463BB9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463BBB push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 00463BBD push 0x595EFC
	{ uint32_t v = (uint32_t)(0x595EFCu); X86_PUSH32(v); }
	// 00463BC2 push 0x6A9730
	{ uint32_t v = (uint32_t)(0x6A9730u); X86_PUSH32(v); }
	// 00463BC7 push 0x595F28
	{ uint32_t v = (uint32_t)(0x595F28u); X86_PUSH32(v); }
	// 00463BCC mov ecx, 0x6AAF10
	{ ctx.ecx = (uint32_t)(0x6AAF10u); }
	// 00463BD1 call 0x00309B50
	X86_PUSH32(0x463BD6u); sub_00309B50(ctx, base);
	// 00463BD6 push 0x465490
	{ uint32_t v = (uint32_t)(0x465490u); X86_PUSH32(v); }
	// 00463BDB call 0x00366943
	X86_PUSH32(0x463BE0u); sub_00366943(ctx, base);
	// 00463BE0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463BE1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463BB0, __imp__sub_00463BB0)

X86_FUNC(__imp__sub_00463BF0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463BF0 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00463BF2 push 0x595F34
	{ uint32_t v = (uint32_t)(0x595F34u); X86_PUSH32(v); }
	// 00463BF7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463BF9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463BFB push 0x40
	{ uint32_t v = (uint32_t)(0x40u); X86_PUSH32(v); }
	// 00463BFD push 0x595F64
	{ uint32_t v = (uint32_t)(0x595F64u); X86_PUSH32(v); }
	// 00463C02 push 0x6AAF60
	{ uint32_t v = (uint32_t)(0x6AAF60u); X86_PUSH32(v); }
	// 00463C07 push 0x595FA0
	{ uint32_t v = (uint32_t)(0x595FA0u); X86_PUSH32(v); }
	// 00463C0C mov ecx, 0x6AAF38
	{ ctx.ecx = (uint32_t)(0x6AAF38u); }
	// 00463C11 call 0x00309B50
	X86_PUSH32(0x463C16u); sub_00309B50(ctx, base);
	// 00463C16 push 0x4654A0
	{ uint32_t v = (uint32_t)(0x4654A0u); X86_PUSH32(v); }
	// 00463C1B call 0x00366943
	X86_PUSH32(0x463C20u); sub_00366943(ctx, base);
	// 00463C20 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463C21 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463BF0, __imp__sub_00463BF0)

X86_FUNC(__imp__sub_00463C30) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463C30 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463C32 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463C34 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463C36 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463C38 push 0x04
	{ uint32_t v = (uint32_t)(0x4u); X86_PUSH32(v); }
	// 00463C3A push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463C3C push 0x6A9730
	{ uint32_t v = (uint32_t)(0x6A9730u); X86_PUSH32(v); }
	// 00463C41 push 0x595FB0
	{ uint32_t v = (uint32_t)(0x595FB0u); X86_PUSH32(v); }
	// 00463C46 mov ecx, 0x6AAF60
	{ ctx.ecx = (uint32_t)(0x6AAF60u); }
	// 00463C4B call 0x00309B50
	X86_PUSH32(0x463C50u); sub_00309B50(ctx, base);
	// 00463C50 push 0x4654B0
	{ uint32_t v = (uint32_t)(0x4654B0u); X86_PUSH32(v); }
	// 00463C55 call 0x00366943
	X86_PUSH32(0x463C5Au); sub_00366943(ctx, base);
	// 00463C5A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463C5B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463C30, __imp__sub_00463C30)

X86_FUNC(__imp__sub_00463C60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463C60 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463C62 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463C64 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463C66 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463C68 push 0xC0
	{ uint32_t v = (uint32_t)(0xC0u); X86_PUSH32(v); }
	// 00463C6D push 0x595FC4
	{ uint32_t v = (uint32_t)(0x595FC4u); X86_PUSH32(v); }
	// 00463C72 push 0x6AAE48
	{ uint32_t v = (uint32_t)(0x6AAE48u); X86_PUSH32(v); }
	// 00463C77 push 0x595FDC
	{ uint32_t v = (uint32_t)(0x595FDCu); X86_PUSH32(v); }
	// 00463C7C mov ecx, 0x6AAF88
	{ ctx.ecx = (uint32_t)(0x6AAF88u); }
	// 00463C81 call 0x00309B50
	X86_PUSH32(0x463C86u); sub_00309B50(ctx, base);
	// 00463C86 push 0x4654C0
	{ uint32_t v = (uint32_t)(0x4654C0u); X86_PUSH32(v); }
	// 00463C8B call 0x00366943
	X86_PUSH32(0x463C90u); sub_00366943(ctx, base);
	// 00463C90 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463C91 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463C60, __imp__sub_00463C60)

X86_FUNC(__imp__sub_00463CA0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463CA0 push 0x03
	{ uint32_t v = (uint32_t)(0x3u); X86_PUSH32(v); }
	// 00463CA2 push 0x5962A0
	{ uint32_t v = (uint32_t)(0x5962A0u); X86_PUSH32(v); }
	// 00463CA7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463CA9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463CAB push 0x14
	{ uint32_t v = (uint32_t)(0x14u); X86_PUSH32(v); }
	// 00463CAD push 0x5962D0
	{ uint32_t v = (uint32_t)(0x5962D0u); X86_PUSH32(v); }
	// 00463CB2 push 0x6A9F64
	{ uint32_t v = (uint32_t)(0x6A9F64u); X86_PUSH32(v); }
	// 00463CB7 push 0x59630C
	{ uint32_t v = (uint32_t)(0x59630Cu); X86_PUSH32(v); }
	// 00463CBC mov ecx, 0x6AAFD0
	{ ctx.ecx = (uint32_t)(0x6AAFD0u); }
	// 00463CC1 call 0x00309B50
	X86_PUSH32(0x463CC6u); sub_00309B50(ctx, base);
	// 00463CC6 push 0x4654D0
	{ uint32_t v = (uint32_t)(0x4654D0u); X86_PUSH32(v); }
	// 00463CCB call 0x00366943
	X86_PUSH32(0x463CD0u); sub_00366943(ctx, base);
	// 00463CD0 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463CD1 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463CA0, __imp__sub_00463CA0)

X86_FUNC(__imp__sub_00463CE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463CE0 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00463CE2 push 0x596324
	{ uint32_t v = (uint32_t)(0x596324u); X86_PUSH32(v); }
	// 00463CE7 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463CE9 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463CEB push 0x0C
	{ uint32_t v = (uint32_t)(0xCu); X86_PUSH32(v); }
	// 00463CED push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463CEF push 0x6A9E94
	{ uint32_t v = (uint32_t)(0x6A9E94u); X86_PUSH32(v); }
	// 00463CF4 push 0x596344
	{ uint32_t v = (uint32_t)(0x596344u); X86_PUSH32(v); }
	// 00463CF9 mov ecx, 0x6AAFF8
	{ ctx.ecx = (uint32_t)(0x6AAFF8u); }
	// 00463CFE call 0x00309B50
	X86_PUSH32(0x463D03u); sub_00309B50(ctx, base);
	// 00463D03 push 0x4654E0
	{ uint32_t v = (uint32_t)(0x4654E0u); X86_PUSH32(v); }
	// 00463D08 call 0x00366943
	X86_PUSH32(0x463D0Du); sub_00366943(ctx, base);
	// 00463D0D pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463D0E ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463CE0, __imp__sub_00463CE0)

X86_FUNC(__imp__sub_00463D10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463D10 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00463D12 push 0x596428
	{ uint32_t v = (uint32_t)(0x596428u); X86_PUSH32(v); }
	// 00463D17 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463D19 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463D1B push 0x40
	{ uint32_t v = (uint32_t)(0x40u); X86_PUSH32(v); }
	// 00463D1D push 0x596448
	{ uint32_t v = (uint32_t)(0x596448u); X86_PUSH32(v); }
	// 00463D22 push 0x6A9EBC
	{ uint32_t v = (uint32_t)(0x6A9EBCu); X86_PUSH32(v); }
	// 00463D27 push 0x596468
	{ uint32_t v = (uint32_t)(0x596468u); X86_PUSH32(v); }
	// 00463D2C mov ecx, 0x6AB020
	{ ctx.ecx = (uint32_t)(0x6AB020u); }
	// 00463D31 call 0x00309B50
	X86_PUSH32(0x463D36u); sub_00309B50(ctx, base);
	// 00463D36 push 0x4654F0
	{ uint32_t v = (uint32_t)(0x4654F0u); X86_PUSH32(v); }
	// 00463D3B call 0x00366943
	X86_PUSH32(0x463D40u); sub_00366943(ctx, base);
	// 00463D40 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463D41 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463D10, __imp__sub_00463D10)

X86_FUNC(__imp__sub_00463D50) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463D50 push 0x09
	{ uint32_t v = (uint32_t)(0x9u); X86_PUSH32(v); }
	// 00463D52 push 0x5964B0
	{ uint32_t v = (uint32_t)(0x5964B0u); X86_PUSH32(v); }
	// 00463D57 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463D59 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463D5B push 0x50
	{ uint32_t v = (uint32_t)(0x50u); X86_PUSH32(v); }
	// 00463D5D push 0x596540
	{ uint32_t v = (uint32_t)(0x596540u); X86_PUSH32(v); }
	// 00463D62 push 0x6A9EE4
	{ uint32_t v = (uint32_t)(0x6A9EE4u); X86_PUSH32(v); }
	// 00463D67 push 0x596600
	{ uint32_t v = (uint32_t)(0x596600u); X86_PUSH32(v); }
	// 00463D6C mov ecx, 0x6AB048
	{ ctx.ecx = (uint32_t)(0x6AB048u); }
	// 00463D71 call 0x00309B50
	X86_PUSH32(0x463D76u); sub_00309B50(ctx, base);
	// 00463D76 push 0x465500
	{ uint32_t v = (uint32_t)(0x465500u); X86_PUSH32(v); }
	// 00463D7B call 0x00366943
	X86_PUSH32(0x463D80u); sub_00366943(ctx, base);
	// 00463D80 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463D81 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463D50, __imp__sub_00463D50)

X86_FUNC(__imp__sub_00463D90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463D90 push 0x40000000
	{ uint32_t v = (uint32_t)(0x40000000u); X86_PUSH32(v); }
	// 00463D95 mov ecx, 0x6AB070
	{ ctx.ecx = (uint32_t)(0x6AB070u); }
	// 00463D9A call 0x003C7640
	X86_PUSH32(0x463D9Fu); sub_003C7640(ctx, base);
	// 00463D9F push 0x465510
	{ uint32_t v = (uint32_t)(0x465510u); X86_PUSH32(v); }
	// 00463DA4 call 0x00366943
	X86_PUSH32(0x463DA9u); sub_00366943(ctx, base);
	// 00463DA9 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463DAA ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463D90, __imp__sub_00463D90)

X86_FUNC(__imp__sub_00463DB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463DB0 sub esp, 0x10
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x10u); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00463DB3 lea ecx, [esp]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp));
	// 00463DB6 call 0x003C3030
	X86_PUSH32(0x463DBBu); sub_003C3030(ctx, base);
	// 00463DBB mov [esp+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00463DBF lea eax, [esp]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esp));
	// 00463DC2 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00463DC3 mov ecx, 0x6AB0AC
	{ ctx.ecx = (uint32_t)(0x6AB0ACu); }
	// 00463DC8 mov dword ptr [esp+0x0C], 0x00
	{ uint32_t ea = (uint32_t)(ctx.esp + 0xCu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00463DD0 call 0x003C4FC0
	X86_PUSH32(0x463DD5u); sub_003C4FC0(ctx, base);
	// 00463DD5 lea ecx, [esp]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp));
	// 00463DD8 call 0x0044EE03
	X86_PUSH32(0x463DDDu); sub_0044EE03(ctx, base);
	// 00463DDD mov ecx, [esp+0x04]
	{ uint32_t ea = (uint32_t)(ctx.esp + 0x4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00463DE1 push 0x07
	{ uint32_t v = (uint32_t)(0x7u); X86_PUSH32(v); }
	// 00463DE3 push ecx
	{ uint32_t v = (uint32_t)(ctx.ecx); X86_PUSH32(v); }
	// 00463DE4 call 0x003C7750
	X86_PUSH32(0x463DE9u); sub_003C7750(ctx, base);
	// 00463DE9 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 00463DEA call 0x003C7810
	X86_PUSH32(0x463DEFu); sub_003C7810(ctx, base);
	// 00463DEF push 0x465530
	{ uint32_t v = (uint32_t)(0x465530u); X86_PUSH32(v); }
	// 00463DF4 call 0x00366943
	X86_PUSH32(0x463DF9u); sub_00366943(ctx, base);
	// 00463DF9 add esp, 0x20
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x20u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00463DFC ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463DB0, __imp__sub_00463DB0)

X86_FUNC(__imp__sub_00463E00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463E00 push 0x465520
	{ uint32_t v = (uint32_t)(0x465520u); X86_PUSH32(v); }
	// 00463E05 call 0x00366943
	X86_PUSH32(0x463E0Au); sub_00366943(ctx, base);
	// 00463E0A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463E0B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463E00, __imp__sub_00463E00)

X86_FUNC(__imp__sub_00463E10) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463E10 mov ecx, 0x6AB0E8
	{ ctx.ecx = (uint32_t)(0x6AB0E8u); }
	// 00463E15 call 0x003C5200
	X86_PUSH32(0x463E1Au); sub_003C5200(ctx, base);
	// 00463E1A push 0x465540
	{ uint32_t v = (uint32_t)(0x465540u); X86_PUSH32(v); }
	// 00463E1F mov [0x006AB0EC], eax
	{ uint32_t ea = (uint32_t)(0x6AB0ECu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00463E24 mov dword ptr [0x006AB0F0], 0x00
	{ uint32_t ea = (uint32_t)(0x6AB0F0u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00463E2E call 0x00366943
	X86_PUSH32(0x463E33u); sub_00366943(ctx, base);
	// 00463E33 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463E34 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463E10, __imp__sub_00463E10)

X86_FUNC(__imp__sub_00463E40) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463E40 push 0x02
	{ uint32_t v = (uint32_t)(0x2u); X86_PUSH32(v); }
	// 00463E42 mov ecx, 0x6AB110
	{ ctx.ecx = (uint32_t)(0x6AB110u); }
	// 00463E47 call 0x003C7640
	X86_PUSH32(0x463E4Cu); sub_003C7640(ctx, base);
	// 00463E4C push 0x465570
	{ uint32_t v = (uint32_t)(0x465570u); X86_PUSH32(v); }
	// 00463E51 call 0x00366943
	X86_PUSH32(0x463E56u); sub_00366943(ctx, base);
	// 00463E56 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463E57 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463E40, __imp__sub_00463E40)

X86_FUNC(__imp__sub_00463E60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463E60 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463E62 mov ecx, 0x6AB134
	{ ctx.ecx = (uint32_t)(0x6AB134u); }
	// 00463E67 call 0x003C7640
	X86_PUSH32(0x463E6Cu); sub_003C7640(ctx, base);
	// 00463E6C push 0x465580
	{ uint32_t v = (uint32_t)(0x465580u); X86_PUSH32(v); }
	// 00463E71 call 0x00366943
	X86_PUSH32(0x463E76u); sub_00366943(ctx, base);
	// 00463E76 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463E77 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463E60, __imp__sub_00463E60)

X86_FUNC(__imp__sub_00463E80) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463E80 mov ecx, 0x6AB14C
	{ ctx.ecx = (uint32_t)(0x6AB14Cu); }
	// 00463E85 call 0x003E4D80
	X86_PUSH32(0x463E8Au); sub_003E4D80(ctx, base);
	// 00463E8A xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00463E8C push 0x6AB14C
	{ uint32_t v = (uint32_t)(0x6AB14Cu); X86_PUSH32(v); }
	// 00463E91 mov ecx, 0x6ABCCC
	{ ctx.ecx = (uint32_t)(0x6ABCCCu); }
	// 00463E96 mov dword ptr [0x006AB14C], 0x5973B4
	{ uint32_t ea = (uint32_t)(0x6AB14Cu); X86_MEM32(ea) = (uint32_t)(0x5973B4u); }
	// 00463EA0 mov [0x006AB15C], eax
	{ uint32_t ea = (uint32_t)(0x6AB15Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00463EA5 mov [0x006AB158], eax
	{ uint32_t ea = (uint32_t)(0x6AB158u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00463EAA mov [0x006AB154], eax
	{ uint32_t ea = (uint32_t)(0x6AB154u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00463EAF call 0x003E5320
	X86_PUSH32(0x463EB4u); sub_003E5320(ctx, base);
	// 00463EB4 cmp dword ptr [0x005DE7D4], 0x01
	{ uint32_t ea = (uint32_t)(0x5DE7D4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00463EBB jbe 0x00463EC7
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_00463EC7; }
	// 00463EBD mov ecx, 0x6AB14C
	{ ctx.ecx = (uint32_t)(0x6AB14Cu); }
	// 00463EC2 call 0x003CE7F0
	X86_PUSH32(0x463EC7u); sub_003CE7F0(ctx, base);
loc_00463EC7:
	// 00463EC7 push 0x465590
	{ uint32_t v = (uint32_t)(0x465590u); X86_PUSH32(v); }
	// 00463ECC call 0x00366943
	X86_PUSH32(0x463ED1u); sub_00366943(ctx, base);
	// 00463ED1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463ED2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463E80, __imp__sub_00463E80)

X86_FUNC(__imp__sub_00463EE0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463EE0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463EE2 mov ecx, 0x6AB1B8
	{ ctx.ecx = (uint32_t)(0x6AB1B8u); }
	// 00463EE7 call 0x003D0500
	X86_PUSH32(0x463EECu); sub_003D0500(ctx, base);
	// 00463EEC push 0x4655E0
	{ uint32_t v = (uint32_t)(0x4655E0u); X86_PUSH32(v); }
	// 00463EF1 call 0x00366943
	X86_PUSH32(0x463EF6u); sub_00366943(ctx, base);
	// 00463EF6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463EF7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463EE0, __imp__sub_00463EE0)

X86_FUNC(__imp__sub_00463F00) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463F00 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00463F02 mov ecx, 0x6AB190
	{ ctx.ecx = (uint32_t)(0x6AB190u); }
	// 00463F07 call 0x003D0500
	X86_PUSH32(0x463F0Cu); sub_003D0500(ctx, base);
	// 00463F0C push 0x4655F0
	{ uint32_t v = (uint32_t)(0x4655F0u); X86_PUSH32(v); }
	// 00463F11 call 0x00366943
	X86_PUSH32(0x463F16u); sub_00366943(ctx, base);
	// 00463F16 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463F17 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463F00, __imp__sub_00463F00)

X86_FUNC(__imp__sub_00463F20) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463F20 mov ecx, 0x6AB1E0
	{ ctx.ecx = (uint32_t)(0x6AB1E0u); }
	// 00463F25 call 0x003D0990
	X86_PUSH32(0x463F2Au); sub_003D0990(ctx, base);
	// 00463F2A push 0x465600
	{ uint32_t v = (uint32_t)(0x465600u); X86_PUSH32(v); }
	// 00463F2F mov dword ptr [0x006AB1E0], 0x59742C
	{ uint32_t ea = (uint32_t)(0x6AB1E0u); X86_MEM32(ea) = (uint32_t)(0x59742Cu); }
	// 00463F39 mov dword ptr [0x006AB1F0], 0x02
	{ uint32_t ea = (uint32_t)(0x6AB1F0u); X86_MEM32(ea) = (uint32_t)(0x2u); }
	// 00463F43 mov byte ptr [0x006AB1F4], 0x00
	{ uint32_t ea = (uint32_t)(0x6AB1F4u); X86_MEM8(ea) = (uint8_t)(0x0u); }
	// 00463F4A call 0x00366943
	X86_PUSH32(0x463F4Fu); sub_00366943(ctx, base);
	// 00463F4F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463F50 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463F20, __imp__sub_00463F20)

X86_FUNC(__imp__sub_00463F60) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463F60 mov ecx, 0x6AB1F8
	{ ctx.ecx = (uint32_t)(0x6AB1F8u); }
	// 00463F65 call 0x003D0990
	X86_PUSH32(0x463F6Au); sub_003D0990(ctx, base);
	// 00463F6A push 0x465620
	{ uint32_t v = (uint32_t)(0x465620u); X86_PUSH32(v); }
	// 00463F6F mov dword ptr [0x006AB1F8], 0x59746C
	{ uint32_t ea = (uint32_t)(0x6AB1F8u); X86_MEM32(ea) = (uint32_t)(0x59746Cu); }
	// 00463F79 mov dword ptr [0x006AB208], 0x01
	{ uint32_t ea = (uint32_t)(0x6AB208u); X86_MEM32(ea) = (uint32_t)(0x1u); }
	// 00463F83 call 0x00366943
	X86_PUSH32(0x463F88u); sub_00366943(ctx, base);
	// 00463F88 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463F89 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463F60, __imp__sub_00463F60)

X86_FUNC(__imp__sub_00463F90) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463F90 mov ecx, 0x6AB218
	{ ctx.ecx = (uint32_t)(0x6AB218u); }
	// 00463F95 call 0x003EE460
	X86_PUSH32(0x463F9Au); sub_003EE460(ctx, base);
	// 00463F9A push 0x465640
	{ uint32_t v = (uint32_t)(0x465640u); X86_PUSH32(v); }
	// 00463F9F call 0x00366943
	X86_PUSH32(0x463FA4u); sub_00366943(ctx, base);
	// 00463FA4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463FA5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463F90, __imp__sub_00463F90)

X86_FUNC(__imp__sub_00463FB0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463FB0 mov ecx, 0x6ABBE4
	{ ctx.ecx = (uint32_t)(0x6ABBE4u); }
	// 00463FB5 call 0x003EE500
	X86_PUSH32(0x463FBAu); sub_003EE500(ctx, base);
	// 00463FBA push 0x465650
	{ uint32_t v = (uint32_t)(0x465650u); X86_PUSH32(v); }
	// 00463FBF call 0x00366943
	X86_PUSH32(0x463FC4u); sub_00366943(ctx, base);
	// 00463FC4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00463FC5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463FB0, __imp__sub_00463FB0)

X86_FUNC(__imp__sub_00463FD0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00463FD0 mov ecx, 0x6ABC10
	{ ctx.ecx = (uint32_t)(0x6ABC10u); }
	// 00463FD5 call 0x003E4D80
	X86_PUSH32(0x463FDAu); sub_003E4D80(ctx, base);
	// 00463FDA mov eax, 0x238F
	{ ctx.eax = (uint32_t)(0x238Fu); }
	// 00463FDF push 0x6ABC10
	{ uint32_t v = (uint32_t)(0x6ABC10u); X86_PUSH32(v); }
	// 00463FE4 mov ecx, 0x6ABCCC
	{ ctx.ecx = (uint32_t)(0x6ABCCCu); }
	// 00463FE9 mov dword ptr [0x006ABC10], 0x597B9C
	{ uint32_t ea = (uint32_t)(0x6ABC10u); X86_MEM32(ea) = (uint32_t)(0x597B9Cu); }
	// 00463FF3 mov [0x006ABC1E], ax
	{ uint32_t ea = (uint32_t)(0x6ABC1Eu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00463FF9 mov [0x006ABC1C], ax
	{ uint32_t ea = (uint32_t)(0x6ABC1Cu); X86_MEM16(ea) = (uint16_t)(((uint16_t)ctx.eax)); }
	// 00463FFF mov dword ptr [0x006ABC18], 0x00
	{ uint32_t ea = (uint32_t)(0x6ABC18u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00464009 call 0x003E5320
	X86_PUSH32(0x46400Eu); sub_003E5320(ctx, base);
	// 0046400E cmp dword ptr [0x005DE7D4], 0x01
	{ uint32_t ea = (uint32_t)(0x5DE7D4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00464015 jbe 0x00464021
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_00464021; }
	// 00464017 mov ecx, 0x6ABC10
	{ ctx.ecx = (uint32_t)(0x6ABC10u); }
	// 0046401C call 0x003D2570
	X86_PUSH32(0x464021u); sub_003D2570(ctx, base);
loc_00464021:
	// 00464021 push 0x465660
	{ uint32_t v = (uint32_t)(0x465660u); X86_PUSH32(v); }
	// 00464026 call 0x00366943
	X86_PUSH32(0x46402Bu); sub_00366943(ctx, base);
	// 0046402B pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046402C ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00463FD0, __imp__sub_00463FD0)

X86_FUNC(__imp__sub_00464030) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464030 mov ecx, 0x6ABC44
	{ ctx.ecx = (uint32_t)(0x6ABC44u); }
	// 00464035 call 0x003D60F0
	X86_PUSH32(0x46403Au); sub_003D60F0(ctx, base);
	// 0046403A mov [0x006ABC48], eax
	{ uint32_t ea = (uint32_t)(0x6ABC48u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0046403F mov byte ptr [eax+0x15], 0x01
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x15u); X86_MEM8(ea) = (uint8_t)(0x1u); }
	// 00464043 mov eax, [0x006ABC48]
	{ uint32_t ea = (uint32_t)(0x6ABC48u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00464048 mov [eax+0x04], eax
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0046404B mov eax, [0x006ABC48]
	{ uint32_t ea = (uint32_t)(0x6ABC48u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00464050 mov [eax], eax
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00464052 mov eax, [0x006ABC48]
	{ uint32_t ea = (uint32_t)(0x6ABC48u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00464057 mov [eax+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0046405A push 0x4656C0
	{ uint32_t v = (uint32_t)(0x4656C0u); X86_PUSH32(v); }
	// 0046405F mov dword ptr [0x006ABC4C], 0x00
	{ uint32_t ea = (uint32_t)(0x6ABC4Cu); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00464069 call 0x00366943
	X86_PUSH32(0x46406Eu); sub_00366943(ctx, base);
	// 0046406E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046406F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464030, __imp__sub_00464030)

X86_FUNC(__imp__sub_00464070) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464070 push 0x40000000
	{ uint32_t v = (uint32_t)(0x40000000u); X86_PUSH32(v); }
	// 00464075 mov ecx, 0x6ABC30
	{ ctx.ecx = (uint32_t)(0x6ABC30u); }
	// 0046407A call 0x003C7640
	X86_PUSH32(0x46407Fu); sub_003C7640(ctx, base);
	// 0046407F push 0x4656B0
	{ uint32_t v = (uint32_t)(0x4656B0u); X86_PUSH32(v); }
	// 00464084 mov dword ptr [0x006ABC2C], 0x01
	{ uint32_t ea = (uint32_t)(0x6ABC2Cu); X86_MEM32(ea) = (uint32_t)(0x1u); }
	// 0046408E call 0x00366943
	X86_PUSH32(0x464093u); sub_00366943(ctx, base);
	// 00464093 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464094 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464070, __imp__sub_00464070)

X86_FUNC(__imp__sub_004640A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004640A0 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 004640A2 mov ecx, 0x6ABC50
	{ ctx.ecx = (uint32_t)(0x6ABC50u); }
	// 004640A7 call 0x003C7640
	X86_PUSH32(0x4640ACu); sub_003C7640(ctx, base);
	// 004640AC push 0x465700
	{ uint32_t v = (uint32_t)(0x465700u); X86_PUSH32(v); }
	// 004640B1 call 0x00366943
	X86_PUSH32(0x4640B6u); sub_00366943(ctx, base);
	// 004640B6 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004640B7 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004640A0, __imp__sub_004640A0)

X86_FUNC(__imp__sub_004640C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004640C0 mov ecx, 0x6ABC6C
	{ ctx.ecx = (uint32_t)(0x6ABC6Cu); }
	// 004640C5 call 0x003E4D80
	X86_PUSH32(0x4640CAu); sub_003E4D80(ctx, base);
	// 004640CA xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004640CC push 0x6ABC6C
	{ uint32_t v = (uint32_t)(0x6ABC6Cu); X86_PUSH32(v); }
	// 004640D1 mov ecx, 0x6ABCCC
	{ ctx.ecx = (uint32_t)(0x6ABCCCu); }
	// 004640D6 mov dword ptr [0x006ABC6C], 0x5987D8
	{ uint32_t ea = (uint32_t)(0x6ABC6Cu); X86_MEM32(ea) = (uint32_t)(0x5987D8u); }
	// 004640E0 mov [0x006ABC7C], eax
	{ uint32_t ea = (uint32_t)(0x6ABC7Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004640E5 mov [0x006ABC78], eax
	{ uint32_t ea = (uint32_t)(0x6ABC78u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004640EA mov [0x006ABC74], eax
	{ uint32_t ea = (uint32_t)(0x6ABC74u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004640EF call 0x003E5320
	X86_PUSH32(0x4640F4u); sub_003E5320(ctx, base);
	// 004640F4 cmp dword ptr [0x005DE7D4], 0x01
	{ uint32_t ea = (uint32_t)(0x5DE7D4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004640FB jbe 0x00464107
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_00464107; }
	// 004640FD mov ecx, 0x6ABC6C
	{ ctx.ecx = (uint32_t)(0x6ABC6Cu); }
	// 00464102 call 0x003E26F0
	X86_PUSH32(0x464107u); sub_003E26F0(ctx, base);
loc_00464107:
	// 00464107 push 0x465710
	{ uint32_t v = (uint32_t)(0x465710u); X86_PUSH32(v); }
	// 0046410C call 0x00366943
	X86_PUSH32(0x464111u); sub_00366943(ctx, base);
	// 00464111 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464112 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004640C0, __imp__sub_004640C0)

X86_FUNC(__imp__sub_00464120) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464120 mov ecx, 0x6ABC90
	{ ctx.ecx = (uint32_t)(0x6ABC90u); }
	// 00464125 call 0x003E3910
	X86_PUSH32(0x46412Au); sub_003E3910(ctx, base);
	// 0046412A push 0x465760
	{ uint32_t v = (uint32_t)(0x465760u); X86_PUSH32(v); }
	// 0046412F call 0x00366943
	X86_PUSH32(0x464134u); sub_00366943(ctx, base);
	// 00464134 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464135 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464120, __imp__sub_00464120)

X86_FUNC(__imp__sub_00464140) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464140 mov ecx, 0x6ABC84
	{ ctx.ecx = (uint32_t)(0x6ABC84u); }
	// 00464145 call 0x003E3910
	X86_PUSH32(0x46414Au); sub_003E3910(ctx, base);
	// 0046414A push 0x465770
	{ uint32_t v = (uint32_t)(0x465770u); X86_PUSH32(v); }
	// 0046414F call 0x00366943
	X86_PUSH32(0x464154u); sub_00366943(ctx, base);
	// 00464154 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464155 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464140, __imp__sub_00464140)

X86_FUNC(__imp__sub_00464160) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464160 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00464162 mov ecx, 0x6ABC9C
	{ ctx.ecx = (uint32_t)(0x6ABC9Cu); }
	// 00464167 call 0x003EBCD0
	X86_PUSH32(0x46416Cu); sub_003EBCD0(ctx, base);
	// 0046416C push 0x465780
	{ uint32_t v = (uint32_t)(0x465780u); X86_PUSH32(v); }
	// 00464171 mov dword ptr [0x006ABC9C], 0x599388
	{ uint32_t ea = (uint32_t)(0x6ABC9Cu); X86_MEM32(ea) = (uint32_t)(0x599388u); }
	// 0046417B call 0x00366943
	X86_PUSH32(0x464180u); sub_00366943(ctx, base);
	// 00464180 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464181 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464160, __imp__sub_00464160)

X86_FUNC(__imp__sub_00464190) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464190 mov ecx, 0x6ABCB4
	{ ctx.ecx = (uint32_t)(0x6ABCB4u); }
	// 00464195 call 0x003E4D80
	X86_PUSH32(0x46419Au); sub_003E4D80(ctx, base);
	// 0046419A xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0046419C push 0x6ABCB4
	{ uint32_t v = (uint32_t)(0x6ABCB4u); X86_PUSH32(v); }
	// 004641A1 mov ecx, 0x6ABCCC
	{ ctx.ecx = (uint32_t)(0x6ABCCCu); }
	// 004641A6 mov dword ptr [0x006ABCB4], 0x599658
	{ uint32_t ea = (uint32_t)(0x6ABCB4u); X86_MEM32(ea) = (uint32_t)(0x599658u); }
	// 004641B0 mov [0x006ABCC4], eax
	{ uint32_t ea = (uint32_t)(0x6ABCC4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004641B5 mov [0x006ABCC0], eax
	{ uint32_t ea = (uint32_t)(0x6ABCC0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004641BA mov [0x006ABCBC], eax
	{ uint32_t ea = (uint32_t)(0x6ABCBCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004641BF call 0x003E5320
	X86_PUSH32(0x4641C4u); sub_003E5320(ctx, base);
	// 004641C4 cmp dword ptr [0x005DE7D4], 0x01
	{ uint32_t ea = (uint32_t)(0x5DE7D4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004641CB jbe 0x004641D7
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_004641D7; }
	// 004641CD mov ecx, 0x6ABCB4
	{ ctx.ecx = (uint32_t)(0x6ABCB4u); }
	// 004641D2 call 0x003E26F0
	X86_PUSH32(0x4641D7u); sub_003E26F0(ctx, base);
loc_004641D7:
	// 004641D7 push 0x465790
	{ uint32_t v = (uint32_t)(0x465790u); X86_PUSH32(v); }
	// 004641DC call 0x00366943
	X86_PUSH32(0x4641E1u); sub_00366943(ctx, base);
	// 004641E1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004641E2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464190, __imp__sub_00464190)

X86_FUNC(__imp__sub_004641F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004641F0 mov ecx, 0x6ABCCC
	{ ctx.ecx = (uint32_t)(0x6ABCCCu); }
	// 004641F5 call 0x003E5300
	X86_PUSH32(0x4641FAu); sub_003E5300(ctx, base);
	// 004641FA push 0x4657E0
	{ uint32_t v = (uint32_t)(0x4657E0u); X86_PUSH32(v); }
	// 004641FF call 0x00366943
	X86_PUSH32(0x464204u); sub_00366943(ctx, base);
	// 00464204 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464205 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004641F0, __imp__sub_004641F0)

X86_FUNC(__imp__sub_00464210) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464210 push 0x40000000
	{ uint32_t v = (uint32_t)(0x40000000u); X86_PUSH32(v); }
	// 00464215 mov ecx, 0x6ABD68
	{ ctx.ecx = (uint32_t)(0x6ABD68u); }
	// 0046421A call 0x003C7640
	X86_PUSH32(0x46421Fu); sub_003C7640(ctx, base);
	// 0046421F push 0x4657F0
	{ uint32_t v = (uint32_t)(0x4657F0u); X86_PUSH32(v); }
	// 00464224 mov dword ptr [0x006ABD64], 0x00
	{ uint32_t ea = (uint32_t)(0x6ABD64u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0046422E call 0x00366943
	X86_PUSH32(0x464233u); sub_00366943(ctx, base);
	// 00464233 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464234 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464210, __imp__sub_00464210)

X86_FUNC(__imp__sub_00464240) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464240 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00464242 mov ecx, 0x6ABD3C
	{ ctx.ecx = (uint32_t)(0x6ABD3Cu); }
	// 00464247 call 0x003EAFD0
	X86_PUSH32(0x46424Cu); sub_003EAFD0(ctx, base);
	// 0046424C push 0x465800
	{ uint32_t v = (uint32_t)(0x465800u); X86_PUSH32(v); }
	// 00464251 call 0x00366943
	X86_PUSH32(0x464256u); sub_00366943(ctx, base);
	// 00464256 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464257 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464240, __imp__sub_00464240)

X86_FUNC(__imp__sub_00464260) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464260 push 0x465810
	{ uint32_t v = (uint32_t)(0x465810u); X86_PUSH32(v); }
	// 00464265 call 0x00366943
	X86_PUSH32(0x46426Au); sub_00366943(ctx, base);
	// 0046426A pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046426B ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464260, __imp__sub_00464260)

X86_FUNC(__imp__sub_00464270) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464270 sub esp, 0x1C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x1Cu); uint32_t r = (uint32_t)(a - b); ctx.esp = (uint32_t)(r); cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00464273 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 00464274 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 00464275 mov esi, 0x6ABD90
	{ ctx.esi = (uint32_t)(0x6ABD90u); }
	// 0046427A mov edi, 0x10
	{ ctx.edi = (uint32_t)(0x10u); }
	// 0046427F nop
loc_00464280:
	// 00464280 lea ecx, [esp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 00464284 call 0x003D2E80
	X86_PUSH32(0x464289u); sub_003D2E80(ctx, base);
	// 00464289 push eax
	{ uint32_t v = (uint32_t)(ctx.eax); X86_PUSH32(v); }
	// 0046428A mov ecx, esi
	{ ctx.ecx = (uint32_t)(ctx.esi); }
	// 0046428C call 0x003ED8A0
	X86_PUSH32(0x464291u); sub_003ED8A0(ctx, base);
	// 00464291 lea ecx, [esp+0x08]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esp + 0x8u));
	// 00464295 call 0x003D2EA0
	X86_PUSH32(0x46429Au); sub_003D2EA0(ctx, base);
	// 0046429A add esi, 0x44
	{ uint32_t a = (uint32_t)(ctx.esi); uint32_t b = (uint32_t)(0x44u); uint32_t r = (uint32_t)(a + b); ctx.esi = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0046429D dec edi
	{ uint32_t a = (uint32_t)(ctx.edi);  uint32_t r = (uint32_t)(a - 1); ctx.edi = (uint32_t)(r); of = a == (uint32_t)(1u << 31); zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0046429E jnz 0x00464280
	if (!zf) { X86_BARRIER(); goto loc_00464280; }
	// 004642A0 push 0x465820
	{ uint32_t v = (uint32_t)(0x465820u); X86_PUSH32(v); }
	// 004642A5 call 0x00366943
	X86_PUSH32(0x4642AAu); sub_00366943(ctx, base);
	// 004642AA add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004642AD pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 004642AE pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 004642AF add esp, 0x1C
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x1Cu); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004642B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464270, __imp__sub_00464270)

X86_FUNC(__imp__sub_004642C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004642C0 mov ecx, 0x6AC1FC
	{ ctx.ecx = (uint32_t)(0x6AC1FCu); }
	// 004642C5 call 0x003E4D80
	X86_PUSH32(0x4642CAu); sub_003E4D80(ctx, base);
	// 004642CA xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004642CC push 0x6AC1FC
	{ uint32_t v = (uint32_t)(0x6AC1FCu); X86_PUSH32(v); }
	// 004642D1 mov ecx, 0x6ABCCC
	{ ctx.ecx = (uint32_t)(0x6ABCCCu); }
	// 004642D6 mov dword ptr [0x006AC1FC], 0x59B948
	{ uint32_t ea = (uint32_t)(0x6AC1FCu); X86_MEM32(ea) = (uint32_t)(0x59B948u); }
	// 004642E0 mov [0x006AC20C], eax
	{ uint32_t ea = (uint32_t)(0x6AC20Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004642E5 mov [0x006AC208], eax
	{ uint32_t ea = (uint32_t)(0x6AC208u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004642EA mov [0x006AC204], eax
	{ uint32_t ea = (uint32_t)(0x6AC204u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004642EF call 0x003E5320
	X86_PUSH32(0x4642F4u); sub_003E5320(ctx, base);
	// 004642F4 cmp dword ptr [0x005DE7D4], 0x01
	{ uint32_t ea = (uint32_t)(0x5DE7D4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004642FB jbe 0x00464307
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_00464307; }
	// 004642FD mov ecx, 0x6AC1FC
	{ ctx.ecx = (uint32_t)(0x6AC1FCu); }
	// 00464302 call 0x003E26F0
	X86_PUSH32(0x464307u); sub_003E26F0(ctx, base);
loc_00464307:
	// 00464307 push 0x4658B0
	{ uint32_t v = (uint32_t)(0x4658B0u); X86_PUSH32(v); }
	// 0046430C call 0x00366943
	X86_PUSH32(0x464311u); sub_00366943(ctx, base);
	// 00464311 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464312 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004642C0, __imp__sub_004642C0)

X86_FUNC(__imp__sub_00464320) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464320 push 0x465900
	{ uint32_t v = (uint32_t)(0x465900u); X86_PUSH32(v); }
	// 00464325 call 0x00366943
	X86_PUSH32(0x46432Au); sub_00366943(ctx, base);
	// 0046432A xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0046432C add esp, 0x04
	{ uint32_t a = (uint32_t)(ctx.esp); uint32_t b = (uint32_t)(0x4u); uint32_t r = (uint32_t)(a + b); ctx.esp = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0046432F mov [0x006AC218], eax
	{ uint32_t ea = (uint32_t)(0x6AC218u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00464334 mov [0x006AC21C], eax
	{ uint32_t ea = (uint32_t)(0x6AC21Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00464339 mov dword ptr [0x006AC220], 0x6AC218
	{ uint32_t ea = (uint32_t)(0x6AC220u); X86_MEM32(ea) = (uint32_t)(0x6AC218u); }
	// 00464343 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464320, __imp__sub_00464320)

X86_FUNC(__imp__sub_00464350) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464350 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00464352 mov ecx, 0x6AC228
	{ ctx.ecx = (uint32_t)(0x6AC228u); }
	// 00464357 call 0x003C7640
	X86_PUSH32(0x46435Cu); sub_003C7640(ctx, base);
	// 0046435C mov ecx, 0x6AC23C
	{ ctx.ecx = (uint32_t)(0x6AC23Cu); }
	// 00464361 call 0x003FFA40
	X86_PUSH32(0x464366u); sub_003FFA40(ctx, base);
	// 00464366 push 0x465910
	{ uint32_t v = (uint32_t)(0x465910u); X86_PUSH32(v); }
	// 0046436B mov [0x006AC240], eax
	{ uint32_t ea = (uint32_t)(0x6AC240u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00464370 mov dword ptr [0x006AC244], 0x00
	{ uint32_t ea = (uint32_t)(0x6AC244u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 0046437A call 0x00366943
	X86_PUSH32(0x46437Fu); sub_00366943(ctx, base);
	// 0046437F pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464380 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464350, __imp__sub_00464350)

X86_FUNC(__imp__sub_00464390) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464390 push 0x00
	{ uint32_t v = (uint32_t)(0x0u); X86_PUSH32(v); }
	// 00464392 mov ecx, 0x6AC24C
	{ ctx.ecx = (uint32_t)(0x6AC24Cu); }
	// 00464397 call 0x003C7640
	X86_PUSH32(0x46439Cu); sub_003C7640(ctx, base);
	// 0046439C mov ecx, 0x6AC260
	{ ctx.ecx = (uint32_t)(0x6AC260u); }
	// 004643A1 call 0x003FFEC0
	X86_PUSH32(0x4643A6u); sub_003FFEC0(ctx, base);
	// 004643A6 push 0x465950
	{ uint32_t v = (uint32_t)(0x465950u); X86_PUSH32(v); }
	// 004643AB mov [0x006AC264], eax
	{ uint32_t ea = (uint32_t)(0x6AC264u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004643B0 mov dword ptr [0x006AC268], 0x00
	{ uint32_t ea = (uint32_t)(0x6AC268u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 004643BA call 0x00366943
	X86_PUSH32(0x4643BFu); sub_00366943(ctx, base);
	// 004643BF pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004643C0 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464390, __imp__sub_00464390)

X86_FUNC(__imp__sub_004643D0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004643D0 mov ecx, 0x6AC284
	{ ctx.ecx = (uint32_t)(0x6AC284u); }
	// 004643D5 call 0x003E3910
	X86_PUSH32(0x4643DAu); sub_003E3910(ctx, base);
	// 004643DA push 0x465990
	{ uint32_t v = (uint32_t)(0x465990u); X86_PUSH32(v); }
	// 004643DF call 0x00366943
	X86_PUSH32(0x4643E4u); sub_00366943(ctx, base);
	// 004643E4 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004643E5 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004643D0, __imp__sub_004643D0)

X86_FUNC(__imp__sub_004643F0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004643F0 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 004643F2 mov ecx, 0x6AC270
	{ ctx.ecx = (uint32_t)(0x6AC270u); }
	// 004643F7 call 0x003EBCD0
	X86_PUSH32(0x4643FCu); sub_003EBCD0(ctx, base);
	// 004643FC push 0x4659A0
	{ uint32_t v = (uint32_t)(0x4659A0u); X86_PUSH32(v); }
	// 00464401 mov dword ptr [0x006AC270], 0x59D5A0
	{ uint32_t ea = (uint32_t)(0x6AC270u); X86_MEM32(ea) = (uint32_t)(0x59D5A0u); }
	// 0046440B call 0x00366943
	X86_PUSH32(0x464410u); sub_00366943(ctx, base);
	// 00464410 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464411 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004643F0, __imp__sub_004643F0)

X86_FUNC(__imp__sub_00464420) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464420 push 0xEA60
	{ uint32_t v = (uint32_t)(0xEA60u); X86_PUSH32(v); }
	// 00464425 push 0x59DDC4
	{ uint32_t v = (uint32_t)(0x59DDC4u); X86_PUSH32(v); }
	// 0046442A mov ecx, 0x6AC294
	{ ctx.ecx = (uint32_t)(0x6AC294u); }
	// 0046442F call 0x003E5F00
	X86_PUSH32(0x464434u); sub_003E5F00(ctx, base);
	// 00464434 push 0x4659B0
	{ uint32_t v = (uint32_t)(0x4659B0u); X86_PUSH32(v); }
	// 00464439 call 0x00366943
	X86_PUSH32(0x46443Eu); sub_00366943(ctx, base);
	// 0046443E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046443F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464420, __imp__sub_00464420)

X86_FUNC(__imp__sub_00464440) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464440 push 0xEA60
	{ uint32_t v = (uint32_t)(0xEA60u); X86_PUSH32(v); }
	// 00464445 push 0x59DDF0
	{ uint32_t v = (uint32_t)(0x59DDF0u); X86_PUSH32(v); }
	// 0046444A mov ecx, 0x6AC2C0
	{ ctx.ecx = (uint32_t)(0x6AC2C0u); }
	// 0046444F call 0x003E5F00
	X86_PUSH32(0x464454u); sub_003E5F00(ctx, base);
	// 00464454 push 0x4659C0
	{ uint32_t v = (uint32_t)(0x4659C0u); X86_PUSH32(v); }
	// 00464459 call 0x00366943
	X86_PUSH32(0x46445Eu); sub_00366943(ctx, base);
	// 0046445E pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 0046445F ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464440, __imp__sub_00464440)

X86_FUNC(__imp__sub_00464460) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464460 mov ecx, 0x6AC2F4
	{ ctx.ecx = (uint32_t)(0x6AC2F4u); }
	// 00464465 call 0x003E4D80
	X86_PUSH32(0x46446Au); sub_003E4D80(ctx, base);
	// 0046446A xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0046446C push 0x6AC2F4
	{ uint32_t v = (uint32_t)(0x6AC2F4u); X86_PUSH32(v); }
	// 00464471 mov ecx, 0x6ABCCC
	{ ctx.ecx = (uint32_t)(0x6ABCCCu); }
	// 00464476 mov dword ptr [0x006AC2F4], 0x59E018
	{ uint32_t ea = (uint32_t)(0x6AC2F4u); X86_MEM32(ea) = (uint32_t)(0x59E018u); }
	// 00464480 mov [0x006AC304], eax
	{ uint32_t ea = (uint32_t)(0x6AC304u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00464485 mov [0x006AC300], eax
	{ uint32_t ea = (uint32_t)(0x6AC300u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0046448A mov [0x006AC2FC], eax
	{ uint32_t ea = (uint32_t)(0x6AC2FCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0046448F call 0x003E5320
	X86_PUSH32(0x464494u); sub_003E5320(ctx, base);
	// 00464494 cmp dword ptr [0x005DE7D4], 0x01
	{ uint32_t ea = (uint32_t)(0x5DE7D4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0046449B jbe 0x004644A7
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_004644A7; }
	// 0046449D mov ecx, 0x6AC2F4
	{ ctx.ecx = (uint32_t)(0x6AC2F4u); }
	// 004644A2 call 0x0040DF20
	X86_PUSH32(0x4644A7u); sub_0040DF20(ctx, base);
loc_004644A7:
	// 004644A7 push 0x4659D0
	{ uint32_t v = (uint32_t)(0x4659D0u); X86_PUSH32(v); }
	// 004644AC call 0x00366943
	X86_PUSH32(0x4644B1u); sub_00366943(ctx, base);
	// 004644B1 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 004644B2 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464460, __imp__sub_00464460)

X86_FUNC(__imp__sub_004644C0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 004644C0 mov ecx, 0x6AC314
	{ ctx.ecx = (uint32_t)(0x6AC314u); }
	// 004644C5 call 0x003E4D80
	X86_PUSH32(0x4644CAu); sub_003E4D80(ctx, base);
	// 004644CA xor eax, eax
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(ctx.eax); uint32_t r = (uint32_t)(a ^ b); ctx.eax = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004644CC push 0x6AC314
	{ uint32_t v = (uint32_t)(0x6AC314u); X86_PUSH32(v); }
	// 004644D1 mov ecx, 0x6ABCCC
	{ ctx.ecx = (uint32_t)(0x6ABCCCu); }
	// 004644D6 mov dword ptr [0x006AC314], 0x59E6F0
	{ uint32_t ea = (uint32_t)(0x6AC314u); X86_MEM32(ea) = (uint32_t)(0x59E6F0u); }
	// 004644E0 mov [0x006AC324], eax
	{ uint32_t ea = (uint32_t)(0x6AC324u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004644E5 mov [0x006AC320], eax
	{ uint32_t ea = (uint32_t)(0x6AC320u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004644EA mov [0x006AC31C], eax
	{ uint32_t ea = (uint32_t)(0x6AC31Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004644EF call 0x003E5320
	X86_PUSH32(0x4644F4u); sub_003E5320(ctx, base);
	// 004644F4 cmp dword ptr [0x005DE7D4], 0x01
	{ uint32_t ea = (uint32_t)(0x5DE7D4u); uint32_t a = (uint32_t)(X86_MEM32(ea)), b = (uint32_t)(0x1u); uint32_t r = (uint32_t)(a - b); ca = a; cb = b; cf = a < b; of = (uint32_t)(((a ^ b) & (a ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004644FB jbe 0x00464507
	if ((uint32_t)ca <= (uint32_t)cb) { goto loc_00464507; }
	// 004644FD mov ecx, 0x6AC314
	{ ctx.ecx = (uint32_t)(0x6AC314u); }
	// 00464502 call 0x0040DF20
	X86_PUSH32(0x464507u); sub_0040DF20(ctx, base);
loc_00464507:
	// 00464507 push 0x465A20
	{ uint32_t v = (uint32_t)(0x465A20u); X86_PUSH32(v); }
	// 0046450C call 0x00366943
	X86_PUSH32(0x464511u); sub_00366943(ctx, base);
	// 00464511 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464512 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_004644C0, __imp__sub_004644C0)

X86_FUNC(__imp__sub_00464520) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464520 mov ecx, 0x6AC33C
	{ ctx.ecx = (uint32_t)(0x6AC33Cu); }
	// 00464525 call 0x003E3910
	X86_PUSH32(0x46452Au); sub_003E3910(ctx, base);
	// 0046452A push 0x465A70
	{ uint32_t v = (uint32_t)(0x465A70u); X86_PUSH32(v); }
	// 0046452F call 0x00366943
	X86_PUSH32(0x464534u); sub_00366943(ctx, base);
	// 00464534 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464535 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464520, __imp__sub_00464520)

X86_FUNC(__imp__sub_00464540) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464540 push 0x01
	{ uint32_t v = (uint32_t)(0x1u); X86_PUSH32(v); }
	// 00464542 mov ecx, 0x6AC328
	{ ctx.ecx = (uint32_t)(0x6AC328u); }
	// 00464547 call 0x003EBCD0
	X86_PUSH32(0x46454Cu); sub_003EBCD0(ctx, base);
	// 0046454C push 0x465A80
	{ uint32_t v = (uint32_t)(0x465A80u); X86_PUSH32(v); }
	// 00464551 mov dword ptr [0x006AC328], 0x59E780
	{ uint32_t ea = (uint32_t)(0x6AC328u); X86_MEM32(ea) = (uint32_t)(0x59E780u); }
	// 0046455B call 0x00366943
	X86_PUSH32(0x464560u); sub_00366943(ctx, base);
	// 00464560 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464561 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464540, __imp__sub_00464540)

X86_FUNC(__imp__sub_00464570) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	// 00464570 push 0x6AC34C
	{ uint32_t v = (uint32_t)(0x6AC34Cu); X86_PUSH32(v); }
	// 00464575 call 0x00371B30
	X86_PUSH32(0x46457Au); sub_00371B30(ctx, base);
	// 0046457A fild [0x006AC34C]
	{ uint32_t ea = (uint32_t)(0x6AC34Cu); x87_push(ctx, (double)(int64_t)X86_MEM64(ea)); }
	// 00464580 push 0x465A90
	{ uint32_t v = (uint32_t)(0x465A90u); X86_PUSH32(v); }
	// 00464585 fdivr [0x00500BA0]
	{ uint32_t ea = (uint32_t)(0x500BA0u); double s = X86_MEMF64(ea); double d = X87_ST(0); X87_ST(0) = (s / d); }
	// 0046458B fstp [0x006AC354]
	{ uint32_t ea = (uint32_t)(0x6AC354u); X86_MEMF64(ea) = X87_ST(0); x87_pop(ctx); }
	// 00464591 call 0x00366943
	X86_PUSH32(0x464596u); sub_00366943(ctx, base);
	// 00464596 pop ecx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ecx = (uint32_t)(v); }
	// 00464597 ret
	ctx.esp += 4; return;
}
X86_WEAK_FUNC(sub_00464570, __imp__sub_00464570)

X86_FUNC(__imp__sub_004645A0) {
	X86_LOAD_FLAGS();
	uint32_t ca = 0, cb = 0;
	(void)ca; (void)cb;
	goto loc_004645A0;
loc_004173E0:
	// 004173E0 push ebx
	{ uint32_t v = (uint32_t)(ctx.ebx); X86_PUSH32(v); }
	// 004173E1 push ebp
	{ uint32_t v = (uint32_t)(ctx.ebp); X86_PUSH32(v); }
	// 004173E2 push esi
	{ uint32_t v = (uint32_t)(ctx.esi); X86_PUSH32(v); }
	// 004173E3 mov esi, ecx
	{ ctx.esi = (uint32_t)(ctx.ecx); }
	// 004173E5 push edi
	{ uint32_t v = (uint32_t)(ctx.edi); X86_PUSH32(v); }
	// 004173E6 lea ecx, [esi+0xD9C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.esi + 0xD9Cu));
	// 004173EC call 0x004164A0
	X86_PUSH32(0x4173F1u); sub_004164A0(ctx, base);
	// 004173F1 xor edi, edi
	{ uint32_t a = (uint32_t)(ctx.edi); uint32_t b = (uint32_t)(ctx.edi); uint32_t r = (uint32_t)(a ^ b); ctx.edi = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004173F3 mov [esi+0xE98], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 004173F9 mov [esi+0xE9C], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 004173FF mov [esi+0xEA0], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417405 mov [esi+0xEA4], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0041740B mov [esi+0xEA8], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417411 mov [esi+0xEAC], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEACu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417417 mov [esi+0xEB0], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0041741D mov [esi+0xEB4], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417423 mov [esi+0xEB8], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417429 mov [esi+0xEBC], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0041742F mov [esi+0xEC0], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417435 mov [esi+0xEC4], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0041743B mov [esi+0xEC8], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417441 mov [esi+0xECC], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417447 mov [esi+0xED0], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0041744D mov [esi+0xED4], edi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED4u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417453 lea eax, [esi+0x12C]
	ctx.eax = (uint32_t)((uint32_t)(ctx.esi + 0x12Cu));
	// 00417459 mov [esi+0xE9C], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041745F add eax, 0x8C
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x8Cu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00417464 mov [esi+0xEA0], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041746A add eax, 0xB4
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xB4u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0041746F mov [esi+0xEA4], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00417475 add eax, 0xB4
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xB4u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0041747A mov [esi+0xEA8], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00417480 add eax, 0xA0
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xA0u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00417485 mov [esi+0xEAC], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEACu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041748B add eax, 0x14
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x14u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0041748E mov [esi+0xEB4], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00417494 add eax, 0x1E0
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1E0u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00417499 mov [esi+0xEB8], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041749F add eax, 0x1E0
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1E0u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004174A4 mov [esi+0xEBC], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004174AA add eax, 0x1E0
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1E0u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004174AF mov [esi+0xEC0], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004174B5 add eax, 0x1E0
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x1E0u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004174BA mov [esi+0xEC4], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004174C0 add eax, 0x78
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x78u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004174C3 mov [esi+0xEC8], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004174C9 add eax, 0x78
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x78u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004174CC mov [esi+0xECC], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004174D2 add eax, 0x78
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x78u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004174D5 mov [esi+0xED0], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004174DB add eax, 0x78
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x78u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 004174DE mov [esi+0xEB0], eax
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004174E4 mov ecx, 0x5DEFC4
	{ ctx.ecx = (uint32_t)(0x5DEFC4u); }
	// 004174E9 mov eax, 0x5DEE94
	{ ctx.eax = (uint32_t)(0x5DEE94u); }
	// 004174EE mov dword ptr [esi+0xD98], 0x5DEE48
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD98u); X86_MEM32(ea) = (uint32_t)(0x5DEE48u); }
	// 004174F8 mov [esi+0xE98], esi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 004174FE mov [esi+0xED4], esi
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED4u); X86_MEM32(ea) = (uint32_t)(ctx.esi); }
	// 00417504 call 0x00416740
	X86_PUSH32(0x417509u); sub_00416740(ctx, base);
	// 00417509 mov eax, [esi+0xD98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD98u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041750F lea ecx, [eax+0x1C8]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.eax + 0x1C8u));
	// 00417515 add eax, 0x98
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x98u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0041751A call 0x00416740
	X86_PUSH32(0x41751Fu); sub_00416740(ctx, base);
	// 0041751F mov eax, [esi+0xD98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD98u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00417525 lea ecx, [eax+0x214]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.eax + 0x214u));
	// 0041752B add eax, 0xE4
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0xE4u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00417530 call 0x00416740
	X86_PUSH32(0x417535u); sub_00416740(ctx, base);
	// 00417535 mov eax, [esi+0xD98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD98u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041753B lea ecx, [eax+0x260]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.eax + 0x260u));
	// 00417541 add eax, 0x130
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x130u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00417546 call 0x00416740
	X86_PUSH32(0x41754Bu); sub_00416740(ctx, base);
	// 0041754B mov eax, [esi+0xD98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD98u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00417551 lea ecx, [eax+0x474]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.eax + 0x474u));
	// 00417557 add eax, 0x344
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x344u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0041755C call 0x00416740
	X86_PUSH32(0x417561u); sub_00416740(ctx, base);
	// 00417561 mov eax, [esi+0xD98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD98u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00417567 lea ecx, [eax+0x4C0]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.eax + 0x4C0u));
	// 0041756D add eax, 0x390
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x390u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00417572 call 0x00416740
	X86_PUSH32(0x417577u); sub_00416740(ctx, base);
	// 00417577 mov eax, [esi+0xD98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD98u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041757D lea ecx, [eax+0x50C]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.eax + 0x50Cu));
	// 00417583 add eax, 0x3DC
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x3DCu); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00417588 call 0x00416740
	X86_PUSH32(0x41758Du); sub_00416740(ctx, base);
	// 0041758D mov eax, [esi+0xD98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xD98u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00417593 lea ecx, [eax+0x558]
	ctx.ecx = (uint32_t)((uint32_t)(ctx.eax + 0x558u));
	// 00417599 add eax, 0x428
	{ uint32_t a = (uint32_t)(ctx.eax); uint32_t b = (uint32_t)(0x428u); uint32_t r = (uint32_t)(a + b); ctx.eax = (uint32_t)(r); cf = r < a; of = (uint32_t)(((a ^ r) & (b ^ r)) >> 31) & 1; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 0041759E call 0x00416740
	X86_PUSH32(0x4175A3u); sub_00416740(ctx, base);
	// 004175A3 mov eax, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004175A9 mov dword ptr [eax], 0x59EB40
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x59EB40u); }
	// 004175AF mov ecx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004175B5 mov dword ptr [ecx+0x1C], 0x59EB50
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x59EB50u); }
	// 004175BC mov edx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 004175C2 mov dword ptr [edx+0x38], 0x59EB5C
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x59EB5Cu); }
	// 004175C9 mov eax, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004175CF mov dword ptr [eax+0x54], 0x59EB6C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x54u); X86_MEM32(ea) = (uint32_t)(0x59EB6Cu); }
	// 004175D6 mov ecx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004175DC mov dword ptr [ecx+0x70], 0x59EB7C
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x70u); X86_MEM32(ea) = (uint32_t)(0x59EB7Cu); }
	// 004175E3 mov edx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 004175E9 mov dword ptr [edx+0x8C], 0x59EB88
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x8Cu); X86_MEM32(ea) = (uint32_t)(0x59EB88u); }
	// 004175F3 mov eax, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004175F9 mov dword ptr [eax+0xA8], 0x59EB98
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xA8u); X86_MEM32(ea) = (uint32_t)(0x59EB98u); }
	// 00417603 mov ecx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00417609 mov dword ptr [ecx+0xC4], 0x59EBA8
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xC4u); X86_MEM32(ea) = (uint32_t)(0x59EBA8u); }
	// 00417613 mov edx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00417619 mov [edx+0x04], edi
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 0041761C mov ecx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00417622 mov eax, 0x01
	{ ctx.eax = (uint32_t)(0x1u); }
	// 00417627 mov [ecx+0x20], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041762A mov edx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00417630 mov ebx, 0x02
	{ ctx.ebx = (uint32_t)(0x2u); }
	// 00417635 mov [edx+0x3C], ebx
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417638 mov ecx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041763E mov dword ptr [ecx+0x58], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x58u); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 00417645 mov ecx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041764B mov edx, 0x04
	{ ctx.edx = (uint32_t)(0x4u); }
	// 00417650 mov [ecx+0x74], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x74u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00417653 mov edi, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 00417659 mov ecx, 0x05
	{ ctx.ecx = (uint32_t)(0x5u); }
	// 0041765E mov [edi+0x90], ecx
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x90u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00417664 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041766A mov edi, 0x06
	{ ctx.edi = (uint32_t)(0x6u); }
	// 0041766F mov [ebp+0xAC], edi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xACu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417675 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041767B mov dword ptr [ebp+0xC8], 0x07
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xC8u); X86_MEM32(ea) = (uint32_t)(0x7u); }
	// 00417685 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041768B mov [ebp+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041768E mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417694 mov [ebp+0x24], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x24u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417697 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041769D mov [ebp+0x40], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x40u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 004176A0 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004176A6 mov [ebp+0x5C], edi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x5Cu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 004176A9 mov edi, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 004176AF mov dword ptr [edi+0x78], 0x0C
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x78u); X86_MEM32(ea) = (uint32_t)(0xCu); }
	// 004176B6 mov edi, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 004176BC mov dword ptr [edi+0x94], 0x0D
	{ uint32_t ea = (uint32_t)(ctx.edi + 0x94u); X86_MEM32(ea) = (uint32_t)(0xDu); }
	// 004176C6 mov edi, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 004176CC mov dword ptr [edi+0xB0], 0x10
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xB0u); X86_MEM32(ea) = (uint32_t)(0x10u); }
	// 004176D6 mov edi, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 004176DC mov dword ptr [edi+0xCC], 0x11
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xCCu); X86_MEM32(ea) = (uint32_t)(0x11u); }
	// 004176E6 mov edi, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edi = (uint32_t)(X86_MEM32(ea)); }
	// 004176EC mov [edi+0x0C], eax
	{ uint32_t ea = (uint32_t)(ctx.edi + 0xCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004176EF mov eax, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004176F5 mov [eax+0x28], ebx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004176F8 mov eax, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004176FE mov [eax+0x44], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00417701 mov edx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00417707 mov [edx+0x60], ecx
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x60u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0041770A mov edx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00417710 mov eax, 0x08
	{ ctx.eax = (uint32_t)(0x8u); }
	// 00417715 mov [edx+0x7C], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x7Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00417718 mov edx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0041771E mov edi, 0x09
	{ ctx.edi = (uint32_t)(0x9u); }
	// 00417723 mov [edx+0x98], edi
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x98u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417729 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041772F mov edx, 0x0B
	{ ctx.edx = (uint32_t)(0xBu); }
	// 00417734 mov [ebp+0xB4], edx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xB4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0041773A mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417740 mov dword ptr [ebp+0xD0], 0x0C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xD0u); X86_MEM32(ea) = (uint32_t)(0xCu); }
	// 0041774A mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417750 mov [ebp+0x10], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417753 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417759 mov dword ptr [ebp+0x2C], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x2Cu); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 00417760 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417766 mov [ebp+0x48], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x48u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00417769 mov ecx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041776F mov dword ptr [ecx+0x64], 0x06
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x64u); X86_MEM32(ea) = (uint32_t)(0x6u); }
	// 00417776 mov ecx, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041777C mov [ecx+0x80], edi
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x80u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417782 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417788 mov ecx, 0x0A
	{ ctx.ecx = (uint32_t)(0xAu); }
	// 0041778D mov [ebp+0x9C], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x9Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00417793 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417799 mov dword ptr [ebp+0xB8], 0x0C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xB8u); X86_MEM32(ea) = (uint32_t)(0xCu); }
	// 004177A3 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004177A9 mov dword ptr [ebp+0xD4], 0x0D
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xD4u); X86_MEM32(ea) = (uint32_t)(0xDu); }
	// 004177B3 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004177B9 mov dword ptr [ebp+0x14], 0x10
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x10u); }
	// 004177C0 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004177C6 mov dword ptr [ebp+0x30], 0x05
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x30u); X86_MEM32(ea) = (uint32_t)(0x5u); }
	// 004177CD mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004177D3 mov dword ptr [ebp+0x4C], 0x11
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x11u); }
	// 004177DA mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004177E0 mov dword ptr [ebp+0x68], 0x06
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x68u); X86_MEM32(ea) = (uint32_t)(0x6u); }
	// 004177E7 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004177ED mov dword ptr [ebp+0x84], 0x0D
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x84u); X86_MEM32(ea) = (uint32_t)(0xDu); }
	// 004177F7 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004177FD mov dword ptr [ebp+0xA0], 0x07
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xA0u); X86_MEM32(ea) = (uint32_t)(0x7u); }
	// 00417807 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041780D mov dword ptr [ebp+0xBC], 0x0E
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xBCu); X86_MEM32(ea) = (uint32_t)(0xEu); }
	// 00417817 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041781D mov [ebp+0xD8], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xD8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00417823 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417829 mov dword ptr [ebp+0x18], 0x45
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x45u); }
	// 00417830 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417836 mov dword ptr [ebp+0x34], 0x46
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x34u); X86_MEM32(ea) = (uint32_t)(0x46u); }
	// 0041783D mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417843 mov dword ptr [ebp+0x50], 0x47
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x50u); X86_MEM32(ea) = (uint32_t)(0x47u); }
	// 0041784A mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417850 mov dword ptr [ebp+0x6C], 0x48
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x6Cu); X86_MEM32(ea) = (uint32_t)(0x48u); }
	// 00417857 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041785D mov dword ptr [ebp+0x88], 0x49
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x88u); X86_MEM32(ea) = (uint32_t)(0x49u); }
	// 00417867 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041786D mov dword ptr [ebp+0xA4], 0x4A
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xA4u); X86_MEM32(ea) = (uint32_t)(0x4Au); }
	// 00417877 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041787D mov dword ptr [ebp+0xC0], 0x4B
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xC0u); X86_MEM32(ea) = (uint32_t)(0x4Bu); }
	// 00417887 mov ebp, [esi+0xDA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xDA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041788D mov dword ptr [ebp+0xDC], 0x4C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xDCu); X86_MEM32(ea) = (uint32_t)(0x4Cu); }
	// 00417897 xor ebp, ebp
	{ uint32_t a = (uint32_t)(ctx.ebp); uint32_t b = (uint32_t)(ctx.ebp); uint32_t r = (uint32_t)(a ^ b); ctx.ebp = (uint32_t)(r); cf = 0; of = 0; zf = r == 0; sf = (uint32_t)(r >> 31) & 1; pf = X86_PARITY(r); }
	// 00417899 mov [esi+0xE8C], ebp
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE8Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebp); }
	// 0041789F mov [esi+0xE90], ebp
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE90u); X86_MEM32(ea) = (uint32_t)(ctx.ebp); }
	// 004178A5 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004178AB mov dword ptr [esi+0xE84], 0x59EBBC
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE84u); X86_MEM32(ea) = (uint32_t)(0x59EBBCu); }
	// 004178B5 mov dword ptr [ebp], 0x59EBC8
	{ uint32_t ea = (uint32_t)(ctx.ebp); X86_MEM32(ea) = (uint32_t)(0x59EBC8u); }
	// 004178BC mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004178C2 mov dword ptr [ebp+0x14], 0x59EBD0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59EBD0u); }
	// 004178C9 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004178CF mov dword ptr [ebp+0x28], 0x59EBDC
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59EBDCu); }
	// 004178D6 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004178DC mov dword ptr [ebp+0x3C], 0x59EBE4
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59EBE4u); }
	// 004178E3 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004178E9 mov dword ptr [ebp+0x50], 0x59EBF0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59EBF0u); }
	// 004178F0 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004178F6 mov dword ptr [ebp+0x64], 0x59EBFC
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59EBFCu); }
	// 004178FD mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417903 mov dword ptr [ebp+0x78], 0x59EC08
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x78u); X86_MEM32(ea) = (uint32_t)(0x59EC08u); }
	// 0041790A mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417910 mov dword ptr [ebp+0x8C], 0x59EC14
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8Cu); X86_MEM32(ea) = (uint32_t)(0x59EC14u); }
	// 0041791A mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417920 mov dword ptr [ebp+0xA0], 0x59EC1C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xA0u); X86_MEM32(ea) = (uint32_t)(0x59EC1Cu); }
	// 0041792A mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417930 mov dword ptr [ebp+0xB4], 0x59EC24
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xB4u); X86_MEM32(ea) = (uint32_t)(0x59EC24u); }
	// 0041793A mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417940 mov dword ptr [ebp+0xC8], 0x59EC30
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xC8u); X86_MEM32(ea) = (uint32_t)(0x59EC30u); }
	// 0041794A mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417950 mov dword ptr [ebp+0xDC], 0x59EC3C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xDCu); X86_MEM32(ea) = (uint32_t)(0x59EC3Cu); }
	// 0041795A mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417960 mov dword ptr [ebp+0xF0], 0x59EC48
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xF0u); X86_MEM32(ea) = (uint32_t)(0x59EC48u); }
	// 0041796A mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417970 mov dword ptr [ebp+0x104], 0x59EC58
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x104u); X86_MEM32(ea) = (uint32_t)(0x59EC58u); }
	// 0041797A mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417980 mov dword ptr [ebp+0x118], 0x59EC64
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x118u); X86_MEM32(ea) = (uint32_t)(0x59EC64u); }
	// 0041798A mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417990 mov dword ptr [ebp+0x04], 0x00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); X86_MEM32(ea) = (uint32_t)(0x0u); }
	// 00417997 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041799D mov dword ptr [ebp+0x18], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x18u); X86_MEM32(ea) = (uint32_t)(0x1u); }
	// 004179A4 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004179AA mov [ebp+0x2C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004179AD mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004179B3 mov dword ptr [ebp+0x40], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x40u); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 004179BA mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004179C0 mov dword ptr [ebp+0x54], 0x05
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x54u); X86_MEM32(ea) = (uint32_t)(0x5u); }
	// 004179C7 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004179CD mov dword ptr [ebp+0x68], 0x06
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x68u); X86_MEM32(ea) = (uint32_t)(0x6u); }
	// 004179D4 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004179DA mov dword ptr [ebp+0x7C], 0x07
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x7Cu); X86_MEM32(ea) = (uint32_t)(0x7u); }
	// 004179E1 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004179E7 mov [ebp+0x90], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x90u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 004179ED mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004179F3 mov dword ptr [ebp+0xA4], 0x0C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xA4u); X86_MEM32(ea) = (uint32_t)(0xCu); }
	// 004179FD mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A03 mov dword ptr [ebp+0xB8], 0x0D
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xB8u); X86_MEM32(ea) = (uint32_t)(0xDu); }
	// 00417A0D mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A13 mov dword ptr [ebp+0xCC], 0x0E
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCCu); X86_MEM32(ea) = (uint32_t)(0xEu); }
	// 00417A1D mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A23 mov dword ptr [ebp+0xE0], 0x10
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xE0u); X86_MEM32(ea) = (uint32_t)(0x10u); }
	// 00417A2D mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A33 mov dword ptr [ebp+0xF4], 0x11
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xF4u); X86_MEM32(ea) = (uint32_t)(0x11u); }
	// 00417A3D mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A43 mov dword ptr [ebp+0x108], 0x12
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x108u); X86_MEM32(ea) = (uint32_t)(0x12u); }
	// 00417A4D mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A53 mov dword ptr [ebp+0x11C], 0x14
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x11Cu); X86_MEM32(ea) = (uint32_t)(0x14u); }
	// 00417A5D mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A63 mov [ebp+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417A66 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A6C mov [ebp+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417A6F mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A75 mov [ebp+0x1C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417A78 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A7E mov [ebp+0x30], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417A81 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A87 mov [ebp+0x44], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417A8A mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A90 mov [ebp+0x58], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417A93 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417A99 mov [ebp+0x6C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417A9C mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417AA2 mov [ebp+0x80], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x80u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417AA8 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417AAE mov [ebp+0x94], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x94u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417AB4 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417ABA mov [ebp+0xA8], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xA8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417AC0 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417AC6 mov [ebp+0xBC], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xBCu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417ACC mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417AD2 mov [ebp+0xD0], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xD0u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417AD8 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417ADE mov [ebp+0xE4], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xE4u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417AE4 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417AEA mov [ebp+0xF8], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xF8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417AF0 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417AF6 mov [ebp+0x10C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417AFC mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B02 mov [ebp+0x120], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x120u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417B08 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B0E mov dword ptr [ebp+0x0C], 0x01
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); X86_MEM32(ea) = (uint32_t)(0x1u); }
	// 00417B15 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B1B mov [ebp+0x20], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x20u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417B1E mov ebx, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417B24 mov dword ptr [ebx+0x34], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 00417B2B mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B31 mov ebx, 0x04
	{ ctx.ebx = (uint32_t)(0x4u); }
	// 00417B36 mov [ebp+0x48], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x48u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417B39 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B3F mov dword ptr [ebp+0x5C], 0x05
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x5u); }
	// 00417B46 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B4C mov dword ptr [ebp+0x70], 0x06
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x70u); X86_MEM32(ea) = (uint32_t)(0x6u); }
	// 00417B53 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B59 mov dword ptr [ebp+0x84], 0x07
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x84u); X86_MEM32(ea) = (uint32_t)(0x7u); }
	// 00417B63 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B69 mov [ebp+0x98], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x98u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00417B6F mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B75 mov [ebp+0xAC], edi
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xACu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00417B7B mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B81 mov [ebp+0xC0], ecx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xC0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00417B87 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B8D mov [ebp+0xD4], edx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xD4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00417B93 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417B99 mov dword ptr [ebp+0xE8], 0x0C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xE8u); X86_MEM32(ea) = (uint32_t)(0xCu); }
	// 00417BA3 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417BA9 mov dword ptr [ebp+0xFC], 0x0D
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xFCu); X86_MEM32(ea) = (uint32_t)(0xDu); }
	// 00417BB3 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417BB9 mov dword ptr [ebp+0x110], 0x0E
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x110u); X86_MEM32(ea) = (uint32_t)(0xEu); }
	// 00417BC3 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417BC9 mov dword ptr [ebp+0x124], 0x0F
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x124u); X86_MEM32(ea) = (uint32_t)(0xFu); }
	// 00417BD3 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417BD9 mov dword ptr [ebp+0x10], 0x800
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); X86_MEM32(ea) = (uint32_t)(0x800u); }
	// 00417BE0 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417BE6 mov dword ptr [ebp+0x24], 0x801
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x24u); X86_MEM32(ea) = (uint32_t)(0x801u); }
	// 00417BED mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417BF3 mov dword ptr [ebp+0x38], 0x802
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x38u); X86_MEM32(ea) = (uint32_t)(0x802u); }
	// 00417BFA mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417C00 mov dword ptr [ebp+0x4C], 0x803
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x803u); }
	// 00417C07 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417C0D mov dword ptr [ebp+0x60], 0x804
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x60u); X86_MEM32(ea) = (uint32_t)(0x804u); }
	// 00417C14 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417C1A mov dword ptr [ebp+0x74], 0x805
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x74u); X86_MEM32(ea) = (uint32_t)(0x805u); }
	// 00417C21 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417C27 mov dword ptr [ebp+0x88], 0x806
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x88u); X86_MEM32(ea) = (uint32_t)(0x806u); }
	// 00417C31 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417C37 mov dword ptr [ebp+0x9C], 0x807
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x807u); }
	// 00417C41 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417C47 mov dword ptr [ebp+0xB0], 0x808
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xB0u); X86_MEM32(ea) = (uint32_t)(0x808u); }
	// 00417C51 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417C57 mov dword ptr [ebp+0xC4], 0x809
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xC4u); X86_MEM32(ea) = (uint32_t)(0x809u); }
	// 00417C61 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417C67 mov dword ptr [ebp+0xD8], 0x80A
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xD8u); X86_MEM32(ea) = (uint32_t)(0x80Au); }
	// 00417C71 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417C77 mov dword ptr [ebp+0xEC], 0x80B
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xECu); X86_MEM32(ea) = (uint32_t)(0x80Bu); }
	// 00417C81 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417C87 mov dword ptr [ebp+0x100], 0x80C
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x100u); X86_MEM32(ea) = (uint32_t)(0x80Cu); }
	// 00417C91 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417C97 mov dword ptr [ebp+0x114], 0x80D
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x114u); X86_MEM32(ea) = (uint32_t)(0x80Du); }
	// 00417CA1 mov ebp, [esi+0xE98]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE98u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417CA7 mov dword ptr [ebp+0x128], 0x80E
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x128u); X86_MEM32(ea) = (uint32_t)(0x80Eu); }
	// 00417CB1 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417CB7 mov dword ptr [ebp], 0x59EC6C
	{ uint32_t ea = (uint32_t)(ctx.ebp); X86_MEM32(ea) = (uint32_t)(0x59EC6Cu); }
	// 00417CBE mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417CC4 mov dword ptr [ebp+0x14], 0x59EC78
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59EC78u); }
	// 00417CCB mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417CD1 mov dword ptr [ebp+0x28], 0x59EC88
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59EC88u); }
	// 00417CD8 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417CDE mov dword ptr [ebp+0x3C], 0x59EC98
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59EC98u); }
	// 00417CE5 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417CEB mov dword ptr [ebp+0x50], 0x59ECA8
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59ECA8u); }
	// 00417CF2 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417CF8 mov dword ptr [ebp+0x64], 0x59ECB0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59ECB0u); }
	// 00417CFF mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D05 mov dword ptr [ebp+0x78], 0x59ECC0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x78u); X86_MEM32(ea) = (uint32_t)(0x59ECC0u); }
	// 00417D0C mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D12 mov [ebp+0x04], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417D15 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D1B mov [ebp+0x18], eax
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x18u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00417D1E mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D24 mov [ebp+0x2C], edx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x2Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00417D27 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D2D mov dword ptr [ebp+0x40], 0x0F
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x40u); X86_MEM32(ea) = (uint32_t)(0xFu); }
	// 00417D34 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D3A mov dword ptr [ebp+0x54], 0x13
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x54u); X86_MEM32(ea) = (uint32_t)(0x13u); }
	// 00417D41 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D47 mov dword ptr [ebp+0x08], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 00417D4E mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D54 mov dword ptr [ebp+0x1C], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 00417D5B mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D61 mov dword ptr [ebp+0x30], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x30u); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 00417D68 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D6E mov dword ptr [ebp+0x44], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x44u); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 00417D75 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D7B mov dword ptr [ebp+0x58], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x58u); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 00417D82 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D88 mov dword ptr [ebp+0x6C], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x6Cu); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 00417D8F mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417D95 mov dword ptr [ebp+0x80], 0x03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x80u); X86_MEM32(ea) = (uint32_t)(0x3u); }
	// 00417D9F mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417DA5 mov dword ptr [ebp+0x0C], 0x10
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xCu); X86_MEM32(ea) = (uint32_t)(0x10u); }
	// 00417DAC mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417DB2 mov dword ptr [ebp+0x20], 0x11
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x20u); X86_MEM32(ea) = (uint32_t)(0x11u); }
	// 00417DB9 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417DBF mov dword ptr [ebp+0x34], 0x12
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x34u); X86_MEM32(ea) = (uint32_t)(0x12u); }
	// 00417DC6 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417DCC mov dword ptr [ebp+0x48], 0x13
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x48u); X86_MEM32(ea) = (uint32_t)(0x13u); }
	// 00417DD3 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417DD9 mov dword ptr [ebp+0x5C], 0x14
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x14u); }
	// 00417DE0 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417DE6 mov dword ptr [ebp+0x70], 0x15
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x70u); X86_MEM32(ea) = (uint32_t)(0x15u); }
	// 00417DED mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417DF3 mov dword ptr [ebp+0x84], 0x16
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x84u); X86_MEM32(ea) = (uint32_t)(0x16u); }
	// 00417DFD mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E03 mov dword ptr [ebp+0x10], 0xC00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x10u); X86_MEM32(ea) = (uint32_t)(0xC00u); }
	// 00417E0A mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E10 mov dword ptr [ebp+0x24], 0xC01
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x24u); X86_MEM32(ea) = (uint32_t)(0xC01u); }
	// 00417E17 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E1D mov dword ptr [ebp+0x38], 0xC02
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x38u); X86_MEM32(ea) = (uint32_t)(0xC02u); }
	// 00417E24 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E2A mov dword ptr [ebp+0x4C], 0xC03
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0xC03u); }
	// 00417E31 mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E37 mov dword ptr [ebp+0x60], 0xC04
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x60u); X86_MEM32(ea) = (uint32_t)(0xC04u); }
	// 00417E3E mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E44 mov dword ptr [ebp+0x74], 0xC05
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x74u); X86_MEM32(ea) = (uint32_t)(0xC05u); }
	// 00417E4B mov ebp, [esi+0xE9C]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xE9Cu); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E51 mov dword ptr [ebp+0x88], 0xC06
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x88u); X86_MEM32(ea) = (uint32_t)(0xC06u); }
	// 00417E5B mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E61 mov dword ptr [ebp], 0x59ECD0
	{ uint32_t ea = (uint32_t)(ctx.ebp); X86_MEM32(ea) = (uint32_t)(0x59ECD0u); }
	// 00417E68 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E6E mov dword ptr [ebp+0x14], 0x59ECD8
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59ECD8u); }
	// 00417E75 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E7B mov dword ptr [ebp+0x28], 0x59ECE0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59ECE0u); }
	// 00417E82 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E88 mov dword ptr [ebp+0x3C], 0x59ECE8
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59ECE8u); }
	// 00417E8F mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417E95 mov dword ptr [ebp+0x50], 0x59ECF0
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59ECF0u); }
	// 00417E9C mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417EA2 mov dword ptr [ebp+0x64], 0x59ECF8
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59ECF8u); }
	// 00417EA9 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417EAF mov dword ptr [ebp+0x78], 0x59ED00
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x78u); X86_MEM32(ea) = (uint32_t)(0x59ED00u); }
	// 00417EB6 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417EBC mov dword ptr [ebp+0x8C], 0x59ED08
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8Cu); X86_MEM32(ea) = (uint32_t)(0x59ED08u); }
	// 00417EC6 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417ECC mov dword ptr [ebp+0xA0], 0x59ED10
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xA0u); X86_MEM32(ea) = (uint32_t)(0x59ED10u); }
	// 00417ED6 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417EDC mov [ebp+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417EDF mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417EE5 mov [ebp+0x1C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417EE8 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417EEE mov [ebp+0x30], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417EF1 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417EF7 mov [ebp+0x44], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417EFA mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417F00 mov [ebp+0x58], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417F03 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417F09 mov [ebp+0x6C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417F0C mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417F12 mov [ebp+0x80], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x80u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417F18 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417F1E mov [ebp+0x94], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x94u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417F24 mov ebp, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00417F2A mov [ebp+0xA8], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xA8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00417F30 mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417F36 mov dword ptr [ebx+0x0C], 0x17
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x17u); }
	// 00417F3D mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417F43 mov dword ptr [ebx+0x20], 0x18
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x20u); X86_MEM32(ea) = (uint32_t)(0x18u); }
	// 00417F4A mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417F50 mov dword ptr [ebx+0x34], 0x19
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x19u); }
	// 00417F57 mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417F5D mov dword ptr [ebx+0x48], 0x1A
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x48u); X86_MEM32(ea) = (uint32_t)(0x1Au); }
	// 00417F64 mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417F6A mov dword ptr [ebx+0x5C], 0x1B
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x1Bu); }
	// 00417F71 mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417F77 mov dword ptr [ebx+0x70], 0x1C
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x70u); X86_MEM32(ea) = (uint32_t)(0x1Cu); }
	// 00417F7E mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417F84 mov dword ptr [ebx+0x84], 0x1D
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x84u); X86_MEM32(ea) = (uint32_t)(0x1Du); }
	// 00417F8E mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417F94 mov dword ptr [ebx+0x98], 0x1E
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x98u); X86_MEM32(ea) = (uint32_t)(0x1Eu); }
	// 00417F9E mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417FA4 mov dword ptr [ebx+0xAC], 0x1F
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xACu); X86_MEM32(ea) = (uint32_t)(0x1Fu); }
	// 00417FAE mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417FB4 mov dword ptr [ebx+0x10], 0x1000
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); X86_MEM32(ea) = (uint32_t)(0x1000u); }
	// 00417FBB mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417FC1 mov dword ptr [ebx+0x24], 0x1001
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x24u); X86_MEM32(ea) = (uint32_t)(0x1001u); }
	// 00417FC8 mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417FCE mov dword ptr [ebx+0x38], 0x1002
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x1002u); }
	// 00417FD5 mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417FDB mov dword ptr [ebx+0x4C], 0x1003
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x1003u); }
	// 00417FE2 mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417FE8 mov dword ptr [ebx+0x60], 0x1004
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x60u); X86_MEM32(ea) = (uint32_t)(0x1004u); }
	// 00417FEF mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00417FF5 mov dword ptr [ebx+0x74], 0x1005
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x74u); X86_MEM32(ea) = (uint32_t)(0x1005u); }
	// 00417FFC mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418002 mov dword ptr [ebx+0x88], 0x1006
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x88u); X86_MEM32(ea) = (uint32_t)(0x1006u); }
	// 0041800C mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418012 mov dword ptr [ebx+0x9C], 0x1007
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x1007u); }
	// 0041801C mov ebx, [esi+0xEA0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418022 mov dword ptr [ebx+0xB0], 0x1008
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xB0u); X86_MEM32(ea) = (uint32_t)(0x1008u); }
	// 0041802C mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418032 mov dword ptr [ebx], 0x59ED18
	{ uint32_t ea = (uint32_t)(ctx.ebx); X86_MEM32(ea) = (uint32_t)(0x59ED18u); }
	// 00418038 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041803E mov dword ptr [ebx+0x14], 0x59ED20
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59ED20u); }
	// 00418045 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041804B mov dword ptr [ebx+0x28], 0x59ED28
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59ED28u); }
	// 00418052 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418058 mov dword ptr [ebx+0x3C], 0x59ED30
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59ED30u); }
	// 0041805F mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418065 mov dword ptr [ebx+0x50], 0x59ED38
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59ED38u); }
	// 0041806C mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418072 mov dword ptr [ebx+0x64], 0x59ED40
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59ED40u); }
	// 00418079 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041807F mov dword ptr [ebx+0x78], 0x59ED48
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x78u); X86_MEM32(ea) = (uint32_t)(0x59ED48u); }
	// 00418086 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041808C mov dword ptr [ebx+0x8C], 0x59ED50
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x8Cu); X86_MEM32(ea) = (uint32_t)(0x59ED50u); }
	// 00418096 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041809C mov dword ptr [ebx+0xA0], 0x59ED58
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xA0u); X86_MEM32(ea) = (uint32_t)(0x59ED58u); }
	// 004180A6 mov ebp, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004180AC mov ebx, 0x05
	{ ctx.ebx = (uint32_t)(0x5u); }
	// 004180B1 mov [ebp+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004180B4 mov ebp, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004180BA mov [ebp+0x1C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004180BD mov ebp, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004180C3 mov [ebp+0x30], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004180C6 mov ebp, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004180CC mov [ebp+0x44], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004180CF mov ebp, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004180D5 mov [ebp+0x58], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004180D8 mov ebp, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004180DE mov [ebp+0x6C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004180E1 mov ebp, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004180E7 mov [ebp+0x80], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x80u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004180ED mov ebp, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004180F3 mov [ebp+0x94], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x94u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004180F9 mov ebp, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004180FF mov [ebp+0xA8], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0xA8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00418105 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041810B mov dword ptr [ebx+0x0C], 0x20
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x20u); }
	// 00418112 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418118 mov dword ptr [ebx+0x20], 0x21
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x20u); X86_MEM32(ea) = (uint32_t)(0x21u); }
	// 0041811F mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418125 mov dword ptr [ebx+0x34], 0x22
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x22u); }
	// 0041812C mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418132 mov dword ptr [ebx+0x48], 0x23
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x48u); X86_MEM32(ea) = (uint32_t)(0x23u); }
	// 00418139 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041813F mov dword ptr [ebx+0x5C], 0x24
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x24u); }
	// 00418146 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041814C mov dword ptr [ebx+0x70], 0x25
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x70u); X86_MEM32(ea) = (uint32_t)(0x25u); }
	// 00418153 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418159 mov dword ptr [ebx+0x84], 0x26
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x84u); X86_MEM32(ea) = (uint32_t)(0x26u); }
	// 00418163 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418169 mov dword ptr [ebx+0x98], 0x27
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x98u); X86_MEM32(ea) = (uint32_t)(0x27u); }
	// 00418173 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418179 mov dword ptr [ebx+0xAC], 0x28
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xACu); X86_MEM32(ea) = (uint32_t)(0x28u); }
	// 00418183 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418189 mov dword ptr [ebx+0x10], 0x1400
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); X86_MEM32(ea) = (uint32_t)(0x1400u); }
	// 00418190 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418196 mov dword ptr [ebx+0x24], 0x1401
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x24u); X86_MEM32(ea) = (uint32_t)(0x1401u); }
	// 0041819D mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004181A3 mov dword ptr [ebx+0x38], 0x1402
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x1402u); }
	// 004181AA mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004181B0 mov dword ptr [ebx+0x4C], 0x1403
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x1403u); }
	// 004181B7 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004181BD mov dword ptr [ebx+0x60], 0x1404
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x60u); X86_MEM32(ea) = (uint32_t)(0x1404u); }
	// 004181C4 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004181CA mov dword ptr [ebx+0x74], 0x1405
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x74u); X86_MEM32(ea) = (uint32_t)(0x1405u); }
	// 004181D1 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004181D7 mov dword ptr [ebx+0x88], 0x1406
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x88u); X86_MEM32(ea) = (uint32_t)(0x1406u); }
	// 004181E1 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004181E7 mov dword ptr [ebx+0x9C], 0x1407
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x1407u); }
	// 004181F1 mov ebx, [esi+0xEA4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004181F7 mov dword ptr [ebx+0xB0], 0x1408
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xB0u); X86_MEM32(ea) = (uint32_t)(0x1408u); }
	// 00418201 mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418207 mov dword ptr [ebx], 0x59ED60
	{ uint32_t ea = (uint32_t)(ctx.ebx); X86_MEM32(ea) = (uint32_t)(0x59ED60u); }
	// 0041820D mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418213 mov dword ptr [ebx+0x14], 0x59ED70
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59ED70u); }
	// 0041821A mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418220 mov dword ptr [ebx+0x28], 0x59ED7C
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59ED7Cu); }
	// 00418227 mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041822D mov dword ptr [ebx+0x3C], 0x59ED8C
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59ED8Cu); }
	// 00418234 mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041823A mov dword ptr [ebx+0x50], 0x59ED9C
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59ED9Cu); }
	// 00418241 mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418247 mov dword ptr [ebx+0x64], 0x59EDA8
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59EDA8u); }
	// 0041824E mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418254 mov dword ptr [ebx+0x78], 0x59EDB8
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x78u); X86_MEM32(ea) = (uint32_t)(0x59EDB8u); }
	// 0041825B mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418261 mov dword ptr [ebx+0x8C], 0x59EDC8
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x8Cu); X86_MEM32(ea) = (uint32_t)(0x59EDC8u); }
	// 0041826B mov ebp, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00418271 mov ebx, 0x06
	{ ctx.ebx = (uint32_t)(0x6u); }
	// 00418276 mov [ebp+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00418279 mov ebp, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041827F mov [ebp+0x1C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00418282 mov ebp, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00418288 mov [ebp+0x30], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0041828B mov ebp, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00418291 mov [ebp+0x44], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00418294 mov ebp, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041829A mov [ebp+0x58], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0041829D mov ebp, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004182A3 mov [ebp+0x6C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004182A6 mov ebp, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004182AC mov [ebp+0x80], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x80u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004182B2 mov ebp, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 004182B8 mov [ebp+0x94], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x94u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 004182BE mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004182C4 mov dword ptr [ebx+0x0C], 0x29
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x29u); }
	// 004182CB mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004182D1 mov dword ptr [ebx+0x20], 0x2A
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x20u); X86_MEM32(ea) = (uint32_t)(0x2Au); }
	// 004182D8 mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004182DE mov dword ptr [ebx+0x34], 0x2B
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x2Bu); }
	// 004182E5 mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004182EB mov dword ptr [ebx+0x48], 0x2C
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x48u); X86_MEM32(ea) = (uint32_t)(0x2Cu); }
	// 004182F2 mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004182F8 mov dword ptr [ebx+0x5C], 0x2D
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x2Du); }
	// 004182FF mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418305 mov dword ptr [ebx+0x70], 0x2E
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x70u); X86_MEM32(ea) = (uint32_t)(0x2Eu); }
	// 0041830C mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418312 mov dword ptr [ebx+0x84], 0x2F
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x84u); X86_MEM32(ea) = (uint32_t)(0x2Fu); }
	// 0041831C mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418322 mov dword ptr [ebx+0x98], 0x30
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x98u); X86_MEM32(ea) = (uint32_t)(0x30u); }
	// 0041832C mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418332 mov dword ptr [ebx+0x10], 0x1800
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); X86_MEM32(ea) = (uint32_t)(0x1800u); }
	// 00418339 mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041833F mov dword ptr [ebx+0x24], 0x1801
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x24u); X86_MEM32(ea) = (uint32_t)(0x1801u); }
	// 00418346 mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041834C mov dword ptr [ebx+0x38], 0x1802
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x1802u); }
	// 00418353 mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418359 mov dword ptr [ebx+0x4C], 0x1803
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x1803u); }
	// 00418360 mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418366 mov dword ptr [ebx+0x60], 0x1804
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x60u); X86_MEM32(ea) = (uint32_t)(0x1804u); }
	// 0041836D mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418373 mov dword ptr [ebx+0x74], 0x1805
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x74u); X86_MEM32(ea) = (uint32_t)(0x1805u); }
	// 0041837A mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418380 mov dword ptr [ebx+0x88], 0x1806
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x88u); X86_MEM32(ea) = (uint32_t)(0x1806u); }
	// 0041838A mov ebx, [esi+0xEA8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEA8u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418390 mov dword ptr [ebx+0x9C], 0x1807
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x1807u); }
	// 0041839A mov ebx, [esi+0xEAC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEACu); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004183A0 mov dword ptr [ebx], 0x59EDDC
	{ uint32_t ea = (uint32_t)(ctx.ebx); X86_MEM32(ea) = (uint32_t)(0x59EDDCu); }
	// 004183A6 mov ebx, [esi+0xEAC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEACu); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004183AC mov dword ptr [ebx+0x08], 0x07
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x8u); X86_MEM32(ea) = (uint32_t)(0x7u); }
	// 004183B3 mov ebx, [esi+0xEAC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEACu); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004183B9 mov dword ptr [ebx+0x0C], 0x31
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x31u); }
	// 004183C0 mov ebx, [esi+0xEAC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEACu); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004183C6 mov dword ptr [ebx+0x10], 0x1C00
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10u); X86_MEM32(ea) = (uint32_t)(0x1C00u); }
	// 004183CD mov ebx, [esi+0xEB0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004183D3 mov dword ptr [ebx], 0x59EDEC
	{ uint32_t ea = (uint32_t)(ctx.ebx); X86_MEM32(ea) = (uint32_t)(0x59EDECu); }
	// 004183D9 mov ebx, [esi+0xEB0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004183DF mov dword ptr [ebx+0x14], 0x59EDF4
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59EDF4u); }
	// 004183E6 mov ebx, [esi+0xEB0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004183EC mov dword ptr [ebx+0x28], 0x59EDFC
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59EDFCu); }
	// 004183F3 mov ebx, [esi+0xEB0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004183F9 mov dword ptr [ebx+0x3C], 0x59EE04
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59EE04u); }
	// 00418400 mov ebx, [esi+0xEB0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418406 mov dword ptr [ebx+0x50], 0x59EE0C
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59EE0Cu); }
	// 0041840D mov ebp, [esi+0xEB0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00418413 mov ebx, 0x10
	{ ctx.ebx = (uint32_t)(0x10u); }
	// 00418418 mov [ebp+0x08], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0041841B mov ebp, [esi+0xEB0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00418421 mov [ebp+0x1C], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00418424 mov ebp, [esi+0xEB0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041842A mov [ebp+0x30], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0041842D mov ebp, [esi+0xEB0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 00418433 mov [ebp+0x44], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 00418436 mov ebp, [esi+0xEB0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB0u); ctx.ebp = (uint32_t)(X86_MEM32(ea)); }
	// 0041843C mov [ebp+0x58], ebx
	{ uint32_t ea = (uint32_t)(ctx.ebp + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.ebx); }
	// 0041843F mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418445 mov dword ptr [ebx], 0x59EE14
	{ uint32_t ea = (uint32_t)(ctx.ebx); X86_MEM32(ea) = (uint32_t)(0x59EE14u); }
	// 0041844B mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418451 mov dword ptr [ebx+0x14], 0x59EE24
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59EE24u); }
	// 00418458 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041845E mov dword ptr [ebx+0x28], 0x59EE34
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59EE34u); }
	// 00418465 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041846B mov dword ptr [ebx+0x3C], 0x59EE44
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59EE44u); }
	// 00418472 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418478 mov dword ptr [ebx+0x50], 0x59EE54
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59EE54u); }
	// 0041847F mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418485 mov dword ptr [ebx+0x64], 0x59EE64
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59EE64u); }
	// 0041848C mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418492 mov dword ptr [ebx+0x78], 0x59EE74
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x78u); X86_MEM32(ea) = (uint32_t)(0x59EE74u); }
	// 00418499 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041849F mov dword ptr [ebx+0x8C], 0x59EE84
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x8Cu); X86_MEM32(ea) = (uint32_t)(0x59EE84u); }
	// 004184A9 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004184AF mov dword ptr [ebx+0xA0], 0x59EE94
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xA0u); X86_MEM32(ea) = (uint32_t)(0x59EE94u); }
	// 004184B9 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004184BF mov dword ptr [ebx+0xB4], 0x59EEA4
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xB4u); X86_MEM32(ea) = (uint32_t)(0x59EEA4u); }
	// 004184C9 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004184CF mov dword ptr [ebx+0xC8], 0x59EEB4
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xC8u); X86_MEM32(ea) = (uint32_t)(0x59EEB4u); }
	// 004184D9 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004184DF mov dword ptr [ebx+0xDC], 0x59EEC4
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xDCu); X86_MEM32(ea) = (uint32_t)(0x59EEC4u); }
	// 004184E9 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004184EF mov dword ptr [ebx+0xF0], 0x59EED4
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xF0u); X86_MEM32(ea) = (uint32_t)(0x59EED4u); }
	// 004184F9 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004184FF mov dword ptr [ebx+0x104], 0x59EEE4
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x104u); X86_MEM32(ea) = (uint32_t)(0x59EEE4u); }
	// 00418509 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041850F mov dword ptr [ebx+0x118], 0x59EEF4
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x118u); X86_MEM32(ea) = (uint32_t)(0x59EEF4u); }
	// 00418519 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041851F mov dword ptr [ebx+0x12C], 0x59EF04
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x12Cu); X86_MEM32(ea) = (uint32_t)(0x59EF04u); }
	// 00418529 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041852F mov dword ptr [ebx+0x140], 0x59EF14
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x140u); X86_MEM32(ea) = (uint32_t)(0x59EF14u); }
	// 00418539 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041853F mov dword ptr [ebx+0x154], 0x59EF24
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x154u); X86_MEM32(ea) = (uint32_t)(0x59EF24u); }
	// 00418549 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041854F mov dword ptr [ebx+0x168], 0x59EF34
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x168u); X86_MEM32(ea) = (uint32_t)(0x59EF34u); }
	// 00418559 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041855F mov dword ptr [ebx+0x17C], 0x59EF44
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x17Cu); X86_MEM32(ea) = (uint32_t)(0x59EF44u); }
	// 00418569 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041856F mov dword ptr [ebx+0x190], 0x59EF54
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x190u); X86_MEM32(ea) = (uint32_t)(0x59EF54u); }
	// 00418579 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041857F mov dword ptr [ebx+0x1A4], 0x59EF6C
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x1A4u); X86_MEM32(ea) = (uint32_t)(0x59EF6Cu); }
	// 00418589 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041858F mov dword ptr [ebx+0x1B8], 0x59EF84
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x1B8u); X86_MEM32(ea) = (uint32_t)(0x59EF84u); }
	// 00418599 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041859F mov dword ptr [ebx+0x1CC], 0x59EF9C
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x1CCu); X86_MEM32(ea) = (uint32_t)(0x59EF9Cu); }
	// 004185A9 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004185AF mov [ebx+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004185B2 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004185B8 mov [ebx+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004185BB mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004185C1 mov [ebx+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004185C4 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004185CA mov [ebx+0x44], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004185CD mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004185D3 mov [ebx+0x58], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004185D6 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004185DC mov [ebx+0x6C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004185DF mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004185E5 mov [ebx+0x80], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x80u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004185EB mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004185F1 mov [ebx+0x94], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x94u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004185F7 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004185FD mov [ebx+0xA8], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xA8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00418603 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418609 mov [ebx+0xBC], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xBCu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041860F mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418615 mov [ebx+0xD0], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xD0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041861B mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418621 mov [ebx+0xE4], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xE4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00418627 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041862D mov [ebx+0xF8], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0xF8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00418633 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418639 mov [ebx+0x10C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x10Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041863F mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418645 mov [ebx+0x120], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x120u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041864B mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418651 mov [ebx+0x134], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x134u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00418657 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041865D mov [ebx+0x148], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x148u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00418663 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418669 mov [ebx+0x15C], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x15Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041866F mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418675 mov [ebx+0x170], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x170u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041867B mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418681 mov [ebx+0x184], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x184u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00418687 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 0041868D mov [ebx+0x198], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x198u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00418693 mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 00418699 mov [ebx+0x1AC], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x1ACu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 0041869F mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004186A5 mov [ebx+0x1C0], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x1C0u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004186AB mov ebx, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.ebx = (uint32_t)(X86_MEM32(ea)); }
	// 004186B1 mov [ebx+0x1D4], eax
	{ uint32_t ea = (uint32_t)(ctx.ebx + 0x1D4u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004186B7 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004186BD mov dword ptr [eax+0x0C], 0x32
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(0x32u); }
	// 004186C4 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004186CA mov dword ptr [eax+0x20], 0x33
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x20u); X86_MEM32(ea) = (uint32_t)(0x33u); }
	// 004186D1 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004186D7 mov dword ptr [eax+0x34], 0x34
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x34u); }
	// 004186DE mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004186E4 mov dword ptr [eax+0x48], 0x35
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x48u); X86_MEM32(ea) = (uint32_t)(0x35u); }
	// 004186EB mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004186F1 mov dword ptr [eax+0x5C], 0x36
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x36u); }
	// 004186F8 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004186FE mov dword ptr [eax+0x70], 0x37
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x70u); X86_MEM32(ea) = (uint32_t)(0x37u); }
	// 00418705 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041870B mov dword ptr [eax+0x84], 0x38
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x84u); X86_MEM32(ea) = (uint32_t)(0x38u); }
	// 00418715 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041871B mov dword ptr [eax+0x98], 0x39
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x98u); X86_MEM32(ea) = (uint32_t)(0x39u); }
	// 00418725 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041872B mov dword ptr [eax+0xAC], 0x3A
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xACu); X86_MEM32(ea) = (uint32_t)(0x3Au); }
	// 00418735 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041873B mov dword ptr [eax+0xC0], 0x3B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xC0u); X86_MEM32(ea) = (uint32_t)(0x3Bu); }
	// 00418745 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041874B mov dword ptr [eax+0xD4], 0x3C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xD4u); X86_MEM32(ea) = (uint32_t)(0x3Cu); }
	// 00418755 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041875B mov dword ptr [eax+0xE8], 0x3D
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xE8u); X86_MEM32(ea) = (uint32_t)(0x3Du); }
	// 00418765 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041876B mov dword ptr [eax+0xFC], 0x3E
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFCu); X86_MEM32(ea) = (uint32_t)(0x3Eu); }
	// 00418775 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041877B mov dword ptr [eax+0x110], 0x3F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x110u); X86_MEM32(ea) = (uint32_t)(0x3Fu); }
	// 00418785 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041878B mov dword ptr [eax+0x124], 0x40
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x124u); X86_MEM32(ea) = (uint32_t)(0x40u); }
	// 00418795 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041879B mov dword ptr [eax+0x138], 0x41
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x138u); X86_MEM32(ea) = (uint32_t)(0x41u); }
	// 004187A5 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004187AB mov dword ptr [eax+0x14C], 0x42
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14Cu); X86_MEM32(ea) = (uint32_t)(0x42u); }
	// 004187B5 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004187BB mov dword ptr [eax+0x160], 0x43
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x160u); X86_MEM32(ea) = (uint32_t)(0x43u); }
	// 004187C5 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004187CB mov dword ptr [eax+0x174], 0x44
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x174u); X86_MEM32(ea) = (uint32_t)(0x44u); }
	// 004187D5 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004187DB mov dword ptr [eax+0x188], 0x45
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x188u); X86_MEM32(ea) = (uint32_t)(0x45u); }
	// 004187E5 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004187EB mov dword ptr [eax+0x19C], 0x46
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x19Cu); X86_MEM32(ea) = (uint32_t)(0x46u); }
	// 004187F5 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004187FB mov dword ptr [eax+0x1B0], 0x47
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1B0u); X86_MEM32(ea) = (uint32_t)(0x47u); }
	// 00418805 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041880B mov dword ptr [eax+0x1C4], 0x48
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1C4u); X86_MEM32(ea) = (uint32_t)(0x48u); }
	// 00418815 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041881B mov dword ptr [eax+0x1D8], 0x49
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1D8u); X86_MEM32(ea) = (uint32_t)(0x49u); }
	// 00418825 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041882B mov dword ptr [eax+0x10], 0x2000
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(0x2000u); }
	// 00418832 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418838 mov dword ptr [eax+0x24], 0x2001
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x24u); X86_MEM32(ea) = (uint32_t)(0x2001u); }
	// 0041883F mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418845 mov dword ptr [eax+0x38], 0x2002
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x38u); X86_MEM32(ea) = (uint32_t)(0x2002u); }
	// 0041884C mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418852 mov dword ptr [eax+0x4C], 0x2003
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x2003u); }
	// 00418859 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041885F mov dword ptr [eax+0x60], 0x2004
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x60u); X86_MEM32(ea) = (uint32_t)(0x2004u); }
	// 00418866 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041886C mov dword ptr [eax+0x74], 0x2005
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x74u); X86_MEM32(ea) = (uint32_t)(0x2005u); }
	// 00418873 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418879 mov dword ptr [eax+0x88], 0x2006
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x88u); X86_MEM32(ea) = (uint32_t)(0x2006u); }
	// 00418883 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418889 mov dword ptr [eax+0x9C], 0x2007
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x2007u); }
	// 00418893 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418899 mov dword ptr [eax+0xB0], 0x2008
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xB0u); X86_MEM32(ea) = (uint32_t)(0x2008u); }
	// 004188A3 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004188A9 mov dword ptr [eax+0xC4], 0x2009
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xC4u); X86_MEM32(ea) = (uint32_t)(0x2009u); }
	// 004188B3 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004188B9 mov dword ptr [eax+0xD8], 0x200A
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xD8u); X86_MEM32(ea) = (uint32_t)(0x200Au); }
	// 004188C3 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004188C9 mov dword ptr [eax+0xEC], 0x200B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xECu); X86_MEM32(ea) = (uint32_t)(0x200Bu); }
	// 004188D3 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004188D9 mov dword ptr [eax+0x100], 0x200C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x100u); X86_MEM32(ea) = (uint32_t)(0x200Cu); }
	// 004188E3 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004188E9 mov dword ptr [eax+0x114], 0x200D
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x114u); X86_MEM32(ea) = (uint32_t)(0x200Du); }
	// 004188F3 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004188F9 mov dword ptr [eax+0x128], 0x200E
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x128u); X86_MEM32(ea) = (uint32_t)(0x200Eu); }
	// 00418903 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418909 mov dword ptr [eax+0x13C], 0x200F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x13Cu); X86_MEM32(ea) = (uint32_t)(0x200Fu); }
	// 00418913 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418919 mov dword ptr [eax+0x150], 0x2010
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x150u); X86_MEM32(ea) = (uint32_t)(0x2010u); }
	// 00418923 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418929 mov dword ptr [eax+0x164], 0x2011
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x164u); X86_MEM32(ea) = (uint32_t)(0x2011u); }
	// 00418933 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418939 mov dword ptr [eax+0x178], 0x2012
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x178u); X86_MEM32(ea) = (uint32_t)(0x2012u); }
	// 00418943 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418949 mov dword ptr [eax+0x18C], 0x2013
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x18Cu); X86_MEM32(ea) = (uint32_t)(0x2013u); }
	// 00418953 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418959 mov dword ptr [eax+0x1A0], 0x2014
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1A0u); X86_MEM32(ea) = (uint32_t)(0x2014u); }
	// 00418963 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418969 mov dword ptr [eax+0x1B4], 0x2015
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1B4u); X86_MEM32(ea) = (uint32_t)(0x2015u); }
	// 00418973 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418979 mov dword ptr [eax+0x1C8], 0x2016
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1C8u); X86_MEM32(ea) = (uint32_t)(0x2016u); }
	// 00418983 mov eax, [esi+0xEB4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418989 mov dword ptr [eax+0x1DC], 0x2017
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1DCu); X86_MEM32(ea) = (uint32_t)(0x2017u); }
	// 00418993 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418999 mov dword ptr [eax], 0x59EFB4
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x59EFB4u); }
	// 0041899F mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004189A5 mov dword ptr [eax+0x14], 0x59EFC4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59EFC4u); }
	// 004189AC mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004189B2 mov dword ptr [eax+0x28], 0x59EFD4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59EFD4u); }
	// 004189B9 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004189BF mov dword ptr [eax+0x3C], 0x59EFE4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59EFE4u); }
	// 004189C6 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004189CC mov dword ptr [eax+0x50], 0x59EFF4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59EFF4u); }
	// 004189D3 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004189D9 mov dword ptr [eax+0x64], 0x59F004
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59F004u); }
	// 004189E0 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004189E6 mov dword ptr [eax+0x78], 0x59F014
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x78u); X86_MEM32(ea) = (uint32_t)(0x59F014u); }
	// 004189ED mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004189F3 mov dword ptr [eax+0x8C], 0x59F024
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8Cu); X86_MEM32(ea) = (uint32_t)(0x59F024u); }
	// 004189FD mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418A03 mov dword ptr [eax+0xA0], 0x59F034
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xA0u); X86_MEM32(ea) = (uint32_t)(0x59F034u); }
	// 00418A0D mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418A13 mov dword ptr [eax+0xB4], 0x59F048
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xB4u); X86_MEM32(ea) = (uint32_t)(0x59F048u); }
	// 00418A1D mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418A23 mov dword ptr [eax+0xC8], 0x59F05C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xC8u); X86_MEM32(ea) = (uint32_t)(0x59F05Cu); }
	// 00418A2D mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418A33 mov dword ptr [eax+0xDC], 0x59F070
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xDCu); X86_MEM32(ea) = (uint32_t)(0x59F070u); }
	// 00418A3D mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418A43 mov dword ptr [eax+0xF0], 0x59F084
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xF0u); X86_MEM32(ea) = (uint32_t)(0x59F084u); }
	// 00418A4D mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418A53 mov dword ptr [eax+0x104], 0x59F094
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x104u); X86_MEM32(ea) = (uint32_t)(0x59F094u); }
	// 00418A5D mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418A63 mov dword ptr [eax+0x118], 0x59F0A4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x118u); X86_MEM32(ea) = (uint32_t)(0x59F0A4u); }
	// 00418A6D mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418A73 mov dword ptr [eax+0x12C], 0x59F0B4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x12Cu); X86_MEM32(ea) = (uint32_t)(0x59F0B4u); }
	// 00418A7D mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418A83 mov dword ptr [eax+0x140], 0x59F0C4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x140u); X86_MEM32(ea) = (uint32_t)(0x59F0C4u); }
	// 00418A8D mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418A93 mov dword ptr [eax+0x154], 0x59F0D4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x154u); X86_MEM32(ea) = (uint32_t)(0x59F0D4u); }
	// 00418A9D mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418AA3 mov dword ptr [eax+0x168], 0x59F0E4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x168u); X86_MEM32(ea) = (uint32_t)(0x59F0E4u); }
	// 00418AAD mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418AB3 mov dword ptr [eax+0x17C], 0x59F0F4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x17Cu); X86_MEM32(ea) = (uint32_t)(0x59F0F4u); }
	// 00418ABD mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418AC3 mov dword ptr [eax+0x190], 0x59F104
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x190u); X86_MEM32(ea) = (uint32_t)(0x59F104u); }
	// 00418ACD mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418AD3 mov dword ptr [eax+0x1A4], 0x59F11C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1A4u); X86_MEM32(ea) = (uint32_t)(0x59F11Cu); }
	// 00418ADD mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418AE3 mov dword ptr [eax+0x1B8], 0x59F134
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1B8u); X86_MEM32(ea) = (uint32_t)(0x59F134u); }
	// 00418AED mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418AF3 mov dword ptr [eax+0x1CC], 0x59F14C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1CCu); X86_MEM32(ea) = (uint32_t)(0x59F14Cu); }
	// 00418AFD mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B03 mov [eax+0x08], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B06 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B0C mov [eax+0x1C], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B0F mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B15 mov [eax+0x30], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B18 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B1E mov [eax+0x44], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B21 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B27 mov [eax+0x58], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B2A mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B30 mov [eax+0x6C], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B33 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B39 mov [eax+0x80], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x80u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B3F mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B45 mov [eax+0x94], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x94u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B4B mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B51 mov [eax+0xA8], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xA8u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B57 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B5D mov [eax+0xBC], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xBCu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B63 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B69 mov [eax+0xD0], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xD0u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B6F mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B75 mov [eax+0xE4], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xE4u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B7B mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B81 mov [eax+0xF8], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xF8u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B87 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B8D mov [eax+0x10C], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10Cu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B93 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418B99 mov [eax+0x120], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x120u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418B9F mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418BA5 mov [eax+0x134], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x134u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418BAB mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418BB1 mov [eax+0x148], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x148u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418BB7 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418BBD mov [eax+0x15C], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x15Cu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418BC3 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418BC9 mov [eax+0x170], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x170u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418BCF mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418BD5 mov [eax+0x184], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x184u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418BDB mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418BE1 mov [eax+0x198], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x198u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418BE7 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418BED mov [eax+0x1AC], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1ACu); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418BF3 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418BF9 mov [eax+0x1C0], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1C0u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418BFF mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C05 mov [eax+0x1D4], edi
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1D4u); X86_MEM32(ea) = (uint32_t)(ctx.edi); }
	// 00418C0B mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C11 mov dword ptr [eax+0x0C], 0x4A
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(0x4Au); }
	// 00418C18 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C1E mov dword ptr [eax+0x20], 0x4B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x20u); X86_MEM32(ea) = (uint32_t)(0x4Bu); }
	// 00418C25 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C2B mov dword ptr [eax+0x34], 0x4C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x4Cu); }
	// 00418C32 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C38 mov dword ptr [eax+0x48], 0x4D
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x48u); X86_MEM32(ea) = (uint32_t)(0x4Du); }
	// 00418C3F mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C45 mov dword ptr [eax+0x5C], 0x4E
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x4Eu); }
	// 00418C4C mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C52 mov dword ptr [eax+0x70], 0x4F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x70u); X86_MEM32(ea) = (uint32_t)(0x4Fu); }
	// 00418C59 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C5F mov dword ptr [eax+0x84], 0x50
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x84u); X86_MEM32(ea) = (uint32_t)(0x50u); }
	// 00418C69 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C6F mov dword ptr [eax+0x98], 0x51
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x98u); X86_MEM32(ea) = (uint32_t)(0x51u); }
	// 00418C79 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C7F mov dword ptr [eax+0xAC], 0x52
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xACu); X86_MEM32(ea) = (uint32_t)(0x52u); }
	// 00418C89 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C8F mov dword ptr [eax+0xC0], 0x53
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xC0u); X86_MEM32(ea) = (uint32_t)(0x53u); }
	// 00418C99 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418C9F mov dword ptr [eax+0xD4], 0x54
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xD4u); X86_MEM32(ea) = (uint32_t)(0x54u); }
	// 00418CA9 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418CAF mov dword ptr [eax+0xE8], 0x55
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xE8u); X86_MEM32(ea) = (uint32_t)(0x55u); }
	// 00418CB9 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418CBF mov dword ptr [eax+0xFC], 0x56
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xFCu); X86_MEM32(ea) = (uint32_t)(0x56u); }
	// 00418CC9 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418CCF mov dword ptr [eax+0x110], 0x57
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x110u); X86_MEM32(ea) = (uint32_t)(0x57u); }
	// 00418CD9 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418CDF mov dword ptr [eax+0x124], 0x58
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x124u); X86_MEM32(ea) = (uint32_t)(0x58u); }
	// 00418CE9 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418CEF mov dword ptr [eax+0x138], 0x59
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x138u); X86_MEM32(ea) = (uint32_t)(0x59u); }
	// 00418CF9 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418CFF mov dword ptr [eax+0x14C], 0x5A
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14Cu); X86_MEM32(ea) = (uint32_t)(0x5Au); }
	// 00418D09 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418D0F mov dword ptr [eax+0x160], 0x5B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x160u); X86_MEM32(ea) = (uint32_t)(0x5Bu); }
	// 00418D19 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418D1F mov dword ptr [eax+0x174], 0x5C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x174u); X86_MEM32(ea) = (uint32_t)(0x5Cu); }
	// 00418D29 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418D2F mov dword ptr [eax+0x188], 0x5D
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x188u); X86_MEM32(ea) = (uint32_t)(0x5Du); }
	// 00418D39 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418D3F mov dword ptr [eax+0x19C], 0x5E
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x19Cu); X86_MEM32(ea) = (uint32_t)(0x5Eu); }
	// 00418D49 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418D4F mov dword ptr [eax+0x1B0], 0x5F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1B0u); X86_MEM32(ea) = (uint32_t)(0x5Fu); }
	// 00418D59 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418D5F mov dword ptr [eax+0x1C4], 0x60
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1C4u); X86_MEM32(ea) = (uint32_t)(0x60u); }
	// 00418D69 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418D6F mov dword ptr [eax+0x1D8], 0x61
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1D8u); X86_MEM32(ea) = (uint32_t)(0x61u); }
	// 00418D79 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418D7F mov dword ptr [eax+0x10], 0x2400
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(0x2400u); }
	// 00418D86 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418D8C mov dword ptr [eax+0x24], 0x2401
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x24u); X86_MEM32(ea) = (uint32_t)(0x2401u); }
	// 00418D93 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418D99 mov dword ptr [eax+0x38], 0x2402
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x38u); X86_MEM32(ea) = (uint32_t)(0x2402u); }
	// 00418DA0 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418DA6 mov dword ptr [eax+0x4C], 0x2403
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x2403u); }
	// 00418DAD mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418DB3 mov dword ptr [eax+0x60], 0x2404
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x60u); X86_MEM32(ea) = (uint32_t)(0x2404u); }
	// 00418DBA mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418DC0 mov dword ptr [eax+0x74], 0x2405
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x74u); X86_MEM32(ea) = (uint32_t)(0x2405u); }
	// 00418DC7 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418DCD mov dword ptr [eax+0x88], 0x2406
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x88u); X86_MEM32(ea) = (uint32_t)(0x2406u); }
	// 00418DD7 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418DDD mov dword ptr [eax+0x9C], 0x2407
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x2407u); }
	// 00418DE7 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418DED mov dword ptr [eax+0xB0], 0x2408
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xB0u); X86_MEM32(ea) = (uint32_t)(0x2408u); }
	// 00418DF7 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418DFD mov dword ptr [eax+0xC4], 0x2409
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xC4u); X86_MEM32(ea) = (uint32_t)(0x2409u); }
	// 00418E07 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418E0D mov dword ptr [eax+0xD8], 0x240A
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xD8u); X86_MEM32(ea) = (uint32_t)(0x240Au); }
	// 00418E17 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418E1D mov dword ptr [eax+0xEC], 0x240B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xECu); X86_MEM32(ea) = (uint32_t)(0x240Bu); }
	// 00418E27 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418E2D mov dword ptr [eax+0x100], 0x240C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x100u); X86_MEM32(ea) = (uint32_t)(0x240Cu); }
	// 00418E37 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418E3D mov dword ptr [eax+0x114], 0x240D
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x114u); X86_MEM32(ea) = (uint32_t)(0x240Du); }
	// 00418E47 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418E4D mov dword ptr [eax+0x128], 0x240E
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x128u); X86_MEM32(ea) = (uint32_t)(0x240Eu); }
	// 00418E57 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418E5D mov dword ptr [eax+0x13C], 0x240F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x13Cu); X86_MEM32(ea) = (uint32_t)(0x240Fu); }
	// 00418E67 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418E6D mov dword ptr [eax+0x150], 0x2410
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x150u); X86_MEM32(ea) = (uint32_t)(0x2410u); }
	// 00418E77 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418E7D mov dword ptr [eax+0x164], 0x2411
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x164u); X86_MEM32(ea) = (uint32_t)(0x2411u); }
	// 00418E87 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418E8D mov dword ptr [eax+0x178], 0x2412
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x178u); X86_MEM32(ea) = (uint32_t)(0x2412u); }
	// 00418E97 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418E9D mov dword ptr [eax+0x18C], 0x2413
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x18Cu); X86_MEM32(ea) = (uint32_t)(0x2413u); }
	// 00418EA7 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418EAD mov dword ptr [eax+0x1A0], 0x2414
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1A0u); X86_MEM32(ea) = (uint32_t)(0x2414u); }
	// 00418EB7 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418EBD mov dword ptr [eax+0x1B4], 0x2415
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1B4u); X86_MEM32(ea) = (uint32_t)(0x2415u); }
	// 00418EC7 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418ECD mov dword ptr [eax+0x1C8], 0x2416
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1C8u); X86_MEM32(ea) = (uint32_t)(0x2416u); }
	// 00418ED7 mov eax, [esi+0xEB8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEB8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418EDD mov dword ptr [eax+0x1DC], 0x2417
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1DCu); X86_MEM32(ea) = (uint32_t)(0x2417u); }
	// 00418EE7 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418EED mov dword ptr [eax], 0x59F164
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x59F164u); }
	// 00418EF3 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418EF9 mov dword ptr [eax+0x14], 0x59F174
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59F174u); }
	// 00418F00 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418F06 mov dword ptr [eax+0x28], 0x59F184
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59F184u); }
	// 00418F0D mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418F13 mov dword ptr [eax+0x3C], 0x59F194
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59F194u); }
	// 00418F1A mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418F20 mov dword ptr [eax+0x50], 0x59F1A4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59F1A4u); }
	// 00418F27 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418F2D mov dword ptr [eax+0x64], 0x59F1B4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59F1B4u); }
	// 00418F34 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418F3A mov dword ptr [eax+0x78], 0x59F1C4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x78u); X86_MEM32(ea) = (uint32_t)(0x59F1C4u); }
	// 00418F41 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418F47 mov dword ptr [eax+0x8C], 0x59F1D4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8Cu); X86_MEM32(ea) = (uint32_t)(0x59F1D4u); }
	// 00418F51 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418F57 mov dword ptr [eax+0xA0], 0x59F1E4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xA0u); X86_MEM32(ea) = (uint32_t)(0x59F1E4u); }
	// 00418F61 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418F67 mov dword ptr [eax+0xB4], 0x59F1F4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xB4u); X86_MEM32(ea) = (uint32_t)(0x59F1F4u); }
	// 00418F71 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418F77 mov dword ptr [eax+0xC8], 0x59F204
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xC8u); X86_MEM32(ea) = (uint32_t)(0x59F204u); }
	// 00418F81 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418F87 mov dword ptr [eax+0xDC], 0x59F214
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xDCu); X86_MEM32(ea) = (uint32_t)(0x59F214u); }
	// 00418F91 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418F97 mov dword ptr [eax+0xF0], 0x59F224
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xF0u); X86_MEM32(ea) = (uint32_t)(0x59F224u); }
	// 00418FA1 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418FA7 mov dword ptr [eax+0x104], 0x59F234
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x104u); X86_MEM32(ea) = (uint32_t)(0x59F234u); }
	// 00418FB1 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418FB7 mov dword ptr [eax+0x118], 0x59F244
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x118u); X86_MEM32(ea) = (uint32_t)(0x59F244u); }
	// 00418FC1 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418FC7 mov dword ptr [eax+0x12C], 0x59F254
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x12Cu); X86_MEM32(ea) = (uint32_t)(0x59F254u); }
	// 00418FD1 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418FD7 mov dword ptr [eax+0x140], 0x59F264
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x140u); X86_MEM32(ea) = (uint32_t)(0x59F264u); }
	// 00418FE1 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418FE7 mov dword ptr [eax+0x154], 0x59F274
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x154u); X86_MEM32(ea) = (uint32_t)(0x59F274u); }
	// 00418FF1 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00418FF7 mov dword ptr [eax+0x168], 0x59F284
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x168u); X86_MEM32(ea) = (uint32_t)(0x59F284u); }
	// 00419001 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419007 mov dword ptr [eax+0x17C], 0x59F294
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x17Cu); X86_MEM32(ea) = (uint32_t)(0x59F294u); }
	// 00419011 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419017 mov dword ptr [eax+0x190], 0x59F2A4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x190u); X86_MEM32(ea) = (uint32_t)(0x59F2A4u); }
	// 00419021 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419027 mov dword ptr [eax+0x1A4], 0x59F2BC
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1A4u); X86_MEM32(ea) = (uint32_t)(0x59F2BCu); }
	// 00419031 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419037 mov dword ptr [eax+0x1B8], 0x59F2D4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1B8u); X86_MEM32(ea) = (uint32_t)(0x59F2D4u); }
	// 00419041 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419047 mov dword ptr [eax+0x1CC], 0x59F2EC
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1CCu); X86_MEM32(ea) = (uint32_t)(0x59F2ECu); }
	// 00419051 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419057 mov [eax+0x08], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0041905A mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419060 mov [eax+0x1C], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00419063 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419069 mov [eax+0x30], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0041906C mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419072 mov [eax+0x44], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00419075 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041907B mov [eax+0x58], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0041907E mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419084 mov [eax+0x6C], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00419087 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041908D mov [eax+0x80], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x80u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00419093 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419099 mov [eax+0x94], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x94u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0041909F mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004190A5 mov [eax+0xA8], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xA8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 004190AB mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004190B1 mov [eax+0xBC], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xBCu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 004190B7 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004190BD mov [eax+0xD0], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xD0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 004190C3 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004190C9 mov [eax+0xE4], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xE4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 004190CF mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004190D5 mov [eax+0xF8], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xF8u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 004190DB mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004190E1 mov [eax+0x10C], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 004190E7 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004190ED mov [eax+0x120], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x120u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 004190F3 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004190F9 mov [eax+0x134], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x134u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 004190FF mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419105 mov [eax+0x148], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x148u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0041910B mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419111 mov [eax+0x15C], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x15Cu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00419117 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041911D mov [eax+0x170], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x170u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00419123 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419129 mov [eax+0x184], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x184u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0041912F mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419135 mov [eax+0x198], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x198u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0041913B mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419141 mov [eax+0x1AC], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1ACu); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00419147 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041914D mov [eax+0x1C0], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1C0u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 00419153 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419159 mov [eax+0x1D4], ecx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1D4u); X86_MEM32(ea) = (uint32_t)(ctx.ecx); }
	// 0041915F mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419165 mov dword ptr [ecx+0x0C], 0x62
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x62u); }
	// 0041916C mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419172 mov dword ptr [eax+0x20], 0x63
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x20u); X86_MEM32(ea) = (uint32_t)(0x63u); }
	// 00419179 mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041917F mov dword ptr [ecx+0x34], 0x64
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x64u); }
	// 00419186 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041918C mov dword ptr [eax+0x48], 0x65
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x48u); X86_MEM32(ea) = (uint32_t)(0x65u); }
	// 00419193 mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419199 mov dword ptr [ecx+0x5C], 0x66
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x66u); }
	// 004191A0 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004191A6 mov dword ptr [eax+0x70], 0x67
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x70u); X86_MEM32(ea) = (uint32_t)(0x67u); }
	// 004191AD mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004191B3 mov dword ptr [ecx+0x84], 0x68
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x84u); X86_MEM32(ea) = (uint32_t)(0x68u); }
	// 004191BD mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004191C3 mov dword ptr [eax+0x98], 0x69
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x98u); X86_MEM32(ea) = (uint32_t)(0x69u); }
	// 004191CD mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004191D3 mov dword ptr [ecx+0xAC], 0x6A
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xACu); X86_MEM32(ea) = (uint32_t)(0x6Au); }
	// 004191DD mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004191E3 mov dword ptr [eax+0xC0], 0x6B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xC0u); X86_MEM32(ea) = (uint32_t)(0x6Bu); }
	// 004191ED mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004191F3 mov dword ptr [ecx+0xD4], 0x6C
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xD4u); X86_MEM32(ea) = (uint32_t)(0x6Cu); }
	// 004191FD mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419203 mov dword ptr [eax+0xE8], 0x6D
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xE8u); X86_MEM32(ea) = (uint32_t)(0x6Du); }
	// 0041920D mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419213 mov dword ptr [ecx+0xFC], 0x6E
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xFCu); X86_MEM32(ea) = (uint32_t)(0x6Eu); }
	// 0041921D mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419223 mov dword ptr [eax+0x110], 0x6F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x110u); X86_MEM32(ea) = (uint32_t)(0x6Fu); }
	// 0041922D mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419233 mov dword ptr [ecx+0x124], 0x70
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x124u); X86_MEM32(ea) = (uint32_t)(0x70u); }
	// 0041923D mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419243 mov dword ptr [eax+0x138], 0x71
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x138u); X86_MEM32(ea) = (uint32_t)(0x71u); }
	// 0041924D mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419253 mov dword ptr [ecx+0x14C], 0x72
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14Cu); X86_MEM32(ea) = (uint32_t)(0x72u); }
	// 0041925D mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419263 mov dword ptr [eax+0x160], 0x73
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x160u); X86_MEM32(ea) = (uint32_t)(0x73u); }
	// 0041926D mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419273 mov dword ptr [ecx+0x174], 0x74
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x174u); X86_MEM32(ea) = (uint32_t)(0x74u); }
	// 0041927D mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419283 mov dword ptr [eax+0x188], 0x75
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x188u); X86_MEM32(ea) = (uint32_t)(0x75u); }
	// 0041928D mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419293 mov dword ptr [ecx+0x19C], 0x76
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x19Cu); X86_MEM32(ea) = (uint32_t)(0x76u); }
	// 0041929D mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004192A3 mov dword ptr [eax+0x1B0], 0x77
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1B0u); X86_MEM32(ea) = (uint32_t)(0x77u); }
	// 004192AD mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004192B3 mov dword ptr [ecx+0x1C4], 0x78
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1C4u); X86_MEM32(ea) = (uint32_t)(0x78u); }
	// 004192BD mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004192C3 mov dword ptr [eax+0x1D8], 0x79
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1D8u); X86_MEM32(ea) = (uint32_t)(0x79u); }
	// 004192CD mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004192D3 mov dword ptr [ecx+0x10], 0x2800
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(0x2800u); }
	// 004192DA mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004192E0 mov dword ptr [eax+0x24], 0x2801
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x24u); X86_MEM32(ea) = (uint32_t)(0x2801u); }
	// 004192E7 mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004192ED mov dword ptr [ecx+0x38], 0x2802
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x2802u); }
	// 004192F4 mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004192FA mov dword ptr [eax+0x4C], 0x2803
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x2803u); }
	// 00419301 mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419307 mov dword ptr [ecx+0x60], 0x2804
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x60u); X86_MEM32(ea) = (uint32_t)(0x2804u); }
	// 0041930E mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419314 mov dword ptr [eax+0x74], 0x2805
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x74u); X86_MEM32(ea) = (uint32_t)(0x2805u); }
	// 0041931B mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419321 mov dword ptr [ecx+0x88], 0x2806
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x88u); X86_MEM32(ea) = (uint32_t)(0x2806u); }
	// 0041932B mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419331 mov dword ptr [eax+0x9C], 0x2807
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x2807u); }
	// 0041933B mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419341 mov dword ptr [ecx+0xB0], 0x2808
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xB0u); X86_MEM32(ea) = (uint32_t)(0x2808u); }
	// 0041934B mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419351 mov dword ptr [eax+0xC4], 0x2809
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xC4u); X86_MEM32(ea) = (uint32_t)(0x2809u); }
	// 0041935B mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419361 mov dword ptr [ecx+0xD8], 0x280A
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xD8u); X86_MEM32(ea) = (uint32_t)(0x280Au); }
	// 0041936B mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419371 mov dword ptr [eax+0xEC], 0x280B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xECu); X86_MEM32(ea) = (uint32_t)(0x280Bu); }
	// 0041937B mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419381 mov dword ptr [ecx+0x100], 0x280C
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x100u); X86_MEM32(ea) = (uint32_t)(0x280Cu); }
	// 0041938B mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419391 mov dword ptr [eax+0x114], 0x280D
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x114u); X86_MEM32(ea) = (uint32_t)(0x280Du); }
	// 0041939B mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004193A1 mov dword ptr [ecx+0x128], 0x280E
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x128u); X86_MEM32(ea) = (uint32_t)(0x280Eu); }
	// 004193AB mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004193B1 mov dword ptr [eax+0x13C], 0x280F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x13Cu); X86_MEM32(ea) = (uint32_t)(0x280Fu); }
	// 004193BB mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004193C1 mov dword ptr [ecx+0x150], 0x2810
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x150u); X86_MEM32(ea) = (uint32_t)(0x2810u); }
	// 004193CB mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004193D1 mov dword ptr [eax+0x164], 0x2811
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x164u); X86_MEM32(ea) = (uint32_t)(0x2811u); }
	// 004193DB mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004193E1 mov dword ptr [ecx+0x178], 0x2812
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x178u); X86_MEM32(ea) = (uint32_t)(0x2812u); }
	// 004193EB mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004193F1 mov dword ptr [eax+0x18C], 0x2813
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x18Cu); X86_MEM32(ea) = (uint32_t)(0x2813u); }
	// 004193FB mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419401 mov dword ptr [ecx+0x1A0], 0x2814
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1A0u); X86_MEM32(ea) = (uint32_t)(0x2814u); }
	// 0041940B mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419411 mov dword ptr [eax+0x1B4], 0x2815
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1B4u); X86_MEM32(ea) = (uint32_t)(0x2815u); }
	// 0041941B mov ecx, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419421 mov dword ptr [ecx+0x1C8], 0x2816
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1C8u); X86_MEM32(ea) = (uint32_t)(0x2816u); }
	// 0041942B mov eax, [esi+0xEBC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEBCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419431 mov dword ptr [eax+0x1DC], 0x2817
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1DCu); X86_MEM32(ea) = (uint32_t)(0x2817u); }
	// 0041943B mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419441 mov dword ptr [ecx], 0x59F304
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x59F304u); }
	// 00419447 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041944D mov dword ptr [eax+0x14], 0x59F314
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59F314u); }
	// 00419454 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041945A mov dword ptr [ecx+0x28], 0x59F324
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59F324u); }
	// 00419461 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419467 mov dword ptr [eax+0x3C], 0x59F334
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59F334u); }
	// 0041946E mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419474 mov dword ptr [ecx+0x50], 0x59F344
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59F344u); }
	// 0041947B mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419481 mov dword ptr [eax+0x64], 0x59F354
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59F354u); }
	// 00419488 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041948E mov dword ptr [ecx+0x78], 0x59F364
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x78u); X86_MEM32(ea) = (uint32_t)(0x59F364u); }
	// 00419495 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041949B mov dword ptr [eax+0x8C], 0x59F374
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x8Cu); X86_MEM32(ea) = (uint32_t)(0x59F374u); }
	// 004194A5 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004194AB mov dword ptr [ecx+0xA0], 0x59F384
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xA0u); X86_MEM32(ea) = (uint32_t)(0x59F384u); }
	// 004194B5 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004194BB mov dword ptr [eax+0xB4], 0x59F398
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xB4u); X86_MEM32(ea) = (uint32_t)(0x59F398u); }
	// 004194C5 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004194CB mov dword ptr [ecx+0xC8], 0x59F3AC
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xC8u); X86_MEM32(ea) = (uint32_t)(0x59F3ACu); }
	// 004194D5 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004194DB mov dword ptr [eax+0xDC], 0x59F3C0
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xDCu); X86_MEM32(ea) = (uint32_t)(0x59F3C0u); }
	// 004194E5 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004194EB mov dword ptr [ecx+0xF0], 0x59F3D4
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xF0u); X86_MEM32(ea) = (uint32_t)(0x59F3D4u); }
	// 004194F5 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004194FB mov dword ptr [eax+0x104], 0x59F3E4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x104u); X86_MEM32(ea) = (uint32_t)(0x59F3E4u); }
	// 00419505 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041950B mov dword ptr [ecx+0x118], 0x59F3F4
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x118u); X86_MEM32(ea) = (uint32_t)(0x59F3F4u); }
	// 00419515 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041951B mov dword ptr [eax+0x12C], 0x59F404
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x12Cu); X86_MEM32(ea) = (uint32_t)(0x59F404u); }
	// 00419525 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041952B mov dword ptr [ecx+0x140], 0x59F414
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x140u); X86_MEM32(ea) = (uint32_t)(0x59F414u); }
	// 00419535 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041953B mov dword ptr [eax+0x154], 0x59F424
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x154u); X86_MEM32(ea) = (uint32_t)(0x59F424u); }
	// 00419545 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041954B mov dword ptr [ecx+0x168], 0x59F434
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x168u); X86_MEM32(ea) = (uint32_t)(0x59F434u); }
	// 00419555 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041955B mov dword ptr [eax+0x17C], 0x59F444
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x17Cu); X86_MEM32(ea) = (uint32_t)(0x59F444u); }
	// 00419565 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041956B mov dword ptr [ecx+0x190], 0x59F454
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x190u); X86_MEM32(ea) = (uint32_t)(0x59F454u); }
	// 00419575 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041957B mov dword ptr [eax+0x1A4], 0x59F46C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1A4u); X86_MEM32(ea) = (uint32_t)(0x59F46Cu); }
	// 00419585 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041958B mov dword ptr [ecx+0x1B8], 0x59F484
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1B8u); X86_MEM32(ea) = (uint32_t)(0x59F484u); }
	// 00419595 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041959B mov dword ptr [eax+0x1CC], 0x59F49C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1CCu); X86_MEM32(ea) = (uint32_t)(0x59F49Cu); }
	// 004195A5 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004195AB mov [ecx+0x08], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 004195AE mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004195B4 mov [eax+0x1C], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 004195B7 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004195BD mov [ecx+0x30], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 004195C0 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004195C6 mov [eax+0x44], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 004195C9 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004195CF mov [ecx+0x58], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 004195D2 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004195D8 mov [eax+0x6C], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 004195DB mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004195E1 mov [ecx+0x80], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x80u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 004195E7 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004195ED mov [eax+0x94], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x94u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 004195F3 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004195F9 mov [ecx+0xA8], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xA8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 004195FF mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419605 mov [eax+0xBC], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xBCu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0041960B mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419611 mov [ecx+0xD0], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xD0u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00419617 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041961D mov [eax+0xE4], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xE4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00419623 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419629 mov [ecx+0xF8], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xF8u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0041962F mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419635 mov [eax+0x10C], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0041963B mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419641 mov [ecx+0x120], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x120u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00419647 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041964D mov [eax+0x134], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x134u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00419653 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419659 mov [ecx+0x148], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x148u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0041965F mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419665 mov [eax+0x15C], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x15Cu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0041966B mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419671 mov [ecx+0x170], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x170u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00419677 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 0041967D mov [eax+0x184], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x184u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 00419683 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419689 mov [ecx+0x198], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x198u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0041968F mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419695 mov [eax+0x1AC], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1ACu); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 0041969B mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004196A1 mov [ecx+0x1C0], edx
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1C0u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 004196A7 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004196AD mov [eax+0x1D4], edx
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1D4u); X86_MEM32(ea) = (uint32_t)(ctx.edx); }
	// 004196B3 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004196B9 mov dword ptr [ecx+0x0C], 0x7A
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xCu); X86_MEM32(ea) = (uint32_t)(0x7Au); }
	// 004196C0 mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 004196C6 mov dword ptr [edx+0x20], 0x7B
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x20u); X86_MEM32(ea) = (uint32_t)(0x7Bu); }
	// 004196CD mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004196D3 mov dword ptr [eax+0x34], 0x7C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x34u); X86_MEM32(ea) = (uint32_t)(0x7Cu); }
	// 004196DA mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004196E0 mov dword ptr [ecx+0x48], 0x7D
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x48u); X86_MEM32(ea) = (uint32_t)(0x7Du); }
	// 004196E7 mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 004196ED mov dword ptr [edx+0x5C], 0x7E
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x7Eu); }
	// 004196F4 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004196FA mov dword ptr [eax+0x70], 0x7F
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x70u); X86_MEM32(ea) = (uint32_t)(0x7Fu); }
	// 00419701 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419707 mov dword ptr [ecx+0x84], 0x80
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x84u); X86_MEM32(ea) = (uint32_t)(0x80u); }
	// 00419711 mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419717 mov dword ptr [edx+0x98], 0x81
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x98u); X86_MEM32(ea) = (uint32_t)(0x81u); }
	// 00419721 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419727 mov dword ptr [eax+0xAC], 0x82
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xACu); X86_MEM32(ea) = (uint32_t)(0x82u); }
	// 00419731 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419737 mov dword ptr [ecx+0xC0], 0x83
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xC0u); X86_MEM32(ea) = (uint32_t)(0x83u); }
	// 00419741 mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419747 mov dword ptr [edx+0xD4], 0x84
	{ uint32_t ea = (uint32_t)(ctx.edx + 0xD4u); X86_MEM32(ea) = (uint32_t)(0x84u); }
	// 00419751 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419757 mov dword ptr [eax+0xE8], 0x85
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xE8u); X86_MEM32(ea) = (uint32_t)(0x85u); }
	// 00419761 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419767 mov dword ptr [ecx+0xFC], 0x86
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xFCu); X86_MEM32(ea) = (uint32_t)(0x86u); }
	// 00419771 mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419777 mov dword ptr [edx+0x110], 0x87
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x110u); X86_MEM32(ea) = (uint32_t)(0x87u); }
	// 00419781 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419787 mov dword ptr [eax+0x124], 0x88
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x124u); X86_MEM32(ea) = (uint32_t)(0x88u); }
	// 00419791 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419797 mov dword ptr [ecx+0x138], 0x89
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x138u); X86_MEM32(ea) = (uint32_t)(0x89u); }
	// 004197A1 mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 004197A7 mov dword ptr [edx+0x14C], 0x8A
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x14Cu); X86_MEM32(ea) = (uint32_t)(0x8Au); }
	// 004197B1 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004197B7 mov dword ptr [eax+0x160], 0x8B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x160u); X86_MEM32(ea) = (uint32_t)(0x8Bu); }
	// 004197C1 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004197C7 mov dword ptr [ecx+0x174], 0x8C
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x174u); X86_MEM32(ea) = (uint32_t)(0x8Cu); }
	// 004197D1 mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 004197D7 mov dword ptr [edx+0x188], 0x8D
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x188u); X86_MEM32(ea) = (uint32_t)(0x8Du); }
	// 004197E1 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004197E7 mov dword ptr [eax+0x19C], 0x8E
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x19Cu); X86_MEM32(ea) = (uint32_t)(0x8Eu); }
	// 004197F1 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004197F7 mov dword ptr [ecx+0x1B0], 0x8F
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1B0u); X86_MEM32(ea) = (uint32_t)(0x8Fu); }
	// 00419801 mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419807 mov dword ptr [edx+0x1C4], 0x90
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x1C4u); X86_MEM32(ea) = (uint32_t)(0x90u); }
	// 00419811 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419817 mov dword ptr [eax+0x1D8], 0x91
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1D8u); X86_MEM32(ea) = (uint32_t)(0x91u); }
	// 00419821 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419827 mov dword ptr [ecx+0x10], 0x2C00
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x10u); X86_MEM32(ea) = (uint32_t)(0x2C00u); }
	// 0041982E mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419834 mov dword ptr [edx+0x24], 0x2C01
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x24u); X86_MEM32(ea) = (uint32_t)(0x2C01u); }
	// 0041983B mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419841 mov dword ptr [eax+0x38], 0x2C02
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x38u); X86_MEM32(ea) = (uint32_t)(0x2C02u); }
	// 00419848 mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 0041984E mov dword ptr [ecx+0x4C], 0x2C03
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x2C03u); }
	// 00419855 mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 0041985B mov dword ptr [edx+0x60], 0x2C04
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x60u); X86_MEM32(ea) = (uint32_t)(0x2C04u); }
	// 00419862 mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419868 mov dword ptr [eax+0x74], 0x2C05
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x74u); X86_MEM32(ea) = (uint32_t)(0x2C05u); }
	// 0041986F mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419875 mov dword ptr [ecx+0x88], 0x2C06
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x88u); X86_MEM32(ea) = (uint32_t)(0x2C06u); }
	// 0041987F mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419885 mov dword ptr [edx+0x9C], 0x2C07
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x9Cu); X86_MEM32(ea) = (uint32_t)(0x2C07u); }
	// 0041988F mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419895 mov dword ptr [eax+0xB0], 0x2C08
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xB0u); X86_MEM32(ea) = (uint32_t)(0x2C08u); }
	// 0041989F mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004198A5 mov dword ptr [ecx+0xC4], 0x2C09
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0xC4u); X86_MEM32(ea) = (uint32_t)(0x2C09u); }
	// 004198AF mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 004198B5 mov dword ptr [edx+0xD8], 0x2C0A
	{ uint32_t ea = (uint32_t)(ctx.edx + 0xD8u); X86_MEM32(ea) = (uint32_t)(0x2C0Au); }
	// 004198BF mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004198C5 mov dword ptr [eax+0xEC], 0x2C0B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xECu); X86_MEM32(ea) = (uint32_t)(0x2C0Bu); }
	// 004198CF mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004198D5 mov dword ptr [ecx+0x100], 0x2C0C
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x100u); X86_MEM32(ea) = (uint32_t)(0x2C0Cu); }
	// 004198DF mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 004198E5 mov dword ptr [edx+0x114], 0x2C0D
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x114u); X86_MEM32(ea) = (uint32_t)(0x2C0Du); }
	// 004198EF mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004198F5 mov dword ptr [eax+0x128], 0x2C0E
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x128u); X86_MEM32(ea) = (uint32_t)(0x2C0Eu); }
	// 004198FF mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419905 mov dword ptr [ecx+0x13C], 0x2C0F
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x13Cu); X86_MEM32(ea) = (uint32_t)(0x2C0Fu); }
	// 0041990F mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419915 mov dword ptr [edx+0x150], 0x2C10
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x150u); X86_MEM32(ea) = (uint32_t)(0x2C10u); }
	// 0041991F mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419925 mov dword ptr [eax+0x164], 0x2C11
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x164u); X86_MEM32(ea) = (uint32_t)(0x2C11u); }
	// 0041992F mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419935 mov dword ptr [ecx+0x178], 0x2C12
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x178u); X86_MEM32(ea) = (uint32_t)(0x2C12u); }
	// 0041993F mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419945 mov dword ptr [edx+0x18C], 0x2C13
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x18Cu); X86_MEM32(ea) = (uint32_t)(0x2C13u); }
	// 0041994F mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419955 mov dword ptr [eax+0x1A0], 0x2C14
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1A0u); X86_MEM32(ea) = (uint32_t)(0x2C14u); }
	// 0041995F mov ecx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419965 mov dword ptr [ecx+0x1B4], 0x2C15
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x1B4u); X86_MEM32(ea) = (uint32_t)(0x2C15u); }
	// 0041996F mov edx, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419975 mov dword ptr [edx+0x1C8], 0x2C16
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x1C8u); X86_MEM32(ea) = (uint32_t)(0x2C16u); }
	// 0041997F mov eax, [esi+0xEC0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419985 mov dword ptr [eax+0x1DC], 0x2C17
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x1DCu); X86_MEM32(ea) = (uint32_t)(0x2C17u); }
	// 0041998F mov ecx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419995 mov dword ptr [ecx], 0x59F4B4
	{ uint32_t ea = (uint32_t)(ctx.ecx); X86_MEM32(ea) = (uint32_t)(0x59F4B4u); }
	// 0041999B mov edx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 004199A1 mov dword ptr [edx+0x14], 0x59F4C4
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59F4C4u); }
	// 004199A8 mov eax, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004199AE mov dword ptr [eax+0x28], 0x59F4D4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59F4D4u); }
	// 004199B5 mov ecx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004199BB mov dword ptr [ecx+0x3C], 0x59F4E8
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59F4E8u); }
	// 004199C2 mov edx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 004199C8 mov dword ptr [edx+0x50], 0x59F4F8
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59F4F8u); }
	// 004199CF mov eax, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 004199D5 mov dword ptr [eax+0x64], 0x59F508
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59F508u); }
	// 004199DC mov ecx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004199E2 mov eax, 0x0C
	{ ctx.eax = (uint32_t)(0xCu); }
	// 004199E7 mov [ecx+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004199EA mov edx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 004199F0 mov [edx+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004199F3 mov ecx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 004199F9 mov [ecx+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 004199FC mov edx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419A02 mov [edx+0x44], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419A05 mov ecx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419A0B mov [ecx+0x58], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419A0E mov edx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419A14 mov [edx+0x6C], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419A17 mov eax, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419A1D mov dword ptr [eax+0x0C], 0x92
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(0x92u); }
	// 00419A24 mov ecx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419A2A mov dword ptr [ecx+0x20], 0x93
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(0x93u); }
	// 00419A31 mov edx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419A37 mov dword ptr [edx+0x34], 0x94
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x94u); }
	// 00419A3E mov eax, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419A44 mov dword ptr [eax+0x48], 0x95
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x48u); X86_MEM32(ea) = (uint32_t)(0x95u); }
	// 00419A4B mov ecx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419A51 mov dword ptr [ecx+0x5C], 0x96
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x96u); }
	// 00419A58 mov edx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419A5E mov dword ptr [edx+0x70], 0x97
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x70u); X86_MEM32(ea) = (uint32_t)(0x97u); }
	// 00419A65 mov eax, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419A6B mov dword ptr [eax+0x10], 0x3000
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(0x3000u); }
	// 00419A72 mov ecx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419A78 mov dword ptr [ecx+0x24], 0x3001
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM32(ea) = (uint32_t)(0x3001u); }
	// 00419A7F mov edx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419A85 mov dword ptr [edx+0x38], 0x3002
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x3002u); }
	// 00419A8C mov eax, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419A92 mov dword ptr [eax+0x4C], 0x3003
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x3003u); }
	// 00419A99 mov ecx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419A9F mov dword ptr [ecx+0x60], 0x3004
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x60u); X86_MEM32(ea) = (uint32_t)(0x3004u); }
	// 00419AA6 mov edx, [esi+0xEC4]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC4u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419AAC mov dword ptr [edx+0x74], 0x3005
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x74u); X86_MEM32(ea) = (uint32_t)(0x3005u); }
	// 00419AB3 mov eax, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419AB9 mov dword ptr [eax], 0x59F520
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x59F520u); }
	// 00419ABF mov ecx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419AC5 mov dword ptr [ecx+0x14], 0x59F534
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59F534u); }
	// 00419ACC mov edx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419AD2 mov dword ptr [edx+0x28], 0x59F548
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59F548u); }
	// 00419AD9 mov eax, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419ADF mov dword ptr [eax+0x3C], 0x59F55C
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59F55Cu); }
	// 00419AE6 mov ecx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419AEC mov dword ptr [ecx+0x50], 0x59F56C
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59F56Cu); }
	// 00419AF3 mov edx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419AF9 mov dword ptr [edx+0x64], 0x59F580
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59F580u); }
	// 00419B00 mov ecx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419B06 mov eax, 0x0D
	{ ctx.eax = (uint32_t)(0xDu); }
	// 00419B0B mov [ecx+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419B0E mov edx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419B14 mov [edx+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419B17 mov ecx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419B1D mov [ecx+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419B20 mov edx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419B26 mov [edx+0x44], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419B29 mov ecx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419B2F mov [ecx+0x58], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419B32 mov edx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419B38 mov [edx+0x6C], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419B3B mov eax, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419B41 mov dword ptr [eax+0x0C], 0x98
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(0x98u); }
	// 00419B48 mov ecx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419B4E mov dword ptr [ecx+0x20], 0x99
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(0x99u); }
	// 00419B55 mov edx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419B5B mov dword ptr [edx+0x34], 0x9A
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x34u); X86_MEM32(ea) = (uint32_t)(0x9Au); }
	// 00419B62 mov eax, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419B68 mov dword ptr [eax+0x48], 0x9B
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x48u); X86_MEM32(ea) = (uint32_t)(0x9Bu); }
	// 00419B6F mov ecx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419B75 mov dword ptr [ecx+0x5C], 0x9C
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0x9Cu); }
	// 00419B7C mov edx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419B82 mov dword ptr [edx+0x70], 0x9D
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x70u); X86_MEM32(ea) = (uint32_t)(0x9Du); }
	// 00419B89 mov eax, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419B8F mov dword ptr [eax+0x10], 0x3400
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(0x3400u); }
	// 00419B96 mov ecx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419B9C mov dword ptr [ecx+0x24], 0x3401
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM32(ea) = (uint32_t)(0x3401u); }
	// 00419BA3 mov edx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419BA9 mov dword ptr [edx+0x38], 0x3402
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x3402u); }
	// 00419BB0 mov eax, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419BB6 mov dword ptr [eax+0x4C], 0x3403
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x3403u); }
	// 00419BBD mov ecx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419BC3 mov dword ptr [ecx+0x60], 0x3404
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x60u); X86_MEM32(ea) = (uint32_t)(0x3404u); }
	// 00419BCA mov edx, [esi+0xEC8]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xEC8u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419BD0 mov dword ptr [edx+0x74], 0x3405
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x74u); X86_MEM32(ea) = (uint32_t)(0x3405u); }
	// 00419BD7 mov eax, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419BDD mov dword ptr [eax], 0x59F598
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x59F598u); }
	// 00419BE3 mov ecx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419BE9 mov dword ptr [ecx+0x14], 0x59F5A8
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59F5A8u); }
	// 00419BF0 mov edx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419BF6 mov dword ptr [edx+0x28], 0x59F5B8
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59F5B8u); }
	// 00419BFD mov eax, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419C03 mov dword ptr [eax+0x3C], 0x59F5CC
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59F5CCu); }
	// 00419C0A mov ecx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419C10 mov dword ptr [ecx+0x50], 0x59F5DC
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59F5DCu); }
	// 00419C17 mov edx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419C1D mov dword ptr [edx+0x64], 0x59F5EC
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59F5ECu); }
	// 00419C24 mov ecx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419C2A mov eax, 0x0E
	{ ctx.eax = (uint32_t)(0xEu); }
	// 00419C2F mov [ecx+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419C32 mov edx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419C38 mov [edx+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419C3B mov ecx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419C41 mov [ecx+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419C44 mov edx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419C4A mov [edx+0x44], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419C4D mov ecx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419C53 mov [ecx+0x58], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419C56 mov edx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419C5C mov [edx+0x6C], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419C5F mov eax, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419C65 mov dword ptr [eax+0x0C], 0x9E
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(0x9Eu); }
	// 00419C6C mov ecx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419C72 mov dword ptr [ecx+0x20], 0x9F
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(0x9Fu); }
	// 00419C79 mov edx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419C7F mov dword ptr [edx+0x34], 0xA0
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x34u); X86_MEM32(ea) = (uint32_t)(0xA0u); }
	// 00419C86 mov eax, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419C8C mov dword ptr [eax+0x48], 0xA1
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x48u); X86_MEM32(ea) = (uint32_t)(0xA1u); }
	// 00419C93 mov ecx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419C99 mov dword ptr [ecx+0x5C], 0xA2
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0xA2u); }
	// 00419CA0 mov edx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419CA6 mov dword ptr [edx+0x70], 0xA3
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x70u); X86_MEM32(ea) = (uint32_t)(0xA3u); }
	// 00419CAD mov eax, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419CB3 mov dword ptr [eax+0x10], 0x3800
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(0x3800u); }
	// 00419CBA mov ecx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419CC0 mov dword ptr [ecx+0x24], 0x3801
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM32(ea) = (uint32_t)(0x3801u); }
	// 00419CC7 mov edx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419CCD mov dword ptr [edx+0x38], 0x3802
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x3802u); }
	// 00419CD4 mov eax, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419CDA mov dword ptr [eax+0x4C], 0x3803
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x3803u); }
	// 00419CE1 mov ecx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419CE7 mov dword ptr [ecx+0x60], 0x3804
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x60u); X86_MEM32(ea) = (uint32_t)(0x3804u); }
	// 00419CEE mov edx, [esi+0xECC]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xECCu); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419CF4 mov dword ptr [edx+0x74], 0x3805
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x74u); X86_MEM32(ea) = (uint32_t)(0x3805u); }
	// 00419CFB mov eax, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419D01 mov dword ptr [eax], 0x59F604
	{ uint32_t ea = (uint32_t)(ctx.eax); X86_MEM32(ea) = (uint32_t)(0x59F604u); }
	// 00419D07 mov ecx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419D0D mov dword ptr [ecx+0x14], 0x59F618
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x14u); X86_MEM32(ea) = (uint32_t)(0x59F618u); }
	// 00419D14 mov edx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419D1A mov dword ptr [edx+0x28], 0x59F62C
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x28u); X86_MEM32(ea) = (uint32_t)(0x59F62Cu); }
	// 00419D21 mov eax, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419D27 mov dword ptr [eax+0x3C], 0x59F640
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x3Cu); X86_MEM32(ea) = (uint32_t)(0x59F640u); }
	// 00419D2E mov ecx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419D34 mov dword ptr [ecx+0x50], 0x59F650
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x50u); X86_MEM32(ea) = (uint32_t)(0x59F650u); }
	// 00419D3B mov edx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419D41 mov dword ptr [edx+0x64], 0x59F664
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x64u); X86_MEM32(ea) = (uint32_t)(0x59F664u); }
	// 00419D48 mov ecx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419D4E mov eax, 0x0F
	{ ctx.eax = (uint32_t)(0xFu); }
	// 00419D53 mov [ecx+0x08], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x8u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419D56 mov edx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419D5C mov [edx+0x1C], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x1Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419D5F mov ecx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419D65 mov [ecx+0x30], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x30u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419D68 mov edx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419D6E mov [edx+0x44], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x44u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419D71 mov ecx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419D77 mov [ecx+0x58], eax
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x58u); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419D7A mov edx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419D80 mov [edx+0x6C], eax
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x6Cu); X86_MEM32(ea) = (uint32_t)(ctx.eax); }
	// 00419D83 mov eax, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419D89 mov dword ptr [eax+0x0C], 0xA4
	{ uint32_t ea = (uint32_t)(ctx.eax + 0xCu); X86_MEM32(ea) = (uint32_t)(0xA4u); }
	// 00419D90 mov ecx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419D96 mov dword ptr [ecx+0x20], 0xA5
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x20u); X86_MEM32(ea) = (uint32_t)(0xA5u); }
	// 00419D9D mov edx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419DA3 mov dword ptr [edx+0x34], 0xA6
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x34u); X86_MEM32(ea) = (uint32_t)(0xA6u); }
	// 00419DAA mov eax, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419DB0 mov dword ptr [eax+0x48], 0xA7
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x48u); X86_MEM32(ea) = (uint32_t)(0xA7u); }
	// 00419DB7 mov ecx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419DBD mov dword ptr [ecx+0x5C], 0xA8
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x5Cu); X86_MEM32(ea) = (uint32_t)(0xA8u); }
	// 00419DC4 mov edx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419DCA mov dword ptr [edx+0x70], 0xA9
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x70u); X86_MEM32(ea) = (uint32_t)(0xA9u); }
	// 00419DD1 mov eax, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419DD7 mov dword ptr [eax+0x10], 0x3C00
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x10u); X86_MEM32(ea) = (uint32_t)(0x3C00u); }
	// 00419DDE mov ecx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419DE4 mov dword ptr [ecx+0x24], 0x3C01
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x24u); X86_MEM32(ea) = (uint32_t)(0x3C01u); }
	// 00419DEB mov edx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419DF1 mov dword ptr [edx+0x38], 0x3C02
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x38u); X86_MEM32(ea) = (uint32_t)(0x3C02u); }
	// 00419DF8 mov eax, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.eax = (uint32_t)(X86_MEM32(ea)); }
	// 00419DFE mov dword ptr [eax+0x4C], 0x3C03
	{ uint32_t ea = (uint32_t)(ctx.eax + 0x4Cu); X86_MEM32(ea) = (uint32_t)(0x3C03u); }
	// 00419E05 mov ecx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.ecx = (uint32_t)(X86_MEM32(ea)); }
	// 00419E0B pop edi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.edi = (uint32_t)(v); }
	// 00419E0C mov dword ptr [ecx+0x60], 0x3C04
	{ uint32_t ea = (uint32_t)(ctx.ecx + 0x60u); X86_MEM32(ea) = (uint32_t)(0x3C04u); }
	// 00419E13 mov edx, [esi+0xED0]
	{ uint32_t ea = (uint32_t)(ctx.esi + 0xED0u); ctx.edx = (uint32_t)(X86_MEM32(ea)); }
	// 00419E19 mov eax, esi
	{ ctx.eax = (uint32_t)(ctx.esi); }
	// 00419E1B pop esi
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.esi = (uint32_t)(v); }
	// 00419E1C pop ebp
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebp = (uint32_t)(v); }
	// 00419E1D mov dword ptr [edx+0x74], 0x3C05
	{ uint32_t ea = (uint32_t)(ctx.edx + 0x74u); X86_MEM32(ea) = (uint32_t)(0x3C05u); }
	// 00419E24 pop ebx
	{ uint32_t v = X86_MEM32(ctx.esp); ctx.esp += 4; ctx.ebx = (uint32_t)(v); }
	// 00419E25 ret
	ctx.esp += 4; return;
loc_004645A0:
	// 004645A0 mov ecx, 0x6AC610
	{ ctx.ecx = (uint32_t)(0x6AC610u); }
	// 004645A5 jmp 0x004173E0
	X86_BARRIER();
	goto loc_004173E0;
}
X86_WEAK_FUNC(sub_004645A0, __imp__sub_004645A0)

