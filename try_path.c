#include "main.h"

char *try_path(char **arguments)
{
	char *aux = NULL, *path = NULL, *token = NULL, str[BUFSIZ];
	struct stat st;

	path = print_path();
	strcpy(str, path);
	token = strtok(str, ":");
	while (token != NULL)
	{
		aux = strdup(token);
		strcat(aux, "/");
		strcat(aux, arguments[0]);
		if (stat(aux, &st) == 0)
			return (aux);
		token = strtok(NULL, ":");
	}
	return (NULL);
}
