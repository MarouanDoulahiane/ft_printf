CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: libft.a

libft.a: $(OBJ)
	@ar -rcs $@ $^

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	@rm -f libft.a

clean:
	@rm -f $(OBJ)


re: fclean all