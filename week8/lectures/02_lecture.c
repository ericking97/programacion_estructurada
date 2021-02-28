/**
 * ¿Qué es la redirección?
 *
 * Para entender qué es la redirección,
 *
 * Redireccionar la salida
 * Redireccionar la entrada
 * Redireccionar desde el programa - freopen
 * */

#include <stdio.h>
#include <string.h>

int main()
{
  char text[100];
  while (1)
  {
    gets(text);
    if (strcmp(text, "salir") == 0)
    {
      fprintf(stderr, "El usuario ha tecleado salir");
      break;
    }
    printf("%s\n", text);
  }

  return 0;
}