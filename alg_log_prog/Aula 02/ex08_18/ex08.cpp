#include <stdio.h>
#include <math.h>
int main(){
    int sacr, racg, qtrac;

    printf("Digite o peso do saco de racao em quilos: ");
    scanf("%d%*c", &sacr);

    printf("Digite a quantidade de racao, em gramas, para os gatos: ");
    scanf("%d%*c", &racg);

    sacr = sacr * 1000;

    qtrac = sacr - (5 * (2 * racg));


    printf("Sobrara %d gramas apos cinco dias.", qtrac);

    return 0;
}
