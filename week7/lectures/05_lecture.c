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
  struct member m = {"Martha", "Flores", "5576380918", 20};
  struct member *pm = &m;

  printf("%s\n", pm->firstname);
  printf("%s\n", pm->lastname);
  printf("%s\n", pm->phone);
  printf("%d\n", pm->age);

  return 0;
}