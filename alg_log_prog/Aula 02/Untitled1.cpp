#include <stdio.h>
#include <math.h>
#define pi 3.1415

int main(){
    float angulo, parede, chao, escada;

    printf("Digite o angulo da escada: ");
    scanf("%f%*c", &angulo);

    printf("Digite a altura da parede ate a ponta da escada: ");
    scanf("%f%*c", &parede);

    angulo = (angulo * pi)/180;

    escada = parede / sin(angulo);

    printf("A escada mede %.2f metros.", escada);
    return 0;
}
