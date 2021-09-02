#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
      uint8_t firstByteNumber = 30;   // 0001 1110
      uint8_t secondByteNumber = 60;  // 0011 1100

      printf("______________________________________________________\n");
      printf("|-------------------------|--------------------------|\n");
      printf("| FirstByteNumber (A): 30 | SecondByteNumber (B): 60 |\n");
      printf("|-------------------------|--------------------------|\n");

      printf("___________________________\n");
      printf("|-------------------------|\n");
      printf("| Bit Shifting Operations |\n");
      printf("|-------------------------|\n\n");

      firstByteNumber = 12 >> 1;
      secondByteNumber = 60 >> 1;
      printf("(A >> 1) --> %d\n", firstByteNumber);
      printf("(B >> 1) --> %d\n", secondByteNumber);

      firstByteNumber = 12 << 1;
      secondByteNumber = 60 << 1;
      printf("(A << 1) --> %d\n", firstByteNumber);
      printf("(B << 1) --> %d\n\n", secondByteNumber);

      printf("__________________________________________\n");
      printf("|------------|-------------|-------------|\n");
      printf("| Bitwise OR | Bitwise AND | Bitwise XOR |\n");
      printf("|------------|-------------|-------------|\n\n");

      printf("(A & B) --> %d\n", (firstByteNumber & secondByteNumber));
      printf("(A | B) --> %d\n", (firstByteNumber | secondByteNumber));
      printf("(A ^ B) --> %d\n", (firstByteNumber ^ secondByteNumber));
      
      printf("_______________\n");
      printf("|-------------|\n");
      printf("| Bitwise NOT |\n");
      printf("|-------------|\n\n");

      printf("(~A) --> %d\n", ~30);
      printf("(~B) --> %d\n", ~60);
}