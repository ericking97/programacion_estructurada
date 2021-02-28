/**
 * Defina un tipo de estructura con el nombre Longitud que represente una longitud en yardas, pies y pulgadas.
 *  a.  Defina una función suma() que sume dos argumentos de Longitud, y regrese a suma como un tipo Longitud.
 *  b.  Defina una segunda función, muestra(), que muestre los valores de los argumentos de Longitud.
 *  c.  Escriba un programa que use el tipo Longitud y las funciones suma() y muestra(), para sumar un número arbitrario
 *      de longitudes en yardas, pies y pulgadas, ingresados los valores desde el teclado, y regrese la longitud total
 *      en pantalla
 * */

#include <stdio.h>

// Definimos nuestra estructura de longitud
typedef struct
{
  double yardas;
  double pies;
  double pulgadas;
} Longitud_t;

Longitud_t suma(Longitud_t l1, Longitud_t l2)
{
  Longitud_t resultado;

  resultado.yardas = l1.yardas + l2.yardas;
  resultado.pies = l1.pies + l2.pies;
  resultado.pulgadas = l1.pulgadas + l2.pulgadas;

  return resultado;
}

void muestra(Longitud_t leo)
{
  printf("Yardas %lf\n", leo.yardas);
  printf("Pies %lf\n", leo.pies);
  printf("Pulgadas %lf\n", leo.pulgadas);
}

int main()
{
  Longitud_t l1 = {10.4, 9.8, 10.37};
  Longitud_t l2 = {8.82, 6.3, 20.0};

  Longitud_t r = suma(l1, l2);

  muestra(l1);
  muestra(l2);
  muestra(r);

  int t;
  printf("¿Cuántas longitudes deseas ingresar?");
  scanf("%d", &t);

  Longitud_t arreglo[t];

  for (int i = 0; i < t; i++)
  {
    printf("Ingrese la longitud %d: (yardas pies pulgadas)\n", i + 1);
    scanf("%lf %lf %lf", &arreglo[i].yardas, &arreglo[i].pies, &arreglo[i].pulgadas);
  }

  Longitud_t res;

  for (int i = 0; i < t;)
  {
    if (i == 0)
    {
      res = suma(arreglo[i], arreglo[i + 1]);
      i += 2;
    }
    else
    {
      res = suma(res, arreglo[i]);
      i++;
    }
  }

  printf("Resultado: \n");
  muestra(res);

  return 0;
}
