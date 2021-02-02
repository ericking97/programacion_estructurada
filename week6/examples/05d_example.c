#include <stdio.h>
#include <string.h>

int main()
{
  char t[30];
  printf("Escribe una palabra ");
  scanf("%[A-Z]s", t);
  printf("Texto obtenido del buffer %s", t);

  return 0;
}