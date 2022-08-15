#include "main.h"

void create_child(char **arguments)
{
	pid_t pid_child;
	int status;

	pid_child = fork();
	if (pid_child > 0)
	{
		wait(&status);
	}
	else if (pid_child == 0)
	{
		exit(execve(arguments[0], arguments, NULL));
	}
	else
	{
		perror("Error:");
		exit(1);
	}
}

