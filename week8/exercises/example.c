#include <stdio.h>
#include <stdlib.h>

void llenar(int *array, int *size)
{
  *size = 10;
  array = realloc(array, *size * sizeof(int));

  // int val = *size * sizeof(int);

  // array = realloc(array, val);

  for (int i = 0; i < *size; i++)
  {
    array[i] = i;
    // printf("%d\n", array[i]);
  }
}

int main()
{
  int s;
  int *a = malloc(sizeof(int));

  // ptr = (float *)calloc(25, sizeof(float));

  llenar(a, &s);

  printf("Tamaño %d\n", s);

  for (int i = 0; i < s; i++)
  {
    printf("%d \n", a[i]);
  }

  free(a);

  return 0;
}
