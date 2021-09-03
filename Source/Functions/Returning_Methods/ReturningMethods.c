#include <stdio.h>
#include <stdlib.h>

int GetCube(int number) 
{
      int result = number * number * number;
      return result;
}
 
int main() 
{
      int cubeNumber;

      printf("The Number You Want To Take It's Cube --> ");
      scanf("%d", &cubeNumber);

      printf("\n");

      printf("Cube Of %d --> %d\n", cubeNumber, GetCube(cubeNumber));
}