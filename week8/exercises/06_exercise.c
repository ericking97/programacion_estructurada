/**
 * Defina un tipo de estructura que contenga el nombre de una persona con los datos: nombre, apellido y número
 * telefónico. Use esta estructura en un programa que permita uno o más nombres de personas con sus datos
 * correspondientes, y los almacene en un array de estructuras.
 *
 * Su programa debe permitir la consulta de un nombre o apellido, y devolver el número telefónico de esa persona
 * consultada, y también si la consulta es por el número telefónico, regrese las personas con ese número, y si hay
 * dos personas con el mismo número telefónico, debe mostrar a todas las personas con el mismo número telefónico.
 *
 * Pruebe con registros que compartan el mismo número telefónico para esta prueba y muestre las ptanallas de sus
 * resultados
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