#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 7

void sort(char *args[])
{
  char *temp;

  for (int i = 0; i < SIZE - 1; i++)
  {
    for (int j = i + 1; j < SIZE; j++)
    {
      if (strlen(args[i]) > strlen(args[j]))
      {
        temp = args[i];
        args[i] = args[j];
        args[j] = temp;
      }
    }
  }

  printf("Lista ordenada:\n");
  for (int i = 0; i < SIZE; i++)
  {
    printf("\t%s\n", args[i]);
  }
}

int main()
{
  char *sayings[SIZE];
  char input[100];

  printf("Ingrese 7 frases\n");
  for (int i = 0; i < SIZE; i++)
  {
    fgets(input, 100, stdin);
    sayings[i] = strndup(input, 100);
  }

  printf("Lista desordenada:\n");
  for (int i = 0; i < SIZE; i++)
  {
    printf("\t%s\n", sayings[i]);
  }

  sort(sayings);

  return 0;
}

/*
Las ideas se encienden unas con otras como las chispas eléctricas.
Los animales son de Dios. La bestialidad es humana.
La naturaleza benigna provee de manera que en cualquier parte halles algo que aprender.
El hombre se distingue de todas las demás criaturas por la facultad de reír.
En el amor no basta atacar, hay que tomar la plaza.
Yo siempre anduve paseando mi amor por todas partes, hasta que te encontré a ti y te lo di enteramente.
De lejos es mayor el respeto.
*/