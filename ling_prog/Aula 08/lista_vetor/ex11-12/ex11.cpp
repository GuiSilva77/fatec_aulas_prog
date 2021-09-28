#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main()
{
  setlocale(LC_ALL, "portuguese");
  char nomes[5][100], situacao[5][100];
  float pr1[5], pr2[5], media[5];

  for(int i=0;i<6;i++)
  {
    printf("\nAluno %d: ", i+1);
    printf("\nNome: ");
    gets(nomes[i]);
    printf("PR1: ");
    scanf("%f", &pr1[i]);
    printf("PR2: ");
    scanf("%f", &pr2[i]);

    media[i] = (pr1[i] + pr2[i])/2;

    if (media[i] > 5)
      strcpy(situacao[i], "Aprovado");
    else
      strcpy(situacao[i], "Reprovado");
  }

  system("cls");

  for(int k=0;k<6;k++)
  {
    printf("\nAluno %d: ", k+1);
    printf("\nNome: %s", nomes[k]);
    printf("\nPR1: %.2f", pr1[k]);
    printf("\nPR2: %.2f", pr2[k]);
    printf("\nMédia: %.2f", media[k]);
    printf("\nSituação: %s", situacao[k]);
  }

  system("pause");
  return EXIT_SUCCESS;
}

