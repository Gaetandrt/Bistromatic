##
## EPITECH PROJECT, 2021
## makefile
## File description:
## my make file
##

CC			=	gcc
CFLAGS		=	-W -Wall -Wextra -Werror -Iinclude

LIB_SRC	= 	my_putchar.c	\
			my_isneg.c	\
			my_put_nbr.c	\
			my_swap.c	\
			my_putstr.c	\
			my_strlen.c	\
			my_getnbr.c	\
			my_sort_int_array.c	\
			my_compute_power_rec.c	\
			my_compute_square_root.c	\
			my_is_prime.c	\
			my_find_prime_sup.c	\
			my_strcpy.c	\
			my_strncpy.c	\
			my_revstr.c	\
			my_strstr.c	\
			my_strcmp.c	\
			my_strncmp.c	\
			my_strupcase.c	\
			my_strlowcase.c	\
			my_strcapitalize.c	\
			my_str_isalpha.c	\
			my_str_isnum.c	\
			my_str_islower.c	\
			my_str_isupper.c	\
			my_str_isprintable.c	\
			my_showstr.c	\
			my_showmem.c	\
			my_strcat.c	\
			my_strncat.c	\

LIB_OBJ	= 	$(LIB_SRC:.c=.o)

TARGET_LIB	= libmy.a

all:
		$(CC) -c $(LIB_SRC)
		ar rsc $(TARGET_LIB) $(LIB_OBJ)
		cp $(TARGET_LIB) ../

clean:
		rm -rf $(LIB_OBJ)

fclean: clean
		rm -rf ../$(TARGET_LIB)
		rm -rf $(TARGET_LIB)