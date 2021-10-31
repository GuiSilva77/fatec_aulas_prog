#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int vetor[10], pares[6], impares[5];
int j=0, l=0;

void popularVetor()
{
  for(int i=10;i<=20;i++)
  {
    vetor[j]=i;
    j++;
  }
}

void saidaDados()
{
  printf("vetor = {");
  for(int m=0;m<=10;m++)
    printf(" %d,", vetor[m]);

  printf("}\n");
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  popularVetor();

  saidaDados();

  system("pause");
  return EXIT_SUCCESS;
}
