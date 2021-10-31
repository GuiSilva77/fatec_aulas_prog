#include <stdio.h>
#include <stdlib.h>

int vetor1[4], vetor2[4], soma[4];

void entradaDados()
{
  for(int i=0;i<5;i++)
  {
    printf("\nVetor 1 posicao [%d] = ", i+1);
    fflush(stdin);
    scanf("%d", &vetor1[i]);
  }

  for(int j=0;j<5;j++)
  {
    printf("\nVetor 2 posicao [%d] = ", j+1);
    fflush(stdin);
    scanf("%d", &vetor2[j]);
  }
}

void soma1()
{
  for(int k=0;k<5;k++)
  {
    soma[k] = vetor1[k] +  vetor2[k];
  }
}

void saidaDados()
{
  printf("\nVetor 1:");
  for (int l = 0; l < 5; l++)
    printf("\n[%d] = [%d]", l, vetor1[l]);

  printf("\nVetor 2:");
  for (int m = 0; m < 5; m++)
    printf("\n[%d] = [%d]", m, vetor2[m]);

  printf("\nVetor Soma 1 + 2:");
  for (int n = 0; n < 5; n++)
    printf("\n[%d] = [%d]", n, soma[n]);
}

int main()
{
  entradaDados();
  soma1();
  saidaDados();

  system("pause");
  return EXIT_SUCCESS;
}
