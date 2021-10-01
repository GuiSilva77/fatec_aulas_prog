#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char VetorNomes[100][9];
int vetorIdade[9];
char vetorSexo[50][9];

void lerDados(int i)
{
  printf("\nInsira o nome: ");
  gets(VetorNomes[i]);
  fflush(stdin);
  do {
  printf("Insira o sexo: ");
  gets(vetorSexo[i]);
  fflush(stdin);
  } while (strcmpi(vetorSexo[i], "f/0") == 0 || strcmpi(vetorSexo[i], "m/0") == 0);

  printf("Insira o idade: ");
  scanf("%d", &vetorIdade[i]);
  fflush(stdin);
}

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int vetorIdade[9];
  char vetorSexo[1][9];

  for(int i=0;i<10;i++)
  {
    lerDados(i);
    if(vetorIdade[i] < 25 && strcmpi(vetorSexo[i], "f/0") == 0, strcmpi(vetorSexo[i], "feminino/0") == 0)
      printf("%s ACEITA", VetorNomes[i]);
    else
      printf("%s NÃO ACEITA", VetorNomes[i]);
  }



  system("Pause");
  return 0;
}





/*Ler nome, sexo e idade de 10 pessoas, organize o código em VETORES.
Se sexo for feminino e idade menor que 25,  imprimir o nome da pessoa e a palavra ACEITA. Caso contrario imprimir NAO ACEITA. Organizar o código com PROCEDIMENTOS e FUNÇÕES;
*/
