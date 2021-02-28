#include <ctype.h>
#include <stdio.h>

void mayus(char destino[], char fuente[])
{
  char caracter_anterior = ' ';
  int i;
  for (i = 0; fuente[i] != '\0'; i++)
  {
    if (caracter_anterior == ' ' && fuente[i] >= 'a' && fuente[i] <= 'z')
      destino[i] = toupper(fuente[i]);
    else
      destino[i] = fuente[i];
    caracter_anterior = fuente[i];
  }
  destino[i] = '\0';
}

int main()
{
  char texto[200];
  mayus(texto, "practica ocho");
  printf("%s\n", texto);
  return 0;
}
