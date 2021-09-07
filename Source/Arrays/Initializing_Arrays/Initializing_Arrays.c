#include <stdio.h>
#include <stdlib.h>

int main()
{
      int integerArray[] = { 5, 15, 25, 35, 45, 70, 90, 125, 205, 225, 230, 260, 265, 275, 305 };
      int arrayLength = sizeof(integerArray) / 4;
      int* PTR;

      printf("\n|==================================================|\n\n");

      for (int i = 0; i < arrayLength; i++)
      {
            printf("%d. Value --> %d\n", i + 1, integerArray[i]);
      }

      printf("\n");

      for (int i = 0; i < arrayLength; i++)
      {
            PTR = &integerArray[i];

            printf("%d. RAM Location --> %llu\n", i + 1, PTR);
      }

      printf("\n==================================================|\n");
}