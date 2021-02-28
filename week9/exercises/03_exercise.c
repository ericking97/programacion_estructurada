/**
 * Escriba un programa que lea nombres y números de teléfono desde el teclado y los escriba en un archivo que aún no
 * existe, pero que si ya existiera el archivo, agregue los nuevos datos capturados. Opcionalmente el programa debe
 * listar los datos capturados y todos los previos en el archivo si hubiere.
 * */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
  char firstname[30];
  char lastname[30];
  char phone[11];
} person;

int main()
{
  FILE *diary;

  if ((diary = fopen("diary.txt", "a")) == NULL)
  {
    perror("Error al abrir o crear el archivo");
    return EXIT_FAILURE;
  }

  printf("Registre el número de personas que quiera.\n");

  for (int i = 0; i >= 0; i++)
  {
    char str[100];
    person temp;

    printf("[%d].nombre: ", (i + 1));
    if (fgets(temp.firstname, 30, stdin) != NULL)
    {
      temp.firstname[strcspn(temp.firstname, "\n")] = 0;
    }

    printf("[%d].apellido: ", (i + 1));
    if (fgets(temp.lastname, 30, stdin) != NULL)
    {
      temp.lastname[strcspn(temp.lastname, "\n")] = 0;
    }

    printf("[%d].telefono: ", (i + 1));
    if (fgets(temp.phone, 11, stdin) != NULL)
    {
      temp.phone[strcspn(temp.phone, "\n")] = 0;
    }

    sprintf(str, "%s,%s,%s,\n", temp.firstname, temp.lastname, temp.phone);

    fputs(str, diary);

    int c;
    char command;
    printf("¿Continuar? (s/n): ");
    command = getchar();

    if (command == 'n')
    {
      break;
    }

    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }

  if (fclose(diary) != 0)
  {
    perror("Error al cerrar el archivo");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}