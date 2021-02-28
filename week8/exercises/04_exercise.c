/**
 * Escriba un programa que lea valores númericos con valores decimales en una sola línea, con el formato como se muestra
 * en el ejemplo, y regrese la suma total en ese mismo formato:
 *
 * $3.5, $4.75, $9.15, $2.35, $90.0
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  // Recibimos input
  char input[100];
  printf("Ingrese los números: ");
  fgets(input, 100, stdin);

  double total = 0;
  char *word = malloc(sizeof(char));
  // {0,}
  int j = 0;
  for (int i = 0; i <= strlen(input); i++)
  {
    char c = input[i];

    if (c == ' ' || i == strlen(input))
    {
      total += atof(word);
      j = 0;
      word = NULL;
    }
    else if ((c >= 48 && c <= 57) || c == 46)
    {
      word = realloc(word, (j + 1) * sizeof(char));
      word[j] = c;
      j++;
    }
  }

  printf("El total es de $%0.2lf", total);

  return 0;
}