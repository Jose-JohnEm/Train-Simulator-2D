##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## infinadd
##

MAIN     	=	main.cpp				\

CC			=	g++ -I.include -W -Wall -Wextra -g -g3

SFLIB		=	-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

OBJ			=	$(MAIN:.cpp=.o)

NAME		=	TS2D

all:	$(OBJ)
	$(CC) $(OBJ) $(SFLIB) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
