MAIN     	=	main.cpp							\

SRC			=						\

CXXFLAGS	=	-W -Wall -Wextra -g -g3 -I include -I.

SFLIB		=	-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

OBJ			=	$(MAIN:.cpp=.o) $(SRC:.cpp=.o)

JDK_LIB		=	JoseDK/JoseDK.so

NAME		=	TS2D

JDK_MAKE	=	make -C JoseDK

all:	$(OBJ)
	$(CXX) $(OBJ) $(JDK_LIB) $(SFLIB) -o $(NAME)

clean:
	rm -f $(OBJ)
	$(JDK_MAKE) clean

fclean: clean
	rm -f $(NAME)
	$(JDK_MAKE) fclean

re:		fclean all

build:
	make -C JoseDK