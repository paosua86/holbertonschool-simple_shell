#include "main.h"

/**
 * get_bult_in - Selects the correct function to perform
 * the format asked by the user.
 * @s: The format passed as argument.
 * Return: A pointer to the function corresponding
 * to the format given as a parameter.
 */

void (*get_built_in(char *s))(void)
{
	op_t func[] = {
		{"env", func_env}, /* prints the variable of environment */
		{NULL, NULL},
	};

	int i = 0;

	while (func[i].format != NULL && strcmp(func[i].format, s) != 0)
		i++;

	return (func[i].f);  /* returns a function */
}
