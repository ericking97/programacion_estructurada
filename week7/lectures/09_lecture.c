#include <stdio.h>

struct member
{
  char firstname[30];
  char lastname[40];
  char phone[10];
  int age;
};

// Pasamos la estructura como argumento de la función
int sum(struct member m)
{
  return m.age + 20;
}

int main()
{
  struct member friend = {"Juan", "Villegas", "5583838383", 30};
  printf("Dentro de 20 años %s tendrá %i años", friend.firstname, sum(friend));

  return 0;
}