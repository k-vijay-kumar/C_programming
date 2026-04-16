	.file	"pointer_arithmetic.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Value of ptr1: %p\12\0"
LC1:
	.ascii "Value of ptr1 +1: %p\12\0"
LC2:
	.ascii "Value of ptr1 - 1: %p\12\0"
	.align 4
LC3:
	.ascii "Difference of ptr1 and ptr1+1: %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$29, 28(%esp)
	leal	28(%esp), %eax
	movl	%eax, 44(%esp)
	movl	44(%esp), %eax
	addl	$4, %eax
	movl	%eax, 40(%esp)
	movl	44(%esp), %eax
	subl	$4, %eax
	movl	%eax, 36(%esp)
	movl	40(%esp), %edx
	movl	44(%esp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$2, %eax
	movl	%eax, 32(%esp)
	movl	44(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	40(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	36(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	32(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
