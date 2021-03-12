#include <stdio.h>
// Crie um programa em C que declara dois números inteiros
//e dois caracteres do tipo char
//(todos devidamente inicializados).
//Em seguida, mostre o VALOR de cada variável,
//bem como seu ENDEREÇO (&)




int main(void)



{
    int numero1=1,
        numero2=2;



    char letra1='a',
         letra2='b';



    printf("numero1: \n");
    printf("Valor: %d\n", numero1);
    printf("Endereco na memoria: %d\n\n", &numero1);



    printf("numero2: \n");
    printf("Valor: %d\n", numero2);
    printf("Endereco na memoria: %d\n\n", &numero2);



    printf("letra1: \n");
    printf("Valor: %c\n", letra1);
    printf("Endereco na memoria: %d\n\n", &letra1);



    printf("letra2: \n");
    printf("Valor: %c\n", letra2);
    printf("Endereco na memoria: %d\n\n", &letra2);



    printf("Alterando os valores...\n\n");




    numero1=2112;
    numero2=666;



    letra1='A';
    letra2='B';



    printf("numero1: \n");
    printf("Valor: %d\n", numero1);
    printf("Endereco na memoria: %d\n\n", &numero1);



    printf("numero2: \n");
    printf("Valor: %d\n", numero2);
    printf("Endereco na memoria: %d\n\n", &numero2);



    printf("letra1: \n");
    printf("Valor: %c\n", letra1);
    printf("Endereco na memoria: %d\n\n", &letra1);



    printf("letra2: \n");
    printf("Valor: %c\n", letra2);
    printf("Endereco na memoria: %d\n\n", &letra2);



    return 0;
}
