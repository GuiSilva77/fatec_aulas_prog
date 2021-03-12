#include <stdio.h>

int main(){
    float pes, polegadas, jardas, milhas;

    printf("Digite o valor em pes: ");
    scanf("%f%*c", &pes);

    polegadas = 12 * pes;
    jardas =  0.3333333 * pes;
    milhas = 1.760 * jardas;

    printf("O valor de %f, eh:\n", pes);
    printf("Em polegadas: %f\n", polegadas);
    printf("Em jardas: %f\n", jardas);
    printf("Em milhas: %f", milhas);

    return 0;
}
