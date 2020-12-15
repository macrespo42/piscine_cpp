NAME = replace

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = replace

SRC = $(addsuffix .cpp, $(addprefix ./, $(CPP)))

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)
	rm -f *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean