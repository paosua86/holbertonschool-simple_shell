#include "main.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buffer = NULL, **arguments = NULL;

	do {
		buffer = NULL;

		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "#cisfun$ ", 10);

		buffer = read_prompt(buffer);

		if (strcmp(buffer, "exit") == 0)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}

		arguments = split_buffer(buffer);
		free(buffer);
		check_stat(arguments);
		create_child(arguments);
		free(arguments);

	} while (buffer != NULL);


	return (EXIT_SUCCESS);
}
