#include <stdio.h>
#include <stdlib.h>

int main()
{
      int firstNumber = 24;
      int secondNumber = 12;

      printf("\n|---------------------|----------------------|\n");
      printf("| FirstNumber (A): 24 | SecondNumber (B): 12 |\n");
      printf("|---------------------|----------------------|\n\n");

      // Arithmetical Operators With Assignment Operators
      printf("A += B --> %d\n", firstNumber += secondNumber);
      printf("A -= B --> %d\n", firstNumber -= secondNumber);
      printf("A *= B --> %d\n", firstNumber *= secondNumber);
      printf("A /= B --> %d\n", firstNumber /= secondNumber);
      printf("A %= B --> %d\n", firstNumber %= secondNumber);

      printf("\n"); // |-| Line Breaker |-|

      // Setting Numbers
      firstNumber = 24;
      secondNumber = 12;
      
      // Bitwise Operators With Assignment Operators      
      printf("A &= B --> %d\n", firstNumber &= secondNumber);
      printf("A |= B --> %d\n", firstNumber |= secondNumber);
      printf("A ^= B --> %d\n", firstNumber ^= secondNumber);
}