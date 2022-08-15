#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *print_path(void)
{
	extern char **environ;
	char *token, *res;
	char str[BUFSIZ];
	int i = 0;

	while (environ[i])
	{
		strcpy(str, environ[i]);
		token = strtok(str, "=");
		if (strcmp(token, "PATH") == 0)
		{
			res = strtok(NULL, "=");
			break;
		}
		i++;
	}

	return (res);
}
