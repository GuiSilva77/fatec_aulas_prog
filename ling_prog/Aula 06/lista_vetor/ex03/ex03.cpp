#include <stdio.h>
#include <stdlib.h>

main()
{
  int vetor1[10], j = 0;
  int vetor2[10], l = 0;
  int vetor3[10];

  for (int i = 2; i <= 20; i++)
  {
    if (i % 2 == 0)
      vetor1[j] = i;
    else
      j--;

    j++;
  }

  for (int k = 10; k <= 19; k++)
  {
    vetor2[l] = k;
    l++;
  }

  for (int m = 0; m <= 10; m++)
    vetor3[m] = vetor1[m] + vetor2[m];

  for (int n = 0; n < 10; n++)
    printf("\n[%d] = [%d]", n, vetor3[n]);

  system("Pause");
  return EXIT_SUCCESS;
}
