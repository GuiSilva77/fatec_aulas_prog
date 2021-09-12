#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{
  setlocale(LC_ALL, "portuguese");
  int vetor[4], cubo[4];

  for (int i=0;i<5;i++)
  {
    printf("\nNúmero: ");
    scanf("%d", &vetor[i]);

    cubo[i] = pow(vetor[i], 2);
  }

  system("cls");

  printf("Vetor = {");
  for(int m=0;m<=4;m++)
    printf(" %d,", vetor[m]);

  printf("}\n");

  printf("Cubo = {");
  for(int n=0;n<=4;n++)
    printf(" %d,", cubo[n]);

  printf("}\n");

  system("pause");
  return EXIT_SUCCESS;
}
