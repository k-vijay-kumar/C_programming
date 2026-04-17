	.file	"realloc.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Memory not allocated.\0"
	.align 4
LC1:
	.ascii "Allocated memory start's address at: %p\12\0"
	.align 4
LC2:
	.ascii "Value at first block (%p) of allocated memory: %d\12\0"
	.align 4
LC3:
	.ascii "Reallocated memory start's address at: %p\12\0"
	.align 4
LC4:
	.ascii "Value at second block (%p) of allocated memory: %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$10, 28(%esp)
	movl	$20, 24(%esp)
	movl	$4, (%esp)
	call	_malloc
	movl	%eax, 20(%esp)
	cmpl	$0, 20(%esp)
	jne	L2
	movl	$LC0, (%esp)
	call	_puts
	movl	$0, (%esp)
	call	_exit
L2:
	movl	20(%esp), %eax
	movl	28(%esp), %edx
	movl	%edx, (%eax)
	movl	20(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	20(%esp), %eax
	movl	(%eax), %eax
	movl	%eax, 8(%esp)
	movl	20(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$8, 4(%esp)
	movl	20(%esp), %eax
	movl	%eax, (%esp)
	call	_realloc
	movl	%eax, 16(%esp)
	cmpl	$0, 20(%esp)
	jne	L3
	movl	$LC0, (%esp)
	call	_puts
	movl	$0, (%esp)
	call	_exit
L3:
	movl	20(%esp), %eax
	leal	4(%eax), %edx
	movl	24(%esp), %eax
	movl	%eax, (%edx)
	movl	16(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	16(%esp), %eax
	addl	$4, %eax
	movl	(%eax), %eax
	movl	16(%esp), %edx
	addl	$4, %edx
	movl	%eax, 8(%esp)
	movl	%edx, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	20(%esp), %eax
	movl	%eax, (%esp)
	call	_free
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_malloc;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_exit;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_realloc;	.scl	2;	.type	32;	.endef
	.def	_free;	.scl	2;	.type	32;	.endef
