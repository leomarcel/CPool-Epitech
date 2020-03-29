##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=	*.c

NAME	=	libmy.a

OBJ	=	*.o

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC)
	ar rc libmy.a
	cp libmy.a ../
	cp my.h ../../include/my.h

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re :	fclean all

auteur:
	echo "leo.marcel@epitech.eu" > auteur