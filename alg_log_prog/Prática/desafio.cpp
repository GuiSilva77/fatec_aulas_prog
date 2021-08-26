#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
  char nomec[100], nome[70], sobrenome[30];
  int i = 0;

  printf("Insira seu nome completo: ");
  gets(nomec);

  strrev(nomec);

  do
  {
    sobrenome[i] = nomec[i];
    i++;
  }
  while(nomec[i] != ' ');

  strrev(sobrenome);

  printf("%s", sobrenome);

  return 0;
}
