#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
      char a = 'A';
      char* ptr = &a;

      printf("\n");
      printf("Pointed Char (A) --> %c\n", *ptr);
      printf("Pointed Char (A) Memory Location --> %llu (RAM LOCATION)\n\n", (uint64_t)ptr);

      char b = 'B';
      ptr = &b;

      printf("Pointed Char (B) --> %c\n", *ptr);
      printf("Pointed Char (B) Memory Location --> %llu (RAM LOCATION)\n\n", (uint64_t)ptr);

      char c = 'C';
      ptr = &c;

      printf("Pointed Char (C) --> %c\n", *ptr);
      printf("Pointed Char (C) Memory Location --> %llu (RAM LOCATION)\n\n", (uint64_t)ptr);

      char d = 'D';
      ptr = &d;

      printf("Pointed Char (D) --> %c\n", *ptr);
      printf("Pointed Char (D) Memory Location --> %llu (RAM LOCATION)\n\n", (uint64_t)ptr);

      char e = 'E';
      ptr = &e;

      printf("Pointed Char (E) --> %c\n", *ptr);
      printf("Pointed Char (E) Memory Location --> %llu (RAM LOCATION)\n\n", (uint64_t)ptr);

      char f = 'F';
      ptr = &f;

      printf("Pointed Char (F) --> %c\n", *ptr);
      printf("Pointed Char (F) Memory Location --> %llu (RAM LOCATION)\n\n", (uint64_t)ptr);

      char g = 'G';
      ptr = &g;

      printf("Pointed Char (G) --> %c\n", *ptr);
      printf("Pointed Char (G) Memory Location --> %llu (RAM LOCATION)\n\n", (uint64_t)ptr);
}