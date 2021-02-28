#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f;

  int letter;

  if ((f = fopen("origin.txt", "r")) == NULL)
  {
    perror("origin.txt");
    return EXIT_FAILURE;
  }

  printf("Contenido del fichero: \n");
  while ((letter = getc(f)) != EOF)
  {
    printf("%c", letter);
  }

  if (fclose(f) != 0)
  {
    perror("origen.txt");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
