#include <stdio.h>

int main(){

  int vet1[10], vet2[10], vet3[10];

  for (int i = 0; i < 10; i++)
  {
    printf("\n----------------------------------------------------\n");
    printf("Insira um numero: ");
    scanf("%d%*c", &vet1[i]);
    printf("----------------------------------------------------\n");
  }

  for (int j = 0; j < 10; j++)
  {
    printf("\n----------------------------------------------------\n");
    printf("Insira um numero: ");
    scanf("%d%*c", &vet2[j]);
    printf("----------------------------------------------------\n");
  }

  printf("vetor 3 = {");
  for (int k = 0; k < 10; k++)
  {
    vet3[k] = vet1[k] + vet2[k];
    printf(" %d ", vet3[k]);
  }
  printf(" }.");

  return 0;
}
