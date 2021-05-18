#include <stdio.h>

int main(){
  int vetor[5], vetor2[5], vetor3[5];

  for (int i = 0; i < 6; i++)
  {
    printf("\n----------------------------------------------------\n");
    printf("Insira um numero: ");
    scanf("%d%*c", &vetor[i]);
    printf("----------------------------------------------------\n");

    if (vetor[i] % 2 == 0)
      vetor2[i] = vetor[i];
    else
      vetor3[i] = vetor[i];
  }

  printf("\nNumeros pares: ");
  for (int j = 0; j < 6; j++)
    printf(" %d ", vetor2[j]);

  printf("\nNumeros inpares: ");
  for (int k = 0; k < 6; k++)
    printf(" %d ", vetor3[k]);

  return 0;
}
