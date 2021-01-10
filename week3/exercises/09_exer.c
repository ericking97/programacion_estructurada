#include <stdio.h>

int main()
{
  int n, r = 1;
  printf("Ingresa el número a calcular el factoria: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    r = r * i;
  }

  printf("Factorial de %d es %d", n, r);

  return 0;
}