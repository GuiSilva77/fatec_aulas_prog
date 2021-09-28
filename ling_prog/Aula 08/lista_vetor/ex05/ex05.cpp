#include <stdio.h>
#include <stdlib.h>
#include <string.h>


main()
{
  char vetor[3][20];

  for (int i=0;i<3;i++)
  {
    do {
      printf("\nInsira nome [%d]:", i+1);
      gets(vetor[i]);
    }
    while (strlen(vetor[i]) > 20);
  }

  for (int k=0;k<3;k++)
  {
    printf("\nNome [%d]: ", k+1);
    puts(vetor[k]);
  }

  system("Pause");
  return EXIT_SUCCESS;
}
