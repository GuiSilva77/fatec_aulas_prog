#include <stdio.h>
#include <stdlib.h>
#include "ex04.h"
#define LINHA 5
#define COLUNA 5

int main()
{
  //declaração e população da matriz
  int* matriz = popularMatriz(LINHA, COLUNA);

  system("cls");

  //saida da matriz
  mostrarMatriz(matriz, LINHA, COLUNA);

  printf("\n");

  //saida da diagonal
  printf("\nDiagonal antes da multiplicacao: \n");
  mostrarDiagonal(matriz, LINHA, COLUNA);

  //multiplicação da diagonal por 5
  mulDiagonal(matriz, LINHA, COLUNA);

  //saida da diagonal transformada
  printf("\nDiagonal depois da multiplicacao: \n");
  mostrarDiagonal(matriz, LINHA, COLUNA);

  free(matriz);
  return 0;
}
