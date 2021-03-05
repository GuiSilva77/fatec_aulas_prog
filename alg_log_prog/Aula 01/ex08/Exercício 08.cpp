#include <stdio.h>

int main(){

    float dep, jur, depj;

    printf("Insira o valor do deposito: ");
    scanf("%f%*c", &dep);

    printf("Insira os juros: ");
    scanf("%f%*c", &jur);

    depj = dep + (dep * (jur/100));

    printf("Os juros sao: %5.2f\n", jur);
    printf("Os o valor acrescido do deposito eh: %5.2f", depj);


    getchar();
    return 0;
}



