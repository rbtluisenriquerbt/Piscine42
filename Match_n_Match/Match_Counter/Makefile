CC = @gcc

NAME = match

NAME_O = match.o main.o

FLAGS = -Wall -Wextra -Werror

RM = @/bin/rm -f

SRC = match.c main.c

TYPE_COMP = -c

FLAG_OUT = -o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(TYPE_COMP) $(SRC) 
	$(CC) $(NAME_O) $(FLAG_OUT) $(NAME)
clean:
	$(RM) $(NAME_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all
