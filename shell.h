#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> /*header defines fork function*/
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h> 
#include <stdbool.h> /*header contains four macros for the boolean data type*/

void print_env(void);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void assign_lineptr(char **lineptr, size_t *n, char *buffer, size_t b);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);



#endif /*SHELL_H*/
