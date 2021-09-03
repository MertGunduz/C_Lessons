#include <stdio.h>
#include <stdlib.h>

int main()
{
      char myChar;

      printf("Input A Character -> ");
      scanf("\n%c", &myChar);

      printf("\nCharacter You Have Inputted -> %12c\n", myChar);
      printf("Character You Have Inputted -> %12d\n", myChar);
}