#include <stdio.h>

int main()
{
  loop1();
  // loop2();
  // loop3();
}

void loop1()
{
  for (int i = 0;; i++)
  {
    printf("Infinite loop\n");
  }
}

void loop2()
{
  for (int i = 0; i < 1;)
  {
    printf("Infinite loop\n");
  }
}

void loop3()
{
  for (int i = 0; i == i; i++)
  {
    printf("Infinite loop\n");
  }
}