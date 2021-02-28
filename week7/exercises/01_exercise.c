/**
 * Defina una función que calcule el promedio de una cantidad arbitraria de números de punto flotante, que sean pasados
 * a la función de promedio, que usted escriba, en un array. Demuestre la operación de esta función implementando un
 * programa que acepte una cantidad arbitraria de valores ingresada desde el teclado, y regrese el promedio.
 * */
#include <stdlib.h>
#include <stdio.h>

float average(float *m, int size)
{
  float result = 0;

  for (int i = 0; i < size; i++)
  {
    result += m[i];
  }

  result = result / size;

  return result;
}

float *promptForMatrix(int *size)
{
  float *matrix;
  printf("¿Cuántos elementos va a tener la matriz?");
  scanf("%d", size);

  matrix = malloc((*size) * sizeof(float));
  if (matrix == NULL)
  {
    printf("Memoria insuficiente\n");
    exit(-1);
  }

  return matrix;
}

void promptForValues(float *m, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%i: ", i + 1);
    scanf("%f", &m[i]);
  }
}

void printValues(float *m, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%f ", m[i]);
  }
  printf("\n");
}

void freeMemory(float *m)
{
  free(m);
}

int main()
{
  int size;
  float *matrix = promptForMatrix(&size);

  promptForValues(matrix, size);

  float avg = average(matrix, size);

  printValues(matrix, size);

  printf("El promedio es de: %f", avg);

  freeMemory(matrix);

  return 0;
}