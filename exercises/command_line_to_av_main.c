#include <stdio.h>

int command_line_to_av(char *str);

int main(void)
{
	char str[] = "hello    paola, hello   juan   ";
	command_line_to_av(str);

	return (0);
}
