#include <stdio.h>

void main()
{
  char letter = 'A';

  printf("Letter %c with ASCII value of: %i\n", letter, letter);

  letter += 1;

  printf("Updated letter is now: %c with ASCII value of: %i\n", letter, letter);
}