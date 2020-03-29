NAME	= rush2

CC	= gcc

RM	= rm -f

SRCS	= ./libmy.c \
		./rush.c 

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