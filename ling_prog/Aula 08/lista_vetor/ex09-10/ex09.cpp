#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char nomes[3][100] = {"", "", ""};
int a[] = {0,0,0};
int e[] = {0,0,0};

void entradaDados()
{
  for (int i=0;i<3;i++)
  {
    printf("\nInsira um nome: ");
    fflush(stdin);
    gets(nomes[i]);
  }
}

void calculo()
{
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
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  entradaDados();

  calculo();

  printf("\nNo nome 1 há %d letra(s) 'a' e %d letra(s) 'e'.", a[0], e[0]);
  printf("\nNo nome 2 há %d letra(s) 'a' e %d letra(s) 'e'.", a[1], e[1]);
  printf("\nNo nome 3 há %d letra(s) 'a' e %d letra(s) 'e'.\n", a[2], e[2]);

  system("pause");
  return EXIT_SUCCESS;
}
