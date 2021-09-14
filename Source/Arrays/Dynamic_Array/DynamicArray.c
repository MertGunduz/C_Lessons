#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ARRAYLEN;

    printf("Array Length --> ");
    scanf("%d", &ARRAYLEN);

    printf("\n"); // | Line Breaker |

    int ARRAY[ARRAYLEN];
    int RESULT;

    for (int i = 0; i < ARRAYLEN; i++)
    {
        printf("Enter %d. Element --> ", i + 1);
        scanf("%d", &ARRAY[i]);
        printf("\n"); // | Line Breaker |
    }

    for (int i = 0; i < ARRAYLEN; i++)
    {
        printf("%d. Array Element --> %d\n", i + 1, ARRAY[i]);
        RESULT += ARRAY[i];
    }

    printf("\n"); // | Line Breaker |

    printf("Average --> %d\n", RESULT / ARRAYLEN);

    return 0;
}