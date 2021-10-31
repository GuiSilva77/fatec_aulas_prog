#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int vetor[4], cubo[4];

void entradaDados()
{
  for (int i=0;i<5;i++)
  {
    printf("\nNúmero: ");
    scanf("%d", &vetor[i]);
  }
}

void calculo()
{
  for (int i=0;i<5;i++)
    cubo[i] = pow(vetor[i], 2);
}

void saidaDados()
{
  printf("Vetor = {");
  for(int m=0;m<=4;m++)
    printf(" %d,", vetor[m]);

  printf("}\n");

  printf("Cubo = {");
  for(int n=0;n<=4;n++)
    printf(" %d,", cubo[n]);

  printf("}\n");
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  entradaDados();
  calculo();

  system("cls");

  saidaDados();

  system("pause");
  return EXIT_SUCCESS;
}
