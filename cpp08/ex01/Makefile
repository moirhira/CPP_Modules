NAME		= span
SRC			= main.cpp Span.cpp
OBJ			= $(SRC:.cpp=.o)
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
CXX			= c++


all: $(NAME)

$(NAME): $(OBJ) Span.hpp
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re