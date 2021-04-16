#include <stdio.h>

int main()
{
    int i, soma, casa_1, casa_2, casa_n;
    casa_1 = 0;
    casa_2 = 1;

    printf(" %d ", casa_1);
    printf(" %d ", casa_2);

    for (i = 1;i < 7; i++)
    {
        soma = casa_1 + casa_2;
        casa_n = soma;
        casa_1 = casa_2;
        casa_2 = casa_n;

        printf(" %d ", soma);

    }
    return 0;
}
