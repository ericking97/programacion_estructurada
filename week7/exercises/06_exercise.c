/**
 * Una función con el prototipo:
 *
 * double power(double x, int n)
 *
 * debería calcular y devolver el valor de Xn, tal que la expresión power(5.0, 4) evaluaría 5.0 * 5.0 * 5.0 * 5.0
 * lo que dará como resultado 625.0
 *
 * Implemente la función power() como una función recursiva, es decir, qeue se llame a sí misma, y demuestre su
 * operación con una version con un programa dentro de main()
 * */
#include <stdio.h>

double power(double num, int p)
{
  if (p != 0)
  {
    return (num * power(num, p - 1));
  }
  else
  {
    return 1;
  }
}

int main()
{
  double number, result;
  int po;

  printf("Ingresa el número: ");
  scanf("%lf", &number);

  printf("Ingresa la potencia: ");
  scanf("%d", &po);

  result = power(number, po);

  printf("%lf^%d = %lf", number, po, result);

  return 0;
}