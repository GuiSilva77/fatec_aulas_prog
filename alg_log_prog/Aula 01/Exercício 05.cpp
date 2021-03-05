#include <stdio.h>

int main(){

    float sal, aum, saum;

    printf("Insira o Primeiro Valor: ");
    scanf("%f%*c", &sal);

    printf("Insira o aumento: ");
    scanf("%f%*c", &aum);

    aum = aum/100;
    saum = sal + (sal * aum);

    printf("O aumento do salario sera de: %5.2f", saum);

    getchar();
    return 0;

}

