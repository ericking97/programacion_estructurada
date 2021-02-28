#include <stdio.h>

float promedio(float *m, int size)
{
  float prom = 0;
  for (int i = 0; i < size; i++)
  {
    prom += m[i];
  }
  prom = prom / size;

  return prom;
}

int main()
{
  int cantidad;

  printf("Ingresa la cantidad de numeros que deseas agregar:\n");
  scanf("%d", &cantidad);

  float arreglo[cantidad];

  for (int i = 0; i < cantidad; i++)
  {
    printf("%d: ", i);
    scanf("%e", &arreglo[i]);
  }

  printf("Promedio %f", promedio(arreglo, cantidad));
}