#include <stdio.h>
#include <math.h>

int main(){
    float hora, h, m, conv;

    printf("Insira a hora: ");
    scanf("%f%*c", &hora);

    m = modf(hora, &h);

    conv = (h * 60) + (m*100);

    printf("A quantidade de minutos eh %.0f.", conv);

    return 0;
}
