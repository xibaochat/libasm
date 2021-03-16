section .text
    global ft_strcmp

ft_strcmp:
	mov al, byte [rdi]
	cmp al, 0
	je _exit
	mov bl, byte [rsi]
	cmp bl, 0
	je _exit
	sub al, bl
	cmp al, 0
	jne _exit
	inc rdi
	inc rsi
	jmp ft_strcmp

_exit:
	sub al, bl
	movzx rax, al
	ret
