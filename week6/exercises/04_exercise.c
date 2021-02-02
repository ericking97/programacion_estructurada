#include <stdio.h>
#include <math.h>

int main()
{
  int x = 12, y = 5;
  double datos[x][y];

  double base = 2.0;
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      if (j == 0)
      {
        datos[i][j] = base;
      }
      else
      {
        datos[i][j] = (1 / pow(base, j));
      }
      printf("%lf ", datos[i][j]);
    }
    base += 0.1;
    printf("\n");
  }
}