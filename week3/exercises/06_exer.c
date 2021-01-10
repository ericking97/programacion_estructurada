#include <stdio.h>

int main()
{
  int number;
  while (number != -1)
  {
    printf("Introduce un número\n");
    scanf("%i", &number);
  }

  return 0;
}