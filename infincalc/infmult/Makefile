##
## EPITECH PROJECT, 2021
## Pool Day10
## File description:
## Makefile
##

CC			= 	gcc
CFLAGS		= 	-W -Wall -Werror -Wextra -c -I../include/

SRC 		=	main.c \
				inf_calcul.c \
				gestion_tab.c \
				multiplication.c \
				less_sub.c \
				add_less.c \

OBJ 		= 	main.o \
				inf_calcul.o \
				gestion_tab.o \
				multiplication.o \
				less_sub.o \
				add_less.o \

TARGET		= 	inf_calcul \

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
