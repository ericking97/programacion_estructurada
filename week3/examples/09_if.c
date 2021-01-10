#include <stdio.h>

int main()
{
  example1();
  example2();
  example3();
}

void example1()
{
  int num;
  printf("Enter a number: ");
  scanf("%i", &num);
  if (num == 10)
  {
    printf("The number is equal to 10\n");
  }
}

void example2()
{
  int a;
  printf("Enter a number: ");
  scanf("%i", &a);
  if (a == 8)
  {
    printf("The number is equal to 8\n");
  }
  else
  {
    printf("The number is not 8\n");
  }
}

void example3()
{
  int a, b;
  printf("Enter a number: ");
  scanf("%i", &a);
  b = a < 10 ? 1 : 4;
  printf("Value of b is: %i", b);
}