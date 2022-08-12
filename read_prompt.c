#include "main.h"


char *read_prompt(char *buffer)
{
	size_t bufsize = BUFSIZ;
	int size_len;

	getline(&buffer, &bufsize, stdin);
	size_len = strlen(buffer);
	buffer[size_len - 1] = '\0';

	return (buffer);
}
