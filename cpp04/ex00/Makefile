NAME		= animal
SRC		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJ		= $(SRC:.cpp=.o)
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
CPP		= c++


all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

.%o: .%cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re