#include <stdio.h>
#include <math.h>

int main(){
    float n1, pi, pf, arr;

    printf("Insira um número: ");
    scanf("%f%*c", &n1);

    pf = modf(n1, &pi);
    arr = ceil(n1);

    printf("Com o numero %f temos:\n", n1);
    printf("A parte inteira: %f\n", pi);
    printf("A parte fracionaria: %f\n", pf);
    printf("O arredondamento: %f\n", arr);

    return 0;
}
