#include <stdio.h>

int main()
{
  int a, b, c;
  a = 5;                                   // initialize a as 5
  b = ++a;                                 // increment a by one, and assign the new value to b
  c = (a + 5 * 2) * (b + 6 / 2) + (a * 2); //  (6 + 10) * (6 + 3) + (6 * 2)
  printf("%i, %i, %i", a, b, c);           // 5, 6, 156
  return 0;
}