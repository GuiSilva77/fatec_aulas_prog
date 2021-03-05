#include <stdio.h>

int main(){

    float sal, aum, saum;

    printf("Insira o Primeiro Valor: ");
    scanf("%f%*c", &sal);

    aum = 50;
    saum = (sal + 50)-(sal * 0.1);

    printf("O aumento do salario sera de: %5.2f", saum);

    getchar();
    return 0;
}


