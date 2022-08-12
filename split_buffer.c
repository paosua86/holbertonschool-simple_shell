#include "main.h"


char **split_buffer(char *buffer)
{
	int i, buff_len = 10;
	char *token, str[BUFSIZ];
	char **arguments = malloc(buff_len * sizeof(char *));

	strcpy(str, buffer);
	token = strtok(str, " ");

	if (token == NULL)
		exit(0);

	arguments[0] = token;
	i = 1;
	while (token != NULL)
	{
		token = strtok(NULL, " ");
		arguments[i] = token;
		i++;
	}

	return (arguments);
}
