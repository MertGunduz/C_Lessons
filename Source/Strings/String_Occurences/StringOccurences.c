#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
      char WORD[] = "Selametle_Allah";
      char occurenceWord = 'A';

      char * ret;

      ret = strchr(WORD, occurenceWord);

      printf("Occured Word --> %s\n", ret);
}