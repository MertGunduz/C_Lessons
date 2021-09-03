#include <stdio.h>
#include <stdlib.h>

int main() 
{
      const char symbol = '#';

      for (int i = 0; i < 10; i++)
      {
            printf("%c", symbol);
      }

      printf("\n");

      for (int i = 0; i < 5; i++) 
      {
            for (int a = 0; a < i; a++) 
            {
                  printf(" ");
            } 
            printf("%c\n", symbol);
      }

            for (int i = 5; i > 0; i--) 
      {
            for (int a = 0; a < i; a++) 
            {
                  printf(" ");
            } 
            printf("%c\n", symbol);
      }

      for (int i = 0; i < 10; i++)
      {
            printf("%c", symbol);
      }

      return 0;
}