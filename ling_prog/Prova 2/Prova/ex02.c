#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ex02.h"

#define TAMANHO 100

int main()
{
  setlocale(LC_ALL, "portuguese");
  Pessoa lista[TAMANHO];

  //entrada de dados da lista
  for (int i = 0; i <= TAMANHO; i++)
    entrarDados(lista, i);

  // mapeamento do vetor realizando o calculo do imc e a situação
  for (int i = 0; i <= TAMANHO; i++) {
    calcularIMC(lista, i);
    calcularSituacao(lista, i);
  }

  system("cls");

  //gerando a estatística
  int tabelaContagem[5] = {0,0,0,0,0};
  gerarEstatistica(tabelaContagem, lista, TAMANHO);

  printf("Referencia:"
         "\nNumero\tSituacao"
         "\n0\tObesidade Grau III"
         "\n1\tObesidade Grau II"
         "\n2\tObesidade Grau I"
         "\n3\tSobrepeso"
         "\n4\tPeso Normal"
         "\n5\tAbaixo do Peso\n"
         );

  //mostrar os dados
  mostrarDados(lista, TAMANHO);

  //mostra as estatísticas
  mostrarEstatisticas(tabelaContagem);

  getchar();
  return 0;
}
