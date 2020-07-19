SECTION .data

message: db "Hello, Holberton",10,0

SECTION .text

global main
main:
		mov rax, 1
	    mov rdi, 1
	    mov rsi, message
	    mov rdx, 17
	    syscall