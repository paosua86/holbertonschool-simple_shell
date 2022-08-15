#include "main.h"
/**
 * get_op_func - Selects the correct function to perform
 * the format asked by the user.
 *
 * @s: The format passed as argument.
 *
 * Return: A pointer to the function corresponding
 * to the format given as a parameter.
 */

void (*get_built_in(char *s))(void)
{
	op_t func[] = {
		{"exit", func_exit},
		{"env", func_env},
		{NULL, NULL},
	};

	int i = 0;

	while (func[i].format != NULL && strcmp(func[i].format, s) != 0)
		i++;

	if (strcmp(s, "exit") == 0)
		free(s);


	return (func[i].f);
}
