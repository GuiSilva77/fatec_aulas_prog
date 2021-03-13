#include <stdio.h>

int main(){
    float custo, convite, qtcon;

    printf("Insira o custo da peca: ");
    scanf("%f%*c", &custo);

    printf("Insira o custo do convite: ");
    scanf("%f%*c", &convite);

    qtcon = custo / convite;

    printf("Serao necessarios %.0f convites para cobrir o custo da peca.", qtcon);
    return 0;
}
