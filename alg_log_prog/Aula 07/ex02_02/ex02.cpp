#include <stdio.h>

int main(){

    int n[7];

    printf("Informe um numero ");
    scanf("%d%*c", &n[0]);

    for(int i = 1; i < 7; i++)
    {
        printf("\nInforme outo numero ");
        scanf("%d%*c", &n[i]);
    }
    for(int i = 1; i < 7; i++){

        if(n[i]%2 == 0){
        printf("\nO %d eh um multiplos de 2 ", n[i]);
        }
        if(n[i]%3 == 0){
        printf("\nO %d eh um multiplos de 3 ", n[i]);
        }

        if(n[i]%3 == 0 && n[i]%2 == 0){
        printf("\nO %d eh um multiplos de 2 e 3 ", n[i]);
        }
    }
getchar();
return 0;
}
