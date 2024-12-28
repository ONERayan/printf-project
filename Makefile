##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## task01
##

SRC	=	my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_strcpy.c	\
		my_revstr.c	\
		conv_to_hex.c	\
		conv_to_octal.c	\
		mini_printf.c	\
		print_diff_base.c \
		my_strlowcase.c	\
		init_func.c	\
		print_basics.c	\
		my_put_float.c	\
		print_float_nbr.c \
		my_scient_write.c \
		my_scient_write_upper.c \
		my_put_unsigned_nbr.c	\
		conv_ptr.c	\
		my_is_nbr.c	\
		init_specifier.c	\
		print_character.c	\
		print_plus.c	\
		my_floatscient.c	\
		my_put_float_without.c 	\
		main.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

NAME_H	=	my.h

CFLAGS	=	-Wall -Wextra -Werror -Iinclude/ -L. -lmy

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)
	$(CC) -o printf_exe $(CFLAGS)
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
