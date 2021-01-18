#include <stdio.h>

int main()
{
  int numbers[10];
  printf("Enter 10 numbers: \n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%i", &numbers[i]);
  }
  printf("Inversed numbers: ");
  for (int i = 9; i >= 0; i--)
  {
    printf("%i ", numbers[i]);
  }
  return 0;
}