#include <stdio.h>

int main()
{
  printf("Size in bytes of different data types:\n");
  // Char
  printf("CHAR_SIZE                 : %lu\n", sizeof(char));
  printf("UNSIGNED_CHAR_SIZE        : %lu\n", sizeof(unsigned char));
  printf("SIGNED_CHAR_SIZE          : %lu\n", sizeof(signed char));
  // Int
  printf("INT_SIZE                  : %lu\n", sizeof(int));
  printf("UNSIGNED_INT_SIZE         : %lu\n", sizeof(unsigned int));
  printf("SHORT_INT_SIZE            : %lu\n", sizeof(short int));
  printf("UNSIGNED_SHORT_INT_SIZE   : %lu\n", sizeof(unsigned short int));
  printf("LONG_INT_SIZE             : %lu\n", sizeof(long int));
  printf("UNSIGNED_LONG_INT_SIZE    : %lu\n", sizeof(unsigned long int));
  // Float
  printf("FLOAT_SIZE                : %lu\n", sizeof(float));
  printf("DOUBLE_SIZE               : %lu\n", sizeof(double));
  printf("LONG_DOUBLE_SIZE          : %lu\n", sizeof(long double));

  return 0;
}