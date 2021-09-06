#include <stdio.h>
#include <stdlib.h>

void ChangeValue(int specifiedNumber, int changedValue)
{
      int* ptr;

      ptr = &specifiedNumber;
      printf("Old Value --> %d\n", *ptr);
      printf("RAM Location --> %llu\n\n", ptr);

      *ptr = changedValue;
      printf("New Value --> %d\n", *ptr);
      printf("RAM Location --> %llu\n\n", ptr);
}

int main()
{
      int myNumber = 20;
      int wantedNumber = 50;
      ChangeValue(myNumber, wantedNumber);
}