#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int vetor[10], pares[6];
int j=0;

void popularVetor()
{
  for(int i=10;i<=20;i++)
  {
    vetor[j]=i;
    j++;
  }
}

void calculo()
{
  j = 0;

  for(int k=0;k<=10;k++)
  {
    if(vetor[k]%2 == 0)
    {
      pares[j] = vetor[k];
      j++;
    }
  }
}

void saidaDados()
{
  printf("pares = {");
  for(int n=5;n>=0;n--)
    printf(" %d,", pares[n]);

  printf("}\n");
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  popularVetor();

  calculo();

  saidaDados();

  system("pause");
  return EXIT_SUCCESS;
}
