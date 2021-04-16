#include <stdio.h>

int main()
{
    float nota1, nota2, media, total_aprovado, total_exame, total_reprovado, media_classe;

    for (int i = 1; i <=6; i++)
    {
        printf("----------------------------------\n");
        printf("Digite a nota 1 do aluno %d: ", i);
        scanf("%f%*c", &nota1);
        printf("Digite a nota 2 do aluno %d: ", i);
        scanf("%f%*c", &nota2);

        media = (nota1+nota2)/2;
        printf("Media: %.2f\n", media);

        if (media < 3)
        {
            printf("Situacao: Reprovado\n");
            total_reprovado++;
        }
          else if (media < 7)
               {
                 printf("Situacao: Para Exame\n");
                 total_exame++;
               }
               else
               {
                 printf("Situacao: Aprovado\n");
                 total_aprovado++;
               }
        printf("----------------------------------\n");
        media_classe += media;
    }

        media_classe /= 6;
        printf("\n----------------------------------\n");
        printf("Total de Aprovados = %.0f\n", total_aprovado);
        printf("Total para Exame = %.0f\n", total_exame);
        printf("Total de Reprovados = %.0f\n", total_reprovado);
        printf("----------------------------------\n");

        printf("\n----------------------------------\n");
        printf("Media da Classe = %.0f\n", media_classe);
        printf("----------------------------------\n");

    return 0;
}
