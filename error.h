#ifndef ERROR_H
#define ERROR_H

#include <stdio.h>

//don't use this, use PRINT_ERROR() macro instead
void print_error(char* message, char* filename, int line, int usePerror);

#define PRINT_ERROR(MESSAGE) print_error(MESSAGE, __FILE__, __LINE__, 1)
#define PRINT_ERROR_NO_PERROR(MESSAGE) print_error(MESSAGE, __FILE__, __LINE__, 0)

#endif
