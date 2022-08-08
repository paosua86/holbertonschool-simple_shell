#include <string.h>
#include <stdio.h>

int command_line_to_av(char str[])
{
   char *token;
   
   /* get the first token */
   token = strtok(str, " ");
   
   /* walk through other tokens */
   while(token != NULL) {
      printf(" %s\n", token);
      token = strtok(NULL, " ");
   }
   
   return(0);
}
