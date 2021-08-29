#include <stdio.h>
#include <stdlib.h>

int main()
{   
    printf("|===============================================|\n");
    printf("    -------------\n");
    printf("    | S-H-O-R-T |\n");
    printf("    -------------\n");
    printf("    Short Max Value: %hd\n", SHRT_MAX);
    printf("    Short Min Value: %hd\n\n", SHRT_MIN);
    printf("    ---------------\n");
    printf("    | U-S-H-O-R-T |\n");
    printf("    ---------------\n");
    printf("    UShort Max Value : %hu\n", USHRT_MAX);
    printf("    UShort Min Value : %hu\n\n", 0);
    printf("    -----------------\n");
    printf("    | I-N-T-E-G-E-R |\n");
    printf("    -----------------\n");
    printf("    Integer Max Value: %d\n", INT_MAX);
    printf("    Integer Min Value: %d\n\n", INT_MIN);
    printf("    -------------------\n");
    printf("    | U-I-N-T-E-G-E-R |\n");
    printf("    -------------------\n");
    printf("    UInteger Max Value: %u\n", UINT_MAX);
    printf("    UInteger Min Value: %u\n\n", 0);
    printf("    -----------\n");
    printf("    | L-O-N-G |\n");
    printf("    -----------\n");
    printf("    Long Max Value: %ld\n", LONG_MAX);
    printf("    Long Min Value: %ld\n\n", LONG_MIN);
    printf("    -------------\n");
    printf("    | U-L-O-N-G |\n");
    printf("    -------------\n");
    printf("    ULong Max Value: %lu\n", ULONG_MAX);
    printf("    ULong Min Value: %lu\n\n", 0);
    printf("|===============================================|\n");
}