#include <stdio.h>
#include <string.h>

struct member
{
  char firstname[30];
  char lastname[40];
  char phone[10];
  int age;
};

void update(struct member *m)
{
  strcpy(m->firstname, "Alberto");
  m->age = 20;
}

int main()
{
  struct member friend = {"Juan", "Villegas", "5583838383", 30};
  update(&friend);
  printf("Datos %s %s %s %i", friend.firstname, friend.lastname, friend.phone, friend.age);

  return 0;
}