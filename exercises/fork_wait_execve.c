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

#define NUM_CHILD 5
int main(void)
{
	int status;
	pid_t pid_child;
	char *argv[] = {"ls", "-l", "/usr/", NULL};

	for (int i = 0; i < NUM_CHILD; i++)
	{
		pid_child = fork();
		if (pid_child > 0)
		{
			wait(&status);
		}
		else if (pid_child == 0)
		{
			sleep(2);
			exit(execve("/bin/ls", argv, NULL));
			perror("Error:");
		} else
		{
			perror("Error:");
        		return (1);
		}
	}

	return (0);
}
