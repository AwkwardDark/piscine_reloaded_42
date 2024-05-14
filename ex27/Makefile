NAME 	= ft_display_file

CC 		= gcc

CFLAGS 	= -Wall -Wextra -Werror -c

OFLAGS 	= -Wall -Wextra -Werror -o

SOURCE	= main.c

OBJS 	= $(SOURCE:.c=.o)

all:	$(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SOURCE)
		$(CC) $(OFLAGS) $(NAME) $(OBJS)

clean:
		/bin/rm -f $(OBJS)

fclean: clean
		/bin/rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean