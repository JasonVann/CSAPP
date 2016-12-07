	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_swap
	.align	4, 0x90
_swap:                                  ## @swap
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	movq	_bufp1@GOTPCREL(%rip), %rax
	movq	_buf@GOTPCREL(%rip), %rcx
	addq	$4, %rcx
	movq	%rcx, (%rax)
	movq	_bufp0(%rip), %rcx
	movl	(%rcx), %edx
	movl	%edx, -4(%rbp)
	movq	(%rax), %rcx
	movl	(%rcx), %edx
	movq	_bufp0(%rip), %rcx
	movl	%edx, (%rcx)
	movl	-4(%rbp), %edx
	movq	(%rax), %rax
	movl	%edx, (%rax)
	popq	%rbp
	retq
	.cfi_endproc

	.section	__DATA,__data
	.globl	_bufp0                  ## @bufp0
	.align	3
_bufp0:
	.quad	_buf

	.comm	_bufp1,8,3              ## @bufp1

.subsections_via_symbols
