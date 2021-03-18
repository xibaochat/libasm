section .text
    global ft_strdup
    extern ft_strlen
	extern ft_strcpy
	extern malloc

ft_strdup:
	;; 	mov r15, rdi
	push rdi
	call ft_strlen
	inc rax
	mov rdi, rax
	call malloc  WRT ..plt
	je  ft_exit
	pop rsi
	mov rdi, rax
	call ft_strcpy
	ret
ft_exit:
	pop rdi
	ret
