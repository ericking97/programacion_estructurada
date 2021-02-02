#include <stdio.h>

// En este ejemplo podemos ver que aunque nuestro string tiene como longitud
// 5 bytes, realmente tiene 6 bytes debido al carácter nulo \0 que añade el
// compilador
int main()
{
  char name[] = "Elisa";
  printf("Texto %s\n", name);
  printf("Tamaño del texto: %ld bytes\n", sizeof(name));

  return 0;
}