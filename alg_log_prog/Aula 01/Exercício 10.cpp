#include <stdio.h>

int main(){

    float raio, area;

    printf("Insira o valor do raio: ");
    scanf("%f%*c", &raio);

    area = 3.1415 * (raio * raio);

    printf("A area do circulo eh: %f", area);


    getchar();
    return 0;
}





