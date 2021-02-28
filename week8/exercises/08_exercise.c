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
  int c, i = 0;
  char *string = malloc(sizeof(char));
  string[0] = '\0';

  while ((c = getchar()) != '\n' && c != EOF)
  {
    string = realloc(string, (i + 2) * sizeof(char));
    string[i] = (char)c;
    string[i + 1] = '\0';
    i++;
  }

  return string;
}

void duplicates(char *str)
{
  ocurrence *ocurrences = malloc(sizeof(ocurrence));
  char *word = malloc(sizeof(char));

  int j = 0, i = 0;
  for (int n = 0; n <= strlen(str); n++)
  {
    char temp = str[n];

    if (temp == ' ' || n == strlen(str))
    {
      int inArray = FALSE;
      int p;
      for (int k = 0; k < j; k++)
      {
        if (strcmp(ocurrences[k].word, word) == 0)
        {
          p = k;
          inArray = TRUE;
        }
      }

      if (inArray)
      {
        ocurrences[p].times++;
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
    else if ((temp >= 65 && temp <= 90) || (temp >= 97 && temp <= 122))
    {
      word = realloc(word, (i + 1) * sizeof(char));
      word[i] = tolower(temp);
      i++;
    }
  }

  for (int i = 0; i < j; i++)
  {
    printf("\n%s: %i", ocurrences[i].word, ocurrences[i].times);
  }
}

int main()
{
  printf("Escriba algo:\n");
  char *text = scan();

  duplicates(text);

  return EXIT_SUCCESS;
}