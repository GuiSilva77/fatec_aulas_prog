#include <stdio.h>
#define pi 3.1415
int main(){

    float raio, area;

    printf("Insira o valor do raio: ");
    scanf("%f%*c", &raio);

    area = pi * (raio * raio);

    printf("A area do circulo eh: %f", area);


    getchar();
    return 0;
}





