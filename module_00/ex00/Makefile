NAME = megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

MEGAPHONE = megaphone

SRC = $(addsuffix .cpp, $(addprefix ./, $(MEGAPHONE)))

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