#include <stdio.h>

struct res
{
  int flag;
  int greatest;
};

struct res compare(int a, int b);

int main()
{
  int n1, n2;
  struct res r;
  printf("Enter 2 numbers");
  scanf("%d %d", &n1, &n2);
  r = compare(n1, n2);
  if (r.flag)
  {
    printf("Both numbers are equal %i = %i", n1, n2);
  }
  else
  {
    printf("The greatest number is %i", r.greatest);
  }
  return 0;
}

struct res compare(int a, int b)
{
  struct res r;
  r.flag = 0;
  if (a > b)
  {
    r.greatest = a;
  }
  else if (a < b)
  {
    r.greatest = b;
  }
  else
  {
    r.flag = 1;
  }

  return r;
}