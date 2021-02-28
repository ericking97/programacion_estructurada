#include <stdio.h>

/**
 * Las uniones comparten el mismo espacio en la memoria
 * */
union person
{
  char name[10];
  char initial;
};

int main()
{
  union person p;

  printf("Escribe tu nombre: ");
  fgets(p.name, sizeof(p.name), stdin);
  printf("Tu nombre es: %s\n", p.name);
  printf("Tu inicial es: %c\n", p.initial);

  return 0;
}