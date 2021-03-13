#include <stdio.h>
#include <math.h>
#define pi 3.1415

int main(){
    float parede, chao, escada;

    printf("Digite o tamanho da escada em m: ");
    scanf("%f%*c", &escada);

    printf("Digite a altura da parede ate a ponta da escada em m: ");
    scanf("%f%*c", &parede);

    chao = sqrt(pow(escada, 2)-pow(parede, 2));

    printf("A distancia que a escada deve estar eh de %.2f metros.", chao);
    return 0;
}
