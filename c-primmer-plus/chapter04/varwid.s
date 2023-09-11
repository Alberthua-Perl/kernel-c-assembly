	.file	"varwid.c"
	.text
	.section	.rodata
.LC1:
	.string	"Enter a field width:"
.LC2:
	.string	"%d"
.LC3:
	.string	"width address: %p\n"
.LC4:
	.string	"The number is :%*d\n"
	.align 8
.LC5:
	.string	"Now enter a width and a precision:"
.LC6:
	.string	"%d %d"
.LC7:
	.string	"Now width address: %p\n"
.LC8:
	.string	"Weight = %*.*f\n"
.LC9:
	.string	"Done!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$36, -4(%rbp)
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, -16(%rbp)
	movl	$.LC1, %edi
	call	puts
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movl	-20(%rbp), %eax
	movl	-4(%rbp), %edx
	movl	%eax, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC5, %edi
	call	puts
	leaq	-24(%rbp), %rdx
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC6, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC7, %edi
	movl	$0, %eax
	call	printf
	movl	-24(%rbp), %edx
	movl	-20(%rbp), %eax
	movsd	-16(%rbp), %xmm0
	movl	%eax, %esi
	movl	$.LC8, %edi
	movl	$1, %eax
	call	printf
	movl	$.LC9, %edi
	call	puts
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1080971264
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-3)"
	.section	.note.GNU-stack,"",@progbits
