#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int vetor[10], impares[5];
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
    if(vetor[k]%2 != 0)
    {
      impares[j] = vetor[k];
      j++;
    }
  }
}

void saidaDados()
{
  printf("impares = {");
  for(int o=0;o<5;o++)
    printf(" %d,", impares[o]);

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
