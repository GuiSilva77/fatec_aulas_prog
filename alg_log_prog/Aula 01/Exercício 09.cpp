#include <stdio.h>

int main(){

    float l1, l2, area;

    printf("Insira o valor do primeiro lado: ");
    scanf("%f%*c", &l1);

    printf("Insira o valor do segundo lado: ");
    scanf("%f%*c", &l2);

    area = (l1 * l2)/2;

    printf("A area do triangulo eh: %f", area);


    getchar();
    return 0;
}




