#include <stdio.h>
#include <stdlib.h>

int main() 
{
      char myString[] = "Mert Gunduz";
      int ARRAYLEN = sizeof(myString) -1;

      for (int i = 0; i < ARRAYLEN; i++) 
      {
            printf("%d.Char --> %c\n", i + 1 ,myString[i]);
      }

      return 0;
}