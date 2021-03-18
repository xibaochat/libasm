section .text
    global ft_strlen

ft_strlen:
	mov rax, 0					;put 0 o rax,so that each char compare to NULL
	mov rcx, -1

	CLD			                ;Increment RDI after each character
	repne SCASB					;Scan string for NUL, compare dest and src(in rax), decrementing CX for each char
	sub rax, rcx
	sub rax, 2

	ret
