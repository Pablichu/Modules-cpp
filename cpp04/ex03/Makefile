NAME	= materias

CC		= clang++
FLAGS	= -I/headers -Wall -Wextra -Werror -std=c++98
RM		= rm -f

SRC		=	main.cpp \
			


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