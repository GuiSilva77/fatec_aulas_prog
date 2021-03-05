#include <stdio.h>

int main(){
    float n1, n2, n3, p1, p2, p3, media;

    printf("Insira o Primeiro Valor: ");
    scanf("%f%*c", &n1);

    printf("Insira o Segundo Valor: ");
    scanf("%f%*c", &n2);

    printf("Insira o Terceiro Valor: ");
    scanf("%f%*c", &n3);

    printf("Insira o Primeiro peso: ");
    scanf("%f%*c", &p1);

    printf("Insira o Segundo peso: ");
    scanf("%f%*c", &p2);

    printf("Insira o Terceiro peso: ");
    scanf("%f%*c", &p3);

    media = ((n1 * p1) + (n2 * p2) + (n3 * p3))/(p1 + p2 +p3);

    printf("A media ponderada eh %f", media);

    getchar();
    return 0;
}
