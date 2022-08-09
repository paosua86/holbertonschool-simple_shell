#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */

int main(void)
{
	int status, size_len;
	pid_t pid_child;
	size_t bufsize = BUFSIZ;
	char *buffer; 
	struct stat st;


	while(1)
	{
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
			printf("#cisfun$ ");
			getline(&buffer, &bufsize, stdin);
			size_len = strlen(buffer);
			buffer[size_len - 1] = '\0';

			if (stat(buffer, &st) == 0)
			{       
				printf(" FOUND\n");
			}
			else
			{
				printf(" NOT FOUND\n");
			}
			exit(0);
		} else
		{
			perror("Error:");
			return (1);
		}
	}

	return (0);
}
