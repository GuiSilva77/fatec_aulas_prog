#include <stdio.h>
#include <stdlib.h>

main()
{
  int vetor[10], j=0;

  for(int i=2;i<=20;i++)
  {
    if (i%2 == 0)
      vetor[j] = i;
    else
      j--;

    j++;
  }

  for(int k=0;k<10;k++)
    printf("\n[%d] = [%d]", k, vetor[k]);

  return EXIT_SUCCESS;
}
