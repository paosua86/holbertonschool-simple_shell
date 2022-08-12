#include "main.h"


char *read_prompt(char *buffer)
{
	size_t bufsize = 0;
	int size_len;

	//if ((getline(&buffer, &bufsize, stdin) == EOF))
	//{
	//	if (buffer)
	//		free(buffer);
	//}	
	getline(&buffer, &bufsize, stdin);  

	size_len = strlen(buffer);
	buffer[size_len - 1] = '\0';

	return (buffer);
}
