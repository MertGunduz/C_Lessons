#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
      char myCharacter = 'D';
      
      if (isalnum(myCharacter)) 
      {
            printf("%c is an alphanumerical character.\n", myCharacter);      
      }
      else 
      {
            printf("%c is not an alphanumerical character.\n", myCharacter);
      }

      if (isalpha(myCharacter)) // Does it exists in alphabet?
      {
            printf("%c exists in the alphabet!\n", myCharacter);
      }
      else 
      {
            printf("%c doesn't exists in alphabet!\n", myCharacter);
      }

      if (isblank(myCharacter)) 
      {
            printf("%c is blank!\n", myCharacter);
      } 
      else 
      {
            printf("%c is not blank\n", myCharacter);
      }

      if (iscntrl(myCharacter)) 
      {
            printf("%c is a control character!\n", myCharacter);
      }
      else 
      {
            printf("%c is not a control character!\n", myCharacter);
      }

      if (isdigit(myCharacter)) 
      {
            printf("%c is a digit!\n", myCharacter);
      }
      else 
      {
            printf("%c is not a digit!\n", myCharacter);
      }

      if (isgraph(myCharacter)) 
      {
            printf("%c is a graphical character!\n", myCharacter);
      }
      else 
      {
            printf("%c is not a graphical character!\n", myCharacter);
      }

      if (islower(myCharacter)) 
      {
            printf("%c is a lower character!\n", myCharacter);
      }
      else 
      {
            printf("%c is not a lower character!\n", myCharacter);      
      }

      if (isupper(myCharacter)) 
      {
            printf("%c is an upper character!\n", myCharacter);
      }
      else 
      {
            printf("%c is not an upper character!\n", myCharacter);
      }

      if (isprint(myCharacter)) 
      {
            printf("%c is a printable character!\n", myCharacter);
      }
      else 
      {
            printf("%c is not a printable character!\n", myCharacter);
      }

      if (ispunct(myCharacter)) 
      {
            printf("%c is a punctuation character!\n", myCharacter);
      }
      else 
      {
            printf("%c is not a punctuation character!\n", myCharacter);
      }

      if (isspace(myCharacter)) 
      {
            printf("%c is a space!\n", myCharacter);
      }
      else 
      {
            printf("%c is not a space!\n", myCharacter);
      }

      if (isxdigit(myCharacter)) 
      {
            printf("%c is a hexadecimal character!\n", myCharacter);
      }
      else 
      {
            printf("%c is not a hexadecimal character!\n", myCharacter);
      }

      return 0;
}