section .data
	format db 'Hello, Holberton', 0xA, 0;
	fornat_len equ $ - format

section .text
	global main

extern printf

main:
	lea rdi, [rel format]

	call printf

	xor rdi, rdi
	call exit

exit:
	mov rax, 60
	syscall

section .bss
