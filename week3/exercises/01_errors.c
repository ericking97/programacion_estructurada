#include <stdio.h>

int main()
{
  int number;
  printf("Introduce un número:\n");
  scanf("%d", number); // Necesitamos enviarle la dirección de la variable number
  printf("Has introducido el número %d", number);
  return 0;
}