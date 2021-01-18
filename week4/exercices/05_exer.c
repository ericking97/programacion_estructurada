#include <stdio.h>

int main()
{
  int size;
  printf("Ingrese el tamaño de su array: ");
  scanf("%i", &size);

  int numbers[size];
  printf("Ingrese los valores: \n");
  for (int i = 0; i < size; i++)
  {
    scanf("%i", &numbers[i]);
  }

  int swaped[size];
  for (int i = 0; i < size; i += 2)
  {
    swaped[i] = numbers[i + 1];
    swaped[i + 1] = numbers[i];
  }

  if (size % 2 != 0)
  {
    swaped[size - 1] = numbers[size - 1];
  }

  printf("Array intercambiado: ");
  for (int i = 0; i < size; i++)
  {
    printf("%i, ", swaped[i]);
  }

  return 0;
}