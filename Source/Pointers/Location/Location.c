#include <stdio.h>
#include <stdlib.h>

int main()
{
      // | Character Data |
      char char1 = 'X';
      char char2 = 'Z';
      char char3 = 'Y';
      char char4 = 'Q';

      // | Pointer |
      char *ptr;
      int *intPtr;

      ptr = &char1;
      printf("Pointer (Char1) --> %llu (RAM LOCATION)\n", ptr);
      printf("Pointer (Char1) --> %c (VALUE)\n\n", *ptr);

      ptr = &char2;
      printf("Pointer (Char2) --> %llu (RAM LOCATION)\n", ptr);
      printf("Pointer (Char) --> %c (VALUE)\n\n", *ptr);

      ptr = &char3;
      printf("Pointer (Char3) --> %llu (RAM LOCATION)\n", ptr);
      printf("Pointer (Char3) --> %c (VALUE)\n\n", *ptr);

      ptr = &char4;
      printf("Pointer (Char4) --> %llu (RAM LOCATION)\n", ptr);
      printf("Pointer (Char4) --> %c (VALUE)\n\n", *ptr);     
}