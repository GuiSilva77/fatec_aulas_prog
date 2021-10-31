#include <stdio.h>
#include <stdlib.h>

void troca(int *i, int *j)
{
  int temp = 0;
  temp = *i;
  *i = *j;
  *j = temp;
}

void ordenar(int *v, int t)
{
  for (int i = 0; i < t-1; i++)
  {
    for (int j = i+1; j < t; j++)
    {
      if (v[i] > v[j])
        troca(&v[i], &v[j]);
    }
  }
}

void exibe(int *v, int t)
{
  printf("\n Elementos da matriz: \n {");
  for (int i = 0; i < t; i++)
  {
    printf(" %d", v[i]);
  }
  printf("}");
}

int main()
{
  int v[10] = {83, 31, 91, 46, 27, 20, 96, 25, 96, 80};

  ordenar(v, 10);
  exibe(v, 10);

  return 0;
}
