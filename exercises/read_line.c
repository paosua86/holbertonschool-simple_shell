#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	char *buffer;
	size_t bufsize = BUFSIZ;

	buffer = malloc(bufsize * sizeof(char));
	if(buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("$ ");
	getline(&buffer,&bufsize,stdin);
	printf("%s",buffer);

	return(0);
}
