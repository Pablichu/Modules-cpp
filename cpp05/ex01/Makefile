NAME	= new_models_comming_in

CXX		= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

SRC		=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp

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
