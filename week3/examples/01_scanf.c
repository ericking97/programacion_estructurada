#include <stdio.h>

int main()
{
  int num;
  printf("Introduce un número");
  fflush(stdout);
  scanf("%d", &num);
  printf("Has tecleado el número %d\n", num);
  return 0;
}