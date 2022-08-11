#include "main.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */

int main(void)
{
	int status, size_len, i;
	pid_t pid_child;
	size_t bufsize = BUFSIZ;
	char *token, *buffer, *arguments[10] = {NULL}; 
	char str[BUFSIZ];
	struct stat st;

	while (1)
	{
		if (!isatty(STDIN_FILENO))
		{
			buffer = malloc(bufsize * sizeof(char));
			if (buffer == NULL)
			{
				perror("Unable to allocate buffer");
				exit(1);
			}
			getline(&buffer, &bufsize, stdin);
			size_len = strlen(buffer);
			buffer[size_len - 1] = '\0';
			strcpy(str, buffer);
			token = strtok(str, " ");
			if (stat(token, &st) == 0)
			{
				arguments[0] = token;
				i = 1;
				while(token != NULL)
				{
					token = strtok(NULL, " ");
					arguments[i] = token;
					i++;
				}
				exit(execve(arguments[0], arguments, NULL));
				perror("Error:");
			}
			else
			{
				exit(write(STDOUT_FILENO, "/shell: No such file or directory\n", 35));
			}
			break;
		}
		pid_child = fork();
		if (pid_child > 0)
		{
			wait(&status);
		}
		else if (pid_child == 0)
		{
			buffer = malloc(bufsize * sizeof(char));
			if (buffer == NULL)
			{
				perror("Unable to allocate buffer");
				exit(1);
			}
			write(STDOUT_FILENO, "#cisfun$ ", 10);
			getline(&buffer, &bufsize, stdin);
			
			size_len = strlen(buffer);
			buffer[size_len - 1] = '\0';
			strcpy(str, buffer);
			token = strtok(str, " ");
			if (stat(token, &st) == 0) 
			{
				arguments[0] = token;
				i = 1;
				while(token != NULL) 
				{
      					token = strtok(NULL, " ");
					arguments[i] = token;
					i++;
				}
				exit(execve(arguments[0], arguments, NULL));
				perror("Error:");
			}
			else
			{
				exit(write(STDOUT_FILENO, "/shell: No such file or directory\n", 35));
			}	

		} else
		{
			perror("Error:");
			return (1);
		}
	}

	return (0);
}
