#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float vetor[5];

void entradaDados()
{
  for (int i=0;i<6;i++)
  {
    printf("\nInsira um número: ");
    scanf("%f", &vetor[i]);
  }
}

void saidaDados()
{
  for(int j=0;j<6;j++)
    printf("\nPosição [%d] = %.3f", j, vetor[j]);
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  entradaDados();
  saidaDados();

  system("pause");
  return EXIT_SUCCESS;
}
