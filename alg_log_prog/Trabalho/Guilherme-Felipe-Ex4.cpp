#include <stdio.h>

void calcS(int a)
{
  float s = 1, fat = 1;

  for(int i=1;i<=a;i++)
  {
    for(int j=1;j<=i;j++)
      fat *= j;

    s += 1/fat;
  }

  printf("A soma S eh %.5f", s);
}

int main()
{
  int num;

  printf("Insira um numero: ");
  scanf("%d%*c", &num);

  calcS(num);

  getchar();
  return 0;
}
