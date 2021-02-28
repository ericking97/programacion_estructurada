#include <stdio.h>

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
  printf("Tu nombre es: %s", p.name);
  printf("Tu inicial es: %c", p.initial);

  p.initial = 'R';
  printf("\nNombre actualizado: %s", p.name);
  printf("\nInicial actualizada: %c", p.initial);

  return 0;
}