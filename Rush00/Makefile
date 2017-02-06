CC = @gcc

NAME = rush

NAME_OR0 = rush00

NAME_OR1 = rush01

NAME_OR2 = rush02

NAME_OR3 = rush03

NAME_OR4 = rush04

FLAGS = -Wall -Wextra -Werror

RM = @/bin/rm -f

SRC_R0 = ex00/*

SRC_R1 = ex01/*

SRC_R2 = ex02/*

SRC_R3 = ex03/*

SRC_R4 = ex04/*

FLAG_OUT = -o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC_R0) $(FLAG_OUT) $(NAME_OR0)
	$(CC) $(FLAGS) $(SRC_R1) $(FLAG_OUT) $(NAME_OR1)
	$(CC) $(FLAGS) $(SRC_R2) $(FLAG_OUT) $(NAME_OR2)
	$(CC) $(FLAGS) $(SRC_R3) $(FLAG_OUT) $(NAME_OR3)
	$(CC) $(FLAGS) $(SRC_R4) $(FLAG_OUT) $(NAME_OR4)

clean:
	$(RM) $(NAME_OR0) $(NAME_OR1) $(NAME_OR2) $(NAME_OR3) $(NAME_OR4)

fclean: clean

re: fclean all
