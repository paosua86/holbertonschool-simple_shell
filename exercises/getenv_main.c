#include <stdio.h>

char *_getenv(const char *name);

int main(void)
{
	char *res = _getenv("PATH");
	printf("%s\n", res);
	return (0);
}
