#include <stdio.h>

struct habitante
{
  int idade;
  char sexo;
  float renda;
  int numFilhos;
};

int main(){
  int Menoridade, maioridade = 0, numMul = 0;
  float media;
  habitante habitantes[20];

  for(int i=0;i<20;i++)
  {
    printf("\nInsira a idade do habitante %d:", i);
    scanf("%d%*c", &habitantes[i].idade);
    printf("\nInsira o sexo do habitante %d:", i);
    scanf("%c%*c", &habitantes[i].sexo);
    printf("\nInsira a renda familiar do habitante %d:", i);
    scanf("%f%*c", &habitantes[i].renda);
    printf("\nInsira a numeros de filhos do habitante %d:", i);
    scanf("%d%*c", &habitantes[i].numFilhos);
    printf("\n-------------------------------------------------------------");

    media += habitantes[i].renda;

    if (i == 0)
      Menoridade = habitantes[i].idade;

    if (habitantes[i].idade < Menoridade)
      Menoridade = habitantes[i].idade;
    else
      maioridade = habitantes[i].idade;

    if (habitantes[i].sexo == 'f' && habitantes[i].numFilhos > 2 && habitantes[i].renda < 600)
      numMul++;
  }

  media /= 20;

  printf("\nMedia do salario entre os habitantes: R$ %.2f", media);
  printf("\nMenor idade entre os habitantes: %d", Menoridade);
  printf("\nMaior idade entre os habitantes: %d", maioridade);
  printf("\nNumero de mulheres com mais de dois filhos com renda menor que 600 reais: %d", numMul);


  return 0;
}
