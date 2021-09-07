#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
      char WORD[] = "Hello_World";
      char occurenceWord = 'W';

      char * ret;

      ret = strchr(WORD, occurenceWord);

      printf("Occured Word --> %s\n", ret);
}