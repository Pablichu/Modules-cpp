###################
##   VARIABLES   ##
###################

NAME		:= megaphone

OS 			:= $(shell uname -s)
SRC_DIR		:= src/
OBJ_DIR		:= obj/$(OS)/
RM			:= @rm -rfv

-include	sources.mk

OBJECTS		:= $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SOURCES:.cpp=.o))

# COMPILER CONFIG
CXX			:= clang++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98
# CXX		C compiler
# CFLAGS	flags for C compiler
# CPPFLAGS	flags for both compilers

################
##   COLORS   ##
################

red		:= @printf "\033[31m"
green	:= @printf "\e[1;32m"
blue 	:= @printf "\e[1;34m"
yellow	:= @printf "\e[1;33m"
cyan	:= @printf "\e[1;36m"
reset	:= @printf "\e[0m"

# funciona en linux, pero no en mac
#red	:= @echo -n "\e[1;31m"
#green	:= @echo -n "\e[1;32m"
#blue 	:= @echo -n "\e[1;34m"
#yellow	:= @echo -n "\e[1;33m"
#cyan	:= @echo -n "\e[1;36m"
#reset	:= @echo -n "\e[0m"

###########
## RULES ##
###########

all:	$(NAME)

clean:
	$(red)
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME) $(NAME)_*

re:		fclean $(NAME)

# Release rules
$(NAME): $(OBJECTS)
	$(blue)
	$(CXX) -o $(NAME) $^ $(CXXFLAGS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	$(CXX) -o $@ -c $< $(CXXFLAGS)

-include debug.mk

print:
	@echo $(SOURCES)
	@echo $(OBJECTS)
	@echo $(DBG_OBJECTS)

.PHONY:		all clean fclean re
