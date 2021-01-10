#include <stdio.h>
#include <ctype.h>

int main()
{
  char letter;
  printf("Escriba una letra: ");
  scanf("%c", &letter);
  letter = tolower(letter);
  switch (letter)
  {
  case 'a':
    printf("Vocal, siendo la letra a");
    break;
  case 'e':
    printf("Vocal, siendo la letra e");
    break;
  case 'i':
    printf("Vocal, siendo la letra i");
    break;
  case 'o':
    printf("Vocal, siendo la letra o");
    break;
  case 'u':
    printf("Vocal, siendo la letra u");
    break;
  default:
    printf("%c es una consonante", letter);
    break;
  }
}