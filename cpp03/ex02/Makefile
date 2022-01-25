NAME	= more_traps

CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
RM		= rm -f

SRC		=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp

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