#include <stdio.h>

void sub()
{
  int a[5], menor, maior;

  for (int i=0;i<5;i++)
  {
    printf("Insira um numero: ");
    scanf("%d%*c", &a[i]);

    if (i == 0)
      menor = a[i];

    if (a[i] < menor)
      menor = a[i];
    else
      maior = a[i];
  }

  printf("\n Menor Numero: %d", menor);
  printf("\n Maior Numero: %d", maior);
}

int main()
{
  sub();

  return 0;
}
