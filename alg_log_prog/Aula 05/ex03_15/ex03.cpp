#include <stdio.h>

int main(){

    float preco_unitario, custo_estocagem, imposto, valores_adicionais, temp = 0;
    float menor_preco_final, maior_preco_final, total_imposto = 0;
    float x, w, z = 0;
    char refrigeracao, categoria;

    for (int i = 0; i <= 11; i++){

        printf("----------------------------------\n");
        printf("Digite o preco unitario: R$ ");
        scanf("%f%*c", &preco_unitario);
        printf("\nDigite o tipo de refrigeracao: ");
        scanf("%c%*c", &refrigeracao);
        printf("\nDigite a categoria do produto: ");
        scanf("%c%*c", &categoria);

        if (preco_unitario < 20){

            switch (categoria){
            case 'a':
                custo_estocagem = 2;
            break;
            case 'l':
                custo_estocagem = 3;
            break;
            case 'v':
                custo_estocagem = 4;
            break;}

        } else if (preco_unitario <=50){
            switch (refrigeracao){
            case 's':
                custo_estocagem = 6;
            break;
            case 'n':
                custo_estocagem = 0;
            break;
            }
            } else {
                switch (refrigeracao){
                case 's':
                   if (categoria == 'a')
                      custo_estocagem = 5;
                   else if (categoria == 'l')
                           custo_estocagem = 2;
                        else
                           custo_estocagem = 4;
                break;
                case 'n':
                    if (categoria == 'a' || categoria == 'v')
                       custo_estocagem = 0;
                    else
                       custo_estocagem = 1;
                break;}
            }

        printf("\nCusto de estocagem = R$ %.2f\n", custo_estocagem);

        if (categoria == 'a' || refrigeracao == 's')
            imposto = preco_unitario * 0.04;
        else
            imposto = preco_unitario * 0.02;

        printf("Imposto = R$ %.2f\n", imposto);

        float preco_final = preco_unitario + custo_estocagem + imposto;

        printf("Preco final = R$ %.2f\n", preco_final);

        if (preco_final < 20){
            printf("Classificacao: Barato\n");
            x++;
        } else if (preco_final <= 100){
                 printf("Classificacao: Normal\n");
             } else {
                 printf("Classificacao: Caro\n");
                 z++;
                }

        temp = custo_estocagem + imposto;

        valores_adicionais += temp;

        if (i < 1){
          menor_preco_final = preco_final;}

        if (preco_final < menor_preco_final){
          menor_preco_final = preco_final;}

        if (i < 1){
          maior_preco_final = preco_final;}

        if (preco_final > maior_preco_final){
          maior_preco_final = preco_final;}

        total_imposto += imposto;
    }
        valores_adicionais /= 3;
        w = 12-(x+z);

        printf("\n----------------------------------\n");
        printf("Media dos valores adicionais: R$ %.2f\n", valores_adicionais);
        printf("Menor preco final: R$ %.2f\n", menor_preco_final);
        printf("Maior preco final: R$ %.2f\n", maior_preco_final);
        printf("Total dos impostos: %.2f\n", total_imposto);
        printf("Quantidade de produtos baratos: %.0f \n", x);
        printf("Quantidade de produtos normais: %.0f \n", w);
        printf("Quantidade de produtos caros:   %.0f \n", z);
        printf("----------------------------------\n");

        getchar();
        return 0;
}
