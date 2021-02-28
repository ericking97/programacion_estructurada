/**
 * Defina una función que acepte un array de punteros a cadenas como un argumento, y regrese un puntero
 * a una cadena que contenga todas las cadenas juntas en una única cadena, terminada por el carácter
 * de retorno o de nueva línea.
 *
 * Si en una cadena de origen en el array de entrada tiene el carácter de nueva línea como su último
 * carácter, la función no debe de agregar otro caracter más de ese tipo.
 *
 * Escriba un programa para demostrar el funcionamiento de esta función, tal que lea un número de cadenas
 * desde el teclado y regrese imprimiendo en pantalla la cadena resultante combinada.
 * */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *scan()
{
  int len = 1;
  int size = 0;
  char *sentence = malloc(len * sizeof(char));
  char c;

  fflush(stdin);

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

char *concat(char **m, int size)
{
  int characters = 0;

  for (int i = 0; i < size; i++)
  {
    characters += strlen(m[i]);
  }

  char *res = malloc(characters * sizeof(char));

  for (int i = 0; i < size; i++)
  {
    strcat(res, m[i]);
  }

  return res;
}

int main()
{
  int size;
  printf("¿Cuántas frases quieres escribir? ");
  scanf("%d", &size);
  char *m[size];
  char ch;

  while ((ch = getchar()) != '\n')
    ;

  for (int i = 0; i < size; i++)
  {
    char *text = scan();
    m[i] = malloc(strlen(text) * sizeof(char));
    m[i] = text;
  }

  char *sentence = concat(m, size);

  printf("Frase concatenada: %s", sentence);

  return 0;
}