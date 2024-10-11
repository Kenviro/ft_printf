CC = gcc

CFLAGS = -Wall -Wextra -Werror

FILES = $(wildcard Libft_printf/*.c) ft_printf.c putunsignednbr.c put_printf.c putnbrbase_printf.c ft_pointerprintf.c

O_FILES = $(FILES:.c=.o)

HEADERS = Libft/libft.h ft_printf.h 

NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(O_FILES)
	ar rcs $(NAME) $(O_FILES)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o */*.o

fclean: clean
	rm -f libftprintf.a 

re : fclean all

.PHONY : all clean fclean re bonus