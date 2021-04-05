#include <stdio.h>
#include <math.h>

int main()
{
    int opcao;

    printf("Digite uma opcao:\n");
    printf("  1. Soma de  dois numeros\n");
    printf("  2. Raiz quadrada de um numero\n");
    printf("Opcao: ");
    scanf("%d%*c", &opcao);

    switch (opcao)
    {
    case 1:
        float numero1, numero2, resultado;

        printf("Insira um numero: ");
        scanf("%f%*c", &numero1);
        printf("Insira outro numero: ");
        scanf("%f%*c", &numero2);

        resultado = numero1 + numero2;

        printf("O resultado da soma eh: %.2f", resultado);
        break;

    case 2:
        printf("Insira um numero: ");
        scanf("%f%*c", &numero1);

        resultado = sqrt(numero1);

        printf("O resultado da raiz eh: %.2f", resultado);
        break;

    default:
        printf("Digite uma opcao valida");
        break;
    }

    return 0;
}
