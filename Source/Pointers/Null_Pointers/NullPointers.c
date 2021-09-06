#include <stdio.h>
#include <stdlib.h>

int main()
{
      int* ptr = NULL;

      if (ptr != NULL)
      {
            printf("Null Location --> %llu\n", ptr);
            printf("Null Value --> %d\n", *ptr);
      }
      else 
      {
            printf("NULL VALUE!");
      }
}