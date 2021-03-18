section .text
    global ft_strcmp

ft_strcmp:
    mov rax, 0
	mov r8, rdi
	mov r9, rsi
	push rdi
	push rsi
	mov rcx, -1
    jmp compare

compare:
	inc rcx
    cmp BYTE [r8 + rcx], 0
	je exit
	mov al, BYTE [r8 + rcx]
    cmp al, BYTE [r9 + rcx]
    je compare

exit:
	mov al, BYTE [r8 + rcx]
	sub al, BYTE [r9 + rcx]
	pop rsi
	pop rdi

	jnc ft_end
	neg al
	neg eax
ft_end:
	ret
