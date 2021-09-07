#include <stdio.h>
#include <stdlib.h>

int main() 
{
      char clientName[20];
      char clientAge[3];
      char clientGender[20];

      printf("Name --> ");
      scanf("%s", clientName);

      printf("\n");

      printf("Age --> ");
      scanf("%s", clientAge);

      printf("\n");

      printf("Gender --> ");
      scanf("%s", clientGender);

      printf("\n");

      printf("%s is a %s years old %s software developer who lives in United States. %s works as a Network Engineer at Google.", clientName, clientAge, clientGender, clientName);
}