###############
## VARIABLES ##
###############

# Debug build settings
DBG_SUFFIX		:= debug
DBG_NAME 		:= $(NAME)_$(DBG_SUFFIX)
DBG_DIR			:= $(OBJ_DIR)$(DBG_SUFFIX)/
DBG_OBJECTS		:= $(patsubst $(OBJ_DIR)%, $(DBG_DIR)%, $(OBJECTS))
DBG_CXXFLAGS	:= -O0 -g3

# Sanitize build settings
SAN_SUFFIX		:= sanitize
SAN_NAME		:= $(NAME)_$(SAN_SUFFIX)
SAN_DIR			:= $(OBJ_DIR)$(SAN_SUFFIX)/
SAN_OBJECTS		:= $(patsubst $(OBJ_DIR)%, $(SAN_DIR)%, $(OBJECTS))
SAN_CXXFLAGS	:= -O0 -g3 -fsanitize=address

###########
## RULES ##
###########

# Debug rules
debug:			$(DBG_NAME)

$(DBG_NAME):	$(DBG_OBJECTS)
	$(yellow)
	$(CXX) -o $@ $(DBG_OBJECTS) $(DBG_CXXFLAGS) $(CXXFLAGS)

$(DBG_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	$(CXX) -o $@ -c $< $(DBG_CXXFLAGS) $(CXXFLAGS)

# Sanitize rules
sanitize:		$(SAN_NAME)

$(SAN_NAME):	$(SAN_OBJECTS)
	$(yellow)
	$(CXX) -o $@ $(SAN_OBJECTS) $(SAN_CXXFLAGS) $(CXXFLAGS)

$(SAN_DIR)%.o:	$(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	$(CXX) -o $@ -c $< $(SAN_CXXFLAGS) $(CXXFLAGS)
