##
## EPITECH PROJECT, 2020
## C classic
## File description:
## Makefile
##

CC	=	gcc

NAME	=	202unsold

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I./include -Wextra -Wall

all: 		$(NAME)

$(NAME): 	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -L./lib/

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
