CC = @gcc

NAME = santastua

FLAGS = -Wall -Wextra -Werror

RM = @/bin/rm -f

SRC = *.c

FLAG_OUT = -o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) $(FLAG_OUT) $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all
