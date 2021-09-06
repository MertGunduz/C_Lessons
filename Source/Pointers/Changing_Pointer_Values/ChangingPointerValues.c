#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      int number = 10;
      int* intPtr;

      intPtr = &number;
      printf("RAM LOCATION --> %llu\n", intPtr);
      printf("VALUE --> %d\n\n", *intPtr);

      number = number << 1;
      printf("RAM LOCATION --> %llu\n", intPtr);
      printf("VALUE --> %d\n\n", *intPtr);

      number = number << 1; 
      printf("RAM LOCATION --> %llu\n", intPtr);
      printf("VALUE --> %d\n\n", *intPtr);
}