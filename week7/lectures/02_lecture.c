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
  // También pudo haberse definido de esta forma de querer mantener un scope
  // diferente:
  // struct member
  // {
  //   char firstname[30];
  //   char lastname[30];
  //   char phone[10];
  //   int age;
  // } friend;

  struct member friend;
  printf("Escriba el nombre: ");
  scanf("%s", friend.firstname);

  printf("Escriba el apellido: ");
  scanf("%s", friend.lastname);

  printf("Escriba el teléfono: ");
  scanf("%s", friend.phone);

  printf("Escriba la edad: ");
  scanf("%i", &friend.age);

  printf("%s %s tiene %d años y su teléfono es %s", friend.firstname, friend.lastname, friend.age, friend.phone);

  return 0;
}