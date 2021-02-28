#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 4096
#define FILENAME "origin.txt"

int main()
{
  FILE *f;
  char line[MAX_SIZE];

  if ((f = fopen(FILENAME, "r")) == NULL)
  {
    perror(FILENAME);
    return EXIT_FAILURE;
  }

  printf("Contenido del archivo: \n");
  // while(fgets(line, MAX_SIZE, f) != NULL){

  // }

  fgets(line, 100, f);
  while (feof(f) == 0)
  {
    printf("%s", line);
    fgets(line, 100, f);
  }

  if (ferror(f))
    perror(FILENAME);
  if (fclose(f) != 0)
    perror(FILENAME);

  return EXIT_SUCCESS;
}