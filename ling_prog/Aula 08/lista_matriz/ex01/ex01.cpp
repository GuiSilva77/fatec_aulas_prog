#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int matriz[2][2], soma=0;

void entradaDados()
{
  printf("Insira os valores da matriz: ");
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      printf("\n[%d][%d] = ", i+1, j+1);
      scanf("%d", &matriz[i][j]);

      soma += matriz[i][j];
    }
  }
}

void saidaDados()
{
  printf("Matriz: ");
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      printf("\n[%d][%d] = %d", i, j, matriz[i][j]);
    }
  }
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  entradaDados();

  system("cls");

  saidaDados();

  printf("\nSoma de todos os valores da matriz: %d\n", soma);
  system("pause");
  return EXIT_SUCCESS;
}
