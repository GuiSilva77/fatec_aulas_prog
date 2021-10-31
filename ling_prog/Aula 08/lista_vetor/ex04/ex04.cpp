#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int vetor[8], soma = 0, maior = 0;

void entradaDados()
{
  for(int i=0;i<8;i++)
  {
    printf("\nInsira um valor para a posição [%d] = ", i);
    scanf("%d", &vetor[i]);
  }
}

void mostrarVetor()
{
  for (int j = 0; j < 8; j++)
    printf("\n[%d] = [%d]", j, vetor[j]);
}

void calculo()
{
  for (int k = 0; k < 8; k++)
  {
    if (vetor[k] > 30)
    {
      maior++;
      soma += vetor[k];
    }
  }
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  entradaDados();

  system("cls");

  mostrarVetor();

  printf("\n");

  calculo();

  printf("\nNesse vetor extiste(m) %d número(s) maior(es) que 30.", maior);
  printf("\nSoma de todos os números maiores que 30: %d\n", soma);

  system("Pause");
  return 0;
}
