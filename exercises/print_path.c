#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_path(void)
{ 
	extern char **environ;
	char *token, *res, *token_2;
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

	strcpy(str, res);
	token_2 = strtok(str, ":");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}
}
