/**
 * Defina una función que regrese el número de palabras en una cadena que sea pasada como un argumento. Las palabras
 * son separadas por espacios en blanco, o carácteres de puntuación. Asumiendo que la cadena no contiene comillas
 * simples o dobles.
 *
 * a. Defina una segunda función para que segmente una cadena que le sea pasada como primer argumento a la función en
 *    palabras, y regrese las palabras almacenadas en arrays que sean pasadas como 2do argumento.
 *
 * b. Defina una tercer función para implementar un programa que lea una cadena con texto desde el teclado, y la salida
 *    sea todas las palabras del texto ingresado ordenado de las más cortas a las más largas.
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *scan()
{
  int len = 1;
  int size = 0;
  char *sentence = malloc(len * sizeof(char));
  char c;

  while ((c = getchar()) != '\n')
  {
    if (size >= len)
    {
      sentence = realloc(sentence, (len += 1) * sizeof(char));
    }
    sentence[size] = c;
    sentence[size + 1] = '\0';
    size++;
  }

  return sentence;
}

int count(char *s)
{
  char *p = s;
  int words = 1;

  while (*p != '\0')
  {
    if ((*p == ' ') || (*p == '.') || (*p == ',') || (*p == ';'))
    {
      words++;
    }
    p++;
  }

  return words;
}

// "Anita lava la tina"
// [char char char char]
void split(char *s, char **t)
{
  char *n = malloc(strlen(s) * sizeof(char));
  strcpy(n, s);

  char *p = n;
  char *delimiter = " ";

  char *token = strtok(p, delimiter);

  int i = 0;
  while (token != NULL)
  {
    t[i] = malloc(strlen(token) * sizeof(char));
    t[i] = token;
    token = strtok(NULL, delimiter);
    i++;
  }

  // free(n);
}

void sort(char **u, int size)
{
  char *temp;

  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      int ith = strlen(u[i]);
      int jth = strlen(u[j]);

      if (ith > jth)
      {
        temp = u[i];
        u[i] = u[j];
        u[j] = temp;
      }
    }
  }
}

int main()
{
  printf("Ingrese una cadena de palabras\n");

  char *sentence = scan();
  // char *sentence = "Anita lava la tina 3 veces por semana";

  printf("Texto ingresado: %s\n", sentence);

  int c = count(sentence);

  printf("Número de palabras: %d\n", c);

  // printf("Texto ingresado: %s\n", sentence);

  char **n = malloc(c * sizeof(char *));
  /*
  [char char char char]
  ["Anita", "lava", "la", "tina"]
  */

  split(sentence, n);

  // printf("Texto ingresado: %s\n", sentence);

  printf("Texto separado\n");
  for (int i = 0; i < c; i++)
  {
    printf("Pos %i, %s\n", i, n[i]);
  }

  sort(n, c);

  printf("Lista ordenada\n");
  for (int i = 0; i < c; i++)
  {
    printf("%i %s\n", i, n[i]);
  }

  return 0;
}