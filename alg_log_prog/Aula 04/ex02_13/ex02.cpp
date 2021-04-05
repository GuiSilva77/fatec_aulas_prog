#include <stdio.h>

int main()
{
    int opcao;

    printf("Digite uma opcao:\n");
    printf("  1. Imposto\n");
    printf("  2. Novo salario\n");
    printf("  3. Classificacao\n");
    printf("Opcao: ");
    scanf("%d%*c", &opcao);

    switch(opcao)
    {
    case 1:
        float salario, imposto;
        printf("Insira seu salario: R$ ");
        scanf("%f%*c", &salario);

        if (salario < 500)
        {
            imposto = salario * 0.05;
        }
        else
            if (salario <= 850)
            {
                imposto = salario * 0.10;
            }
            else
            {
                imposto = salario * 0.15;
            }

        printf("O imposto de seu salario eh R$ %.2f.", imposto);
        break;

    case 2:
        float aumento, novo_salario;
        printf("Insira seu salario: R$ ");
        scanf("%f%*c", &salario);

        if (salario < 450)
        {
            novo_salario = salario + 100;
        }
        else
            if (salario < 750)
            {
                novo_salario = salario + 75;
            }
            else
                if (salario <= 1500)
                {
                    novo_salario = salario + 50;
                }
                else
                {
                    novo_salario = salario + 25;
                }

         printf("O novo salario sera de R$ %.2f.", novo_salario);
        break;

    case 3:
         printf("Insira seu salario: R$ ");
         scanf("%f%*c", &salario);

         if (salario <= 750)
         {
             printf("Voce eh mal remunerado.");
         }
         else
         {
             printf("Voce eh bem remunerado");
         }
         break;

    default:
        printf("Insira uma opcao valida.");
        break;
    }
    return 0;
}
