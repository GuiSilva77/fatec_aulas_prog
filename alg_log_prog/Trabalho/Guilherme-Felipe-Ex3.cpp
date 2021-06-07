#include <stdio.h>

int main(){

  int mat[6][4], mat2[6][4], qtde, i, j;

  for(i=1;i<=6;i++)
  {
    for(j=1;j<=4;j++)
    {
      printf("\n M[%d][%d] = ", i, j);
      scanf("%d%*c", &mat[i][j]);
    }
  }

  qtde = 0;

  for(int k=1;k<=6;k++)
  {
    for (int l=1;l<=4;l++)
    {
      if(mat[k][l] > 30)
        qtde++;
    }
  }

  for(int m=1;m<=6;m++)
  {
    for (int n=1;n<=4;n++)
    {
      if(mat[m][n] == 30)
        mat2[m][n] = 0;
      else
        mat2[m][n] = mat[m][n];
    }
  }

  printf("\nQuantidade de numeros maiores que 30 = %d\n", qtde);

  printf("\nMatriz 2 :\n");
  for(int o=1;o<=6;o++)
  {
    printf("\n");
    for (int p=1;p<=4;p++)
    {
      printf(" %d ", mat2[o][p]);
    }
  }

  getchar();
  return 0;
}
