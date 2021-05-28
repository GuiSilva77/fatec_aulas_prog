#include <stdio.h>

int soma(int a, int b, int c)
{
  int s=0;
  for(int i=b;i<=c;i++)
  {
    if (i%a == 0)
      s+=i;
  }

  return s;
}

int main()
{
  int a , b, c;

  printf("Insira um numero: ");
  scanf("%d%*c", &a);

  printf("Insira um numero: ");
  scanf("%d%*c", &b);

  printf("Insira um numero: ");
  scanf("%d%*c", &c);

  printf("A soma dos numeros eh: %d", soma(a, b, c));
}
