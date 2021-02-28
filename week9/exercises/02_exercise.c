/**
 * Escriba un programa que lea el archivo creado en el punto anterior, y recupere las cadenas, una a la vez, en
 * secuencia de orden invertido, y ahora en ese nuevo orden las escriba en un nuevo archivo. Por ejemplo, el programa
 * recuperará la última cadena del archivo del punto previo y la escribirá en el nuevo archivo como primera línea, luego
 * leerá la penúltima cadena del archivo y la escribirá como 2da línea y así sucesivamente.
 * */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
  FILE *source, *inversed;
  char c;

  if ((source = fopen("destination.txt", "r")) == NULL)
  {
    perror("No se pudo abrir el archivo de origen");
    return EXIT_FAILURE;
  }

  if ((inversed = fopen("inversed.txt", "w")) == NULL)
  {
    perror("No se pudo abrir el archivo de origen");
    return EXIT_FAILURE;
  }

  int i = 0, j = 0;

  char **content = malloc(sizeof(char *));
  char *temp = malloc(sizeof(char));

  while ((c = getc(source)) != EOF)
  {
    if (c == '\n')
    {
      temp[i] = c;
      temp = realloc(temp, (i + 1) * sizeof(char));
      temp[i + 1] = '\0';

      content = realloc(content, (j + 1) * sizeof(char *));
      content[j] = malloc(strlen(temp) * sizeof(char));
      strcpy(content[j], temp);
      temp = NULL;
      i = 0;
      j++;
    }
    else
    {
      temp = realloc(temp, (i + 1) * sizeof(char));
      temp[i] = c;
      i++;
    }
  }

  for (int i = (j - 1); i >= 0; i--)
  {
    for (int n = 0; n < strlen(content[i]); n++)
    {
      putc(content[i][n], inversed);
    }
  }

  if (fclose(source) != 0)
  {
    perror("Error al cerrar el archivo");
    return EXIT_FAILURE;
  }

  if (fclose(inversed) != 0)
  {
    perror("Error al cerrar el archivo");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
