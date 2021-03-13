#include <stdio.h>

int main(){
    float altd, alt, qtd;

    printf("Digite a altura do degrau em cm:");
    scanf("%f%*c", &altd);

    printf("Digite a altura que a escada deve alcancar em m: ");
    scanf("%f%*c", &alt);

    altd = altd/100;

    qtd = alt / altd;

    printf("A quantidade de degraus necessaria sera %.0f degraus.", qtd);

    return 0;
}
