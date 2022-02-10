NAME	= fixed_numbers

CXX		= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
RM		= rm -f

SRC		=	main.cpp \
			Fixed.cpp

OBJS	=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		@$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONE:	all clean fclean re