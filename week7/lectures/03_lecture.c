#include <stdio.h>
#define SIZE 3

struct member
{
  char firstname[30];
  char lastname[30];
  char phone[10];
  int age;
};

int main()
{
  struct member members[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    printf("Escriba el nombre: ");
    scanf("%s", members[i].firstname);

    printf("Escriba el apellido: ");
    scanf("%s", members[i].lastname);

    printf("Escriba el teléfono: ");
    scanf("%s", members[i].phone);

    printf("Escriba la edad: ");
    scanf("%i", &members[i].age);
  }

  for (int i = 0; i < SIZE; i++)
  {
    printf("%s %s tiene %d años y su teléfono es %s", members[i].firstname, members[i].lastname, members[i].age, members[i].phone);
  }

  return 0;
}