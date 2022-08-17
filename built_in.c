#include "main.h"

/**
 * func_env - gets the environ variable
 * Return: 0
 */


void func_env(void)
{
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}

}
