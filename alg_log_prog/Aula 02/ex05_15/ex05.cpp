#include <stdio.h>

int main(){
    float prefa, pluc, pimp, prefi;

    printf("Digite o preco base do carro: ");
    scanf("%f%*c", &prefa);

    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f%*c", &pluc);

    printf("Digite o percentual de impostos: ");
    scanf("%f%*c", &pimp);

    pluc = prefa * pluc/100;
    pimp = prefa * pimp/100;


    prefi = (prefa + (pluc) + (pimp));

    printf("Com carro de valor base de R$ %.2f, sao os seguintes valores:\n", prefa);
    printf("O lucro lucro do distribuidor: R$ %.2f\n", pluc);
    printf("O imposto: R$ %.2f\n", pimp);
    printf("Preco final do veiculo: R$ %.2f", prefi);

    return 0;
}
