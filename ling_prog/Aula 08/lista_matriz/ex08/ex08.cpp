#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int matriz1[3][3], matriz2[3][3], soma[3][3];

void entradaDados()
{
  printf("Insira os valores da matriz 1: ");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("\n[%d][%d] = ", i, j);
      scanf("%d", &matriz1[i][j]);
    }
  }

  system("cls");

  printf("Insira os valores da matriz 2: ");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("\n[%d][%d] = ", i, j);
      scanf("%d", &matriz2[i][j]);
    }
  }
}

void calculo()
{
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      soma[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }
}

void saidaDados()
{
  system("cls");

  printf("Matriz 1: \n");
  for(int k=0;k<3;k++)
  {
    for(int l=0;l<3;l++)
    {
      printf(" %d ", matriz1[k][l]);
    }
    printf("\n");
  }

  printf("\nMatriz 2: \n");
  for(int k=0;k<3;k++)
  {
    for(int l=0;l<3;l++)
    {
      printf(" %d ", matriz2[k][l]);
    }
    printf("\n");
  }

  printf("\nMatriz Soma: \n");
  for(int k=0;k<3;k++)
  {
    for(int l=0;l<3;l++)
    {
      printf(" %d ", soma[k][l]);
    }
    printf("\n");
  }
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  entradaDados();

  calculo();

  saidaDados();

  system("pause");
  return EXIT_SUCCESS;
}
