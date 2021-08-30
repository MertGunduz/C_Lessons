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

      typedef enum 
      {
            Warrior,
            Berserker,
            Wizard,
            Necromancer,
            Archer,
            Spearman,
            Thrower
      } Character;

      Menu Menus;
      Character CharacterChoice;

      Menus = ForgotPasswordMenu;
      CharacterChoice = Spearman;

      printf("Result -> %12d\n", Menus);
      printf("Result -> %12d\n", CharacterChoice);
}