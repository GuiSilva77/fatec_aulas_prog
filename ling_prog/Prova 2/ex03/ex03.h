#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Notas {
  float n1;
  float n2;
  float n3;
  float n4;
};

typedef struct {
  char nome[50];
  struct Notas notas;
  float media;
  char situacao[22];
} Aluno;

//função para a entrada de dados.
void entrarDados(Aluno *vetor, int i)
{
  fflush(stdin);
  printf("\nAluno %d", i+1);
  printf("\nNome: ");
  fgets(vetor[i].nome, 49, stdin);
  printf("\nNota 1: ");
  scanf("%f", &vetor[i].notas.n1);
  printf("\nNota 2: ");
  scanf("%f", &vetor[i].notas.n2);
  printf("\nNota 3: ");
  scanf("%f", &vetor[i].notas.n3);
  printf("\nNota 4: ");
  scanf("%f", &vetor[i].notas.n4);

  vetor[i].nome[strcspn(vetor[i].nome, "\n")] = 0;
}

void calcMedia(Aluno *vetor, int i)
{
  vetor[i].media = (vetor[i].notas.n1 +
                    vetor[i].notas.n2 +
                    vetor[i].notas.n3 +
                    vetor[i].notas.n4 )/ 4;
}

void calcSituacao(Aluno *vetor, int i)
{
  float media = vetor[i].media;
  if (media >= 6)
    strcpy(vetor[i].situacao,"Aprovado para Media");
  else if (media >= 4)
    strcpy(vetor[i].situacao,"Exame para Media");
  else
    strcpy(vetor[i].situacao,"Reprovado para Media");
}

void encontrar(Aluno *vetor, int TAMANHO,char *maiorNome, char *menorNome)
{
  float menor = 0,
        maior = 0;

  for (int k = 0; k <= TAMANHO; k++) {
    if (k == 0)
      maior = vetor[k].media;

    if (vetor[k].media > maior) {
      maior = vetor[k].media;
      strcpy(maiorNome, vetor[k].nome);
    }
    else {
      menor = vetor[k].media;
      strcpy(menorNome, vetor[k].nome);
    }
  }
}

float mediaGeral(Aluno *lista,int TAMANHO)
{
  float media = 0;
  for (int l = 0; l<=TAMANHO; l++)
    media += lista[l].media;

  media /= (TAMANHO+1);

  return media;
}

void gerarQt(Aluno *vetor, int TAMANHO, int *arr)
{
  for (int m = 0; m<=TAMANHO; m++)
  {
    if(strcmp("Aprovado para Media", vetor[m].situacao))
      arr[0] = arr[0] + 1;
    else if(strcmp("Exame para Media", vetor[m].situacao))
      arr[1] = arr[1] + 1;
    else
      arr[2] = arr[2] + 2;
  }
}

void mostrarDados(Aluno *vetor, int TAMANHO)
{
  for (int n = 0; n <= TAMANHO; n++)
  {
     printf("\n --------------------------//--------------------------");

     printf(
           "\nNome: %s"
           "\nNotas: %.2f, %.2f, %.2f, %.2f"
           "\nMédia: %.2f"
           "\nSituação: %s", vetor[n].nome,
                             vetor[n].notas.n1, vetor[n].notas.n2, vetor[n].notas.n3, vetor[n].notas.n4,
                             vetor[n].media,
                             vetor[n].situacao
           );
  }
}
