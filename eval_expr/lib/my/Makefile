##
## EPITECH PROJECT, 2021
## makefile
## File description:
## my make file
##

CC			=	gcc
CFLAGS		=	-W -Wall -Wextra -Werror -Iinclude

LIB_SRC		= 	$(wildcard *.c) \

LIB_OBJ		= 	$(LIB_SRC:.c=.o)

TARGET_LIB	=	libmy.a

all:
		$(CC) -c $(LIB_SRC)
		ar rsc $(TARGET_LIB) $(LIB_OBJ)
		cp $(TARGET_LIB) ../

clean:
		rm -rf $(LIB_OBJ)

fclean: clean
		rm -rf ../$(TARGET_LIB)
		rm -rf $(TARGET_LIB)