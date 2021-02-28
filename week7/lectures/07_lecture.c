#include <stdio.h>
#define SIZE 3

struct member
{
  char firstname[30];
  char lastname[30];
  char phone[10];
  int age;
};

struct member members[] = {
    {"Martha", "Flores", "5576380918", 20},
    {"Carolina", "Fuentes", "5517648102", 21},
    {"Fernanda", "Ramos", "7778189054", 23}};

int main()
{
  struct member *pmembers = members;

  for (int i = 0; i < SIZE; i++)
  {
    printf("%s %s tiene %d años y su teléfono es %s\n", pmembers->firstname, pmembers->lastname, pmembers->age, pmembers->phone);
    pmembers++;
  }

  return 0;
}