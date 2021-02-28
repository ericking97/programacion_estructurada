/**
 * Defina un tipo de estructura con el nombre Longitud que represente una longitud en yardas, pies y pulgadas.
 *  a.  Defina una función suma() que sume dos argumentos de Longitud, y regrese a suma como un tipo Longitud.
 *  b.  Defina una segunda función, muestra(), que muestre los valores de los argumentos de Longitud.
 *  c.  Escriba un programa que use el tipo Longitud y las funciones suma() y muestra(), para sumar un número arbitrario
 *      de longitudes en yardas, pies y pulgadas, ingresados los valores desde el teclado, y regrese la longitud total
 *      en pantalla
 * */
#include <stdio.h>

typedef struct
{
  float yardas;
  float pies;
  float pulgadas;
} Longitud;

Longitud suma(Longitud l1, Longitud l2)
{
  Longitud r;
  r.yardas = l1.yardas + l2.yardas;
  r.pies = l1.pies + l2.pies;
  r.pulgadas = l1.pulgadas + l2.pulgadas;

  return r;
}

void muestra(Longitud l)
{
  printf("Yardas: %f\n", l.yardas);
  printf("Pies: %f\n", l.pies);
  printf("Pulgadas: %f\n", l.pulgadas);
}

int main()
{
  Longitud e1 = {yardas : 10.4, pies : 9.7, pulgadas : 6.5};
  Longitud e2 = {yardas : 82.39, pies : -3, pulgadas : 8.2};

  Longitud r = suma(e1, e2);

  printf("Datos de l1:\n");
  muestra(e1);

  printf("Datos de l2:\n");
  muestra(e2);

  printf("Suma de l1 y l2:\n");
  muestra(r);

  return 0;
}