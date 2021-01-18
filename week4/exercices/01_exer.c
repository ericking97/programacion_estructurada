#include <stdio.h>

int main()
{
  int numbers[10];
  float avg = 0.0;

  printf("Enter 10 numbers\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%i", &numbers[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    printf("Entered number: %i\n", numbers[i]);
    avg += numbers[i];
  }
  printf("Average: %f", avg / 10);
}