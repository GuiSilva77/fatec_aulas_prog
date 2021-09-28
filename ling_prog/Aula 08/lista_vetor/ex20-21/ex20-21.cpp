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

  printf("vetor = {");
  for(int m=0;m<=10;m++)
    printf(" %d,", vetor[m]);

  printf("}\n");

  system("pause");
  return EXIT_SUCCESS;
}
