#include <stdio.h>
#include <string.h>

int main()
{
  char text[10];
  printf("Escribe una oración: ");
  fgets(text, 10, stdin);
  printf("Texto obtenido del buffer %s", text);

  return 0;
}