#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float nota1 = 0, nota2 = 0, media = 0;
int faltas = 0;
char conceito[1];

void entrarDados()
{
  fflush(stdin);
  printf("\nInsira a nota 1: ");
  scanf("%f", &nota1);

  fflush(stdin);
  printf("\nInsira a nota 2: ");
  scanf("%f", &nota2);

  fflush(stdin);
  printf("\nInsira a quantidade de faltas: ");
  scanf("%d", &faltas);
}

int calculo(float nota1, float nota2, int faltas)
{
  media = (nota1+nota2)/2;

  if (media >= 9)
    conceito[0] = 'E';
  else if (media >= 8)
    conceito[0] = 'A';
  else if (media >= 6)
    conceito[0] = 'B';
  else
    conceito[0] = 'M';
    conceito[1] = 'F';
}

void mostarResultado()
{
  switch (conceito[0]){
  case 'E':
    printf("\nAluno Aprovado.\nConceito: E");
    break;
  case 'A':
    printf("\nAluno Aprovado.\nConceito: A");
    break;
  case 'B':
    printf("\nAluno Aprovado.\nConceito: B");
    break;
  case 'M':
    printf("\nAluno Reprovado.\nConceito: MF");
    break;
  case 'F':
    printf("\nAluno Reprovado.\nConceito: F");
    break;
  default:
    break;
  }
}
int main()
{
  setlocale(LC_ALL, "Portuguese");
  int opcao = 0;

  do
  {
    system("cls");
    entrarDados();
    int res = calculo(nota1, nota2, faltas);
    mostarResultado();

    nota1 = 0, nota2 = 0, faltas = 0;

    printf("\nInsira 1 para continuar ou 2 para sair: ");
    scanf("%d", &opcao);
  } while (opcao == 1);

  system("pause");
  return 0;
}

/*
- Elabore um algoritmo que leia duas notas de um aluno e o
seu total de faltas durante o semestre e escreva seu conceito de
acordo com a tabela abaixo. Considere que o aluno somente será aprovado
com média >=6.0 e total de faltas inferior ou igual a 25%. O aluno tem
durante o semestre um total de 80 aulas (quatro aulas por semana).

Obs.: Criar: Procedimentos/funções: ENTRARDADOS, CALCULO, e MORSTRA_RESULTADO

*/
