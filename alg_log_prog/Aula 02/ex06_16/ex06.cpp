#include <stdio.h>

int main(){
    float nht, vsm, vht, sb, imp, sar;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f%*c", &nht);

    printf("Digite o valor do salario minimo: ");
    scanf("%f%*c", &vsm);

    vht = vsm/2;
    sb = nht * vht;
    imp = sb * 0.03;

    sar = sb - imp;

    printf("O salario a receber sera de R$%.2f.", sar);

    return 0;
}
