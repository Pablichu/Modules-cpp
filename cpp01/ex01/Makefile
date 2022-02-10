NAME	= Zombies_cabrones

CXX		= clang++
FLAGS	= -Wall -Wextra -Werror
RM		= rm -f

SRC		=	main.cpp \
			Zombie.cpp \
			ZombieHorde.cpp

OBJS	=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		@$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONE:	all clean fclean re