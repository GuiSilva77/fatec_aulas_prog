#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int nAnos = 0, nCigarros = 0;
float preco = 0, custo = 0;

void lerDados()
{
  int opcao = 0;
  do
  {
    printf("Insira o n�mero de anos em que voce fuma: ");
    scanf("%d", &nAnos);
    fflush(stdin);

    printf("Insira o n�mero de cigarros fumados por dia: ");
    scanf("%d", &nCigarros);
    fflush(stdin);

    printf("Insira o pre�o do ma�o de cigarro: ");
    scanf("%f", &preco);
    fflush(stdin);

    custo = (((nCigarros * (nAnos*365))/20) * preco);

    printf("\n O Custo de ter fumado %d cigarros durante %d anos foi de R$ %.2f.", nCigarros, nAnos, custo);

    printf("\nDigite 1 para continuar ou 2 para sair: ");
    scanf("%d", &opcao);

  } while (opcao == 1);

}

int main()
{
  setlocale(LC_ALL, "Portuguese");

  lerDados();

  system("pause");
  return 0;
}

/*Construa um algoritmo que possa calcular a quantidade de dinheiro gasta pelos fumantes.
Entrar via teclado com os dados: o n�mero de anos que ele fuma, o n� de cigarros fumados por dia e o pre�o de uma carteira (ma�o). Obs: cada carteira possui 20 cigarros.
�	Organizar o c�digo com: procedimentos e fun��es
�	O usu�rio dever� ter op��o de parar ou n�o o processamento (utilizar o WHILE).
*/
