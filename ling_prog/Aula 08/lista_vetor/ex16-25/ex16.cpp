#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
  setlocale(LC_ALL, "portuguese");

  int vetor[10], pares[6], impares[5];
  int j=0, l=0;

  for(int i=10;i<=20;i++)
  {
    vetor[j]=i;
    j++;
  }

  j = 0;

  for(int k=0;k<=10;k++)
  {
    if(vetor[k]%2 == 0)
    {
      pares[j] = vetor[k];
      j++;
    }
  }

  j = 0;

  for(int k=0;k<=10;k++)
  {
    if(vetor[k]%2 != 0)
    {
      impares[l] = vetor[k];
      l++;
    }
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
  for(int o=0;o<5;o++)
    printf(" %d,", impares[o]);

  printf("}\n");


  system("pause");
  return EXIT_SUCCESS;
}
