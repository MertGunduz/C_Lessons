#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ARRAY[3][3] =
    {
        {3, 6, 9},
        {12, 15, 18},
        {21, 24, 27},
    };

    for (int i = 0; i < 3; i++ )
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ARRAY[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }

    return 0;
}