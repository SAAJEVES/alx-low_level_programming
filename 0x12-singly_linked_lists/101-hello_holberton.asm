section .data
	format db 'Hello, Holberton', 0xA
	format_len equ $ - format

section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, format
	mov rdx, format_len
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall
