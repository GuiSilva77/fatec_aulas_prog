#include <stdio.h>
#include <stdlib.h>

void minimax(int* v, int n, int* min, int* max)
{
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      *max = v[i];
      *min = 0;
    }
    else
    if (v[i] > *max)
      *max = v[i];
    else
      *min = v[i];
  }
}


int main()
{
  int vetor[5] = {5, 2, 1, 2, 15};
  int min = 0, max = 0;

  minimax(vetor, 5, &min, &max);

  printf("min: %d", min);
  printf("max: %d", max);

  return EXIT_SUCCESS;
}
