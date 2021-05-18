#include <stdio.h>

int main(){

  int matriz[5][3], matriz2[5];

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("\n----------------------------------------------------\n");
      printf("Insira um numero: ");
      scanf("%d%*c", &matriz[i][j]);
      printf("----------------------------------------------------\n");

      matriz2[i] = 0;
    }
  }

  for (int k = 0; k < 5; k++)
  {
    for (int l = 0; l < 3 ; l++){
      matriz2[k] += matriz[k][l];}
  }

  for (int m = 0; m < 5; m++){
    printf(" %d \n", matriz2[m]);}

  return 0;
}
