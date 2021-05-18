#include <stdio.h>

int main(){

  int vet1[9], vet2[9];

  for (int i = 0; i < 8; i++)
  {
    printf("\n----------------------------------------------------\n");
    printf("Insira um numero: ");
    scanf("%d%*c", &vet1[i]);
    printf("----------------------------------------------------\n");
  }

  for (int j = 0, k = 7; j < 8; j++, k--)
    vet2[j] = vet1[k];

  for (int l = 0; l < 8; l++)
  printf(" %d ", vet2[l]);

}
