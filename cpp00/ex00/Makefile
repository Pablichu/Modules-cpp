NAME	= megaphone

CC		= c++
FLAGS	= -Wall -Wextra -Werror
RM		= rm

SRC		= megaphone.cpp

all:	$(NAME)

$(NAME):	
			$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
		@$(RM) $(NAME)

re:		fclean all

.PHONE:	all fclean re