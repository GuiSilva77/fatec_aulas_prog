#include <stdio.h>

int main(){
  int codCid, numVei, numAci, medVei = 0, codMaiorAci, maiorAci, codMenorAci, menorAci;

  for(int i = 0; i < 5;i++)
  {
    printf("-----------------------------------------------\n");
    printf("Insira o codigo da cidade: ");
    scanf("%d%*c", &codCid);
    printf("Insira o numero de carros de passeio: ");
    scanf("%d%*c", &numVei);
    printf("Insira o numero de acidentes: ");
    scanf("%d%*c", &numAci);
    printf("-----------------------------------------------\n");
    int maiorAci = numAci;

    if  (i > 1){
      if (numAci > maiorAci)
      {
        codMaiorAci = codCid;
        maiorAci = numAci;
      } else {
         codMenorAci = codCid;
         menorAci = numAci;
        }
    }

    medVei += numVei;

    if (i == 5)
      medVei /= 5;

    if (numVei < 2000){
      float med1 = numAci/numVei;
      printf("A media de acidentes por veiculo na cidade %d eh de %.2f\n", codCid, med1);
    }

  }
  printf("\n-----------------------------------------------\n");
  printf("O maior indice acidentes e %d na cidade %d", maiorAci, codMaiorAci);
  printf("\n O menor indice acidentes e %d na cidade %d", menorAci, codMenorAci);
  printf("\n-----------------------------------------------\n");
  return 0;
}
