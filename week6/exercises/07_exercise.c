#include <stdio.h>
#include <stdlib.h>

int main()
{
  time_t t;
  srand((unsigned)time(&t));

  char *messages[] = {
      "Lorem ipsum dolor sit amet",
      "consectetur adipiscing elit",
      "sed do eiusmod tempor",
      "incididunt ut labore",
      "et dolore magna aliqua"};

  printf("Mostrando mensaje aleatorio.\n");

  int r = rand() % 4;
  printf("%s", messages[r]);

  return 0;
}