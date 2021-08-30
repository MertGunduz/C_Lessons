#include <stdio.h>
#include <stdlib.h>

int main()
{
      const int moonLanding = 1969;
      const double speedOfLight = 299792458;
      const double pi = 3.14;
      const unsigned int hexaDead = 0xDEADU;
      const unsigned int hexaSecret = 51966U;

      printf("\n|--------------|\n");
      printf("| MOON LANDING |\n");
      printf("|--------------|\n");
      printf("10 Width (Space) Moon Landing: %10d\n", moonLanding);
      printf("10 Width (Zero) Moon Landing: %0.10d\n\n", moonLanding);

      printf("|----------------|\n");
      printf("| SPEED OF LIGHT |\n");
      printf("|----------------|\n");
      printf("Speed Of Light No Precision -> %0.0lf\n", speedOfLight);
      printf("Speed Of Ligth Scientific Notation -> %0.3e\n\n", speedOfLight);

      printf("|----|\n");
      printf("| PI |\n");
      printf("|----|\n");
      printf("Pi Two Digit Precision -> %0.2lf\n", pi);
      printf("Pi Scientific Notation With One Digit Precision -> %0.1e\n\n", pi);

      printf("|----------|\n");
      printf("| HEXADEAD |\n");
      printf("|----------|\n");
      printf("Hexadead Hexadecimal Notation -> %X\n", hexaDead);
      printf("Hexadead Decimal Notation -> %d\n\n", hexaDead);

      printf("|------------|\n");
      printf("| HEXASECRET |\n");
      printf("|------------|\n");
      printf("Hexasecret Hexadecimal Notation -> %X\n", hexaSecret);
      printf("Hexasecret Octal Notatiov -> %o\n\n", hexaSecret);
}