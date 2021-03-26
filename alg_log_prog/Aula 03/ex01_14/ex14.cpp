#include <stdio.h>

int main()
{
    float SalIni, NovoSal, Bonif, AuxEsc;

    printf("Digite o valor de seu salario: R$");
    scanf("%f%*c", &SalIni);

    if (SalIni < 500)
    {
        Bonif = 0.05 * SalIni;
        NovoSal = SalIni + Bonif;

        AuxEsc = 150;
        NovoSal += AuxEsc;
    }
    else if (SalIni < 1200)
    {
        if (SalIni < 600)
        {
            Bonif = 0.12 * SalIni;
            NovoSal = SalIni + Bonif;

            AuxEsc = 150;
            NovoSal += AuxEsc;
        }
        else
        {
            Bonif = 0.12 * SalIni;
            NovoSal = SalIni + Bonif;

            AuxEsc = 100;
            NovoSal += AuxEsc;
        }
    }
    else
    {
        AuxEsc = 100;
        NovoSal = SalIni + AuxEsc;
    }
    printf("O novo Salario sera de R$ %.2f, acrescido de R$ %.2f de bonificacao e R$ %.2f de auxilio escola.", NovoSal, Bonif, AuxEsc);
    getchar();
}
