#include <stdio.h>
/**
 * Las estructuras nos permiten expresar un tipo de dato conformado por otros
 * */
struct member
{
  char firstname[30];
  char lastname[30];
  char phone[10];
  int age;
};

int main()
{
  struct member friend;
  struct member *pfriend = &friend;

  printf("Escriba el nombre: ");
  scanf("%s", pfriend->firstname);

  printf("Escriba el apellido: ");
  scanf("%s", pfriend->lastname);

  printf("Escriba el teléfono: ");
  scanf("%s", pfriend->phone);

  printf("Escriba la edad: ");
  scanf("%i", &pfriend->age);

  printf("%s %s tiene %d años y su teléfono es %s", friend.firstname, friend.lastname, friend.age, friend.phone);

  return 0;
}