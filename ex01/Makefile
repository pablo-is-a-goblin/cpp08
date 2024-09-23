NAME = contain.out

SRC = main.cpp \
	Span.cpp

OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDE = Span.hpp

CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(INCLUDE)
	$(CC) $(CPPFLAGS) -c -o $@ $< 

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

leaks:
	valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --log-file=leaks.out \
         ./$(NAME)
		 
.PHONY: clean fclean re leaks all
