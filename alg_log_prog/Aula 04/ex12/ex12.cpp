#include <stdio.h>

int main()
{
    int codigo;
    float salario, valor_aumento, novo_salario;

    printf("digite o codigo relativo ao seu cargo: ");
    scanf("%d%*c", &codigo);

    switch(codigo)
    {
    case 1:
        printf("Digite o valor do seu salario: ");
        scanf("%f%*c", &salario);

        valor_aumento = salario * 0.5;

        printf("\nCargo: Escrituario\n");
        break;
    case 2:
        printf("Digite o valor do seu salario: ");
        scanf("%f%*c", &salario);

        valor_aumento = salario * 0.35;

        printf("\nCargo: Secretario\n");
        break;
    case 3:
         printf("Digite o valor do seu salario: ");
        scanf("%f%*c", &salario);

        valor_aumento = salario * 0.2;

        printf("\nCargo: Caixa\n");
        break;
    case 4:
         printf("Digite o valor do seu salario: ");
        scanf("%f%*c", &salario);

        valor_aumento = salario * 0.1;

        printf("\nCargo: Gerente\n");
        break;
    case 5:
        printf("Por seu cargo ser de diretor, voce nao tem direito a aumento.");
        break;
    default:
        printf("Digite um codigo valido.");
        return 0;
        break;
    }

    novo_salario = salario + valor_aumento;

    printf("Valor do aumento: R$ %.2f\n", valor_aumento);
    printf("Novo Salario: R$ %.2f\n", novo_salario);

    return 0;
}
