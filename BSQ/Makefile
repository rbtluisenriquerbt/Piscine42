CC = @gcc

NAME = bsq

FLAGS = -Wall -Wextra -Werror

RM = @/bin/rm -f

SRC = c_files/*

FLAG_OUT = -o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) $(FLAG_OUT) $(NAME)
clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all
