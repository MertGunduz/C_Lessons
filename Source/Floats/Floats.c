#include <stdio.h>
#include <stdlib.h>

int main()
{
      double myNumber = 421.5234423423;

      printf("\n|==========================================|\n");
      printf("---------------------------\n");
      printf("| NON SCIENTIFIC NOTATION |\n");
      printf("---------------------------\n");
      printf("Number Precision Low -> %10.2lf\n", myNumber);
      printf("Number Precision Medium -> %11.6lf\n", myNumber);
      printf("Number Precision High -> %17.10lf\n", myNumber);
      printf("|==========================================|\n\n");

      printf("|==========================================|\n");
      printf("-----------------------\n");
      printf("| SCIENTIFIC NOTATION |\n");
      printf("-----------------------\n");
      printf("Number Precision Low (Scientific) -> %13.2e\n", myNumber);
      printf("Number Precision Medium (Scientific) -> %13.5e\n", myNumber);
      printf("Number Precision High (Scientific) -> %19.9e\n", myNumber);
      printf("|==========================================|\n\n");
}