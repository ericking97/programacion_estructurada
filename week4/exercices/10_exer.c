#include <stdio.h>

struct vector
{
  int x, y, z;
};

struct vector multiplicar(struct vector v1, struct vector v2)
{
  struct vector resultante;
  resultante.x = (v1.y * v2.z) - (v1.z * v2.y);
  resultante.y = -((v1.x * v2.z) - (v1.z * v2.x));
  resultante.z = (v1.x * v2.y) - (v1.y * v2.x);

  return resultante;
}

int main()
{
  int size;
  printf("Cuántos vectores quieres multiplicar?: (Al menos 2) ");
  scanf("%i", &size);

  struct vector vs[size];

  printf("Escribe x, y, z para cada uno de los vectores\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d, %d, %d", &vs[i].x, &vs[i].y, &vs[i].z);
  }

  for (int i = 0; i < size; i++)
  {
    printf("Vector %i tiene coordenadas (%d, %d, %d)\n", i, vs[i].x, vs[i].y, vs[i].z);
  }

  struct vector result;

  for (int i = 0; i < size;)
  {
    if (i == 0)
    {
      result = multiplicar(vs[i], vs[i + 1]);
      i += 2;
    }
    else
    {
      result = multiplicar(result, vs[i]);
      i++;
    }
  }

  printf("Vector resultante es (%d, %d, %d)", result.x, result.y, result.z);

  return 0;
}