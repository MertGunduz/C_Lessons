#include <stdio.h>
#include <stdlib.h>

void Score()
{
    float RESULT = 0.0f;
    const int Length;

    printf("|====================================================|\n\n");

    printf("Score Quantity --> ");
    scanf("%d", &Length);

    float ScoreArray[Length];

    printf("\n"); // | Line Breaker |

    for (int i = 0; i < Length; i++)
    {
        printf("    %d. Score  --> ", i + 1);
        scanf("%f", &ScoreArray[i]);
        printf("\n"); // | Line Breaker |
    }

    for (int i = 0; i < Length; i++)
    {
        RESULT += ScoreArray[i];
    }

    printf("Result -> %f\n", RESULT / Length);

    printf("\n|====================================================|\n");

    return;
}

int main()
{
    Score();
    return 0;
}