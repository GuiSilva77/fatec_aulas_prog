#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main()
{
  setlocale(LC_ALL, "portuguese");

  char nomes[2][100];
  int a[] = {0,0,0};
  int e[] = {0,0,0};

  for (int i=0;i<3;i++)
  {
    printf("\nInsira um nome: ");
    gets(nomes[i]);
  }

  for (int j=0;j<3;j++)
  {
    for (int k=0;k<strlen(nomes[j]);k++)
    {
      if (nomes[j][k] == 'a')
        a[j]++;
      else if (nomes[j][k] == 'e')
        e[j]++;
    }
  }

  printf("\nNo nome 1 há %d letra(s) 'a' e %d letra(s) 'e'.", a[0], e[0]);
  printf("\nNo nome 2 há %d letra(s) 'a' e %d letra(s) 'e'.", a[1], e[1]);
  printf("\nNo nome 3 há %d letra(s) 'a' e %d letra(s) 'e'.", a[2], e[2]);

  system("pause");
  return EXIT_SUCCESS;
}
