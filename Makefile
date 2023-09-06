CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: libft.a

libft.a: $(OBJ)
	ar -rcs $@ $^

clean:
	rm -f $(OBJ) libft.a

fclean: clean
	rm -f *.o

re: fclean all