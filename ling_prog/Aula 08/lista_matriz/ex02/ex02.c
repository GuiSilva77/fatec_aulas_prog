#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostrar(int t1, int t2, int *m)
{
  printf("Matriz: ");
  for(int i=0;i<=t1;i++)
  {
    for(int j=0;j<=t2;j++)
    {
      printf("\n[%d][%d] = %*d", i+1, j+1, *((m+i*t2)+j));
    }
  }
}

int inserir(int t_i, int t_j, int* soma, int* soma_d)
{
  int matriz[t_i][t_j];
  printf("Insira os valores da matriz: ");
  for(int i=0;i<=t_i;i++)
  {
    for(int j=0;j<=t_j;j++)
    {
      printf("\n[%d][%d] = ", i+1, j+1);
      scanf("%d", &matriz[i][j]);

      *soma += matriz[i][j];

      if(j == i)
        *soma_d += matriz[i][j];
    }
  }

  return matriz[t_i][t_j];
}


main()
{
  setlocale(LC_ALL, "portuguese");

  int t_i = 0, t_j = 0;
  int soma=0, soma_d=0;

  printf("Insira o tamanho i da matriz: ");
  scanf("%d", &t_i);

  printf("Insira o tamanho j da matriz: ");
  scanf("%d", &t_j);

  t_i -= 1;
  t_j -= 1;

  int matriz[t_i][t_j];


  matriz[t_i][t_j] = inserir(t_i, t_j, &soma, &soma_d);

  system("cls");
  mostrar(t_i, t_j, (int* )matriz);

  printf("\nSoma de todos os valores da matriz: %d", soma);
  printf("\nSoma da diagonal principal da matriz: %d\n", soma_d);
  system("pause");
  return EXIT_SUCCESS;
}
