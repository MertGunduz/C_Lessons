#include <stdio.h>
#include <stdlib.h>

int main()
{
      typedef enum
      {
            None = 0,
            Low = 5,
            Medium = 10,
            High = 15,
            Maximum = 20
      } ThrustLevel;

      ThrustLevel SpaceshipThrust;

      printf("\n|======================================================================|\n\n");
      SpaceshipThrust = None;
      printf("Spaceship is ready to launch. Thrust Rate -> %d\n", SpaceshipThrust);
      SpaceshipThrust = Low;
      printf("Spaceship started its engine. Thrust Rate -> %d\n", SpaceshipThrust);
      SpaceshipThrust = Medium;
      printf("Spaceship is started to make its speed higher. Thrust Rate -> %d\n", SpaceshipThrust);
      SpaceshipThrust = High;
      printf("Spaceship is traveling to space. Thrust Rate -> %d\n", SpaceshipThrust);
      SpaceshipThrust = Maximum;
      printf("Spaceship is going with its max speed. Thrust Rate -> %d\n", SpaceshipThrust);
      printf("\n|======================================================================|\n");


      return EXIT_SUCCESS;
}