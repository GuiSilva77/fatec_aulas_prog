#include <stdio.h>

int main(){

    float sal, aum, saum;

    printf("Insira o Primeiro Valor: ");
    scanf("%f%*c", &sal);

    aum = 0.05;
    saum = (sal + (sal * aum))-(sal * 0.07);

    printf("O aumento do salario sera de: %5.2f", saum);

    getchar();
    return 0;
}

