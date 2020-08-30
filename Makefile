##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## infinadd
##

MAIN     	=	main.cpp				\

JDK			=	src/JoseDK/window.cpp				\

CFLAGS		=	-W -Wall -Wextra -g -g3 -I.include

SFLIB		=	-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

OBJ			=	$(MAIN:.cpp=.o) $(JDK:.cpp=.o)

NAME		=	TS2D

all:	$(OBJ)
	g++ $(OBJ) $(SFLIB) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
