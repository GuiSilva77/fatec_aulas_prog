#include <stdio.h>
#include <stdlib.h>

int x, y;

x = 3;
y = 4;

//crie uma função que recebe dois ponteiros para inteiro e troca os valores deles
void troca(int *i, int *j)
{
  int *temp;
  temp = i;
  i = j;
  j = temp;
}

int main()
{
  troca(&x, &y);

  printf("x = %d\n", x);
  printf("y = %d\n", y);

  return 0;
}