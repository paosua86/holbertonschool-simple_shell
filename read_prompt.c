#include "main.h"

/**
 * read_prompt - gets the command in buffer
 * @buffer: space for storing
 * Return: buffer with all the command without \n
 */

char *read_prompt(char *buffer)
{
	size_t bufsize = 0;
	int size_len;

	if (getline(&buffer, &bufsize, stdin) == EOF)
	{
		free(buffer);
		exit(0);
	}

	size_len = strlen(buffer);
	buffer[size_len - 1] = '\0';

	return (buffer);
}
