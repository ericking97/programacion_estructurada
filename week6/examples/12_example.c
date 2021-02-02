#include <stdio.h>
#include <string.h>

// Creamos un string junto con un apuntador al inicio de este mismo.
// Iteramos sobre él hasta encontrar el carácter nulo, y además introducimos algo
// de lógica para encontrar espacios y letras e.
int main()
{
  char text[] = "Cranmer es un tipo estupendo";
  char *p = text;
  int spaces = 0, es = 0;

  while (*p != '\0')
  {
    if (*p == ' ')
      spaces++;
    if (*p == 'e')
      es++;
    p++;
  }

  printf("En la cadena %s hay: ", text);
  printf("\n %i espacios", spaces);
  printf("\n %i letras e", es);

  return 0;
}