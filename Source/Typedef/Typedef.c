#include <stdio.h>
#include <stdlib.h>

int main() 
{
      typedef enum 
      {
            LoginMenu,
            RegisterMenu,
            ForgotPasswordMenu
      } Menu;

      Menu Menus;

      Menus = ForgotPasswordMenu;

      printf("Result -> %12d\n", Menus);
}