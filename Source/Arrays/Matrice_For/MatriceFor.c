#include <stdio.h>
#include <stdlib.h>

int main()
{
    int MATRICESUM = 0;

    int ARRAY[3][5] =
    {
        {3, 5, 6, 4, 1},
        {7, 1, 4, 6, 9},
        {6, 2, 5, 7, 2}
    };

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            MATRICESUM += ARRAY[j][i];

            if (j == 2)
            {
                printf("%d ", MATRICESUM);
            }
        }
        MATRICESUM = 0;
    }

    return 0;
}