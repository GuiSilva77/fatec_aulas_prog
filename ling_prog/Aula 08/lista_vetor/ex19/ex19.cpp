#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int vetor[4], cubo[4] = {0,0,0,0};

void entradaDados()
{
  for (int i=0;i<5;i++)
  {
    printf("\nNúmero: ");
    fflush(stdin);
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
  printf("Cubo = {");
  for(int n=0;n<5;n++)
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
