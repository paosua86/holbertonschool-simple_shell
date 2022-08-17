#include "main.h"

/**
 * try_path - tokenizes the arguments of PATH from environ
 * @arguments: contains the arguments to be compare
 * Return: NULL
 */


char *try_path(char **arguments)
{
	char *aux = NULL, *path = NULL, *token = NULL, str[BUFSIZ] = "";
	struct stat st;

	aux = calloc(1024, sizeof(char));

	if (aux == NULL)
		return (NULL);

	path = print_path();
	_strcpy(str, path);
	token = strtok(str, ":");
	while (token != NULL)
	{
		_strcpy(aux, token);
		_strcat(aux, "/");
		_strcat(aux, arguments[0]);
		if (stat(aux, &st) == 0)
		{
			free(path);
			return (aux);
		}
		token = strtok(NULL, ":");
	}
	free(aux);
	free(path);
	return (NULL);
}
