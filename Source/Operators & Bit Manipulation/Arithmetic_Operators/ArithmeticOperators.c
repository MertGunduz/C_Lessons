#include <stdio.h>
#include <stdlib.h>

int main()
{
      int firstNumber, secondNumber, operationResult;

      printf("\n|===================================================|\n\n"); // UI START

      printf("First Number -> ");
      scanf("%d", &firstNumber);

      printf("Second Number -> ");
      scanf("%d", &secondNumber);

      printf("\n"); // |-| Line Breaker |-|

      // Addition Operation
      operationResult = firstNumber + secondNumber;
      printf("firstNumber + secondNumber -> %d\n", operationResult);

      // Subtraction Operation 
      operationResult = firstNumber - secondNumber;
      printf("firstNumber - secondNumber -> %d\n", operationResult);

      // Multiplication Operation
      operationResult = firstNumber * secondNumber;
      printf("firstNumber * secondNumber -> %d\n", operationResult);

      // Division Operation
      operationResult = firstNumber / secondNumber;
      printf("firstNumber / secondNumber -> %d\n", operationResult);

      // Modulus Operation
      operationResult = firstNumber % secondNumber;
      printf("firstNumber %% secondNumber -> %d\n", operationResult);

      printf("\n|===================================================|\n"); // UI FINISH
}