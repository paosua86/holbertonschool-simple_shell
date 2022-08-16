#include "main.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buffer = NULL, *arguments[10] = {NULL};
	int i, checkstat;	
	void (*ptr)(void);
	char *token, str[BUFSIZ];

	do {
		buffer = NULL;

		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "#cisfun$ ", 10);

		buffer = read_prompt(buffer);   /* first malloc with getline */
		/*EXIT(buffer);*/
		ptr = get_built_in(buffer); 
		if (ptr != NULL)
		{
			ptr();
		}
		/*arguments = split_buffer(buffer);*/
		strcpy(str, buffer);
		token = strtok(str, " ");

		if (token == NULL)
		{
			free(buffer);
			exit(0);
		}

		arguments[0] = token;
		i = 1;
		while (token != NULL)
		{
			token = strtok(NULL, " ");
			arguments[i] = token;
			i++;
		}
		free(buffer);
		checkstat = check_stat(arguments);
		if (checkstat == 0)
			create_child(arguments);
	} while (buffer != NULL);
	return (EXIT_SUCCESS);
}
