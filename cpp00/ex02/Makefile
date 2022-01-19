NAME	= Your_goddam_program

CC		= clang++
FLAGS	= -Wall -Wextra -Werror
RM		= rm -f

SRC		=	test.cpp	\
			Account.cpp

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