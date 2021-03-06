extern  __errno_location

section .text
	global ft_read

ft_read:
	mov rax, 0
	syscall
	cmp rax, 0
	jl ft_read_error
	ret

ft_read_error:
	neg rax
	mov r15, rax
	call  __errno_location WRT ..plt
    mov [rax], r15
    mov rax, -1
    ret
