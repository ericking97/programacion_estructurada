#include <stdio.h>
#include <string.h>

int main()
{
  char input[100];
  printf("Ingrese algo: ");
  fgets(input, 100, stdin);

  char *p = input;

  while (*p != '\0')
  {
    if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9'))
    {
    }
    else
    {
      *p = "";
    }
    p++;
  }

  printf("input: %s", input);

  return 0;
}