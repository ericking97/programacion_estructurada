/**
 * Modifique el programa del punto anterior, tal que el programa enlace en un orden alfabético las estructuras
 * almacenadas, con base al nombre de la persona.
 * */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
  char firstname[50];
  char lastname[50];
  char phone[11];
} person;

void sort(person *u, int size)
{
  person temp;

  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (strcmp(u[i].firstname, u[j].firstname) > 0)
      {
        temp = u[i];
        u[i] = u[j];
        u[j] = temp;
      }
    }
  }
}

int main()
{
  int size;

  printf("Ingrese la cantidad de personas que deseas agregar: ");
  scanf("%d", &size);

  person data[size];
  person results[size];

  for (int i = 0; i < size; i++)
  {
    printf("Ingrese los datos para la persona %d:\n", i + 1);
    scanf("%s %s %s", data[i].firstname, data[i].lastname, data[i].phone);
  }

  sort(data, size);

  char field[20], value[20];
  printf("Qué deseas buscar? Opciones: nombre, apellido, telefono; Sintaxis: opcion valor\n");
  scanf("%s %s", field, value);

  int byFirstname = strcmp(field, "nombre");
  int byLastname = strcmp(field, "apellido");
  int byPhone = strcmp(field, "telefono");

  int j = 0;
  if (byFirstname == 0)
  {
    for (int i = 0; i < size; i++)
    {
      if (strcmp(value, data[i].firstname) == 0)
      {
        results[j] = data[i];
        j++;
      }
    }
  }
  else if (byLastname == 0)
  {
    for (int i = 0; i < size; i++)
    {
      if (strcmp(value, data[i].lastname) == 0)
      {
        results[j] = data[i];
        j++;
      }
    }
  }
  else if (byPhone == 0)
  {
    for (int i = 0; i < size; i++)
    {
      if (strcmp(value, data[i].phone) == 0)
      {
        results[j] = data[i];
        j++;
      }
    }
  }

  printf("Encontre los siguientes resultados: %d\n", j);
  for (int i = 0; i < j; i++)
  {
    printf("%s %s %s\n", results[i].firstname, results[i].lastname, results[i].phone);
  }

  return 0;
}