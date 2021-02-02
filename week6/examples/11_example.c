#include <stdio.h>
#include <string.h>

// Usamos apuntadores para iterar sobre el string, hasta encontrar un carácter nulo

int main()
{
  char text[] = "Jairo";
  char *p = text;
  int size = 0;

  while (*p != '\0')
  {
    size++;
    printf("%c\n", *p);
    p++;
  }

  printf("La cadena %s tiene %i caracteres", text, size);

  return 0;
}