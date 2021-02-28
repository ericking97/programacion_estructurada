/**
 * Extienda el programa previo para implementar la recuperación de números de teléfono para un apellido de persona
 * consultado. El programa debe permitir peticiones de agregar número de teléfono o nombres asociados si no existen en
 * registros incompletos, y también debe permitir el borrar registros/entradas existentes, i.e., dar de baja un registro.
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

FILE *diary;

person *list(int *size)
{
  if ((diary = fopen("diary.txt", "r")) == NULL)
  {
    perror("Error al abrir o crear el archivo");
  }

  char c;
  char *word = malloc(sizeof(char));
  person *data = malloc(sizeof(char));
  person temp;

  int i = 0, j = 0, k = 0;
  while ((c = getc(diary)) != EOF)
  {
    // Significa que llegamos al final de un record
    if (c == '\n')
    {
      // printf("\n%s %s %s\n", temp.firstname, temp.lastname, temp.phone);
      data = realloc(data, (j + 1) * sizeof(person));
      strcpy(data[j].firstname, temp.firstname);
      strcpy(data[j].lastname, temp.lastname);
      strcpy(data[j].phone, temp.phone);
      j++;
      k = 0;
    }
    else if (c == ',')
    {
      word = realloc(word, (i + 1) * sizeof(char));
      word[i] = '\0';

      switch (k)
      {
      case 0:
        strcpy(temp.firstname, word);
        break;
      case 1:
        strcpy(temp.lastname, word);
        break;
      case 2:
        strcpy(temp.phone, word);
        break;
      default:
        break;
      }
      // Empty content of word and reset it counter
      word = NULL;
      i = 0;
      // Increase the field we are filling
      k++;
    }
    else
    {
      word = realloc(word, (i + 1) * sizeof(char));
      word[i] = c;
      i++;
    }
  }

  free(word);

  if (fclose(diary) != 0)
  {
    perror("Error al cerrar el archivo");
  }

  *size = j;

  return data;
}

person create()
{
  if ((diary = fopen("diary.txt", "a")) == NULL)
  {
    perror("No se pueden añadir registros al archivo actualmente");
  }

  printf("Ingrese los datos.\n");

  person temp;
  char str[100];

  printf("Nombre: ");
  if (fgets(temp.firstname, 30, stdin) != NULL)
  {
    temp.firstname[strcspn(temp.firstname, "\n")] = 0;
  }

  printf("Apellido: ");
  if (fgets(temp.lastname, 30, stdin) != NULL)
  {
    temp.lastname[strcspn(temp.lastname, "\n")] = 0;
  }

  printf("Teléfono: ");
  if (fgets(temp.phone, 11, stdin) != NULL)
  {
    temp.phone[strcspn(temp.phone, "\n")] = 0;
  }

  sprintf(str, "%s,%s,%s,\n", temp.firstname, temp.lastname, temp.phone);
  fputs(str, diary);

  if (fclose(diary) != 0)
  {
    perror("Error al cerrar el archivo");
  }

  return temp;
}

person find(person *rows, int size, int *pos)
{
  char lastname[30];
  printf("Escriba el apellido a buscar:\n");

  if (fgets(lastname, 30, stdin) != NULL)
  {
    lastname[strcspn(lastname, "\n")] = 0;
  }
  for (int i = 0; i < size; i++)
  {
    if (strcmp(lastname, rows[i].lastname) == 0)
    {
      *pos = i;
      return rows[i];
    }
  }
}

person edit(person rows[], int size, int p)
{
  person row;
  printf("Persona: %s %s %s\n", rows[p].firstname, rows[p].lastname, rows[p].phone);

  printf("Nuevo nombre: ");
  if (fgets(row.firstname, 30, stdin) != NULL)
  {
    row.firstname[strcspn(row.firstname, "\n")] = 0;
  }

  printf("Nuevo apellido: ");
  if (fgets(row.lastname, 30, stdin) != NULL)
  {
    row.lastname[strcspn(row.lastname, "\n")] = 0;
  }

  printf("Nuevo teléfono: ");
  if (fgets(row.phone, 11, stdin) != NULL)
  {
    row.phone[strcspn(row.phone, "\n")] = 0;
  }

  rows[p] = row;

  if ((diary = fopen("diary.txt", "w")) == NULL)
  {
    perror("Error al abrir o crear el archivo");
  }

  for (int i = 0; i < size; i++)
  {
    char str[100];
    sprintf(str, "%s,%s,%s,\n", rows[i].firstname, rows[i].lastname, rows[i].phone);

    fputs(str, diary);
  }

  if (fclose(diary) != 0)
  {
    perror("Error al cerrar el archivo");
  }

  return row;
}

void *destroy(person rows[], int size, int p)
{
  if ((diary = fopen("diary.txt", "w")) == NULL)
  {
    perror("Error al abrir o crear el archivo");
  }

  for (int i = 0; i < size; i++)
  {
    if (i != p)
    {
      char str[100];
      sprintf(str, "%s,%s,%s,\n", rows[i].firstname, rows[i].lastname, rows[i].phone);

      fputs(str, diary);
    }
  }

  if (fclose(diary) != 0)
  {
    perror("Error al cerrar el archivo");
  }
}

int main()
{
  person *rows;
  int size;

  while (1)
  {
    int command;
    printf("¿Qué acción quieres realizar?\n  0. Salir\n  1. Listar todos los registros\n  2. Crear nuevo registro\n  3. Buscar por apellido\n  4. Editar por apellido\n  5. Borrar por apellido\n");
    scanf("%d", &command);

    char c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;

    if (command == 0)
    {
      break;
    }
    else if (command == 1)
    {
      rows = list(&size);
      printf("Datos registrados: \n");
      for (int i = 0; i < size; i++)
      {
        printf("[%d] %s %s %s\n", i, rows[i].firstname, rows[i].lastname, rows[i].phone);
      }
    }
    else if (command == 2)
    {
      person row = create();
      printf("%s, %s, %s\n", row.firstname, row.lastname, row.phone);
      rows = list(&size);
    }
    else if (command == 3)
    {
      rows = list(&size);
      int pos;
      person row = find(rows, size, &pos);
      printf("Resultado: %s, %s, %s\n", row.firstname, row.lastname, row.phone);
    }
    else if (command == 4)
    {
      rows = list(&size);
      int pos;
      find(rows, size, &pos);
      person row = edit(rows, size, pos);
      printf("Actualizado: %s, %s, %s\n", row.firstname, row.lastname, row.phone);
    }
    else if (command == 5)
    {
      rows = list(&size);
      int pos;
      find(rows, size, &pos);
      destroy(rows, size, pos);
    }
    else
    {
      printf("No has ingresado una opción válida");
    }
  }

  return EXIT_SUCCESS;
}