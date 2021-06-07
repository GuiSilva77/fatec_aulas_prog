#include <stdio.h>

int main()
{
  int n, fat = 1;

  printf("Insira um numero: ");
  scanf("%d%*c", &n);

  for(int i=1;i<=n;i++)
    fat *= i;

  printf("\nO fatorial de %d eh %d.", n, fat);

  getchar();
  return 0;
}
