#include <iostream>
#include <math.h>

using namespace std;

void Base8(int n)
{
    float resto, quociente, quociente_float;
    int quociente_Int;
    char numero_octal;

    quociente = n / 8;
    quociente_Int = modf(quociente, &quociente_float);

    while (quociente_Int > 0)
    {
        quociente /= 8;
        quociente_Int = modf(quociente, &quociente_float);
        quociente_Int = quociente;
        resto = quociente_float * 8;
    }
    numero_octal = ("%f%f", quociente,resto);
    cout << numero_octal;
}

int main()
{
    int n;

    scanf("%d%*c", &n);
    Base8(n);

    return 0;
}
