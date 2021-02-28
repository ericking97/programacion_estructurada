#include <stdio.h>
#include <stdlib.h>
#define ROWS 2
#define COLS 2

int reserve()
{
  int *matrix;
  matrix = malloc(ROWS * sizeof(int *));
  for (int i = 0; i < COLS; i++)
  {
    matrix[i] = malloc(COLS * sizeof(int));
  }

  return matrix;
}

void setFree(int *matrix)
{
  for (int i = 0; i < ROWS; i++)
  {
    free(matrix[i]);
  }
  free(matrix);
}

int main()
{
  int matrix;
  matrix = reserve();
  setFree(&matrix);

  return 0;
}