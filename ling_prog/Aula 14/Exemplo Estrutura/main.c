#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *a, *b; //criação de dois ponteiros tipo char quando deveria ser um vetor de char
  a[] = "abacate";
  b[] = "uva";
  if (a < b)
    printf("%s vem antes de %s no dicionário", a, b);
  else
    printf("%s vem depois de %s no dicionário", a, b);

  return 0;
}