#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Introduce 3 números:");
  fflush(stdout);
  scanf("%d %d %d", &a, &b, &c);
  printf("Has tecleado los números %d %d %d", a, b, c);
  return 0;
}