#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
  char nome[50];
  float altura;
  float peso;
  float imc;
  int situacao;
} Pessoa;

//função para a entrada de dados.
void entrarDados(Pessoa *vetor, int i)
{
  fflush(stdin);
  printf("\nPessoa %d", i+1);
  printf("\nInsira o nome: ");
  fgets(vetor[i].nome, 49, stdin);
  printf("\nInsira a altura: ");
  scanf("%f", &vetor[i].altura);
  printf("\nInsira o peso: ");
  scanf("%f", &vetor[i].peso);
}

//função para calcular o IMC
void calcularIMC(Pessoa *vetor, int i)
{
  vetor[i].imc = (vetor[i].peso)/(vetor[i].altura * vetor[i].altura);
}

//Função para calcular a Situação
void calcularSituacao(Pessoa *vetor, int i)
{
  float imc = vetor[i].imc;

  if (imc > 40)
    vetor[i].situacao = 0;
  else if (imc > 35)
    vetor[i].situacao = 1;
  else if (imc > 30)
    vetor[i].situacao = 2;
  else if (imc > 25)
    vetor[i].situacao = 3;
  else if (imc > 18.5)
    vetor[i].situacao = 4;
  else
    vetor[i].situacao = 5;
}

//Função para gerar a estatísta
void gerarEstatistica(int *tabela, Pessoa *vetor, int qtPessoas)
{
  for (int i = 0; i <= qtPessoas; i++)
  {
    switch (vetor[i].situacao)
    {
    case 0:
      tabela[0]++;
      break;
    case 1:
      tabela[1]++;
      break;
    case 2:
      tabela[2]++;
      break;
    case 3:
      tabela[3]++;
      break;
    case 4:
      tabela[4]++;
      break;
    case 5:
      tabela[5]++;
      break;
    default:
      break;
    }
  }
}

void mostrarDados(Pessoa *vetor, int qtPessoas)
{
  for (int i = 0; i <= qtPessoas; i++)
  {
    printf("\n--------------------------//--------------------------");
    printf("\nNome: %s", vetor[i].nome);
    printf("Situação: %d", vetor[i].situacao);
  }

}

void mostrarEstatisticas(int *tabela)
{
  printf("\n--------------------------//--------------------------");
  printf("\nQuantidade de pessoas na situação 0: %d"
         "\nQuantidade de pessoas na situação 1: %d"
         "\nQuantidade de pessoas na situação 2: %d"
         "\nQuantidade de pessoas na situação 3: %d"
         "\nQuantidade de pessoas na situação 4: %d"
         "\nQuantidade de pessoas na situação 5: %d", tabela[0],
                                                      tabela[1],
                                                      tabela[2],
                                                      tabela[3],
                                                      tabela[4],
                                                      tabela[5]
         );
}

