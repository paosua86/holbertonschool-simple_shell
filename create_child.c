#include "main.h"

int create_child(char **arguments)
{
	pid_t pid_child;
	int status = 0;
	char *path = NULL;
	/*extern char **environ;*/

	path = try_path(arguments);

	pid_child = fork();
	if (pid_child > 0)
	{
		wait(&status);
	}
	else if (pid_child == 0)
	{
		if (path == NULL)
		{
			free(path);
			exit(execve(arguments[0], arguments, NULL));
		}
		else
		{
			exit(execve(path, arguments, NULL));
		}
	}
	else
	{
		perror("Error:");
		exit(1);
	}
	free(path);
	return (status);
}

