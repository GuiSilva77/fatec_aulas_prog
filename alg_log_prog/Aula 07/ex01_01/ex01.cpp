#include <stdio.h>

int main(){

int notas[9], maiores;

for (int i = 0; i < 10;i++)
{
  printf("\n----------------------------------------------------\n");
  printf("Insira a nota: ");
  scanf("%d%*c", &notas[i]);
  printf("----------------------------------------------------\n");

  if (notas[i] > 7)
    maiores++;

}
  printf("\nDas 10 notas digitadas, %d foram maiores que 7\n", maiores);


  return 0;
}
