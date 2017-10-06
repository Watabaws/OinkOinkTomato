all:  strchr_code.o strcmp_code.o strlenCode.o strncatCode.o strncopyCode.o main.o
	gcc -o strtest strchr_code.o strcmp_code.o strlenCode.o strncatCode.o strncopyCode.o main.o

strchr_code.o:  strchr_code.c headers.h
	gcc -c strchr_code.c

strcmp_code.o:  strcmp_code.c headers.h
	gcc -c strcmp_code.c

strlenCode.o:  strlenCode.c headers.h
	gcc -c strlenCode.c

strncatCode.o:  strncatCode.c headers.h
	gcc -c strncatCode.c

strncopyCode.o:  strncopyCode.c headers.h
	gcc -c strncopyCode.c

main.o: main.c headers.h
	gcc -c main.c

clean:
	rm *.o
	rm *~

run: all
	./strtest
