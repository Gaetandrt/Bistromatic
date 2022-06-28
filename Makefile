##
## EPITECH PROJECT, 2021
## Pool Day10
## File description:
## Makefile
##

CC			= 	gcc

CFLAGS		= 	-W -Wall -Werror -Wextra -c -g3 -I../include/

SRC 		=	$(wildcard *.c) \
				$(wildcard lib/my/*.c) \
				$(wildcard replace_base_to_decimal/*.c) \
				$(wildcard replace_decimal_to_base/*.c)	\
				$(wildcard ./infincalc/infin_add/*.c)	\
				$(wildcard ./infincalc/infin_sub/*.c)	\
				$(wildcard ./eval_expr/*.c)


OBJ 		= 	$(SRC:.c=.o)

TARGET		= 	calc \

all : $(TARGET)

$(TARGET) : $(OBJ)
	make -C ./lib/my
	$(CC) -o $(TARGET) $(OBJ) -L./lib/my/ -lmy

clean :
	rm -rf $(OBJ)
	make clean -C ./lib/my

fclean : clean
	rm -rf $(TARGET)
	make fclean -C ./lib/my

re : fclean all
