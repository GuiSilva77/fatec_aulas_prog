#include<stdio.h>

int main(){

    int n1, n2, soma;
    printf("Digite o primeiro numero: ");
    scanf("%d%*c", &n1);

    printf("digite o segundo numero: ");
    scanf("%d%*c", &n2);

    soma = n1+n2;

    printf("A soma eh %d", soma);
    getchar();
    return 0;
}
