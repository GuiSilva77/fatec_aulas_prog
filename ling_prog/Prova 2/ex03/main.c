#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "ex03.h"

#define TAMANHO 2

int main(void)
{
  setlocale(LC_ALL, "portuguese");
  Aluno lista[TAMANHO];
  //variaveis para representar os alunos com maior ou menor média
  char maiorNome[50];
  char menorNome[50];

  //entrada de dados da lista
  for (int i = 0; i <= TAMANHO; i++)
    entrarDados(lista, i);

  //calculo da media e da situação de cada aluno
  for (int j = 0; j <= TAMANHO; j++) {
    calcMedia(lista, j);
    calcSituacao(lista, j);
  }

  //geração de estatisticas
    encontrar(lista, TAMANHO, maiorNome, menorNome);
    float media_geral = mediaGeral(lista, TAMANHO);
    int QtAlunos[2];
    gerarQt(lista, TAMANHO, QtAlunos);

  //saida dos dados
    mostrarDados(lista, TAMANHO);

  // saida das estatisticas
    printf("\n --------------------------//--------------------------");
    printf("\nNome do aluno com maior média: %s"
           "\nNome do aluno com menor média: %s"
           "\nMedia geral da classe: %.2f"
           "\nQuantidade de alunos aprovados: %d"
           "\nQuantidade de alunos para exame: %d"
           "\nQuantidade de alunos reprovados: %d", maiorNome, menorNome, media_geral, QtAlunos[1],
                                                                                       QtAlunos[2],
                                                                                       QtAlunos[3]
           );

  getchar();
  return EXIT_SUCCESS;
}
