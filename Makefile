NAME	= libftprintf.a
SRCS=    ft_printf.c ft_putaddr.c ft_putchar.c ft_putnbr.c \
            ft_putnbr_base.c ft_putstr.c ft_putnbr_u.c
OBJ = $(SRCS:%.c=%.o)

CC = gcc
FLAGS	= -Wall -Wextra -Werrorr
AR = ar 
RM = rm -fr


$(NAME): 
	$(CC) $(FLAGS) -c $(SRCS) -I ./
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

fclean: clean
	$(RM) NAME

clean:
	$(RM) $(OBJ)

re: fclean all