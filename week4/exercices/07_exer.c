#include <stdio.h>
#include <math.h>

int main()
{
  int size;
  int sum = 0;
  double am, sd, var;

  printf("Tamaño: ");
  scanf("%i", &size);

  int numbers[size];
  printf("Escribe los elementos:\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%i", &numbers[i]);
    sum += numbers[i];
  }

  am = sum / size;

  double temp = 0;
  for (int i = 0; i < size; i++)
  {
    printf("%i %lf\n", numbers[i], pow((numbers[i] - am), 2));
    temp += pow((numbers[i] - am), 2);
  }
  var = temp / size;
  sd = sqrt(var);

  printf("Media:                %lf\n", am);
  printf("Varianza:             %lf\n", var);
  printf("Desviación estándar:  %lf\n", sd);

  return 0;
}