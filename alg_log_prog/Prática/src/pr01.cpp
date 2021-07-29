#include <stdio.h>

struct aluno{
  int idade;
  char turma;
  int id;
};

int main()
{
  aluno aluno[3];

  for(int i = 0;i<3;i++)
  {
    printf("\naluno [%d] -> idade: ", (i+1));
    scanf("%d%*c", &aluno[i].idade);
    printf("\naluno [%d] -> turma: ", (i+1));
    scanf("%c%*c", &aluno[i].turma);
    printf("\naluno [%d] -> id: ", (i+1));
    scanf("%d%*c", &aluno[i].id);
  }
  return 0;
}
