// Este programa se encarga de reemplazar los espacios por saltos de línea.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Opción 1:
// Definimos un string con una longitud hardcodeada, esperando que el input
// sea menor a lo que estamos definiendo
// int main()
// {
//   char sentence[100];
//   printf("Ingrese una frase: ");
//   fgets(sentence, 100, stdin);

//   char *p = sentence;

//   while (*p != '\0')
//   {
//     if (*p == ' ')
//     {
//       *p = '\n';
//     }
//     p++;
//   }

//   printf("Frase ingresada: \n%s", sentence);

//   return 0;
// }

// Opción 2:
// Alteramos el tamaño de nuestro de forma dinámica, ajustando el tamaño de
// memoria según nuestas necesidades.
int main()
{
  int length = 1;
  int size = 0;
  char *sentence = malloc(length * sizeof(char)); // Alojamos memoria para hasta 100 chars.
  char c;

  printf("Ingrese una frase:");

  while ((c = getchar()) != '\n')
  {
    if (size >= length)
    {
      sentence = realloc(sentence, (length += 1) * sizeof(char));
    }
    sentence[size] = c;
    size++;
  }

  char *p = sentence;

  while (*p != '\0')
  {
    if (*p == ' ')
    {
      *p = '\n';
    }
    p++;
  }

  printf("Frase ingresada:\n%s", sentence);

  return 0;
}