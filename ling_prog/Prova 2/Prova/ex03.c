#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ex03.h"

#define MAX_ALUNOS 15

int main()
{
  //configuração do idioma
  setlocale(LC_ALL, "Portuguese");

  // declaração de variáveis
  Aluno alunos[MAX_ALUNOS];

  // entrada de dados
  ler_alunos(alunos, MAX_ALUNOS);

  // processamento de dados
  calcula_media(alunos, MAX_ALUNOS);
  calcula_situacao(alunos, MAX_ALUNOS);
  float media_geral = calcula_media_geral(alunos, MAX_ALUNOS);

  //limpeza do console
  system("cls");

  // saida de dados
  imprimir_alunos(alunos, MAX_ALUNOS);
  printf("\n\n");
  imprimir_estatistica(alunos, MAX_ALUNOS);
  printf("\n"
         "Media geral: %.2f\n",
         media_geral);
  system("pause");
  return 0;
}