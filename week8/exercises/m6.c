#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
  // int id; // 1,2,3,4,5,6,7,8,9,10
  char nombre[20];
  char apellido[30];
  char telefono[11];
} persona_t;

void ordenar(persona_t *p, int c)
{
  persona_t temporal;

  for (int i = 0; i < c; i++)
  {
    for (int j = i + 1; j < c; j++)
    {
      if (strcmp(p[i].nombre, p[j].nombre) > 0)
      {
        temporal = p[i];
        p[i] = p[j];
        p[j] = temporal;
      }
    }
  }
}

int main()
{
  int c; // i = numero de persona, c = cantidad
  printf("Ingresa la cantidad de personas que deseas agregar:");
  scanf("\n%d", &c);

  persona_t persona[c]; // Que es lo que contiene

  for (int i = 0; i < c; i++)
  {
    printf("\n Datos de la persona numero %i: \n", i + 1);
    printf("Nombre: ");
    fflush(stdout);
    scanf("%s", persona[i].nombre);
    printf("Apellido: ");
    fflush(stdout);
    scanf("%s", persona[i].apellido);
    printf("Telefono: ");
    fflush(stdout);
    scanf("%s", persona[i].telefono);
  }

  // Lista desordenada
  ordenar(persona, c);
  // Lista ordenada

  // Un arreglo siempre tiene la direccion en memoria de su inicio
  char query[20];  // nombre, apellido, telefono
  char buscar[20]; // valor del campo

  printf("Mediante que campo quieres buscar (nombre, apellido, telefono): ");
  scanf("%s", query);

  printf("Introduce lo que deseas buscar: ");
  scanf("%s", buscar);

  if (strcmp(query, "nombre") == 0)
  {
    for (int i = 0; i < c; i++)
    {
      if (strcmp(buscar, persona[i].nombre) == 0)
      {
        printf("Ya encontre al usuario: %s %s %s\n", persona[i].nombre, persona[i].apellido, persona[i].telefono);
      }
    }
  }
  else if (strcmp(query, "apellido") == 0)
  {
    for (int i = 0; i < c; i++)
    {
      if (strcmp(buscar, persona[i].apellido) == 0)
      {
        printf("Ya encontre al usuario: %s %s %s\n", persona[i].nombre, persona[i].apellido, persona[i].telefono);
      }
    }
  }
  else if (strcmp(query, "telefono") == 0)
  {
    for (int i = 0; i < c; i++)
    {
      if (strcmp(buscar, persona[i].telefono) == 0)
      {
        printf("Ya encontre al usuario: %s %s %s\n", persona[i].nombre, persona[i].apellido, persona[i].telefono);
      }
    }
  }
  else
  {
    //no me diste una opcion correcta dios.
  }

  return 0;
}
