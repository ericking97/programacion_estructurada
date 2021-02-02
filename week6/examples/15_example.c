#include <stdio.h>

void error(int errnum)
{
  char *errors[] = {
      "No se ha producido ningun error",
      "No hay suficiente espacio en memoria",
      "No hay espacio en el disco",
      "Me he cansado de trabajar"};
  printf("Error número %i: %s.\n", errnum, errors[errnum]);
}

int main()
{
  int num;
  printf("¿Cuál error quieres mostrar? [0-3]");
  scanf("%i", &num);
  error(num);
}