#include <stdio.h>

int main(){

  int matriz[3][3];
  float media = 0, mt2 = 0;

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
    {
      printf("\n");
      printf("Insira um numero: ");
      scanf("%d%*c", &matriz[i][j]);
      printf("\n");

      mt2 += matriz[i][j];
    }

  media = (mt2 / 9);

  printf("A media eh: %.2f", media);
}
