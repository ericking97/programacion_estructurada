/**
 * Un detalle importante a tener en cuenta es que no hay forma en C estándar para "restaurar" los streams estándares
 * */

#include <stdio.h>
#include <string.h>

int main()
{
  char text[100];
  if (freopen("result.txt", "wt", stdout) == NULL)
    return 0;

  while (1)
  {
    gets(text);
    if (strcmp(text, "salir") == 0)
    {
      fprintf(stderr, "El usuario ha tecleado salir\n");
      break;
    }
    printf("%s\n", text);
  }

  return 0;
}