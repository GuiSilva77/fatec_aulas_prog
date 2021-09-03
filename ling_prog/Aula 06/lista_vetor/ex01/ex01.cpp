#include <stdio.h>
#include <stdlib.h>

main()
{
  int vetor[8], numero = 0, posicao = 0;

  for(int i=0;i<8;i++)
  {
    printf("\nInsira um numero para a posicao [%d] = ", i+1);
    scanf("%d", &vetor[i]);
  }

  printf("\nInsira um numero: ");
  scanf("%d", &numero);

  for(int j=0;j<8;j++)
  {
    if (vetor[j] == numero)
      posicao = j;
  }

  if (posicao != 0)
    printf("\nO numero %d existe no vetor na posicao %d.", numero, posicao+1);
  else
    printf("\nO numero digitado nao existe no vetor.");

  return EXIT_SUCCESS;
}
