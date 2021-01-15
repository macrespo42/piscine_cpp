NAME = iter

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main

SRC = $(addsuffix .cpp, $(addprefix ./, $(FILES)))

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
