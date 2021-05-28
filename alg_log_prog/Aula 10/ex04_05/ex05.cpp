#include <stdio.h>

void acr(float a, float b)
{
  float acrescimo = b-a;

  printf("o acréscimo foi de %.2f", acrescimo);

}

int main()
{
  float a, b;

  printf("Insira um numero: ");
  scanf("%f%*c", &a);

  printf("Insira um numero: ");
  scanf("%f%*c", &b);

  acr(a, b);

  return 0;
}
