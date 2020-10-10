##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## infinadd
##

MAIN     	=	main.cpp				\

JDK			=	src/JoseDK/window.cpp				\
				src/JoseDK/throttle.cpp				\
				src/JoseDK/number.cpp				\
				src/JoseDK/text.cpp					\

SRC			=	src/speedometer.cpp			\

INC_DIR		=	include

CFLAGS		=	-W -Wall -Wextra -g -g3

SFLIB		=	-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

OBJ			=	$(MAIN:.cpp=.o) $(JDK:.cpp=.o) $(SRC:.c:.o)

NAME		=	TS2D

CC			=	g++ -I$(INC_DIR)

all:	$(OBJ)
	$(CC) $(OBJ) $(SFLIB) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
