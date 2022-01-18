NAME	= fixed_numbers

CC		= clang++
FLAGS	= -Wall -Wextra -Werror
RM		= rm -f

SRC		=	main.cpp \
			Fixed.cpp

OBJS	=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		@$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONE:	all clean fclean re