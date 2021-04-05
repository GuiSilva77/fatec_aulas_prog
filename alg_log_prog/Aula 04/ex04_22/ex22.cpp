#include <stdio.h>

int main()
{
    float salario_base, tempo_de_servico, imposto_sob_sal_base, gratificacao, salario_liquido;
    char categoria;

    printf("Digite o salario base: R$ ");
    scanf("%f%*c", &salario_base);
    printf("Digite o tempo de servico: ");
    scanf("%f%*c", &tempo_de_servico);

    if (salario_base < 200)
    {
        imposto_sob_sal_base = 0;
    }
    else if (salario_base <= 450)
        {
            imposto_sob_sal_base = salario_base * 0.03;
        }
    else if (salario_base <700)
        {
            imposto_sob_sal_base = salario_base * 0.08;
        }
    else if (salario_base >=700)
        {
            imposto_sob_sal_base = salario_base * 0.12;
        }

    if (salario_base > 500)
    {
        if (tempo_de_servico <= 3)
        {
            gratificacao = 20;
        }
        else
        {
            gratificacao = 30;
        }
    }
    else
    {
        if (tempo_de_servico < 3)
        {
            gratificacao = 23;
        }
        else if (tempo_de_servico < 6)
        {
            gratificacao = 35;
        }
        else
        {
            gratificacao = 33;
        }
    }

    salario_liquido = salario_base - imposto_sob_sal_base + gratificacao;

    if (salario_liquido <=350)
    {
        categoria = 'A';
    }
    else if (salario_liquido < 600)
    {
        categoria = 'B';
    }
    else
    {
        categoria = 'C';
    }


    printf("O imposto eh de R$ %.2f.\n", imposto_sob_sal_base);
    printf("A gratificacao eh de R$ %.2f.\n", gratificacao);
    printf("O salario liquido eh de R$ %.2f.\n", salario_liquido);
    printf("A categoria eh %c.\n", categoria);

    getchar();
}
