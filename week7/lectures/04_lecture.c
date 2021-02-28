#include <stdio.h>
#define SIZE 3

struct member
{
  char firstname[30];
  char lastname[30];
  char phone[11];
  // int age;
};

int main()
{
  struct member members[] = {
      {"Martha",
       "Flores",
       "5576380918",
       20},
      {"Carolina",
       "Fuentes",
       "5510101010",
       21},
      {"Fernanda",
       "Ramos",
       "7778189054",
       23}};

  for (int i = 0; i < SIZE; i++)
  {
    printf("%s %s %s\n", members[i].firstname, members[i].lastname, members[i].phone);
    // printf("%s %s %s %d\n", members[i].firstname, members[i].lastname, members[i].phone, members[i].age);
  }

  return 0;
}