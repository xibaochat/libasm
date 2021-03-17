section .text
    global ft_strcpy
	extern ft_strlen

ft_strcpy:

	push rdi					;store it to that later can get its original value
	mov rdi, rsi				;1er parametre to be sent to get lens
	call ft_strlen				; to get len of src
	mov rcx, rax				;assign return value to rcx
	pop rdi						;get it back the original rdi
	cld							; Increment RDI after each character
	mov rax, rdi
	rep movsb					;move ECX bytes from [RSI] to [RDI]
	mov BYTE [rdi], 0

	jmp ft_exit

ft_exit:
    ret
