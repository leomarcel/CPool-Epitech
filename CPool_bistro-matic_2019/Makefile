##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	= calc

CC	= gcc

RM	= rm -f

SRCS	= ./help.c \
	  ./error_g.c \
	  ./eval_expr.c \
	  ./swap_tab.c \
	  ./lib/my/do_op.c \
	  ./lib/my/my_atoi.c \
	  ./lib/my/my_put_nbr.c \
	  ./lib/my/my_putchar.c \
	  ./lib/my/my_putstr.c \
	  ./lib/my/my_strcpy.c \
	  ./lib/my/my_strlen.c \
	  ./lib/my/my_getnbr.c \
	  ./lib/my/my_strtol.c \
	  ./main.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re