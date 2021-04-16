#include <stdio.h>

int main()
{
    int i, matriz [6] [4], t4, t2, t3, media_classe;
    t4, t2, t3 = 0;

    for (i = 0; i <= 5; i++)
    {
        printf("Digite a nota 1 do aluno %d: ", i+1);
        scanf("%d%*c", &matriz [i] [0]);
        printf("Digite a nota 2 do aluno %d: ", i+1);
        scanf("%d%*c", &matriz [i] [1]);
    }

    for (i = 0; i <= 5; i++)
    {
        matriz [i] [2] = (matriz [i] [0] + matriz [i] [1]) / 2;

        int media = matriz [i] [2];

        if (media < 3)
        {
            matriz[i][3] = 0;
            t4++;
        }
        else if (media < 7)
             {
               matriz [i][3] = 1;
               t2++;
             }
             else
             {
               matriz[i][3] = 2;
               t3++;
             }
    }

    int soma = 0;
    for (i = 0; i <= 5; i++)
    {
        soma += matriz [i][2];
    }

    media_classe = soma / 6;

    for (i = 0; i <= 5; i++)
    {
        int aluno = i + 1;
        printf("----------------------------------\n");
        printf("Aluno %d\n", aluno);
        printf("Media: %d\n", matriz[i][2]);
        switch (matriz[i][3])
        {
        case 0:
            printf("Situacao: Reprovado\n");
        break;

        case 1:
            printf("Situacao: Para Exame\n");
        break;

        case 2:
            printf("Situacao: Aprovado\n");
        break;
        }
    }
     printf("\n----------------------------------\n");
     printf("Total de Aprovados: %d\n", t3);
     printf("Total para Exame: %d\n", t2);
     printf("Total de Reprovados: %d\n", 6-(t2+t3));
     printf("----------------------------------\n");
     printf("Media da Classe: %d", media_classe);
     printf("\n----------------------------------\n");

    return 0;
}
