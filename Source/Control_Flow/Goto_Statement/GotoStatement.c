#include <stdio.h>
#include <stdlib.h>

int main()
{
      MAINMENU:
      char userInput;
      printf("|------|\n");
      printf("| HOPE |\n");
      printf("|------|\n\n");

      printf("|----------------|-------------------|\n");
      printf("| Main Menu -> M | Exit Program -> E |\n");
      printf("|----------------|-------------------|\n\n");

      printf("Answer --> ");
      scanf("%c", &userInput);

      if (userInput == 'M') 
      {
            goto MAINMENU;
      }
      else if (userInput == 'E') 
      {
            return 1;
      }
      else 
      {
            printf("Invalid!");
      }
}