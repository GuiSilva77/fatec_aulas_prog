#include <stdio.h>

void soma(int a, int b)
{
  int i, n = 0;

  for (i = a;i<b;i++)
    n += i;

  printf("A soma dos numeros entre a e b eh de: %d", n);

}

int main()
{
  int a, b;

  printf("Insira um numero: ");
  scanf("%d%*c", &a);

  printf("Insira um numero: ");
  scanf("%d%*c", &b);

  soma(a, b);

}
