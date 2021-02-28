#include <stdio.h>
#include <stdlib.h>
#define ROWS 2
#define COLS 2

// Esta función reserva m x n reglones y columnas para nuestra matriz
int **reserve()
{
  int **matrix;
  matrix = malloc(ROWS * sizeof(int *));
  for (int i = 0; i < COLS; i++)
  {
    matrix[i] = malloc(COLS * sizeof(int));
  }

  return matrix;
}

// Esta función libera la memoria usada de una matriz m x n
void setFree(int **matrix)
{
  for (int i = 0; i < ROWS; i++)
  {
    free(matrix[i]);
  }
  free(matrix);
}

// Itera sobre la matrix mxn para obtener los valores de parte del usuario
void prompt(int **matrix)
{
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      printf("(%i, %i): ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
}

// Suma 2 matrices mxn
int **sum(int **m1, int **m2)
{
  int **r;
  r = reserve();

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      r[i][j] = m1[i][j] + m2[i][j];
    }
  }

  return r;
}

// Imprime los elementos de una matriz mxn
void printMatrix(int **m)
{
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int **m1, **m2, **r;
  // Reservamos el espacio en memoria para ambas matrices
  m1 = reserve();
  m2 = reserve();

  // Preguntamos al usuario por datos
  prompt(m1);
  prompt(m2);

  r = sum(m1, m2);

  printMatrix(r);

  free(m1);
  free(m2);
  free(r);

  return 0;
}