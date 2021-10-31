#include <stdio.h>
#include <stdlib.h>

int vetor[10], j=0;

void calculo()
{
  for(int i=2;i<=20;i++)
  {
    if (i%2 == 0)
      vetor[j] = i;
    else
      j--;

    j++;
  }
}

void saidaDados()
{
  for(int k=0;k<10;k++)
    printf("\n[%d] = [%d]", k, vetor[k]);
}

int main()
{
  calculo();

  saidaDados();

  return EXIT_SUCCESS;
}
