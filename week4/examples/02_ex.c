#include <stdio.h>

void pointerBasic();
void pointerAsArguments();
void sum();

int main()
{
  pointerBasic();
  pointerAsArguments();
}

// Usando un puntero podemos leer/cambiar el valor de otra variable
void pointerBasic()
{
  char n1, n2, *p1, *p2;

  // En este ejemplo podemos leer el valor de n1 mediante el puntero p1
  n1 = 43;
  p1 = &n1;
  printf("Dirección en memoria: %p\nValor: %d\n", (void *)&n1, *p1);

  // En este ejemplo le asignamos un valor a n2 mediante el puntero p2
  p2 = &n2;
  *p2 = 30;
  printf("Dirección en memoria: %p\nValor: %d\n", (void *)&n2, n2);

  // Podemos verificar que los punteros tienen la misma dirección que sus
  // contrapartes
  if (p1 == &n1)
  {
    printf("p1 y n1 tienen la misma dirección en memoria\n");
  }
  if (p2 == &n2)
  {
    printf("p2 y n2 tienen la misma dirección en memoria\n");
  }

  // No confundir con direcciónes con valor de variables, la condición siguiente
  // regresará falso.
  if (p1 == p2)
  {
    printf("p1 y p2 son iguales\n");
  }
  else
  {
    printf("p1 y p2 apuntan a direcciones diferentes en memoria.\n");
  }
}

// Podemos mandar punteros como argumentos de funciones para modificar
// valores fuera de su scope
void pointerAsArguments()
{
  int v1 = 5, v2 = 8, total;
  sum(v1, v2, &total);
  printf("La suma es %d\n", total);
}

void sum(int v1, int v2, int *total)
{
  *total = v1 + v2;
}