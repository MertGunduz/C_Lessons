#include <stdio.h>
#include <stdlib.h>

int main()
{
      int firstNumber, secondNumber;

      printf("First Number (A) -> ");
      scanf("%d", &firstNumber);

      printf("Second Number (B) -> ");
      scanf("%d", &secondNumber);

      printf("\n");

      printf("A == B --> %d\n", firstNumber == secondNumber);
      printf("A != B --> %d\n", firstNumber != secondNumber);
      printf("A >= B --> %d\n", firstNumber >= secondNumber);
      printf("A <= B --> %d\n", firstNumber <= secondNumber);
      printf("A < B --> %d\n", firstNumber < secondNumber);
      printf("A > B --> %d\n", firstNumber > secondNumber);
}