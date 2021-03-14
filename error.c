#include "error.h"

#include <stdio.h>

void print_error(char* message, char* filename, int line, int usePerror) {
	fprintf(stderr, "File %s, at line %i:\n", filename, line);
	if(usePerror) {
		perror(message);
	} else {
		fprintf(stderr, "%s\n", message);
	}
}
