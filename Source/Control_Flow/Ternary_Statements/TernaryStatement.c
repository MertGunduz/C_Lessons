#include <stdio.h>
#include <stdlib.h>

int main() 
{
      // Variables
      int a = 20, b = 50, c;

      //  1) If:
      //  2) A (20) < B (50)
      //  3) C = A (20)
      //  4) Else:
      //  5) C = B (50)
      //  6) C >> 1 (Bitwise Right Shifting) (Div To 2)
      c = (a < b) ? a : b;

      // Prints C
      printf("%d\n", c>>1);
}