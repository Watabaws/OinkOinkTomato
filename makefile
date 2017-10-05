clear: run
	./run

run: main.c strchr_code.c strcmp_code.c strlenCode.c strncatCode.c strncopyCode.c headers.h
	gcc main.c strchr_code.c strcmp_code.c strlenCode.c strncatCode.c strncopyCode.c headers.h -o run


