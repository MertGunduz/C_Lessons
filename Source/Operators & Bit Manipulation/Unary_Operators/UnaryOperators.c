#include <stdio.h>
#include <stdlib.h>

int main()
{
      int firstNumber, secondNumber;

      printf("\n|======================================================|\n\n");

      printf("First Number -> ");
      scanf("%d", &firstNumber);

      printf("Second Number -> ");
      scanf("%d", &secondNumber);

      printf("\n"); // |-| Line Breaker |-|

      firstNumber++;
      secondNumber--;

      printf("First Number Unary(++) -> %d\n", firstNumber);  
      printf("Second Number Unary(--) -> %d\n\n", secondNumber);

      printf("|======================================================|\n\n");
      return EXIT_SUCCESS;
}