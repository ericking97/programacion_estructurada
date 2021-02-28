/**
 * Escriba un programa que escriba un número arbitrario de cadenas hacia un archivo. Las cadenas deben ser ingresadas
 * desde el teclado, y el programa no debe borrar el archivo ya que se usará posteriormente.
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 200

int main()
{
  FILE *destination;

  if ((destination = fopen("destination.txt", "w")) == NULL)
  {
    perror("Error al abrir o crear el archivo");
    return EXIT_FAILURE;
  }

  printf("Escriba exit para salir, el máximo de caracteres por línea es %d\n", MAX);
  char str[MAX];

  while (1)
  {
    fgets(str, MAX, stdin);
    if (strcmp(str, "exit\n") == 0)
    {
      break;
    }
    fputs(str, destination);
  }

  if (fclose(destination) != 0)
  {
    perror("Error al cerrar el archivo");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}

/*
Lorem ipsum dolor sit amet, consectetur adipiscing elit,
sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
Id venenatis a condimentum vitae sapien.
Lorem mollis aliquam ut porttitor leo.
*/