/**
 * Matrix multidimensional dinámica.
 * Reservamos memoria para el array que va a contener la información de dónde se almacena cada fila.
 * Reserver espacio para cada una de las filas.
 * */
#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLS 2

int main()
{
  // Definimos un array de punteros a punteros int.
  // Este puntero no esta inicializado, no apunta a ningun área de memoria y no se puede usar para guardar datos.
  int **matrix;

  // Cada una de las filas de nuestro array, tendra n columnas de elementos.
  // Por ello, necesitamos que los elementos sean punteros de int.
  matrix = malloc(ROWS * sizeof(int *));
  if (matrix == NULL)
  {
    printf("Insuficiente espacio en la memoria\n");
    exit(-1);
  }

  for (int i = 0; i < ROWS; i++)
  {
    matrix[i] = malloc(COLS * sizeof(int));
    if (matrix[i] == NULL)
    {
      printf("Insuficiente espacio en la memoria\n");
      exit(-1);
    }
  }

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      printf("(%i, %i): ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  // Liberamos la memoria de cada fila, y luego el arreglo
  // Si lo hacemos al revés, liberamos primero el array que contiene las direcciones, no podríamos
  // acceder a cada una de las filas y quedaría la memoria sin liberar.
  for (int i = 0; i < ROWS; i++)
  {
    free(matrix[i]);
  }
  free(matrix);

  return 0;
}