##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## infinadd
##

MAIN     	=	main.cpp				\

CC			=	g++ -I.Sf/include/SFML -W -Wall -Wextra -g -g3

SFLIB		=	-L.Sf/lib -lsfml-graphics -lsfml-audio -lsfml-system -lsfml-window

OBJ			=	$(MAIN:.cpp=.o)

NAME		=	TS2D

all:	$(OBJ)
	$(CC) $(OBJ) $(SFLIB) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
