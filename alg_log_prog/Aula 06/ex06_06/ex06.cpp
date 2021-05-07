#include <stdio.h>

int main(){

  int cod, numeroHoras;
  char turno, categoria;
  float valorHora, salIni, valorAux, salFinal;

  for (int i = 0; i<10;i++)
  {
    printf("----------------------------------------------------\n");
    printf("Insira seu codigo: ");
    scanf("%d%*c", &cod);
    printf("\nInsira o numero de horas trabalhadas: ");
    scanf("%d%*c", &numeroHoras);

    do
    {
      printf("\nInsira seu turno: ");
      scanf(" %c", &turno);
    }
    while (turno != 'M' && turno != 'V' && turno != 'N');

    do
    {
      printf("\nInsira sua categoria: ");
      scanf(" %c", &categoria);
    }
    while (categoria != 'G' && categoria != 'O');

    printf("\n----------------------------------------------------\n");

    if (categoria == 'G')
    {
      if (turno == 'N')
        valorHora = (0.18*450);
      else
        valorHora = (0.15*450);
    } else {
      if (turno == 'N')
        valorHora = (0.13*450);
      else
        valorHora = (0.10*450);
    }

    salIni = numeroHoras * valorHora;

    if (salIni < 300)
      valorAux = (0.20 * salIni);
    else if (salIni <= 600)
      valorAux = (0.15 * salIni);
    else
      valorAux = (0.05 * salIni);

    salFinal = salIni + valorAux;

    printf("\n----------------------------------------------------\n");
    printf("Codigo do trabalhador: %d", cod);
    printf("\nNumero de horas trabalhadas: %d", numeroHoras);
    printf("\nValor da hora trabalhada: %.2f", valorHora);
    printf("\nSalario inicial: R$ %.2f", salIni);
    printf("\nAuxilio alimentacao: R$ %.2f", valorAux);
    printf("\nSalario final: R$ %.2f\n", salFinal);
  }
  return 0;
}
