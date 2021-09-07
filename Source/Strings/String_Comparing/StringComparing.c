#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
      char PASSWORD_ENTRY[64];
      char SETTED_PASSWORD[16] = "BOSSA_NOVA";

      printf("\nEnter Password --> ");
      scanf("%s", PASSWORD_ENTRY);

      printf("\n"); // | LINE BREAKER |

      if (strcmp(PASSWORD_ENTRY, SETTED_PASSWORD) == 0)
      {
            printf("|---------------|\n");
            printf("| PASSWORD TRUE |\n");
            printf("|---------------|\n\n");
      }
      else 
      {
            printf("|----------------|\n");
            printf("| WRONG PASSWORD |\n");
            printf("|----------------|\n\n");
      }
}