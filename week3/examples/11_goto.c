#include <stdio.h>

void example1()
{
  printf("Line 1\n");
  goto line3;
  printf("Line 2\n");
line3:
  printf("Line 3\n");
  return;
}

void example2()
{
  int a = 10;
loop:
  do
  {
    if (a == 15)
    {
      a++;
      goto loop;
    }
    printf("valor de a: %d\n", a);
    a++;
  } while (a < 20);
}

int main()
{
  // example1();
  example2();
}
