#include <stdio.h>

int main()
{
  int cookies = 45;
  int children = 7;

  printf("Este programa va dividir %i galletas entre %i niños e imprimira el sobrante\n", cookies, children);

  int cookiesPerChildren = cookies / children;
  int cookiesLeftover = cookies % children;

  printf("A cada niño le tocan %i galletas\n", cookiesPerChildren);
  printf("Sobrarían %i galletas", cookiesLeftover);

  return 0;
}