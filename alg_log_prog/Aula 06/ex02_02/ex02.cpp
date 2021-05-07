#include <stdio.h>

int main(){

int N, E = 1;
float fator = 1;

 printf("Calculo da formula: \n"
            "E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N! \n\n");

printf("Insira N: ");
scanf("%d%*c", &N);

for(int i=0; i<=N; i++)
{
  for(int j=1; j<=i; j++)
    fator *= j;

  E += 1/fator;
  fator = 1;
}

printf("%d", E);

return 0;
}
