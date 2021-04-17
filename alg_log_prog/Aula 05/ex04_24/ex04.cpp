#include <stdio.h>
int main()
{
    int opcao;
    printf("Digite uma opcao:\n"
            "1. imposto\n"
            "2. Novo Salario\n"
            "3. Classificacao\n"
            "4. Finalizar programa\n"
            "\nOpcao: ");
    scanf("%d%*c", &opcao);

    switch (opcao)
    {
    case 1:
      float salario, imposto;
      printf("\nDigite o seu salario: R$ ");
      scanf("%f%*c", &salario);

      if (salario < 500)
        imposto = 5;
      else if (salario <= 850)
        imposto = 10;
           else
             imposto = 15;

        printf("Imposto: %.0f porcento.", imposto);
    break;
    case 2:
      float novo_salario;
      printf("\nDigite o seu salario: R$ ");
      scanf("%f%*c", &salario);

      if (salario < 450)
        novo_salario = salario + 100;
      else if (salario < 750)
        novo_salario = salario + 75;
           else if (salario <= 1500)
             novo_salario = salario + 50;
                else
                  novo_salario = salario + 25;

        printf("Seu novo salario sera de: R$ %.2f", novo_salario);
    break;
    case 3:
      printf("\nDigite o seu salario: R$ ");
      scanf("%f%*c", &salario);

      if (salario <= 700)
        printf("Classificacao: Mal remunerado.");
      else
        printf("Classificacao: Bem remunerado.");
    break;
    case 4:
        return 0;
    break;
    default:
      printf("insira uma opcao valida.");
    break;
    }
    getchar();
    return 0;
}
