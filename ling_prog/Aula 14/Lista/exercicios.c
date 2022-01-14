/*

1-  x = 3,
    y = 4,
    *p = 4

*/
// 2-)
//a)
void main() // main deve sempre ser um int e retornar um valor
{
  int x, *p;
  x = 100;
  p = x; // não é possivel assinalar um inteiro a um ponteiro sem que seja um endereço de memoria
  printf(“Valor de p
         : % d.\n”, *p);
}

// versão correta
int main()
{
  int x, *p;
  x = 100;
  p = &x;
  printf(“Valor de p
         : % d.\n”, *p);

  return 0;
}

//b)
void troca(int *i, int *j)
{
  int *temp;  // criação de um ponteiro no lugar de uma variável
  *temp = *i; // *temp recebe o valor de *i
  *i = *j;    // * i recebe o valor de *j
  *j = *temp; // *j recebe o valor de *temp
}

//versão correta
void troca(int *i, int *j)
{
  int temp;
  *temp = *i; // temp recebe o valor de i
  *i = *j;    // i recebe o valor de j
  *j = *temp; // j recebe o valor de temp
}

//c)
//errada
char *a, *b; //voce está declarando dois ponteiros char sem menhum valor, asslim por natureza não será possivel adicionar um valor para elas, já que ela está escrita em um setor de memoria que não permite esse tipo de operação
a = "abacate";
b = "uva";
if (a < b) // a < b é uma operação de comparação, ou seja, não é possivel comparar ponteiros
  printf("%s vem antes de %s no dicionário", a, b);
else
  printf("%s vem depois de %s no dicionário", a, b);

//correta
char *a = "abacate", *b = "uva";
if (strcmp(a, b) < 0)
  printf("%s vem antes de %s no dicionário", a, b);
else
  printf("%s vem depois de %s no dicionário", a, b);

//3-) 55024

//4-)
