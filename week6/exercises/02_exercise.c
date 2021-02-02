#include <stdio.h>
#include <ctype.h>

int main()
{
  char word[21];
  char *p = word;

  printf("Ingrese una palabra: (20 palabras o menos)\n");
  scanf("%s", word);
  printf("Palabra escrita: %s\n", word);

  int index = 0;
  while (*p != '\0')
  {
    if (index % 2)
    {
      *p = tolower(*p);
    }
    else
    {
      *p = toupper(*p);
    }
    index++;
    p++;
  }

  printf("Palabra bbxita: %s", word);
  return 0;
}