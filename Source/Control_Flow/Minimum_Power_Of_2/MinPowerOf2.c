#include <stdio.h>
#include <stdlib.h>

int main()
{
      int userInput;
      int thePower = 2;

      do
      {
            printf("Input --> ");
            scanf("%d", &userInput);
      } while (userInput < 0);

      while (thePower <= userInput)
      {
            thePower = thePower * 2;
      }

      printf("Number --> %d", thePower);
      return 0;
}