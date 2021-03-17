extern  __errno_location

section .text
	global ft_write

ft_write:
	mov     rax, 1              ; set write to command
    syscall                     ; call kernel
	cmp rax, 0
	jl ft_write_error			; error sets carry flag, rax = errno
	ret

ft_write_error:
	neg rax
	mov r15, rax
	call  __errno_location WRT ..plt
	mov [rax], r15
	mov rax, -1
	ret
