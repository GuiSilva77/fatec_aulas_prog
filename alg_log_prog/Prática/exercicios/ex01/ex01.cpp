#include <stdio.h>
#include <stdlib.h>

main()
{
  float valor, valorcm, valordm, valormm;

  printf("Insira um valor em metros: ");
  scanf("%f", &valor);

  valorcm = valor * 100;
  valordm = valor * 10;
  valormm = valor * 1000;

  printf("\nValor: %.1f", valor);
  printf("\nValor em mm: %.1f", valormm);
  printf("\nValor em cm: %.1f", valorcm);
  printf("\nValor em dm: %.1f", valordm);

  return EXIT_SUCCESS;
}
