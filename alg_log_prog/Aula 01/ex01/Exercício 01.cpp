#include <stdio.h>

int main(){
    float n1, n2, n3, n4, soma;

    printf("Insira o Primeiro Valor: ");
    scanf("%f%*c", &n1);

    printf("Insira o Segundo Valor: ");
    scanf("%f%*c", &n2);

    printf("Insira o Terceiro Valor: ");
    scanf("%f%*c", &n3);

    printf("Insira o Quarto Valor: ");
    scanf("%f%*c", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("O Resultado sera: %100.0f", soma);
    getchar();

return 0;
}



