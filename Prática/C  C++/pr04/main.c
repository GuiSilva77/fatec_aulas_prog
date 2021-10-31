#include <stdio.h>
#include <stdlib.h>

void lerDados(int *p)
{
  printf("Insira um numero: ");
  scanf("%d", p);
}

void processo(int *p)
{
  printf("\n %d", *p);
}

int main(void)
{
  int variavel = 0;

  lerDados(&variavel);

  printf("\n Variavel: %d", variavel);

  processo(&variavel);

  return EXIT_SUCCESS;
}
