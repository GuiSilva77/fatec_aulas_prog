#include <stdio.h>

int main(){

    float sal, saum;

    printf("Insira o Primeiro Valor: ");
    scanf("%f%*c", &sal);

    saum = sal + (sal * 0,25);

    printf("O aumento do salario sera de: %5.2f", saum);

    getchar();
    return 0;

}
