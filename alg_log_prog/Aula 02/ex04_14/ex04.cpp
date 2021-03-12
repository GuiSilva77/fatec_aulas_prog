#include <stdio.h>
#define ano 2021

int main(){
    int anonasc, idade, idade50;

    printf("Digite o ano do seu nascimento: ");
    scanf("%d%*c", &anonasc);

    idade = ano - anonasc;

    idade50 = 2050 - anonasc;

    printf("Voce nasceu em %d, assim a sua idade atual eh %d e sua idade em 2050 sera %d.", anonasc, idade, idade50);

    return 0;
}
