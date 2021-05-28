#include <stdio.h>

struct Estado{
  char UF[2];
  int numVei;
  int NumAci;
};

int main(){

  int MaiorAci, MenorAci, numAcidentes;
  char UFMaior[2], UFMenor[2];

  Estado estados[2];

  for (int i = 0; i < 2;i++)
  {
    printf("\nInsira o nome do estado: ");
    for(int j = 0;j<2;j++){
      scanf("%c%*c", &estados[i].UF[j]);}
  printf("\nInsira o numero de veiculos circulantes: ");
  scanf("%d%*c", &estados[i].numVei);
  printf("\nInsira o numeto de acidentes:");
  scanf("%d%*c", &estados[i].NumAci);
  printf("\n-------------------------------------------------------------");

  if (i == 0)
    MenorAci = estados[i].NumAci;

   if (estados[i].NumAci < MenorAci)
   {
     MenorAci = estados[i].NumAci;
     for (int k=0;k<2;k++)
       UFMenor[k] = estados[i].UF[k];
   } else {
     MaiorAci = estados[i].NumAci;
     for (int l=0;l<2;l++)
       UFMaior[l] = estados[i].UF[l];
     }
  }


  printf("\nA Menor taxa de acidentes foi em ");
  for (int m = 0; m < 2;m++)
    printf("%c", UFMenor[m]);
  printf(" com %d acidentes.", MenorAci);

  printf("\nA Maior taxa de acidentes foi em ");
  for (int m = 0; m < 2;m++)
    printf("%c", UFMaior[m]);
  printf(" com %d acidentes.", MaiorAci);

  return 0;
}
