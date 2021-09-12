#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
  setlocale(LC_ALL, "portuguese");

  int vetor[10], pares[5], impares[5], j=0, k=0, l=0;

  for(int i=10;i<=20;i++)
  {
    vetor[j] = i;
    if (vetor[i]%2 == 0)
    {
      pares[k] = vetor[j];
      k++;
    }
    else
    {
     impares[l] = vetor[j];
     l++;
    }

    j++;
  }

  printf("vetor = {");
  for(int m=0;m<=10;m++)
    printf(" %d,", vetor[m]);

  printf("}\n");

  printf("pares = {");
  for(int n=5;n>=0;n--)
    printf(" %d,", pares[n]);

  printf("}\n");

  printf("impares = {");
  for(int o=0;o<=5;o++)
    printf(" %d,", impares[o]);

  printf("}\n");

  system("pause");
  return EXIT_SUCCESS;
}
