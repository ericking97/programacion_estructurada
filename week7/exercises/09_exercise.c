/**
 * Una función con el prototipo
 *
 * char *to_string(int count, double first, ...);
 *
 * Esta función debe regresar una cadena que contenga las representaciones en cadena del segundo y subsecuentemente
 * argumentos, cada uno con dos decimales y separados por comas. El primer argumento es un contador del número de
 * argumentos que le siguen. Escriba un programa que use esta función desde main para demostrar su operación
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

char *to_string(int count, double first, ...)
{
  va_list list;
  char *response = malloc(count * 5 * sizeof(double));

  va_start(list, count);

  for (int i = -1; i < count - 1; i++)
  {
    char *temp;
    int l;
    if (i == -1)
    {
      l = snprintf(NULL, 0, "%lf", first);
      temp = malloc((l + 1) * sizeof(char));
      sprintf(temp, "%0.2lf ", first);
    }
    else
    {
      double d = va_arg(list, double);
      l = snprintf(NULL, 0, "%lf", d);
      temp = malloc((l + 1) * sizeof(char));
      sprintf(temp, "%0.2lf ", d);
    }

    strcat(response, temp);
    free(temp);
  }

  va_end(list);

  return response;
}

int main()
{
  char *text = to_string(5, 9.0008, 10.827, -29.983, 30.0, 829.019);
  printf("Cadena escrita convertida a string: %s", text);

  return 0;
}