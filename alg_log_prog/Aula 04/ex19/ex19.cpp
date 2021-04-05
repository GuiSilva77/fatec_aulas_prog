#include <stdio.h>

int main()
{
    float peso, altura;
    char categoria;

    printf("Insira seu peso, em quilos: ");
    scanf("%f%*c", &peso);
    printf("Insira sua altura, em metros: ");
    scanf("%f%*c", &altura);

    if (altura < 1.20)
    {
        if (peso < 60)
        {
            categoria = 'A';
        }
        else
            if (peso <=90)
            {
                categoria = 'D';
            }
            else
            {
                categoria = 'G';
            }
    }
    else
        if (altura <= 1.70)
        {
        if (peso < 60)
        {
            categoria = 'B';
        }
        else
            if (peso <= 90)
            {
                categoria = 'E';
            }
            else
            {
                categoria = 'H';
            }
        }
        else
        {
        if (peso < 60)
        {
            categoria = 'C';
        }
        else
            if (peso <= 90)
            {
                categoria = 'F';
            }
            else
            {
                categoria = 'I';
            }
        }
        printf("Categoria = %c", categoria);
    return 0;
}

