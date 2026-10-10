CXX := c++
CXXFLAGS := -Wall -Iinc
NAME := sum_program
SRC:= src/main.cpp src/MathGenerator.cpp src/Display.cpp src/TestManager.cpp
HEADERS := inc/MathGenerator.hpp inc/Display.hpp inc/TestManager.hpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ): $(HEADERS)

clean:
	rm -f $(OBJ) $(NAME)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re