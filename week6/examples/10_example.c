#include <stdio.h>

int main()
{
  char firstName[20], lastName[20];

  printf("Escribe tu nombre: ");
  scanf("%s", firstName);

  printf("Escribe tu apellido: ");
  while (getchar() != '\n')
    ;
  fgets(lastName, 20, stdin);

  return 0;
}