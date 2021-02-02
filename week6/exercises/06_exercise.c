#include <stdio.h>
#include <string.h>

int main()
{
  char *centenas[] = {"",
                      "Ciento",
                      "Doscientos",
                      "Trescientos",
                      "Cuatrocientos",
                      "Quinientos",
                      "Seiscientos",
                      "Setecientos",
                      "Ochocientos",
                      "Novecientos"};

  char *decenas[] = {
      "",
      "diez",
      "veinte",
      "treinta",
      "cuarenta",
      "cincuenta",
      "sesenta",
      "setenta",
      "ochenta",
      "noventa"};

  char *decenasCompuestas[] = {
      "",
      "dieci",
      "veinti",
      "treinta y",
      "cuarenta y",
      "cincuenta y",
      "sesenta y",
      "setenta y",
      "ochenta y",
      "noventa y"};

  char *
      unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve", "diez", "once", "doce", "trece", "catorce", "quince"};

  int number, h, t, o;
  printf("Escriba un número menor que 1000:\n");
  scanf("%d", &number);

  if (number >= 1000 || number < 0)
  {
    printf("No se aceptan números enteros menores a 1000");
    return 1;
  }

  if (number <= 15)
  {
    printf("%s", unidades[number]);
  }

  if (number > 15)
  {
    h = number / 100;
    t = (number % 100) / 10;
    o = number % 10;

    if (o == 0)
    {
      printf("%s %s", centenas[h], decenas[t]);
    }
    else
    {
      if (number < 30)
      {
        printf("%s %s%s", centenas[h], decenasCompuestas[t], unidades[o]);
      }
      else
      {
        printf("%s %s %s", centenas[h], decenasCompuestas[t], unidades[o]);
      }
    }
  }

  return 0;
}