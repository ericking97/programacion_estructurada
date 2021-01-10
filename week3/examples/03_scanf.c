#include <stdio.h>

int main()
{
  int a;
  float b;
  printf("Introduce dos números: ");
  fflush(stdout);
  scanf("%d %f", &a, &b);
  printf("Has tecleado los números %d %f", a, b);
  return 0;
}