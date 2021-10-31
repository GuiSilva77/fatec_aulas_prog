#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int vetor[4], cubo[4];

void entradaDados(int i)
{
  printf("\nNúmero: ");
  fflush(stdin);
  scanf("%d", &vetor[i]);
}

void calculo(int i)
{
  cubo[i] = pow(vetor[i], 2);

  printf("Cubo: %d\n", cubo[i]);
}

void saidaDados()
{
  printf("Números / Potências\n");
  for (int j=0;j<5;j++)
    printf("%d = %d\n", vetor[j], cubo[j]);
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  for(int i=0;i<5;i++)
  {
    entradaDados(i);
    calculo(i);
  }

  system("cls");

  saidaDados();

  system("pause");
  return EXIT_SUCCESS;
}
