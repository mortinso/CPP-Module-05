NAME = internship

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

SRC_DIR = src
INC_DIR = inc
OBJ_DIR = .obj

SRC_FILES = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
INC_FILES = Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
HDRS = $(addprefix $(INC_DIR)/, $(INC_FILES))
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Compiled!"

$(OBJ_DIR)/%.o: %.cpp $(HDRS)
	@mkdir -p $(OBJ_DIR)/$(dir $<)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS) $(OBJ_DIR)
	@echo "Object files removed"

fclean: clean
	@rm -rf $(NAME)
	@echo "Executable removed"

re: fclean all

val: all
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./$(NAME)

.PHONY: all clean fclean re val
