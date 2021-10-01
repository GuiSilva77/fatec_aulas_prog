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
    printf("Insira o número de anos em que voce fuma: ");
    scanf("%d", &nAnos);
    fflush(stdin);

    printf("Insira o número de cigarros fumados por dia: ");
    scanf("%d", &nCigarros);
    fflush(stdin);

    printf("Insira o preço do maço de cigarro: ");
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
Entrar via teclado com os dados: o número de anos que ele fuma, o nº de cigarros fumados por dia e o preço de uma carteira (maço). Obs: cada carteira possui 20 cigarros.
•	Organizar o código com: procedimentos e funções
•	O usuário deverá ter opção de parar ou não o processamento (utilizar o WHILE).
*/
