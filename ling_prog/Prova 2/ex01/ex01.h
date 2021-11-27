#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[100];
  int idade;
  char sexo;
  float salario;
  float bonus_merito;
} Funcionario;

void entrarDados(Funcionario *g)
{
  fflush(stdin);

  printf("\n--------------------------//--------------------------\n");
  printf("Insira o nome do funcionario: ");
  scanf("%99s", g->nome);
  printf("Insira a idade do funcionario: ");
  scanf("%d", &g->idade);
  printf("Insira o sexo do funcionario: ");
  scanf(" %c", &g->sexo);
  printf("Insira o salario do funcionario: ");
  scanf("%f", &g->salario);
  printf("Insira o bonus merito do funcionario: ");
  scanf("%f", &g->bonus_merito);
}

// função para encontrar ou a maior ou a menor idade de acordo com o sexo
int encontrar(const char sexo, Funcionario *vetor, int tamanho)
{
  int menor = 0, maior = 0;
  int l=0, n=0;

  if (sexo == 'f')
  {
    // caso o sexo for feminino ele vai mapear o vetor e procurar a menor idade
    // das que tem o sexo feminino.
    for (int i = 0; i <= tamanho; i++)
    {
      if (vetor[i].sexo == 'f')
      {
        if (l == 0)
          menor = vetor[i].idade;

        if (vetor[i].idade < menor)
          menor = vetor[i].idade;

        l++;
      }
    }
    return menor;
  }
  else
  {
    // mesma coisa com o sexo masculino.
    for (int i = 0; i <= tamanho; i++)
    {
      if (vetor[i].sexo == 'm')
      {
        if (n == 0)
          maior = vetor[i].idade;

        if (vetor[i].idade > maior)
          maior = vetor[i].idade;

        n++;
      }
    }
    return maior;
  }
}

//função para calcular a media dos salarios
float media(Funcionario *vetor, int tamanho)
{
  float media = 0;

  for (int i = 0; i <= tamanho; i++)
    media += vetor[i].salario;

  media /= (tamanho + 1);

  return media;
}

// função para realizar o reajuste de acordo com o salario
void reajuste(Funcionario *vetor, int tamanho)
{
  for (int i = 0; i <= tamanho; i++)
  {
    if (vetor[i].salario <= 1000)
    {
      float aumento = vetor[i].salario * 0.10;
      vetor[i].salario += aumento;
      vetor[i].bonus_merito = 200;
      // fiquei confuso sobre a parte do bonus mérito, eu não sabia se era para somar
      // com o salario ouu não, na dúvida aqui está o código para adicionar no salario:
      // vetor[i].salario += vetor[i].bonus_merito;
    }
  }
}
//função para mostrar os resultados
void mostrar(Funcionario *vetor, int tamanho)
{
  for (int i = 0; i <= tamanho; i++)
  {
     printf("\n --------------------------//--------------------------");

     printf(
           "\nNome: %s"
           "\nIdade: %d"
           "\nSexo: %c"
           "\nSalario: %.2f"
           "\nBonus Merito: %.2f", vetor[i].nome,
                                 vetor[i].idade,
                                 vetor[i].sexo,
                                 vetor[i].salario,
                                 vetor[i].bonus_merito
           );
  }
}
