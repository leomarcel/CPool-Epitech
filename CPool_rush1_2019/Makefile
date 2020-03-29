NAME	= program

CC	= gcc

RM	= rm -f

SRCS	= ./rush1-1.c \
	  ./rush1-2.c \
	  ./rush1-3.c \
	  ./rush1-4.c \
	  ./rush1-5.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I 
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
