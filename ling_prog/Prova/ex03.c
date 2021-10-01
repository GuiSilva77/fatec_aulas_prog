#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float notas[9];


void entrarDados(int i)
{
  fflush(stdin);
  printf("Qual a nota que você daria para a aula do professor Timbúrcio: ");
  scanf("%f", &notas[i]);
}

float calculo(int qtNotas)
{
  float media = 0;

  for(int i=0;i<qtNotas;i++)
  {
    media += notas[i];
  }

  media /= qtNotas;
  return media;
}

void mostarResultado(float media)
{
  if(media >= 9)
    printf("\n\nA aula foi classificada como: ÓTIMA.\n");
  else if (media >= 7)
    printf("\n\nA aula foi classificada como: BOM.\n");
  else if (media >= 5)
    printf("\n\nA aula foi classificada como: REGULAR.\n");
  else if (media >= 3)
    printf("\n\nA aula foi classificada como: RUIM.\n");
  else if (media >= 1)
    printf("\n\nA aula foi classificada como: PÉSSIMO.\n");
}

int main()
{
  setlocale(LC_ALL, "Portuguese");

  for(int i=0;i<10;i++)
    entrarDados(i);

  float media = calculo(10);

  mostarResultado(media);

  system("pause");
  return 0;
}

/* Um professor pesquisou entre seus 10 alunos (usar vetores) sobre a
 qualidade de suas aulas. Cada aluno atribuiu uma nota de 1 a 10 e ao
  final foi calculada uma média, classificando a aula de acordo com a
   tabela abaixo: de 9 a 10 (ótimo), de 7 a 8,9 (bom), de 5 a 6,9 (regular),
    de 3 a 4,9 (Ruim) e de 1 a 2,9 (Péssimo).
Obs.: Organize os dados em VETORES
Criar: Procedimentos/funções: ENTRARDADOS, CALCULO e MostraResultado. Armazenar as notas em VETOR/MATRIZES.

*/
