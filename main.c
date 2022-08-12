#include "main.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buffer = NULL, **arguments;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "#cisfun$ ", 10);

		buffer = read_prompt(buffer);
		arguments = split_buffer(buffer);
		check_stat(arguments);
		create_child(arguments);

		free(buffer);
		free(arguments);

		if (!isatty(STDIN_FILENO))
			break;
	}

	return (EXIT_SUCCESS);
}
