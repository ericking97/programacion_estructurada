#include <stdio.h>

int main()
{
  float cantidades[5];
  long int pesos[5], centavos[5];
  printf("Escribe 5 valores:\n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%f", &cantidades[i]);
    pesos[i] = (int)cantidades[i];
    double temp = cantidades[i] - pesos[i];
    centavos[i] = (int)(temp * 100);
  }

  printf("Cantidades ingresadas: \n");
  for (int i = 0; i < 5; i++)
  {
    printf("$ %li.%li\n", pesos[i], centavos[i]);
  }

  return 0;
}