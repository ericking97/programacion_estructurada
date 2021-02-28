/**
 * Malloc (Memory Allocate) busca una parte de la memoria y devuelve la dirección del comienzo de esa memoria.
 * Esta dirección podemos almacenarla en un puntero, y así acceder a la memoria reservada.
 *
 * Debemos específicar un molde o casting (type *) ya que la función malloc nos devuelve un puntero de tipo void.
 *
 * Si no hay suficiente memoria libre, malloc devuelve NULL.
 *
 * Cuando ya no necesitemos el espacio reservado lo liberamos con free(pointer)
 * */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size;
  printf("¿Cuántos bytes quieres reservar?");
  scanf("%d", &size);

  char *text = malloc(size * sizeof(char));

  if (text)
  {
    printf("Memoria reservada: %d bytes = %f kb = %f mb\n", size, (float)size / 1024, (float)size / (1024 * 1024));
    printf("El bloque comienza en la dirección: %p\n", (void *)text);
    free(text);
  }
  else
  {
    printf("No se ha podido reservar memoria\n");
  }

  return 0;
}