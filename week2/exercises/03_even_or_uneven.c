#include <stdio.h>

void main()
{
  int x;

  printf("Enter a number: \n");
  scanf("%i", &x);

  if (x % 2 == 0)
  {
    printf("The number is even");
  }
  else
  {
    printf("The number is uneven");
  }
}