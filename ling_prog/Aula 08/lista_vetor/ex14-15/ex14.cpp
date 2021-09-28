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

    printf("Cubo: %d\n", cubo[i]);
  }

  system("cls");

  printf("Números / Potências\n");
  for (int j=0;j<5;j++)
    printf("%d = %d\n", vetor[j], cubo[j]);

  system("pause");
  return EXIT_SUCCESS;
}
