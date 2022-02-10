NAME	= a_day_in_Midgar

CXX		= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -Iheaders
RM		= rm -f

SRC		=	main.cpp \
			source/Ice.cpp \
			source/Cure.cpp \
			source/AMateria.cpp \
			source/Character.cpp \
			source/MateriaSource.cpp

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
