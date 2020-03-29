##
## EPITECH PROJECT, 2018
## rush_2
## File description:
## Makefile
##

CC     = gcc

RM     = rm -rf

CFLAGS += -W -Wall -Wextra

CFLAGS += -I./include/ -L./lib/my -lmy -g

NAME   =    eval_expr

SRC    =    *.c

OBJ    = $(SRC:.c=.o)

all: compil

lib_make:
	$(MAKE) -C ./lib/my MAKEFLAGS=

compil: lib_make
	$(CC) -o $(NAME) $(SRC) $(CFLAGS)

valgrind:	$(SRC)
	$(CC) -g -o $(NAME) $(SRC) $(CFLAGS)

clean:
	$(RM) $(NAME)

fclean:  clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean valgrind