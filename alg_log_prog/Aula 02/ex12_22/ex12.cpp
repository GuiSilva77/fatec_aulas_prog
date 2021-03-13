#include <stdio.h>

int main(){
    float salm, qkwh, vkwh, vpr, vprq;

    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f%*c", &salm);

    printf("Digite a quantidade de KW consumida: ");
    scanf("%f%*c", &qkwh);

    vkwh = 0.20 * salm;
    vpr = qkwh * vkwh;
    vprq = vpr - (vpr * 0.15);

    printf("O valor a ser pago pela residencia sera de R$ %.2f, o valor do Kwh eh de R$ %.2f, e o valor a ser pago com 15 porcento de desconto sera de R$ %.2f", vpr, vkwh, vprq);

    return 0;
}
