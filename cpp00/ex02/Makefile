NAME	= Your_goddam_program

CC		= c++
FLAGS	= -Wall -Wextra -Werror
RM		= rm

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