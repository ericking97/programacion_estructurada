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
  struct member *pmembers = members;

  for (int i = 0; i < SIZE; i++)
  {
    printf("Escriba el nombre: ");
    scanf("%s", pmembers->firstname);

    printf("Escriba el apellido: ");
    scanf("%s", pmembers->lastname);

    printf("Escriba el teléfono: ");
    scanf("%s", pmembers->phone);

    printf("Escriba la edad: ");
    scanf("%i", &pmembers->age);
    pmembers++;
  }

  pmembers = members;
  for (int i = 0; i < SIZE; i++)
  {
    printf("%s %s tiene %d años y su teléfono es %s\n", pmembers->firstname, pmembers->lastname, pmembers->age, pmembers->phone);
    pmembers++;
  }

  return 0;
}