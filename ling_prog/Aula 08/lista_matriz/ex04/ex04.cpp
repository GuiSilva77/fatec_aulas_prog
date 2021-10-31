#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int matriz[3][3], soma=0;

void entradaDados()
{
  printf("Insira os valores da matriz: ");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("\n[%d][%d] = ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void saidaDadosAntes()
{
  printf("Matriz antes de 5: \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf(" %d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void calculo()
{
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
      matriz[i][j] *= 5;

  }
}

void saidaDadosDepois()
{
  printf("Matriz depois de 5: \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf(" %d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  entradaDados();

  system("cls");

  saidaDadosAntes();
  calculo();
  saidaDadosDepois();

  system("pause");
  return EXIT_SUCCESS;
}
