#include <stdio.h>

int main()
{
  int size, gt;

  printf("Enter array size: ");
  scanf("%i", &size);

  int numbers[size];
  for (int i = 0; i < size; i++)
  {
    printf("Enter value for position %i: ", i);
    scanf("%i", &numbers[i]);
    if (i == 0)
    {
      gt = numbers[i];
    }
    else
    {
      if (numbers[i] > gt)
      {
        gt = numbers[i];
      }
    }
  }

  printf("Entered numbers: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  printf("The greatest number of the list is: %d", gt);

  return 0;
}