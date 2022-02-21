NAME	= functional_forms

CXX		= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

SRC		=	main.cpp \
			Form.cpp \
			Bureaucrat.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp

OBJS	=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		@$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME) Greta\ Thunberg_shrubbery

re:		fclean all

.PHONY:	all clean fclean re
