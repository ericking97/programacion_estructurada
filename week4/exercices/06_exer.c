#include <stdio.h>
#include <string.h>

int main()
{
  int size;
  printf("Enter the size of the array: ");
  scanf("%i", &size);

  printf("Enter the elements of the array\n");
  int numbers[size];
  for (int i = 0; i < size; i++)
  {
    scanf("%i", &numbers[i]);
  }

  int n, pos = -1;
  printf("Enter the number to search: ");
  scanf("%i", &n);

  for (int i = 0; i < size; i++)
  {
    if (numbers[i] == n)
    {
      pos = i;
      break;
    }
  }

  if (pos != -1)
  {
    printf("The element %i is in position %i", numbers[pos], pos);
  }
  else
  {
    printf("The element %i is not in the array", n);
  }

  return 0;
}
