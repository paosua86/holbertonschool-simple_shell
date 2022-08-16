#include "main.h"

char *print_path(void)
{
	extern char **environ;
	char *token = NULL, *res = NULL;
	char str[BUFSIZ] = "";
	int i = 0;

	res = calloc(1024, sizeof(char));

	if (res == NULL)
		return (NULL);

	while (environ[i])
	{
		strcpy(str, environ[i]);
		token = strtok(str, "=");
		if (strcmp(token, "PATH") == 0)
		{
			strcpy(res, strtok(NULL, "\n"));
			break;
		}
		i++;
	}

	return (res);
}
