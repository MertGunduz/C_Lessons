#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
      char clientWord[20];

      printf("Name --> ");
      scanf("%s", &clientWord);

      printf("\n"); // | Line Breaker |

      for (int i = 0; i < strlen(clientWord); i++)
      {
            printf("%c", toupper(clientWord[i]));
      }
      
      return 0;
}