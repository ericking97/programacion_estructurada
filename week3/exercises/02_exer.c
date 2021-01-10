#include <stdio.h>

int main()
{
  float f1; double d1; int i1;
  printf("Escriba un número flotante, double y entero: \n");
  scanf("%f %lf %i", &f1, &d1, &i1);
  printf("Valores ingresados: %f, %lf, %i", f1, d1, i1);
  return 0;
}