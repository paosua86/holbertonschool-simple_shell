#include <stdio.h>

int main(int ac, char *av[], char *env[])
{
	extern char **environ;

	printf("This is the address of environ: %p \n", &environ);
	printf("This is the address of **env: %p \n", &env);

	return (0);
}
