#include <stdio.h>
#include <stdlib.h>

int main()
{
      int maxIndex;
      int repeatTime = 0;

      printf("Max --> ");
      scanf("%d", &maxIndex);

      printf("\n"); // | LINE BREAKER |

      // Writes Prime Numbers (< 10)
      printf("2 Is Prime!\n");
      printf("3 Is Prime!\n");
      printf("5 Is Prime!\n");
      printf("7 Is Prime!\n");

      for (int i = 2; i <= maxIndex; i++)
      {
            for (int a = 2; a <= 9; a++)
            {
                  if (i % a != 0)
                  {
                        repeatTime++;
                  }

                  if (repeatTime == 8)
                  {
                        printf("%d Is Prime!\n", i);
                  }
            }
            repeatTime = 0;
      }
      return 0;
}