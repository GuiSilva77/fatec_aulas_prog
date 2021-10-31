#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char nomes[100][9];
char sexo[9];
int idade[9];

void entradaDados(int i)
{
  printf("\nInsira seu nome: ");
  fflush(stdin);
  gets(nomes[i]);

  printf("Insira sua idade: ");
  fflush(stdin);
  scanf("%d", &idade[i]);

  printf("Insira seu sexo (f ou m): ");
  fflush(stdin);
  scanf("%c", &sexo[i]);
}

void processo(int i)
{
  if (idade[i] < 25 && sexo[i] == 'f')
    printf("%s ACEITA.\n", nomes[i]);
  else
    printf("%s NÂO ACEITA.\n", nomes[i]);
}


int main()
{
  setlocale(LC_ALL, "Portuguese");

  for(int i=0;i<10;i++)
  {
    entradaDados(i);
    processo(i);
  }

  system("Pause");
  return 0;
}

/*Ler nome, sexo e idade de 10 pessoas, organize o código em VETORES.
Se sexo for feminino e idade menor que 25,  imprimir o nome da pessoa e a palavra ACEITA. Caso contrario imprimir NAO ACEITA. Organizar o código com PROCEDIMENTOS e FUNÇÕES;
*/
