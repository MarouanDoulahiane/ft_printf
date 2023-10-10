SRC =	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c \
		ft_putunsigned.c ft_puthex.c ft_putaddress.c
OBJ =	$(SRC:.c=.o);

NAME = libftprintf.a

all: $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

clean:
	@rm -fr $(OBJ)

fclean: clean
	@rm -fr $(NAME)

re: fclean all