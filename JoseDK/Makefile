JDK_LIB	=	JoseDK.so

all:
	gcc -c src/*.cpp -I.
	ar -crs $(JDK_LIB) *.o

clean:
	rm -rf *.o

fclean:
	rm -rf $(JDK_LIB)

re:
	fclean all