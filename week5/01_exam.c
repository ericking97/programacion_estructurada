#include <stdio.h>

int main()
{
  double numbers[5], reciprocal[5], input;

  printf("Ingrese 5 valores: \n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%lf", &input);
    if (input == 0)
    {
      printf("El valor ingresado no puede ser cero\n");
      i--;
    }
    else
    {
      numbers[i] = input;
      reciprocal[i] = 1 / input;
    }
  }

  printf("\nValores ingresados: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%lf ", numbers[i]);
  }

  printf("\nValores recíprocos: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%lf ", reciprocal[i]);
  }

  return 0;
}