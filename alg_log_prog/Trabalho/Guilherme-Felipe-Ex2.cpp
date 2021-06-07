#include <stdio.h>

int main(){

  int num[6], soma = 0, qtImp = 0;

  for(int i=0;i<6;i++)
  {
    printf("\nInsira um numero: ");
    scanf("%d%*c", &num[i]);
  }

  printf("\nRelatorio:\n\nOs numeros pares sao: ");
  for(int j=0;j<6;j++)
  {
    if(num[j]%2 == 0)
    {
      printf("\nNumero %d na posicao %d", num[j], j);
      soma += num[j];
    }
  }
  printf("\n\nSoma dos pares = %d\n", soma);
  for(int k=0;k<6;k++)
  {
    if(num[k]%2 != 0)
    {
      if (k==0)
      printf("\nOs numeros impares sao:");

      printf("\nNumero %d na posicao %d", num[k], k);
      qtImp++;
    }
  }
  if (qtImp != 0)
    printf("\n\nQuantidade de impares = %d\n", qtImp);

  getchar();
  return 0;
}
