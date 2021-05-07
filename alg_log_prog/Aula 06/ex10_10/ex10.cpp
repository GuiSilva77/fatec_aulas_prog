#include <stdio.h>

int main(){

  int idade, menores = 0;
  float peso, altura, medAltura, medIdade = 0;

  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 11; j++)
    {
      printf("\n----------------------------------------------------\n");
      printf("Insira a Idade do jogador: ");
      scanf("%d%*c", &idade);
      printf("Insira a altura do jogador: ");
      scanf("%f%*c", &altura);
      printf("Insira a peso do jogador: ");
      scanf("%f%*c", &peso);
      printf("----------------------------------------------------\n");

      if (idade < 18)
        menores++;

      medIdade += idade;

      if (j == 11)
      {
        medIdade /= 11;
        printf("Media de idade dos jogadores do time %d: %.1f", i, medIdade);
      }

      medAltura += altura;

      medIdade = 0;

    }
  }
      printf("----------------------------------------------------\n");
      printf("Jogadores menores de 18 anos: %d", menores);
      medAltura /= 55;
      printf("\nMedia da altura dos Jogadores do campeonato: %.2f", medAltura);
      printf("\n----------------------------------------------------\n");

}
