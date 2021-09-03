#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() 
{
      int clientInput;
      bool isNumberEven;
      char MESSAGE[20];

      printf("Number --> ");
      scanf("%d", &clientInput);

      printf("\n");

      if (clientInput < 0) 
      {
            printf("The number is negative!n\n");
            exit(0);
      }
      else 
      {
            isNumberEven = (clientInput % 2 == 0) ? true : false;
      } 

      if (isNumberEven) 
      {
            printf("Number Is Even!");
      }
      else 
      {
            printf("Number Is Odd!");
      }
      return 0;
}
