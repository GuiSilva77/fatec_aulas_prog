#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int vetor[8], numero = 0, posicao = 0;

void entradaDados(int i)
{
  printf("\nInsira um número para a posição [%d] = ", i+1);
  scanf("%d", &vetor[i]);
}

bool verificarExistencia(int n)
{
  for(int j=0;j<8;j++)
  {
    if (vetor[j] == n)
      posicao = j;
  }

  if (posicao != 0)
    return true;
  else
    return false;
}


int main()
{
  setlocale(LC_ALL, "Portuguese");

  for(int i=0;i<8;i++)
  {
    entradaDados(i);
  }

  printf("\nInsira um numero: ");
  scanf("%d", &numero);

  if (verificarExistencia(numero))
    printf("\nO numero %d existe no vetor na posicao %d.", numero, posicao+1);
  else
    printf("\nO numero digitado nao existe no vetor.");

  return EXIT_SUCCESS;
}
