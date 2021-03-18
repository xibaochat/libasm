NAME = libasm.a

SRCS = ft_strlen.s\
		ft_strcmp.s\
		ft_strdup.s\
		ft_write.s\
		ft_read.s\
		ft_strcpy.s


SRCO = $(SRCS:.s=.o)

NASM = nasm

NASMFLAGS = -f elf64

%.o	: %.s
		$(NASM) $(NASMFLAGS) -o $@ $<

all: $(NAME)

$(NAME): $(SRCO)
		ar rcs $(NAME) $(SRCO)


test: re
	gcc main.c    $(NAME)

clean:
		rm -f $(SRCO)

fclean: clean
		rm -rf $(NAME)

re: fclean all
