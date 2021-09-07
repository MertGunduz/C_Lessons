#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
      char WORD[] = "Hello_World";
      char SPEC = 'W';

      char *ret = strchr(WORD, SPEC);

      printf("Occurenced Word --> %s\n", ret);
}