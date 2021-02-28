#include <stdio.h>

/**
 * El primer argumento la función main es el número de parámetros.
 * El segundo argumento de la función main, es un arreglo de argumentos
 * */
int main(int argc, char *argv[])
{
  printf("Número de argumentos: %i \n", argc);
  for (int i = 0; i < argc; i++)
  {
    printf("Argumento %i: %s\n", i, argv[i]);
  }
  return 0;
}