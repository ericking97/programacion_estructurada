#include <stdio.h>

int main()
{
  char a;
  a = 10;
  printf("La variable se almacena en la posición de memoria %p, y su valor es %d\n", (void *)&a, a);
  return 0;
}