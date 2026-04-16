	.file	"int_size.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "Size of int data type is %u bytes\12\0"
	.align 4
LC1:
	.ascii "Size of int8_t data type is %u bytes\12\0"
	.align 4
LC2:
	.ascii "Size of int16_t data type is %u bytes\12\0"
	.align 4
LC3:
	.ascii "Size of int32_t data type is %u bytes\12\0"
	.align 4
LC4:
	.ascii "Size of int64_t data type is %u bytes\12\0"
	.align 4
LC5:
	.ascii "Size of intptr_t data type is %u bytes\12\0"
	.align 4
LC6:
	.ascii "Size of uint8_t data type is %u bytes\12\0"
	.align 4
LC7:
	.ascii "Size of uint16_t data type is %u bytes\12\0"
	.align 4
LC8:
	.ascii "Size of uint32_t data type is %u bytes\12\0"
	.align 4
LC9:
	.ascii "Size of uint64_t data type is %u bytes\12\0"
	.align 4
LC10:
	.ascii "Size of uintptr_t data type is %u bytes\12\0"
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
	subl	$16, %esp
	call	___main
	movl	$4, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$1, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$2, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$4, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$8, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	$4, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movl	$1, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movl	$2, 4(%esp)
	movl	$LC7, (%esp)
	call	_printf
	movl	$4, 4(%esp)
	movl	$LC8, (%esp)
	call	_printf
	movl	$8, 4(%esp)
	movl	$LC9, (%esp)
	call	_printf
	movl	$4, 4(%esp)
	movl	$LC10, (%esp)
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
