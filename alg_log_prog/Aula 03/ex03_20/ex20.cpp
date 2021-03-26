#include <stdio.h>

int main()
{
    int CodProd, CodPais;
    float Peso, ValImp, Prec, PrecImp, Pesog;

    printf("Digite o codigo do produto: ");
    scanf("%d%*c", &CodProd);
    printf("Digite o peso, em quilos: ");
    scanf("%f%*c", &Peso);
    printf("Digite o codigo do pais: ");
    scanf("%d%*c", &CodPais);

    Pesog = Peso * 1000;

        if (CodProd <=4)
        {
            Prec = Pesog * 0.10;
        }
        else if (CodProd <=7)
        {
            Prec = Pesog * 0.25;
        }
        else if (CodProd <=10)
        {
            Prec = Pesog * 0.35;
        }

    switch(CodPais)
    {
    case 1:
        ValImp = 0;
        PrecImp = Prec;
        break;
    case 2:
        ValImp = Prec * 0.15;
        PrecImp = Prec + ValImp;
        break;
    case 3:
        ValImp = Prec * 0.25;
        PrecImp = Prec + ValImp;
        break;
    default:
        printf("Digite um codigo valido.");
        break;
    }

    printf("O peso do produto eh de %.0f gramas.\n", Pesog);
    printf("O Valor total do produto eh de R$ %.2f.\n", Prec);
    printf("O Valor do imposto eh de R$ %.2f.\n", ValImp);
    printf("O Valor total eh de R$ %.2f.\n", PrecImp);

    getchar();
}
