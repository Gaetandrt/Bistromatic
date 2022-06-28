##
## EPITECH PROJECT, 2021
## Pool Day10
## File description:
## Makefile
##

CC			= 	gcc

CFLAGS		= 	-W -Wall -Werror -Wextra -c -I../../include/

SRC 		=	$(wildcard *.c) \
				$(wildcard ../../lib/my/*.c)

OBJ 		= 	$(SRC:.c=.o)

TARGET		= 	infin_add \

all : $(TARGET)

$(TARGET) : $(OBJ)
	make -C ../../lib/my
	$(CC) -o $(TARGET) $(OBJ) -L../../lib/my/ -lmy

clean :
	rm -rf $(OBJ)
	make clean -C ../../lib/my

fclean : clean
	rm -rf $(TARGET)
	make fclean -C ../../lib/my

re : fclean all
