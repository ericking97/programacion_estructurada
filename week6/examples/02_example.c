#include <stdio.h>

// Las cadenas de texto se guardan como arreglos de carácteres llamados strings.
// Al terminar de inicializar un string, el compilador añade \0 para indicar el final.
int main()
{
  char name[21];
  printf("Introduzca su nombre: ");
  scanf("%s", name);
  printf("El nombre que ha escrito es %s.\n", name);

  return 0;
}