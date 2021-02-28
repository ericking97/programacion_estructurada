/**
 * Agenda.
 * 1. Typedef.
 * Podemos crear nombres para los tipos de datos ya existentes.
 * Para definir nuestros propios tipos de datos debemos usar typedef
 * typedef tipo_de_variable nombre;
 *
 * 2. Punteros.
 * Podemos crear punteros hacia estas estructuras
 *
 * 3. Arrays.
 * Podemos crear arreglso
 *
 * 4. Estructuras
 * */

#include <stdio.h>

typedef struct
{
  char firstname[30];
  char lastname[30];
  char phone[10];
  int age;
} member;

int sum(member m)
{
  return m.age + 20;
}

int main()
{
  member m = {"Gabi", "Aero", "5578980210", 24};
  printf("%s tiene ", m.firstname);
  printf("%i años ", m.age);
  printf("y dentro de 20 años tendrá %i\n", sum(m));

  return 0;
}
