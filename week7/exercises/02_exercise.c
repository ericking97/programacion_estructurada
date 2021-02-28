/**
 * Defina una función que regrese una representación de cadena de un entero que sea pasada como argumento. Por ejemplo,
 * si el argumento es 25, la función regresará "25"; si el argumento es -98, la función regresará "-98". Demuestre la
 * operación de su función en un programa tal que sea invocada la función dentro de main().
 * */
#include <stdio.h>
#include <stdlib.h>

// stringify convierte un número entero a su represetanción en string
char *stringify(int number)
{
  int length = snprintf(NULL, 0, "%d", number);
  printf("%d", length);

  char *t = malloc(length + 1);
  sprintf(t, "\"%d\"", number);

  return t;
}

int main()
{
  int number;
  printf("Ingrese un número: ");
  scanf("%d", &number);

  char *text = stringify(number);

  printf("Texto ingresado es: %s", text);

  return 0;
}