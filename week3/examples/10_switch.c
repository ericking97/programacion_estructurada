#include <stdio.h>

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%i", &a);
  switch (a)
  {
  case 1:
    printf("The value is 1\n");
    break;
  case 2:
    printf("The value is 2\n");
    break;
  case 3:
    printf("The value is 3\n");
    break;
  default:
    printf("The value is not 1 nor 2 nor 3");
    break;
  }
  return 0;
}
