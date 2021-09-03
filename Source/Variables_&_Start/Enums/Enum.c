#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
      // Enum Init
      enum Menu
      {
            Login_Menu,
            Register_Menu,
            Forgot_Password_Menu
      };

      // Enum Object
      enum Menu MenuChoice;

      char menuSelect[16]; 

      printf("|====================================|\n");
      printf("| Login - Register - Forgot_Password |\n");
      printf("|====================================|\n");

      printf("Select -> ");
      scanf("%s", &menuSelect);

      if (strcmp(menuSelect, "Login") == 0)
      {
            MenuChoice = Login_Menu;
      }
      else if (strcmp(menuSelect, "Register") == 0)
      {
            MenuChoice = Register_Menu;
      }
      else if (strcmp(menuSelect, "Forgot_Password") == 0) 
      {
            MenuChoice = Forgot_Password_Menu;
      }

      // Prints Enum In Signed Int Format (%d)
      printf("Choice -> %d\n", MenuChoice);
}