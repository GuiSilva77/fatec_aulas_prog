#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int *inserir(int ti, int tj)
{
  int matriz[ti][tj];
  memset(matriz, 0, ti * tj * sizeof(int));

  printf("Matriz:");

  for (int i = 0; i < ti; i++)
  {
    for (int j = 0; j < tj; j++)
    {
      printf("\n[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  return matriz;
}

void mostrar(int *matriz, int i, int j)
{
  printf("Matriz: ");
  for (int m = 0; m < i; m++)
  {
    for (int n = 0; n < j; n++)
      printf("\n[%d][%d] = %d", m, n, *((matriz + m * j) + n));
  }
}

int main(void)
{
  setlocale(LC_ALL, "portuguese");

  int i = 0, j = 0;

  printf("Insira o tamanho de i: ");
  scanf("%d", &i);
  printf("Insira o tamanho de j: ");
  scanf("%d", &j);

  int *matriz;
  memset(matriz, 0, i * j * sizeof(int));
  *matriz = inserir(i, j);

  system("clear");

  mostrar((int *)matriz, i, j);

  system("pause");
  return EXIT_SUCCESS;
}