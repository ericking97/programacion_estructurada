#include <stdio.h>

int main()
{
  int year;
  printf("Inserte el año: ");
  scanf("%d", &year);

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  {
    printf("%d es un año bisiesto", year);
  }
  else
  {
    printf("%d no es un año bisiesto", year);
  }

  return 0;
}