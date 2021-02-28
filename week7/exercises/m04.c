#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contar(char *cadena)
{
  char *p = cadena;
  int j = 1;
  while (*p != '\0')
  {
    if (*p == ' ')
      j++;
    p++;
  }
  return j;
}

void separar(char *cadena, char **arreglo)
{
  // ["Anita", "lava", "la", "tina"]
  // Reservamos espacio en memoria para nueva, del mismo tamaño que nuestra variable cadena
  // Copiamos, el contenido de cadena a nueva
  char *nueva = malloc(strlen(cadena) * sizeof(char));
  strcpy(nueva, cadena);

  // Declaramos nuestro apuntador a la cadena nueva.
  // Declaramos nuestro delimitador.
  char *apuntador = nueva;
  char *delimitador = " ";

  // La funcion strtok, regresa el contenido de un string hasta que encuentre un delimitador
  char *palabra = strtok(apuntador, delimitador);
  // Anita
  // Declaramos nuestro contador
  int i = 0;
  // Iniciamos nuestro ciclo
  while (palabra != NULL)
  {
    // Reservamos memoria en el elemento i, de nuestro arreglo
    arreglo[i] = malloc(strlen(palabra) * sizeof(char));
    // Ok, ahora puedo guardar la palabra
    arreglo[i] = palabra;
    palabra = strtok(NULL, delimitador);
    i++;
  }
}

void ordenar(char **arreglo, int tamano)
{
  char *temporal;

  for (int i = 0; i < tamano; i++)
  {
    for (int j = i + 1; j < tamano; j++)
    {
      if (strlen(arreglo[i]) > strlen(arreglo[j]))
      {
        temporal = arreglo[i];
        arreglo[i] = arreglo[j];
        arreglo[j] = temporal;
      }
    }
  }
}

int main()
{
  char cad[500];
  printf("Ingrese un texto: \n");
  gets(cad);
  int palabras = contar(cad);
  printf("Cantidad de Palabras: %d\n", palabras);

  // reservamos memoria para nuestro arreglo de palabras
  // reservamos palabras * espacio en memoria que ocupe el apuntador de un char

  // string -> "Hola como estas"
  // string -> ["H", "o", "l", "a" ...]
  // chars -> H
  char **lista = malloc(palabras * sizeof(char *));

  separar(cad, lista);

  for (int i = 0; i < palabras; i++)
  {
    printf("%i %s\n", i, lista[i]);
  }

  // aquie
  ordenar(lista, palabras);

  printf("Lista ordenada\n");

  for (int i = 0; i < palabras; i++)
  {
    printf("%i %s\n", i, lista[i]);
  }
  // Aca

  return 0;
}
