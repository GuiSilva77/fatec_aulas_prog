#include <stdio.h>
#include <stdlib.h>
#include <locale>

main()
{
  setlocale(LC_ALL, "portuguese");
  int vetor[8], soma = 0, maior = 0;

  for(int i=0;i<8;i++)
  {
    printf("\nInsira um valor para a posição [%d] = ", i);
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
      soma += vetor[k];
    }
  }

  printf("\nNesse vetor extiste(m) %d número(s) maior(es) que 30.", maior);
  printf("\nSoma de todos os números maiores que 30: %d\n", soma);

  system("Pause");
  return 0;
}
