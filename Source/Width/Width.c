#include <stdio.h>
#include <stdlib.h>

int main()
{
        char firstPlayer[] = "Mert Gunduz";
        char secondPlayer[] = "Can Yılmaz";
        char thirdPlayer[] = "Johnny Cash";
        char fourthPlayer[] = "Glenn Miller";
        char fifthPlayer[] = "Ahmet Yıldırım";

        printf("|============================================|\n");
        printf("%30s\n", firstPlayer);
        printf("%30s\n", secondPlayer);
        printf("%30s\n", thirdPlayer);
        printf("%31s\n", fourthPlayer);
        printf("%36s\n", fifthPlayer);
        printf("|============================================|\n");
}