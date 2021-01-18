#include <stdio.h>

int sum(int *m)
{
  int total = 0;
  for (int i = 0; i < 10; i++)
  {
    total += m[i];
  }
  return total;
}

int main()
{
  int numbers[10] = {10, 11, 13, 10, 14, 9, 10, 18, 10, 10};
  for (int i = 0; i < 10; i++)
  {
    printf("%3i\n+", numbers[i]);
    printf("+\n");
  }
  printf("%3i\n", sum(numbers));
  return 0;
}