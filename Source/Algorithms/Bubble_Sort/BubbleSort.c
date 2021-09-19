#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ARRAY[] = {421, 2, 12, 5, 76, 4, 21, 446};
    int ARRAY_LENGTH = sizeof(ARRAY) / 4;

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        for (int j = 1; j < ARRAY_LENGTH; j++)
        {
            if (ARRAY[j - 1] > ARRAY[j])
            {
                    int TEMP = ARRAY[j];
                    ARRAY[j] = ARRAY[j - 1];
                    ARRAY[j - 1] = TEMP;
            }
        }
    }

    printf("|#####################|\n");
    printf("| SORTED ARRAY RESULT |\n");
    printf("|#####################|\n\n");

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("%d. Element --> %d\n", i + 1, ARRAY[i]);
    }

    return 0;
}