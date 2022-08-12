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

char *read_prompt(char *buffer);
void check_stat(char **arguments);
char **split_buffer(char *buffer);
void create_child(char **arguments);

#endif /* #ifndef HEADER_FILE */
