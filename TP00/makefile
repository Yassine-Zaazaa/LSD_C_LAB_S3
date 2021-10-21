SRC = ex1.c ex2.c ex4.c
PROG = bitwise
LIB = bitwise.a
OBJ = ex1.o ex2.o ex4.o

all: $(LIB)

$(LIB):
	gcc -c $(SRC) 
	ar rcs $(LIB) $(OBJ)

clean:
	rm $(OBJ)

fclean:
	rm $(OBJ) $(LIB)

re:
	rm $(OBJ) $(LIB)
	gcc -c $(SRC) 
	ar rcs $(LIB) $(OBJ)

