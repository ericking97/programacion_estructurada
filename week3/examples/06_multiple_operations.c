#include <stdio.h>

int main()
{
  for (int i = 0, j = 5; i < 10; i++, j += 5)
  {
    printf("Value of i = %d\n", i);
    printf("Value of j = %d\n", j);
  }
  return 0;
}