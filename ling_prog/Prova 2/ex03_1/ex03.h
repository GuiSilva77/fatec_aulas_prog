#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct notas
{
  float n1;
  float n2;
  float n3;
  float n4;
};

typedef struct
{
  char nome[50];
  struct notas notas;
  float media;
  int situacao;
} Aluno;

// Função para ler o nome e as notas de um aluno e armazenar em um vetor de alunos, usar funções de c11 para evitar repetição de código e vazamento de memória
void ler_alunos(Aluno *alunos, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("\n\nDigite o nome do aluno %d: ", i + 1);
    scanf("%s", alunos[i].nome);
    printf("Digite as notas do aluno %d: ", i + 1);
    scanf("%f %f %f %f", &alunos[i].notas.n1, &alunos[i].notas.n2, &alunos[i].notas.n3, &alunos[i].notas.n4);
  }
}

// Função para calcular a média de cada aluno e armazenar em um vetor de alunos
void calcula_media(Aluno *alunos, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    alunos[i].media = (alunos[i].notas.n1 + alunos[i].notas.n2 + alunos[i].notas.n3 + alunos[i].notas.n4) / 4;
  }
}

//Calculo da situação do aluno:
// - Se a média for maior ou igual a 6, a situação é 0;
// - Se a média for igual a 4 ou menor que 6, a situação é 1;
// - Se a média for menor que 4, a situação é 2;
void calcula_situacao(Aluno *alunos, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (alunos[i].media >= 6)
    {
      alunos[i].situacao = 0;
    }
    else if (alunos[i].media >= 4)
    {
      alunos[i].situacao = 1;
    }
    else
    {
      alunos[i].situacao = 2;
    }
  }
}

// Função para calcular a media geral da lista de alunos
float calcula_media_geral(Aluno *alunos, int n)
{
  int i;
  float media_geral = 0;
  for (i = 0; i < n; i++)
  {
    media_geral += alunos[i].media;
  }
  return media_geral / n;
}

// Mapeamento do vetor de alunos para obter as seguintes informações:
// - Nome do aluno com maior media;
// - Nome do aluno com menor media;
// - Quantos alunos tem a situacao 0;
// - Quantos alunos tem a situacao 1;
// - Quantos alunos tem a situacao 2;
void imprimir_estatistica(Aluno *alunos, int n)
{
  int i;
  int indice_maior_media = 0;
  int indice_menor_media = 0;
  float maior_media = alunos[0].media;
  float menor_media = alunos[0].media;
  int situacao_0 = 0;
  int situacao_1 = 0;
  int situacao_2 = 0;
  for (i = 0; i < n; i++)
  {
    if (alunos[i].media > maior_media)
    {
      maior_media = alunos[i].media;
      indice_maior_media = i;
    }
    if (alunos[i].media < menor_media)
    {
      menor_media = alunos[i].media;
      indice_menor_media = i;
    }
    if (alunos[i].situacao == 0)
    {
      situacao_0++;
    }
    if (alunos[i].situacao == 1)
    {
      situacao_1++;
    }
    if (alunos[i].situacao == 2)
    {
      situacao_2++;
    }
  }
  printf("\n\nO aluno com maior media foi %s com media %.2f", alunos[indice_maior_media].nome, maior_media);
  printf("\nO aluno com menor media foi %s com media %.2f", alunos[indice_menor_media].nome, menor_media);
  printf("\n\nA quantidade de alunos com a situacao \"Aprovado por media\" eh %d", situacao_0);
  printf("\nA quantidade de alunos com a situacao \"Exame por media\" eh %d", situacao_1);
  printf("\nA quantidade de alunos com a situacao \"Reprovado por media\" eh %d", situacao_2);
}

// Função para imprimir os dados de um aluno
void imprimir_alunos(Aluno *alunos, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("\n\nNome: %s", alunos[i].nome);
    printf("\nNotas: %.2f %.2f %.2f %.2f", alunos[i].notas.n1, alunos[i].notas.n2, alunos[i].notas.n3, alunos[i].notas.n4);
    printf("\nMedia: %.2f", alunos[i].media);

    // Mapeamento da situação do aluno:
    // - Se a média for maior ou igual a 6, a situação é "Aprovado por média";
    // - Se a média for igual a 4 ou menor que 6, a situação é "Exame por média";
    // - Se a média for menor que 4, a situação é "Reprovado por média";
    if (alunos[i].media >= 6)
    {
      printf("\nSituacao: Aprovado por media");
    }
    else if (alunos[i].media >= 4)
    {
      printf("\nSituacao: Exame por media");
    }
    else
    {
      printf("\nSituacao: Reprovado por media");
    }
  }
}
