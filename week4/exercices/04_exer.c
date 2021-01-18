#include <stdio.h>

struct greater
{
  int position, value;
};

int main()
{
  struct greater gt;
  int size;

  printf("Enter array size: ");
  scanf("%i", &size);

  int numbers[size];
  for (int i = 0; i < size; i++)
  {
    printf("Enter value for position %i: ", i);
    scanf("%i", &numbers[i]);
    if (i == 0)
    {
      gt.value = numbers[i];
      gt.position = i;
    }
    else
    {
      if (numbers[i] > gt.value)
      {
        gt.value = numbers[i];
        gt.position = i;
      }
    }
  }

  printf("Entered numbers: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  printf("The greatest number of the list is: %d in position %d", gt.value, gt.position);

  return 0;
}