section .text
    global ft_strdup
    extern ft_strlen
	extern ft_strcpy
	extern malloc

ft_strdup:
	mov r15, rdi
	call ft_strlen
	inc rax
	mov rdi, rax
	call malloc  WRT ..plt
	jnz   _exit
	mov rdi, rax
	mov rsi, r15
	call ft_strcpy
	ret
_exit:
	mov rax, 0
	ret
