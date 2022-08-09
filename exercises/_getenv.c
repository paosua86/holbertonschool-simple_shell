#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_getenv(const char *name)
{
	extern char **environ;
	char *token;
	char str[BUFSIZ];
	int i = 0;

	while (environ[i])
	{
		strcpy(str, environ[i]);
		token = strtok(str, "=");
		if (strcmp(token, name) == 0)
		{
			return (strtok(NULL, "="));
		}
		i++;
	}
	return (NULL);
}
