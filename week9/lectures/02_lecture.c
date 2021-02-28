/**
 * Escritura de un archivo
 * Lectura del origin y estrictura en destino
 * Comprobar fin de archivo
 * Escritura de lineas
 *
 * int putc(int c, FILE *f)
 *
 * int fputs(const char *string, FILE *f);
 * */
#include <stdio.h>

int main()
{
  FILE *source, *destination;
  char l;

  source = fopen("source.txt", "r");
  destination = fopen("destination.txt", "w");

  if (source == NULL || destination == NULL)
  {
    printf("Problema al abrir el archivo");
    return 1;
  }

  while ((l = getc(source)) != EOF)
  {
    putc(l, destination);
    printf("%c", l);
  }

  if (fclose(source) != 0)
  {
    printf("Problemas al cerrar archivo de origen\n");
  }
  if (fclose(destination) != 0)
  {
    printf("Problemas al cerrar archivo de destino\n");
  }

  return 0;
}