#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
      // | VARIABLES |
      char clientForeName[20];
      bool isClientMale = false;
      bool isClientBlueEyed = false;
      bool isClientBlondeHaired = false;

      printf("Name --> ");
      scanf("%s", &clientForeName);

      printf("\n"); // | LINE BREAKER |

      if (isClientMale && isClientBlueEyed && isClientBlondeHaired)
      {
            printf("Name -> %d\nGender -> Male\nEye Color -> Blue\nHair Color -> Blonde", clientForeName);
      }
      else if (isClientMale && isClientBlueEyed && !isClientBlondeHaired)
      {
            printf("Name -> %d\nGender -> Male\nEye Color -> Blue\nHair Color -> Not Blonde", clientForeName);
      }
      else if (isClientMale && !isClientBlueEyed && isClientBlondeHaired)
      {
            printf("Name -> %d\nGender -> Male\nEye Color -> Not Blue\nHair Color -> Blonde", clientForeName);
      }
      else if (!isClientMale && isClientBlueEyed && isClientBlondeHaired)   
      {
            printf("Name -> %d\nGender -> Not Male\nEye Color -> Blue\nHair Color -> Blonde", clientForeName);
      }
      else if (isClientMale && !isClientBlueEyed && !isClientBlondeHaired) 
      {
            printf("Name -> %d\nGender -> Male\nEye Color -> Not Blue\nHair Color -> Not Blonde", clientForeName);
      }
      else if (!isClientMale && isClientBlueEyed && !isClientBlondeHaired) 
      {
            printf("Name -> %d\nGender -> Not Male\nEye Color -> Blue\nHair Color -> Not Blonde", clientForeName);
      }
      else if (!isClientMale && !isClientBlueEyed && isClientBlondeHaired) 
      {
            printf("Name -> %d\nGender -> Not Male\nEye Color -> Not Blue\nHair Color -> Blonde", clientForeName);
      }
      else 
      {
            printf("Name -> %d\nGender -> Not Male\nEye Color -> Not Blue\nHair Color -> Not Blonde", clientForeName);
      }
}