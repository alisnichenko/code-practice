# i hope that works
all: readline.o request.o waiting_list.o waiting_list

# compiling the files separately
readline.o: readline.c
	gcc -Wall -o readline.o -c readline.c
request.o: request.c
	gcc -Wall -o request.o -c request.c
waiting_list.o: waiting_list.c
	gcc -Wall -o waiting_list.o -c waiting_list.c
# linking the binaries together
waiting_list:
	gcc -Wall -o waiting_list readline.o request.o waiting_list.o
 
