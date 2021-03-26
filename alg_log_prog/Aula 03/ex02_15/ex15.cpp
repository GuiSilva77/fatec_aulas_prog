#include <stdio.h>

int main()
{
    float SaMin, ValHor, SalMes, ValDep, ValEx, SalBrut, IRRF, SalLiq, Grat, SalRec;
    int NumDep, NumHor, QuantHor, i;

    printf("Digite o valor do salario minimo: R$");
    scanf("%f%*c", &SaMin);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d%*c", &NumHor);
    printf("Digite o numero de dependentes: ");
    scanf("%d%*c", &NumDep);
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%d%*c", &QuantHor);

    ValHor = 0.2 * SaMin;
    SalMes = NumHor * ValHor;

    ValDep += (NumDep * 32);

    ValEx += (QuantHor * (ValHor * 0.5));

    SalBrut = SalMes + ValDep + ValEx;

        if (SalBrut < 200)
        {
            IRRF = 0;
            SalLiq = SalBrut;
        }
        else if (SalBrut < 500)
        {
            IRRF = 0.10 * SalBrut;
            SalLiq = SalBrut - IRRF;
        }
        else
        {
            IRRF = 0.20 * SalBrut;
            SalLiq = SalBrut - IRRF;
        }

        if (SalLiq <350)
        {
            SalRec = SalLiq + 100;
        }
        else
        {
            SalRec = SalLiq + 50;
        }

    printf("O salario a receber sera de %.2f reais.", SalRec);
    getchar();
}
