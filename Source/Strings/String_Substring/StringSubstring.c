#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
      const char WORD[] = "InterStellar";
      const char DELETEWORD[] = "Stellar";

      char *ret;

      ret = strstr(WORD, DELETEWORD);

      printf("%s\n", ret);

      return 0;
}