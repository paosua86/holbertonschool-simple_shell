#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_path(const char *name)
{ 
	extern char **environ;
	char *token, *res;
	char str[BUFSIZ];
	int i = 0;

	while (environ[i])
	{
		strcpy(str, environ[i]);
		token = strtok(str, "=");
		if (strcmp(token, name) == 0)
		{
			res = strtok(NULL, "=");
			break;
		}
		i++;
	}
	


	return (NULL);
}
