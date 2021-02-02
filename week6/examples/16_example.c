#include <stdio.h>
#include <string.h>
#define SIZE 5

int main()
{
  char *sayings[] = {
      "La avaricia rompe el saco",
      "Más vale pajaro en mano que ciento volando",
      "No por mucho madrugar amanece más temprano",
      "Año de nieves, año de bienes",
      "A caballo regalado no le mires el diente"};
  char *temp;

  printf("Lista desordenada: \n");

  for (int i = 0; i < SIZE; i++)
  {
    printf("%s \n", sayings[i]);
  }

  for (int i = 0; i < SIZE - 1; i++)
  {
    for (int j = i + 1; j < SIZE; j++)
    {
      if (strcmp(sayings[i], sayings[j]) > 0)
      {
        temp = sayings[i];
        sayings[i] = sayings[j];
        sayings[j] = temp;
      }
    }
  }

  printf("Lista ordenada: \n");
  for (int i = 0; i < SIZE; i++)
  {
    printf("%s.\n", sayings[i]);
  }

  return 0;
}
