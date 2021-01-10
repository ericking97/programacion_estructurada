#include <stdio.h>

// Formula base: C(n, r) = n! / (r! (n - r)!) es muy compleja!
// C(n, i) = n! / (i! (n - i)!)                 --> EQ 1
// C(n, i+1) = n! / ((i + 1)! (n - (i + 1))! )  --> EQ 2
// EQ2 / EQ1 :
// C(n, i+1) = C(n, i) * (n - i) / (i + 1)
// Recordemos que el primer número de cualquier renglón siempre será 1

int main()
{
  int n, coef;
  printf("Triángulo de Pascal, ingrese el nivel: ");
  scanf("%d", &n);
  for (int line = 1; line <= n; line++)
  {
    coef = 1;

    for (int i = 0; i <= n - line; i++)
    {
      printf("  "); // Spacing the triangle
    }

    for (int pos = 1; pos <= line; pos++)
    {
      printf("%4d", coef);
      coef = coef * (line - pos) / pos;
    }
    printf("\n");
  }

  return 0;
}