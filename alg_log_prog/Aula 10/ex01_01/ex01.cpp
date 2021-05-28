#include <stdio.h>

int isOne(int a)
{
  if (a < 0)
    return 0;
  else
    return 1;
}

int main()
{
  int a;

  printf("Insira um numero: ");
  scanf("%d%*c", &a);

  printf("%d", isOne(a));

}
