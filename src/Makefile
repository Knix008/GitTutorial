# Building executable.
mystring : string_operations.o
	gcc -o mystring string_operations.o

string_operations.o : string_operations.c
	gcc -c string_operations.c

clean :
	rm *.o mystring
