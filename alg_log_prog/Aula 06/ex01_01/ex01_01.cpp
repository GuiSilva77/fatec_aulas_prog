#include <stdio.h>

int main(){
  float  salario_anterior, salario_atual, aumento;
  //salario de 2005
  salario_anterior = 1000;
  aumento = 0.015;
  //salario de 2006
  salario_atual = salario_anterior + (salario_anterior * aumento);

  salario_anterior = salario_atual;


  for(int i = 2007; i <= 2021; i++)
  {
    aumento *= 2;

    salario_atual = salario_anterior + (salario_anterior * aumento);
    salario_anterior = salario_atual;
    printf("\nO salario atual de %d e de R$ %.2f.", i, salario_atual);
  }

  printf("\nO salario atual e de R$ %.2f.", salario_atual);

  getchar();
  return 0;
}
