##
## EPITECH PROJECT, 2018
## Lib
## File description:
## Makefile
##

CC     = gcc

RM     = rm -rf

CFLAGS += -c

NAME   =    libmy.a

SRC    =    *.c

OBJ    =	*.o

all: lib

compil: $(SRC:.c=.c)
	 $(CC) $(CFLAGS) $(SRC)

lib: compil
	ar rc $(NAME) $(OBJ)

clean:
	 $(RM) $(OBJ)

fclean:  clean
	 $(RM) $(NAME)

re: fclean all