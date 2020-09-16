NAME = megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror

MEGAPHONE = megaphone

SRC = $(addsuffix .cpp, $(addprefix ./, $(MEGAPHONE)))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
