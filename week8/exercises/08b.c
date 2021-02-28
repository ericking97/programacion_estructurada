/**
 * Escriba un programa que use una estructura para contar el número de ocurrencias o apariciones de una palabra en un
 * párrafo de texto, ingresado desde el teclado. A la salida muestre una lista de cada palabra indicando un contador de
 * las veces que aparece en el texto ingresado.
 * */
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TRUE (1 == 1)
#define FALSE (!TRUE)

typedef struct
{
  char *word;
  int times;
} ocurrence;

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

int main()
{
  FILE *f;

  if ((f = fopen("input.txt", "r")) == NULL)
  {
    perror("input.txt");
    return EXIT_FAILURE;
  }

  printf("Contenido: \n");

  // char **ocurrences = malloc(sizeof(char));

  ocurrence *ocurrences = malloc(sizeof(ocurrence));
  char *word = malloc(sizeof(char));
  int l, i = 0, j = 0;
  while ((l = getc(f)) != EOF)
  {
    if (l == ' ')
    {
      int inArray = FALSE;
      int pos;
      for (int k = 0; k < j; k++)
      {
        if (strcmp(ocurrences[k].word, word) == 0)
        {
          pos = k;
          inArray = TRUE;
        }
      }

      if (inArray)
      {
        ocurrences[pos].times++;
      }
      else
      {
        ocurrences = realloc(ocurrences, (j + 1) * sizeof(ocurrence));
        ocurrences[j].word = malloc(strlen(word) * sizeof(char));
        strcpy(ocurrences[j].word, word);
        ocurrences[j].times = 1;
        j++;
      }
      i = 0;
      word = NULL;
    }
    else if ((l >= 65 && l <= 90) || (l >= 97 && l <= 122))
    {
      word = realloc(word, (i + 1) * sizeof(char));
      word[i] = tolower(l);
      i++;
    }
  }

  if (fclose(f) != 0)
  {
    perror("input.txt");
    return EXIT_FAILURE;
  }

  for (int i = 0; i < j; i++)
  {
    printf("\n %i %s", ocurrences[i].times, ocurrences[i].word);
  }

  return EXIT_SUCCESS;
}