#include <stdio.h>
#include <stdlib.h>

int main() 
{
      int ARRAY[10];
      int ARRAYLENGTH = sizeof(ARRAY) / 4;

      for (int i = 0; i < ARRAYLENGTH; i++) 
      {
            printf("Enter The %d. Value --> ", i + 1);
            scanf("%d", &ARRAY[i]);
      }

      printf("\n");

      for (int i = 0; i < ARRAYLENGTH; i++) 
      {
            printf("%d. Element --> %d\n", i + 1, ARRAY[i]);
      }
}