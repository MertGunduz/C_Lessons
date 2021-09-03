#include <stdio.h>
#include <stdlib.h>

int main() 
{
      int firstNumber;
      int secondNumber;
      int result;

      char operatorChoice;

      printf("Operator Choice --> ");
      scanf("%c", &operatorChoice);

      printf("\n");
      
      printf ("First Number --> ");
      scanf("%d", &firstNumber);

      printf("\n");

      printf("Second Number --> ");
      scanf("%d", &secondNumber);

      printf("\n");

      switch (operatorChoice) 
      {
            case '+':
                  result = firstNumber + secondNumber;
                  break;
            case '-':
                  result = firstNumber - secondNumber;
                  break;
            case '/':
                  result = firstNumber /  secondNumber;
                  break;
            case '*':
                  result = firstNumber * secondNumber;
                  break;
            default:
                  printf("Invalid Operator Choice!");
                  break;
      }

      printf("Operation Result --> %d\n", result);
}