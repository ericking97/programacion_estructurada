#include <stdio.h>
#include <string.h>

// Hacemos uso de los comodines para obtener diferentes resultados
int main()
{
  char t1[30], t2[30];
  printf("Escribe 2 palabras: ");
  scanf("%s %s", t1, t2);
  printf("Texto: %s %s", t1, t2);
  return 0;
}