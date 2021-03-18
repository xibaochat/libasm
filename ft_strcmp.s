section .text
    global ft_strcmp

ft_strcmp:
	mov r8, rdi
	mov r9, rsi
	mov rcx, -1
    mov rax, 0
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
	jc fini_exit
    ret
fini_exit:
	neg al
	neg eax
	ret
