#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *matrix, size;
  printf("Número de elementos en el array: ");
  scanf("%d", &size);

  matrix = malloc(size * sizeof(int));
  if (matrix == NULL)
  {
    printf("Insuficiente espacio en memoria\n");
    exit(-1);
  }

  for (int i = 0; i < size; i++)
  {
    matrix[i] = i;
  }

  for (int i = 0; i < size; i++)
  {
    printf("%i ", matrix[i]);
  }

  return 0;
}
