#include <stdio.h>

int main(){
    float n1, n2, n3, media;

    printf("Insira o Primeiro Valor: ");
    scanf("%f%*c", &n1);

    printf("Insira o Segundo Valor: ");
    scanf("%f%*c", &n2);

    printf("Insira o Terceiro Valor: ");
    scanf("%f%*c", &n3);

    media = (n1 + n2 + n3)/3;

    printf("O resulatdo eh: %f", media);


    getchar();
    return 0;
}
