NAME	=	PmergeMe

CXX			= c++
CXXFLAGS	= -Wall -Wextra -std=c++98 #-Werror 
RM			= rm -f

SRC		=	main.cpp \
			PmergeMe.cpp

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