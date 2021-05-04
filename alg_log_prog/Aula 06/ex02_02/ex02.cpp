#include <stdio.h>

int main(){

int N, E = 1, fator = 1, k=0;

printf("Insira o valor de N: ");
scanf("%d%*c", &N);

for(int i = 0; i <=N; i++)
{
  for(int j = 1; j <= i;j++)
    fator *= j;

  E = E + (1/fator);
}

printf("%d", E);



return 0;
}
