/**
 * Escriba un programa que lea, almacena y de salida a los siguientes cinco tipos de cadenas en líneas separadas,
 * cuando uno de cada tipo de cadena es ingresada en una línea sin espacios entre las líneas:
 *  a. Tipo 1: Una secuencia de letras minúsculas seguidas por un dígito, e.g., numero1 if minus o numero
 *  b. Tipo 2: Dos palabras que ambas sean con una letra mayúscula y estén separadas por un guión, e.g: Alfa-Beta
 *  c. Tipo 3: Un valor numércio con decimales, e.g. 8.32
 *  d. Tipo 4: Una secuencia de letras mayúsculas con minúsculas y que contenga separación de espacio en blanco,
 *      e.g., Fernando Savater
 *  e. Tipo 5: Una secuencia de caracteres cualquiera pero que no incluya espacio en blanco ni dígitos:
 *      e.g, punto-flotante
 * */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toType1(char d[], char s[])
{
  int j = 0;
  char prev;

  for (int i = 0; s[i] != '\0'; i++)
  {
    if (i != 0)
    {
      prev = s[i - 1];
    }

    if (s[i] >= 'a' && s[i] <= 'z')
    {
      if (prev >= '0' && prev <= '9')
      {
        break;
      }
      d[j] = s[i];
      j++;
    }
    else if (s[i] >= '0' && s[i] <= '9')
    {
      d[j] = s[i];
      j++;
    }
  }
}

void toType2(char d[], char s[])
{
  char last = ' ';
  int j = 0;

  for (int i = 0; s[i] != '\0'; i++)
  {
    if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
    {
      if (last == ' ')
      {
        d[j] = toupper(s[i]);
      }
      else
      {
        d[j] = tolower(s[i]);
      }
      j++;
    }
    else if (s[i] == ' ' && i != 0)
    {
      d[j] = 45;
      j++;
    }

    last = s[i];
  }
}

void toType3(char d[], char s[])
{
  int j = 0;
  for (int i = 0; s[i] != '\0'; i++)
  {
    if ((s[i] >= 48 && s[i] <= 57) || (s[i] == 46))
    {
      d[j] = s[i];
      j++;
    }
  }
}

void toType4(char d[], char s[])
{
  char last = ' ';
  int i;
  for (i = 0; s[i] != '\0'; i++)
  {
    if (last == ' ' && s[i] >= 'a' && s[i] <= 'z')
      d[i] = toupper(s[i]);
    else
      d[i] = s[i];
    last = s[i];
  }
  d[i] = '\0';
}

void toType5(char d[], char s[])
{
  int j = 0;
  for (int i = 0; s[i] != '\0'; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      d[j] = s[i];
      j++;
    }
    else if (s[i] == ' ' || s[i] == '-')
    {
      d[j] = '-';
      j++;
    }
  }
}

int main()
{
  char t1[100], t2[100], t3[100], t4[100], t5[100];
  char i1[100], i2[100], i3[100], i4[100], i5[100];

  printf("Ingrese la cadena 1: \n");
  fgets(i1, 100, stdin);
  toType1(t1, i1);
  printf("Reconocí este tipo %s\n", t1);

  printf("Ingrese la cadena 2: \n");
  fgets(i2, 100, stdin);
  toType2(t2, i2);
  printf("Reconocí este tipo %s\n", t2);

  printf("Ingrese la cadena 3: \n");
  fgets(i3, 100, stdin);
  toType3(t3, i3);
  printf("Reconocí este tipo %s\n", t3);

  printf("Ingrese la cadena 4: \n");
  fgets(i4, 100, stdin);
  toType4(t4, i4);
  printf("Reconocí este tipo %s\n", t4);

  printf("Ingrese la cadena 5: \n");
  fgets(i5, 100, stdin);
  toType5(t5, i5);
  printf("Reconocí este tipo %s\n", t5);

  return 0;
}