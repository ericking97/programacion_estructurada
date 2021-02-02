#include <stdio.h>

int main()
{
  char ch;
  printf("Escribe tu nombre: ");
  while ((ch = getchar()) != '\n')
  {
    printf("%c", ch);
  }
  return 0;
}