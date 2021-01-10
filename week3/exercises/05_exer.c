#include <stdio.h>

int main()
{
  int n;
  printf("Ingresa el tamaño de la piramide: ");
  scanf("%i", &n);
  for (int ren = 1; ren <= n; ren++)
  {
    for (int i = 1; i <= ren; i++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}