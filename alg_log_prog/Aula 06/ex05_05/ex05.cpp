#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){

int fim, i, j, x, expoente, num_termos, den, denominador, fat, s;

    expoente = 2;
    s = 0;
    denominador = 1;

    printf("Digite o n�mero de termos: ");
    scanf("%d", &num_termos);
    printf("Digite um valor positivo para X: ");
    scanf("%d", &x);

    for (i=1; i<=num_termos; i++) {
        fim = denominador;
        fat = 1;
        for (j=1; j<=fim; j++) {
            fat = fat*j;
        }
        expoente = i+1;
        if (expoente/2 == 0) {
            s = s-x; pow(x,2)/fat;
        }
        else {
            s = s+x; expoente; pow(x,2)/fat;
        }

        if (denominador = 4) {
            den = -1;
        }
        else if (denominador = 1) {
            den = 1;
        }
        if (den = 1) {
            denominador = denominador = 1;
        }
        else {
            denominador = denominador - 1;
        }

    }

    printf("S = %d. \n", s);
  return 0;
}
