#include <stdio.h>
#include <stdlib.h>

int main() 
{
      int myNumber = 421;
      int *pointer = &myNumber;

      int pointedNumber = *pointer;

      printf("Data --> %d\n", pointedNumber);
}