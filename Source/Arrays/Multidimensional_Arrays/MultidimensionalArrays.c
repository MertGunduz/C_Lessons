#include <stdio.h>
#include <stdlib.h>

int main() 
{
      int matrix[3][3] =
      {
            {3, 6, 9},
            {12, 15, 18}, // 2. Satır 2. Element
            {21, 24, 27}
      };

      printf("%d", matrix[1][1]);
}