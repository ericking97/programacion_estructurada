#include <stdio.h>

void temperature();
void overflow();
void underflow();
void freeSpace();

int main()
{
  // underflow();
  // overflow();
  // freeSpace();
  size();
}

// Los arreglos nos permiten guardar n cantidad de datos, los cuáles se distinguen
// entre si por sus respectivos índices.
void temperature()
{
  int temp[24];
  float promedio = 0;

  for (int i = 0; i < 24; i++)
  {
    printf("Temperatura de las %i: ", i);
    scanf("%d", &temp[i]);
    promedio += temp[i];
  }
  promedio = promedio / 24;
  printf("\nLa temperatura media es %f\n", promedio);

  for (int i = 0; i < 24; i++)
  {
    printf("La temperatura de %i es de %i grados\n", i, temp[i]);
  }
}

// Si tenemos menos valores que de los cuales queremos iterar, estos tomarán
// su valor default
void underflow()
{
  int items[5] = {10, 9};
  for (int i = 0; i < 5; i++)
  {
    printf("Valor de %i: %i\n", i, items[i]);
  }
}

// Si tenemos más valores, solo obtenemos una advertencia al momento de compilar
void overflow()
{
  int items[5] = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < 5; i++)
  {
    printf("Valor de %i: %i\n", i, items[i]);
  }
}

// Si declaramos un arreglo sin tamaño como parámetro, se ajusta dependiendo
// de los objetos que tenga.
void freeSpace()
{
  int items[] = {1, 2, 3, 4, 5};
  printf("tamaño: %d\n", sizeof items);
  for (int i = 0; i < 10; i++)
  {
    printf("Valor de %i: %i\n", i, items[i]);
  }
}

//
void size()
{
  int items, temp[] = {14, 16, 16, 17, 14, 13};
  printf("temp size: %i\nint size: %i\n", sizeof(temp), sizeof(int));
  items = sizeof(temp) / sizeof(int);
  for (int i = 0; i < items; i++)
  {
    printf("El elemento %d, tiene valor de %d\n", i, temp[i]);
  }
  printf("Tamaño %d\n", items);
}