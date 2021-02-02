#include <stdio.h>
#include <string.h>

int main()
{
  char text[] = "Este no es un curso de HTML sino un curso de C.";
  printf("%s\n", text);
  strcpy(text, "Este es un curso de C.");
  printf("%s\n", text);
  for (int i = 0; i < 50; i++)
  {
    printf("%c", *(text + i));
  }

  return 0;
}