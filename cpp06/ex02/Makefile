NAME	= dynamic_cast

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

SRC		=	main.cpp \
			Base.cpp

OBJS	=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		@$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
