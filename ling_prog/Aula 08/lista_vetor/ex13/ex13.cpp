#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
  setlocale(LC_ALL, "portuguese");

  float vetor[5];

  for (int i=0;i<6;i++)
  {
    printf("\nInsira um n�mero: ");
    scanf("%f", &vetor[i]);
  }

  for(int j=0;j<6;j++)
    printf("\nPosi��o [%d] = %.3f", j, vetor[j]);

  system("pause");
  return EXIT_SUCCESS;
}
