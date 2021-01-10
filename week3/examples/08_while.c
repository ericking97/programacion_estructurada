#include <stdio.h>

int main()
{
  int c = 0;
  while (c < 100)
  {
    c++;
    printf("%i\n", c);
  }

  example();
}

void example()
{
  int i = 0;
  do
  {
    printf("%i\n", i);
    i++;
  } while (i < 10);
}