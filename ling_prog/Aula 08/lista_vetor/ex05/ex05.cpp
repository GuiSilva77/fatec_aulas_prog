#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char vetor[3][20];

void entradaDados()
{
  for (int i=0;i<3;i++)
  {
    do {
      printf("\nInsira nome [%d]:", i+1);
      gets(vetor[i]);
    }
    while (strlen(vetor[i]) > 20);
  }
}

void saidaDados()
{
  for (int k=0;k<3;k++)
  {
    printf("\nNome [%d]: ", k+1);
    puts(vetor[k]);
  }
}

int main()
{
  entradaDados();

  system("cls");

  saidaDados();

  system("Pause");
  return EXIT_SUCCESS;
}
