#include <stdio.h>
#define BOXES 4
#define UNITS 25
#define PRICE 100
#define TAXES 1.16

int main()
{
  float price;
  price = (BOXES * UNITS * PRICE) * TAXES;
  printf("Total price: %f", price);
  return 0;
}