#include <stdio.h>

int main()
{
  int days;

  printf("De cuántos días quieres ingresar la temperatura?");
  scanf("%d", &days);
  float temps[days][6];
  float average[days];

  for (int i = 0; i < days; i++)
  {
    float avgTempPerDay = 0;
    printf("Escriba 6 temperaturas para el día %i\n", i);
    for (int j = 0; j < 6; j++)
    {
      float temp;
      printf("\tTemperatura %d: ", j);
      scanf("%f", &temp);
      temps[i][j] = temp;
      avgTempPerDay += temps[i][j];
    }
    average[i] = avgTempPerDay / 6;
  }

  printf("Día\tPromedio\tTemp 1\tTemp 2\tTemp 3\tTemp 4\tTemp 5\tTemp 6\n");
  for (int i = 0; i < days; i++)
  {
    printf("%i\t%0.1f\t\t", i, average[i]);
    for (int j = 0; j < 6; j++)
    {
      printf("%0.2f\t", temps[i][j]);
    }
    printf("\n");
  }

  return 0;
}
