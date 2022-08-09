#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void main(void)
{
	char *arguments[] = {""};
	execve("/bin/ls", arguments, NULL);

}	
