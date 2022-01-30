ROOT_FILES	=	\
	megaphone.cpp	\

OTHER_DIR	= other/info/
OTHER_FILES	=	\
	other1.c	\
	other2.c	\

SOURCES	=	\
	$(addprefix $(SRC_DIR), $(ROOT_FILES))
#	$(addprefix $(SRC_DIR)$(OTHER_DIR), $(OTHER_FILES))
