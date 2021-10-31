#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int vetor[8], maior = 0;

void entradaDados()
{
  for(int i=0;i<8;i++)
  {
    printf("\nInsira um valor para a posicao [%d] = ", i+1);
    scanf("%d", &vetor[i]);
  }
}

void mostrarVetor()
{
  for (int j = 0; j < 8; j++)
    printf("\n[%d] = [%d]", j+1, vetor[j]);
}

void calculo()
{
  for (int k = 0; k < 8; k++)
  {
    if (vetor[k] > 30)
    {
      maior++;
    }
  }
}

int main()
{
  setlocale(LC_ALL, "Portuguese");

  entradaDados();

  system("cls");

  mostrarVetor();

  printf("\n");

  printf("\nNesse vetor extiste(m) %d numero(s) maior(es) que 30.\n", maior);

  system("Pause");
  return 0;
}
