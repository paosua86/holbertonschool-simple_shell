#include "main.h"


void func_exit(void)
{
	exit(2);
}

void func_env(void)
{
	extern char **environ;
	int i = 0;

	while (environ[i])
	{
		printf("%s \n", environ[i]);
		i++;
	}

}
