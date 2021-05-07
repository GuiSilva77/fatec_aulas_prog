#include <stdio.h>
#include <stdlib.h>

int main(){
  int n = 0, fator=1;

  printf("Insira N: ");
  scanf("%d%*c", &n);

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
      fator *= j;
    printf("  %d    %d  \n", i, fator);
    fator = 1;
  }

  return 0;
}
