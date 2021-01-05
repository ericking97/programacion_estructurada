#include <stdio.h>

void main()
{
  int x, y, z;           // x, y, z are defined
  x = y = 20;            // x & y are equal to 20
  z = (x++, y--, x + y); // 21, 19, 21 + 19 = 40
  printf("%d", z);
}