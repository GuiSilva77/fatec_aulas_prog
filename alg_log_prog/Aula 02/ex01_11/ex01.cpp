#include <stdio.h>
#include <math.h>

int main(){
    float n1;

    printf("Digite um numero:");
    scanf("%f%*c", &n1);

    /* if () {

    } else {

    }

    */

    if (n1 > 0){
        float n1p, n1c, n1sq, n1cs;
        n1p = pow(n1, 2);
        n1c = pow(n1, 3);
        n1sq = sqrt(n1);
        n1cs = cbrt(n1);

        printf("O valor das operacoes (n^2, n^3, raiz2(n), raiz3(n)) de %f, sao:\n", n1);
        printf("numero ao quadrado: %f\n", n1p);
        printf("numero ao cubo: %f\n", n1c);
        printf("raiz quadrada do numero: %f\n", n1sq);
        printf("raiz cubica do numero: %f\n", n1cs);

        return 0;
    } else {
        printf("Digite um numero positivo.");
        return 0;
    }
}
