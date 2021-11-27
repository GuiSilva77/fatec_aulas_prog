#include <stdio.h>
#include <stdlib.h>

int *popularMatriz(int m, int n)
{
  int *mat = (int *)malloc((m * n) * sizeof(int));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("Insira um numero para m[%d][%d]: ", i+1, j+1);
      scanf("%d", (mat + i*n + j));
    }
  }

  return mat;
}

void mostrarMatriz(int *matriz, int m, int n)
{
  printf("\nMatriz: \n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf(" %d ", *(matriz + i*n + j));
    }
    printf("\n");
  }
}

void mostrarDiagonal(int *matriz, int m, int n)
{
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if(j == i)
        printf(" %d ", *(matriz + i*n + j));
      else
        printf(" x ");
    }
    printf("\n");
  }

}

void mulDiagonal(int *matriz, int m,int n)
{
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if(j == i)
        *(matriz + i*n + j) *= 5;
    }
  }

}
