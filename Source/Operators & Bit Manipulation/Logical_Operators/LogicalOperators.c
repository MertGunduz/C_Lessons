#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
      bool x, y;

      printf("\n");
      printf("          |------------------------------------------|\n");
      printf("{X, Y}    | X | Y | X AND Y | X OR Y | NOT X | NOT Y |\n");
      printf("          |------------------------------------------|\n");

      // {O, O} LOGICAL OPERATION 
      x = 0;
      y = 0;
      printf("{0, 0}    | %d | %d | %5d   | %5d  | %4d  | %4d  |\n", x, y, x && y, x || y, !x, !y);
      printf("          |------------------------------------------|\n");

      // {1, O} LOGICAL OPERATION 
      x = 1;
      y = 0;

      printf("{1, 0}    | %d | %d | %5d   | %5d  | %4d  | %4d  |\n", x, y, x && y, x || y, !x, !y);
      printf("          |------------------------------------------|\n");

      // {O, 1} LOGICAL OPERATION 
      x = 0;
      y = 1;

      printf("{0, 1}    | %d | %d | %5d   | %5d  | %4d  | %4d  |\n", x, y, x && y, x || y, !x, !y);
      printf("          |------------------------------------------|\n");

      // {1, 1} LOGICAL OPERATION 
      x = 1;
      y = 1;

      printf("{1, 1}    | %d | %d | %5d   | %5d  | %4d  | %4d  |\n", x, y, x && y, x || y, !x, !y);
      printf("          |------------------------------------------|\n\n");
}