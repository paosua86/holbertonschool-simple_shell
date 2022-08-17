#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>
#include <string.h>

extern char **environ;

/**
 * struct formats - Struct formats
 *
 * @format: The character that specify the built in.
 * @f: The built in function that executes certain task.
 */

typedef struct formats
{
	char *format;
	void (*f)(void);
} op_t;

#define EXIT(BUFFER, STATUS) \
do { \
	if (_strcmp(BUFFER, "exit") == 0) \
	{ \
		free(BUFFER); \
		exit(WEXITSTATUS(STATUS)); \
	} \
} while (0)

char *read_prompt(char *buffer);
int check_stat(char **arguments);
char **split_buffer(char *buffer);
int create_child(char **arguments);
void (*get_built_in(char *s))(void);
void func_exit(void);
void func_env(void);
char *print_path(void);
char *try_path(char **arguments);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);

#endif /* #ifndef HEADER_FILE */
