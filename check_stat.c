#include "main.h"

int check_stat(char **arguments)
{
	struct stat st;
	int res = 0;
	char *path = NULL;

	if (arguments == NULL)
		exit(0);

	path = try_path(arguments);

	if (stat(arguments[0], &st) != 0)
	{
		if (path == NULL || strcmp(arguments[0], "env") != 0)
			res = 1;
		if (strcmp(arguments[0], "env") != 0 && path == NULL)
			write(STDOUT_FILENO, "/shell: No such file or directory\n", 35);
	}
	free(path);
	return (res);
}

