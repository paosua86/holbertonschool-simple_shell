#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
#define NUM_CHILD 2	
int main(void)
{
	int status;
	pid_t pid_child;
	char *buffer;
	size_t bufsize = BUFSIZ;
	char *arguments[] = {""};

	for (int i = 0; i < NUM_CHILD; i++)
	{
		pid_child = fork();
		if (pid_child > 0)
		{
			wait(&status);
		}
		else if (pid_child == 0)
		{
			buffer = malloc(bufsize * sizeof(char));
			if(buffer == NULL)
			{
				perror("Unable to allocate buffer");
				exit(1);
			}
			printf("#cisfun$ ");
			getline(&buffer,&bufsize,stdin);
			exit(execve(buffer, arguments, NULL));
			perror("Error:");
		} else
		{
			perror("Error:");
        		return (1);
		}
	}

	return (0);
}
