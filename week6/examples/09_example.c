#include <stdio.h>

int main()
{
  char ch, name[20] = "";
  printf("Escribe tu nombre: ");
  fflush(stdout);
  scanf("%[A-Z]s", name);
  printf("Tu nombre es: %s\n", name);
  printf("Sobrante del buffer: ");
  while ((ch = getchar()) != '\n')
  {
    printf("%c", ch);
  }

  return 0;
}