#include <stdio.h>
#include <stdlib.h>

int PrimeNumbers(int searchNumber)
{
      int modRepeat = 0;

      if (searchNumber == 2) 
      {
            return 2;
      }
      else if (searchNumber == 3) 
      {
            return 3;
      }
      else if (searchNumber == 5) 
      {
            return 5;
      }
      else if (searchNumber == 7)
      {
            return 7;
      }

      for (int i = 2; i <= 9; i++) 
      {
            if (searchNumber % i != 0) 
            {
                  modRepeat++;
            }

            if (modRepeat == 8) 
            {
                  return searchNumber;
            } 
      }
      return 0;
}

int main()
{
      // | MAX INDEX IS USED TO SPECIFY THE MAXIMUM RESEARCH INDEX |
      int maxIndex;
      int foundedPrime = 0;

      // | TAKES MAX INDEX |
      printf("Max Index --> ");
      scanf("%d", &maxIndex);

      printf("\n"); // | LINE BREAKER |

      for (int i = 2; i <= maxIndex; i++)
      {
            if (PrimeNumbers(i) != 0) 
            {
                  foundedPrime++;
                  printf("%d. Prime Number --> %d\n", foundedPrime, PrimeNumbers(i));
            }
      }
}