#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* popularArray(int t)
{
  int *a = (int*) calloc(0, t * sizeof(int));

  srand(time(0));

  for(int i=0; i <= t; i++)
    *(a + i) = rand();

  return a;
}

int main()
{
  int tamanho = 0, qt = 0;
  printf("Insira o tamanho do vetor: ");
  scanf("%d", &tamanho);

  int *a = popularArray(tamanho);


  for(int j=0; j < tamanho; j++)
    printf("\n a[%d] = %d", j, a[j]);


  free(a);

  return 0;
}
