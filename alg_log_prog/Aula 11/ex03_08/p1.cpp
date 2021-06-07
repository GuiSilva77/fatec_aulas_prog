
#include <stdio.h>
#include <stdlib.h>
#define L 6
#define C 4

int main(int argc, char** argv) {
    int matriz[L][C], mat2[L][C];
    int i, j, contMaior30 = 0;

    printf("1� Matriz \n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("\tM[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //La�o para fazer a verifica��o dos valores digitados
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {

            //Se o n�mero digitado for igual a 30,ele ser� substituido por 0 na 2� Matriz
            if (matriz[i][j] == 30) {
                mat2[i][j] = 0; //Os valores de MAT 2 ser�o atribuidos nas mesma posi��es que na 1� matriz
            }

            //Se for menor que 30 ser� adicionado na segunda 2� Matriz
            else if (matriz[i][j] < 30) {
                mat2[i][j] = matriz[i][j];
            } else {
                contMaior30++;
            }
        }
    }

    printf("\n2� Matriz: \n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            //"Filtro para imprimir apenas valores entre 0 e 30
            if (mat2[i][j] >= 0 && mat2[i][j] <= 30) {
                printf("\tM2[%d][%d]: %d \n", i, j, mat2[i][j]);
            }
        }
    }

    printf("\nQuantidade de n�meros maiores que 30 digitados: %d \n\n", contMaior30);

    return (EXIT_SUCCESS);
}
