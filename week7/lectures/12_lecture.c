#include <stdio.h>

struct member
{
  char firstname[30];
  char lastname[40];
  char phone[10];
  int age;
};

// Recibe únicamente un parámetro
int sum(int age)
{
  return age + 20;
}

int main()
{
  struct member friend = {"Juan", "Villegas", "5583838383", 30};
  printf("Dentro de 20 años %s tendrá %i años", friend.firstname, sum(friend.age));

  return 0;
}