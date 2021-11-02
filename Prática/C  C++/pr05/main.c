#include <stdio.h>

//create bubble sort function
void bubbleSort(int *array, int size)
{
  int i, j, aux;
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }
}

int main(int argc, char const *argv[])
{
  /* code */
  return 0;
}
