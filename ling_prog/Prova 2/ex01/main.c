#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ex01.h"

#define TAMANHO 9

int main(void)
{
  Funcionario lista[TAMANHO];

  //Entradda dos dados na lista
  for (int i = 0; i <= TAMANHO; i++)
    entrarDados(&lista[i]);

  // calculo das idades
  int iMulherJovem = encontrar('f', lista, TAMANHO);
  int iHomemVelho = encontrar('m', lista, TAMANHO);

  float mediaSalario = media(lista, TAMANHO);

  // realização do reajuste
  reajuste(lista, TAMANHO);

  //saida dos dados da lista
  mostrar(lista, TAMANHO);

  // saida dos dados de estatística
  printf("\n--------------------------//--------------------------");
  printf("\nMedia dos salarios: R$ %f", mediaSalario);
  printf("\nIdade do homem mais velho: %d", iHomemVelho);
  printf("\nIdade da mulher mais jovem: %d\n", iMulherJovem);

  getchar();
  return 0;
}


