#include <stdio.h>
#include <stdlib.h>

int main()
{
      const float pi = 3.14f;
      float radius;

      printf("Radius -> ");
      scanf("%f", &radius);

      printf("____________________\n");
      printf("|------------------|\n");
      printf("| Decimal Notation |\n");
      printf("|------------------|\n");
      printf("Sphere Surface Area --> %0.2f\n", (radius * radius) * pi * 4);
      printf("Sphere Volume --> %0.2f\n", 1.3333333f * pi * (radius * radius * radius));

      printf("_______________________\n");
      printf("|---------------------|\n");
      printf("| Scientific Notation |\n");
      printf("|---------------------|\n");
      printf("Sphere Surface Area --> %0.3e\n", (radius * radius) * pi * 4);
      printf("Sphere Volume --> %0.3e\n\n", 1.3333333f * pi * (radius * radius * radius));
}