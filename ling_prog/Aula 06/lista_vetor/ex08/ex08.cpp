#include <stdio.h>
#include <stdlib.h>

main()
{
  int vetor[8], maior = 0;

  for(int i=0;i<8;i++)
  {
    printf("\nInsira um valor para a posicao [%d] = ", i);
    scanf("%d", &vetor[i]);
  }

  system("cls");

  for (int j = 0; j < 8; j++)
    printf("\n[%d] = [%d]", j, vetor[j]);

  printf("\n");

  for (int k = 0; k < 8; k++)
  {
    if (vetor[k] > 30)
    {
      maior++;
    }
  }

  printf("\nNesse vetor extiste(m) %d numero(s) maior(es) que 30.", maior);

  system("Pause");
  return 0;
}
