#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int altura[14], idade[14], peso[14];
int qtPessoas = 0, mPessoas = 0, qtPeso;

void entrada(int i)
{
  fflush(stdin);
  printf("\nInsira a altura (em cm): ");
  scanf("%d", &altura[i]);

  fflush(stdin);
  printf("\nInsira o peso (em kg): ");
  scanf("%d", &peso[i]);

  fflush(stdin);
  printf("\nInsira a idade: ");
  scanf("%d", &idade[i]);
}

void calculo(int i)
{
  if (idade[i] > 50)
    qtPessoas++;

  mPessoas += altura[i];

  if (peso[i] < 40)
    qtPeso++;
}

void mostarResultados()
{
  system("cls");

  printf("\nO número de pessoas com mais de 50 anos: %d", qtPessoas);

  mPessoas /= 14;

  printf("\nA média da altura das pessoas: %d", mPessoas);

  float pPessoas = (qtPeso/15) * 100;

  printf("\nA porcentagem de pessoas com menos de 40kg: %.2f\n", pPessoas);

}

int main()
{
  setlocale(LC_ALL, "Portuguese");

  for (int i = 0; i < 15; i++)
  {
    system("cls");
    printf("Pessoa %d", i+1);
    entrada(i);
    calculo(i);
  }

  mostarResultados();

  system("pause");
  return 0;
}


/*
Desenvolva um programa que receba a Altura a Idade e o Peso de 15 pessoas
e armazene em um VETOR/MATRIZES. No final do processamento mostre:
o	A quantidade de pessoas com mais de 50 anos;
o	A média das alturas das pessoas entre 10 e 20 anos;
o	A percentagem de pessoas com menos de 40 Kg entre todas as pessoas.
Obs.: Criar: Procedimentos/funções: ENTRADA, CALCULO e Mostrar Resultados


*/
