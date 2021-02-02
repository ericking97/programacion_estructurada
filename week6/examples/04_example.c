#include <stdio.h>
#include <string.h>
/*
  string.h -> Librería para manejo de strings
  strlen, imprime la longitud de un string omitiendo el carácter nulo.
  strcpy, copia el valor de un string a otro
  strcat, concatena un string a otro
  sprintf, nos ayuda formatear texto
  strcmp, compara 2 cadenas de texto
    c1 == c2 -> 0
    c1 < c2 -> N < 0
    c1 > c2 -> N > 0
*/
int main()
{
  char name[50];
  char firstName[] = "Elisa";
  char lastName[] = "Medina";

  printf("La cadena \"%s\" tiene %li carácteres.\n", firstName, strlen(firstName));

  strcpy(name, firstName);
  strcat(name, " ");
  strcat(name, lastName);

  printf("El nombre completo es: %s.\n", name);

  char formalName[50], letters;
  letters = sprintf(formalName, "Dra %s %s", firstName, lastName);
  printf("El nombre formal es: %s.\n", formalName);
  printf("Letras copiadas: %d.\n", letters);

  char ch1[] = "AAAA", ch2[] = "BBBB";
  printf("%i", strcmp(ch1, ch2));

  return 0;
}