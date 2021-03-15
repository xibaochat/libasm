section .text
    global ft_strcmp

ft_strcmp:
	cmp [rdi], 0
	je _exit
	cmp [rsi], 0
	je _exit
	mov rax, [rdi]
	cmp rax, [rsi]
	jne _exit
	inc rdi
	inc rsi
	jmp ft_strcmp

_exit:
	mov rax, [rdi]
	sub [rsi], rax
	mov rax, [rsi]
	ret
