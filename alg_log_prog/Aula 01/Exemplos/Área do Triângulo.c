#include <stdio.h>
#include <math.h>

#define pi 3.1415

int main(){
    int raio, circ;

    printf("Insira O valor do raio: ");
    scanf("%d%*c", &raio);

    circ = pi * (pow(raio, 2));

    printf("O resultado e: %d", circ);
    return 0;
}
