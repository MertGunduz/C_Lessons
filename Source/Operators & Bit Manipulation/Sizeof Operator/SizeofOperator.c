#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
      printf("Int Size --> %llu Bytes\n", sizeof(int));
      printf("Long Size --> %llu Bytes\n", sizeof(long));
      printf("Long Long Size --> %llu Bytes\n", sizeof(long long));
      printf("Char Size --> %llu Bytes\n", sizeof(char));
      printf("Int16 Size --> %llu Bytes\n", sizeof(int16_t));
      printf("Int32 Size --> %llu Bytes\n", sizeof(int32_t));
      printf("Int64 Size --> %llu Bytes\n", sizeof(int64_t));
}