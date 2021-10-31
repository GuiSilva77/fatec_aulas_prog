#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");

  int t_i=0, t_j=0;

  printf("Insira o tamanho i da matriz: ");
  scanf("%d", &t_i);

  printf("Insira o tamanho j da matriz: ");
  scanf("%d", &t_j);

  t_i -= 1;
  t_j -= 1;

  int matriz[t_i][t_j];

  printf("Insira os valores da matriz: ");
  for(int i=0;i<=t_i;i++)
  {
    for(int j=0;j<=t_j;j++)
    {
      printf("\n[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  system("cls");

  printf("Matriz antes da substituição: \n");
  for(int k=0;k<=t_i;k++)
  {
    for(int l=0;l<=t_j;l++)
    {
      printf(" %d ", matriz[k][l]);
    }
    printf("\n");
  }

  for(int m=0;m<=t_i;m++)
  {
    for(int n=0;n<=t_j;n++)
    {
      if((matriz[m][n]%2) == 0)
        matriz[m][n] = 1;
      else
        matriz[m][n] = -1;
    }
  }


  printf("Matriz depois da substituição: \n");
  for(int o=0;o<=t_i;o++)
  {
    for(int p=0;p<=t_j;p++)
    {
      printf(" %d ", matriz[o][p]);
    }
    printf("\n");
  }

  system("pause");
  return EXIT_SUCCESS;
}
