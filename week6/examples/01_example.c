// Calcula el promedio de temperaturas de cada día cada hora.
#include <stdio.h>
#define DAYS 7
#define HOURS 24

int main()
{
  // init_array();
  int temperatures[DAYS][HOURS];
  float average = 0;

  for (int i = 0; i < DAYS; i++)
  {
    for (int j = 0; j < HOURS; j++)
    {
      printf("Temperatura del día %d a las %d: ", i, j);
      scanf("%d", &temperatures[i][j]);
      average += temperatures[i][j];
    }
  }
  average = average / DAYS / HOURS;

  printf("La temperatura promedio de toda la semana es %f\n", average);

  return 0;
}

// Formas de inicializar un arreglo de arreglos.
void init_array()
{
  // Delímitamos los valores de cada renglon, pueden estar incompletos
  int values[3][5] = {
      {1, 2, 3, 4, 5},
      {1, 3},
      {-1},
  };

  // No tenemos forma de delímitar los valores para cada renglón, entonces los
  // va asignando como mejor entienda.
  // int values[3][5] = {1, 2, 3, 4, 5, 1, 3, -1};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d, ", values[i][j]);
    }
    printf("\n");
  }
}