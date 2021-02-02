#include <stdio.h>
#include <string.h>

int main()
{
  char text[] = "Lorem ipsum dolor asit";
  char *p = text;

  while (*p != '\0')
  {
    if (*p == ' ')
      *p = '-';
    p++;
  }

  printf("Cadena convertida: %s", text);
  return 0;
}