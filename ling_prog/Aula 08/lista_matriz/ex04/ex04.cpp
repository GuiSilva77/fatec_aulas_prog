#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
  setlocale(LC_ALL, "portuguese");

  int matriz[3][3], soma=0;

  printf("Insira os valores da matriz: ");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("\n[%d][%d] = ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  system("cls");

  printf("Matriz antes de 5: \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf(" %d ", matriz[i][j]);
    }
    printf("\n");
  }

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
      matriz[i][j] *= 5;

  }

  printf("Matriz depois de 5: \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf(" %d ", matriz[i][j]);
    }
    printf("\n");
  }

  system("pause");
  return EXIT_SUCCESS;
}
