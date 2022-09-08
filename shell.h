#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

void print_prompt1(void);
void print_prompt2(void);

char *read_cmd(void);

int number_controller(general_t, *info, char *number);
void bin_exit(general_t *info, char ** arguements);

int _alias(char **args, char__attribute__((__unused__)) **front);
void set_alias(char *var_name, char *value);
void print_alias(alias_t *alias)
char **replace_aliases(char **args);

int _cd(char *av[]);
char *_itoa(int num);

/* environment variables */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
void print_env(void);
char *_getenv(const char *name);
char *which(char *filename, general_t *info);
void is_current_path(char *path, general_t *info);
void get_full_env(void);


/* handle built ins */
void prompt_user(void);
void handle_signal(int m);
char *test_path(char **path, char *command);
char *append_path(char *path, char *command);
int handle_builtin(char **command, char *line);
void exit_cmd(char **command, char *line);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
void assign_lineptr(char **lineptr, size_t *n, char *buffer, size_t b);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/* string handlers */
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);

void execution(char *cp, char **cmd);
char *find_path(void);

/* helper function for efficient free */
void free_buffers(char **buf);
char *find_var(char *var, char **env);

struct builtin
{
	char *env;
	char *exit;
} builtin;

struct flags
{
	bool interactive;
} flags;

#endif

