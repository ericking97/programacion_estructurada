#include <stdio.h>

int main()
{
  int n, m;

  printf("Ingrese las dimensiones del rectángulo a crear, como mínimo 3x3. Ej: n, m\n");
  while (1)
  {
    scanf("%i, %i", &n, &m);
    if (n < 3 || m < 3)
    {
      printf("Error: n, m tienen que ser al menos 3. Vuelva a intentarlo\n");
    }
    else
    {
      break;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}