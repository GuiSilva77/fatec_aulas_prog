#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b);

int main()
{
  float a = 0,
        b = 0;

  printf("Insira um numero: ");
  scanf("%f", &a);
  printf("Insira outro numero: ");
  scanf("%f", &b);

  troca(&a, &b);

  printf("\n Depois da troca: "
         "\n a: %.2f"
         "\n b: %.2f", a, b
        );

  return 0;
}

void troca(float *a, float *b)
{
  float temp;
  temp = *b;
  *b = *a;
  *a = temp;
}
