#include "main.h"

void check_stat(char **arguments)
{
	struct stat st;

	if (stat(arguments[0], &st) != 0)
		write(STDOUT_FILENO, "/shell: No such file or directory\n", 35);
}

