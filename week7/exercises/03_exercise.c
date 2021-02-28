/**
 * Extienda la función definida anteriormente para que acepte un argumento adicional que especifique el ancho para ver
 * el resultado, y regrese la representación en cadena del valor calculado alineado a la derecha del ancho dado para
 * mostrar el resultado. Por ejemplo, si el valor a convertir es -98 y el campo del ancho es 5, la cadena que regresará
 * será "__-98".
 * */

#include <stdio.h>
#include <stdlib.h>

// stringify convierte un número entero a su represetanción en string
char *stringify(int number, int wide)
{
  int length = snprintf(NULL, 0, "%d", number);
  int spaces = wide - length;
  char *t = malloc(length + spaces + 1);
  sprintf(t, "\"%*d\"", wide, number);

  return t;
}

int main()
{
  int number, wide;
  printf("Ingrese un número: ");
  scanf("%d", &number);

  printf("Ingrese al ancho: ");
  scanf("%d", &wide);

  char *text = stringify(number, wide);

  printf("Texto ingresado es: %s", text);

  return 0;
}
