#include <stdio.h>

int main(){
    float salario_anterior = 0, salario_atual = 0, aumento = 0;
    int ano;

    salario_anterior = 1000;
    aumento = 0.015;

    printf("Insira a data atual: ");
    scanf("%d%*c", &ano);


    //2006
    salario_atual = salario_anterior + (aumento * salario_anterior);
    salario_anterior = salario_atual;


    //2007
    for(int i= 2007; i <= ano; i++)
    {
        aumento = aumento *2;
        salario_atual = salario_anterior + (salario_anterior * aumento);
        salario_anterior = salario_atual;
    }

    printf("\n O aumento do salario em %d sera de R$ %.2f.", ano, salario_atual);

    getchar();
    return 0;
}
