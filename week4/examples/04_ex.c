#include <stdio.h>

// Dirección en memoria de los arrays, recordemos que se almacen en memoria de
// forma consecutiva
void memory()
{
  int temp[24];
  for (int i = 0; i < 24; i++)
  {
    printf("Dirección en memoria del elemento %i es: %p\n", i, (void *)&temp[i]);
  }
}

// Al sumarle 1 al puntero, se desplaza la cantidad de bytes correspondientes
// acorde al tipo de dato.
void address()
{
  int temp[24], *punt;
  punt = temp;
  for (int i = 0; i < 24; i++, punt++)
  {
    printf("Dirección en memoria de temp[%i] es %p y su apuntador es %p\n", i, (void *)&temp[i], (void *)punt);
  }
}

// Tomar en cuenta que al modificar el puntero, este ya no apunta al inicio del
// arreglo.
void reference()
{
  int temp[6] = {12, 41, 2, 43, 64, 9};
  int *punt;
  punt = temp;
  for (int i = 0; i < 6; i++, punt++)
  {
    printf("Valor de %i es: %i\n", i, *punt);
  }
}

// La forma correcta de hacer sería la siguiente y evitamos modificar la dirección
// del puntero
void reference2()
{
  int temp[6] = {12, 41, 2, 43, 64, 9};
  int *punt;
  punt = temp;
  for (int i = 0; i < 6; i++)
  {
    printf("Valor de %i es: %i\n", i, *(punt + i));
  }
}

int main()
{
  memory();
  address();
  reference();
  reference2();
}
