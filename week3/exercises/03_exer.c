#include <stdio.h>

int main()
{
  int n, r = 0;
  for (int i = 0; i < 4; i++)
    ;
  {
    printf("Introduce un número\n");
    scanf("%d", &n);
    r += n;
  }
  printf("Total: %d\n", r);
  return 0;
}