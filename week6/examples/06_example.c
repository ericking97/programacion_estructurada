#include <stdio.h>
#include <string.h>

int main()
{
  char text[30];
  printf("Escriba una frase");
  gets(text);
  printf("Texto escrito %s", text);

  return 0;
}