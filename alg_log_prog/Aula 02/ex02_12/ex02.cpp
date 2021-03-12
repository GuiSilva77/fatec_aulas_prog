#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2;

    printf("Digite um numero: ");
    scanf("%f%*c", &n1);
    printf("Digite outro numero: ");
    scanf("%f%*c", &n2);

    if ((n1 > 0) && (n2 > 0)){
        float n3 = pow(n1, n2);
        printf("O resultado de n1 elevado a n2 eh: %f", n3);
        return 0;
    } else {
        printf("Um valor digitado eh invalido.");
        return 0;
    }
}
