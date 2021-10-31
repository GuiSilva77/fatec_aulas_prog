#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int matriz[3][3], pares=0, impares=0;

void entradaDados()
{
  printf("Insira os valores da matriz: ");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("\n[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);

      if(matriz[i][j] % 2 == 0)
        pares++;
      else
        impares++;
    }
  }
}

void saidaDados()
{
  printf("Matriz: \n");
  for(int k=0;k<3;k++)
  {
    for(int l=0;l<3;l++)
    {
      printf(" %d ", matriz[k][l]);
    }
    printf("\n");
  }

  printf("\nQuantidade de elementos pares: %d", pares);
  printf("\nQuantidade de elementos impares: %d\n", impares);
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  entradaDados();

  system("cls");

  saidaDados();

  system("pause");
  return EXIT_SUCCESS;
}
