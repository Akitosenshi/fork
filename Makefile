all : fork

fork : main.c error.c
	gcc -pthread -g0 -o fork main.c error.c
	chmod +x fork

debug : main.c error.c
	gcc -pthread -g3 -o fork main.c error.c
	chmod +x fork

clean :
	rm -f fork
