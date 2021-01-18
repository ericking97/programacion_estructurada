#include <stdio.h>

struct repeated
{
  char value;
  int amount;
};

int main()
{
  // char words[] = {'a', 'a', 'b', 'c', 'c', 'b', 'a', 'c'};
  char words[] = {'a', 'b', 'c'};
  int size = sizeof(words) / sizeof(words[0]);
  // int repeated[size][2];
  struct repeated rep[size];
  int c = 0;

  for (int i = 0; i < size; i++)
  {
    if (c == 0)
    {
    }
    // for (int j = i + 1; j < size; j++)
    // {
    // if (words[i] == words[j])
    // {
    //   repeated[i][1] = ""
    //   // words[j] = NULL;
    //   printf("Caracter %c esta repetido en la posición %d\n", words[i], j);
    // }
    // }
  }
}