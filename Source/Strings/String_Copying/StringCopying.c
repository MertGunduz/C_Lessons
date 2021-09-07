#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
      char NAME_1[] = "Winston";
      char NAME_2[] = "Jackie";

      printf("NAME_1 Before Copy --> %s\n", NAME_1);

      strcpy(NAME_1, NAME_2);

      printf("NAME_1 After Copy --> %s\n", NAME_1);
}