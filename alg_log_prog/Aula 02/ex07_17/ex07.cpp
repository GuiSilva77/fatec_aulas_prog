#include <stdio.h>

int main(){
    float sal, saldo, ch1, ch2, cpmf;

    printf("Digite o valor a ser depositado: R$ ");
    scanf("%f%*c", &sal);

    printf("Digite o valor do cheque 1: R$ ");
    scanf("%f%*c", &ch1);

    printf("Digite o valor do cheque 2: R$ ");
    scanf("%f%*c", &ch2);

    cpmf = 0.0038;

    saldo = saldo + sal;
    saldo = (saldo - ((ch1 + (ch1 * cpmf)) + (ch2 + (ch2 * cpmf))));

    printf("O saldo atual eh de R$ %.2f", saldo);

    return 0;
}
