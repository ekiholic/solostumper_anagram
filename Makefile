##
## EPITECH PROJECT, 2019
## solostumper
## File description:
## countword
##

SRC             =       main.c \
						anagram.c \

OBJ             =       $(SRC)

NAME  = anagram

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
