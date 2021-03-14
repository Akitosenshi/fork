#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include "error.h"

//fork: fork and exec from command line for personal use in my bash scripts.


int main(int argc, char** argv) {
	switch(argc) {
	case 1:
		PRINT_ERROR_NO_PERROR("invalid number of arguments");
		return -1;
	default:
		//get options
		break;
	}
	pid_t pid = fork();
	if(pid) {
		//parent
		return pid;
	} else {
		//child
		int ret = execvp(argv[1], argv + 2);
		for(int counter = 0; counter < argc && (!counter || fprintf(stderr, " ")); ++counter) {
			fprintf(stderr, "%s", argv[counter]);
		}
		fprintf(stderr, ":\n");
		PRINT_ERROR("execvp() failed");
	}
	return 0;
}
