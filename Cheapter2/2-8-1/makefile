objects = main.o

main : numhandle.h main.c increment.c negate.c
	gcc -g -Wall main.c increment.c negate.c -o main
.PHONY : clean
clean :
	rm $(objects) 
