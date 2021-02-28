#include <stdio.h>

// Definimos varias constantes a la vez.
// Las constantes definidas por enum sólo pueden tomar valores enteros.
enum
{
  PRIMERO = 1,
  SEGUNDO,
  TERCERO,
  CUARTO,
  QUINTO
} pos;

int main()
{
  pos = SEGUNDO;
  printf("Posición: %i\n", pos);
  return 0;
}