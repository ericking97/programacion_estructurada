#include <stdio.h>
#include <string.h>

// Usamos scanf de la misma forma que anteriormente, omitiendo el & antes de la variable
// ya que un arreglo siempre apunta a una dirección en memoria.
int main()
{
  char text[30];
  printf("Escribe una palabra: ");
  scanf("%s", text);
  printf("Texto: %s", text);
  return 0;
}