# Lista de Exercícios

## Ponteiros

1.
```c
x = 3,
y = 4,
*p = 4
```

2. a-) *Errado*
```c
void main() // main deve sempre ser um int e retornar um valor
{
  int x, *p;
  x = 100;
  p = x; // não é possivel assinalar um inteiro a um ponteiro sem que seja um endereço de memoria
  printf(“Valor de p: % d.\n”, *p);
}
```
*Correto*
```c
int main()
{
  int x, *p;
  x = 100;
  p = &x;
  printf(“Valor de p
         : % d.\n”, *p);

  return 0;
}
```

b-) *Errado*
```c
void troca(int *i, int *j)
{
  int *temp;  // criação de um ponteiro no lugar de uma variável
  *temp = *i; // temp não tem um valor para referenciar
  *i = *j;
  *j = *temp; // *j recebe o valor inexistente de *temp
}
```

*Correto*
```c
void troca(int *i, int *j)
{
  int temp;
  *temp = *i; // temp recebe o valor de i
  *i = *j;    // i recebe o valor de j
  *j = *temp; // j recebe o valor de temp
}
```

c-) *Errado*
```c
char *a, *b; //voce está declarando dois ponteiros char sem nenhum valor, 
             //assim por natureza não será possivel adicionar um valor para elas, 
             //já que ela está escrita em um setor de memoria que não permite esse tipo de operação
a = "abacate";
b = "uva";
if (a < b) // a < b é uma operação de comparação, ou seja, não é possivel comparar o valor referenciado sem o *
  printf("%s vem antes de %s no dicionário", a, b);
else
  printf("%s vem depois de %s no dicionário", a, b);
```

*Correto*
```c
char *a = "abacate", *b = "uva";
if (strcmp(a, b) < 0)
  printf("%s vem antes de %s no dicionário", a, b);
else
  printf("%s vem depois de %s no dicionário", a, b);
```

3. 55024

4.
```c
#include <stdio.h>
#include <stdlib.h>

void minimax(int* v, int n, int* min, int* max)
{
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      *max = v[i];
      *min = 0;
    }
    else
    if (v[i] > *max)
      *max = v[i];
    else
      *min = v[i];
  }
}


int main()
{
  int vetor[5] = {5, 2, 1, 2, 15};
  int min = 0, max = 0;

  minimax(vetor, 5, &min, &max);

  printf("min: %d", min);
  printf("max: %d", max);

  return EXIT_SUCCESS;
}
```

5. Enquanto `v[3]` e `v + 3` representam conceitualmente a mesma posição (4ª
   posição do vetor), `v[3]` representa o acesso padrão do dado de um vetor,
   enquanto `v + 3` representa a o acesso por meio da soma de `v`, que
   representa o primeiro item do vetor (apresentado também como `v[0]`), mais 3
   posições, por isso `v+3`. 

6.
```c
int a[99];
for (/*int*/i = 0; i < 99; ++i) //não seria i++? ++i somaria e depois retornaria;
  a[i] = 98 - i;
for (i = 0; i < 99; ++i)
  a[i] = a[a[i]];
```
O código irá gerar um vetor de 0 a 49 a 0, pois o primeiro for ira correr apenas
49 posições, de 0 a 49, e o segundo ocorrerá o mesmo, porem de 49 a 0;

7.
```c
void troca(float *a, float *b)
{
  float temp = 0;
  temp = *a;
  *a = *b;
  *b = temp
}
```

8.
```c
char *strcopy(char *str)
{
  // pegar o tamanho da string
  int tam = 0;
  while (str[tam] != '\0')
  {
    tam++;
  }

  // copiar a string
  char *str2 = (char *)malloc(tam * sizeof(char));
  for (int i = 0; i < tam; i++)
  {
    str2[i] = str[i];
  }

  return str2;
}
```

9.
```c
void minimax(int* v, int n, int* min, int* max)
{
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      *max = v[i];
      *min = 0;
    }
    else
    if (v[i] > *max)
      *max = v[i];
    else
      *min = v[i];
  }
}
```

10.
```c
int x = 100, *p, **pp; // declaração das variáveis x = 000, um ponteiro p, e um ponteiro para ponteiro pp;
  p = &x; // p aponta x
  pp = &p; // pp aponta p que aponta x
  printf(“Valor de pp: % d\n”, **pp); // impressão de pp, que tem resultado 100, já que ele aponta a p que aponta a x;
```

11.
```c
int *procurar_letra(char *str, char letra)
{
  int i, j, k, tamanho, *vetor;
  tamanho = 0;
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == letra)
    {
      tamanho++;
    }
  }
  vetor = (int *)malloc(tamanho * sizeof(int));
  for (i = 0, j = 0; str[i] != '\0'; i++)
  {
    if (str[i] == letra)
    {
      vetor[j] = i;
      j++;
    }
  }
  return vetor;
}
```

12.
a-) Assinalar que p é um ponteiro; b-) apontar o valor da variável apontada por
p; c-) apontar o valor da variável apontada por p / multiplicação; c-) apontar o
valor da posição seguinte apontada por p;

13. não vai compilar, pois o compilador não vai encontrar a biblioteca
    iostream.h

---

## Structs

1.
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno
{
  char nome[50];
  int matricula;
  float n1, n2;
};

int main()
{
  //Escrever um programa que cadastre o nome, a matrícula e duas notas de vários alunos. 
  //Em seguida imprima a matrícula, o nome e a média de cada um deles.

  struct aluno alunos[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Digite o nome do aluno: ");
    scanf("%s", alunos[i].nome);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &alunos[i].matricula);
    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &alunos[i].n1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &alunos[i].n2);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("\nMatricula: %d\nNome: %s\nMedia: %.2f\n", alunos[i].matricula, alunos[i].nome, (alunos[i].n1 + alunos[i].n2) / 2);
  }
}
```

2.
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
  char nome[50];
  float altura, peso;
  int cpf[11];
  char sexo;
} Pessoa;

int procurar_pessoa(Pessoa *pessoas, int n, int cpf);
void cadastrar_pessoa(Pessoa *pessoas, int n);
void calcular_imc(Pessoa *pessoas, int n, int posicao);
void imprimir_pessoa(Pessoa pessoa);

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int n;

  printf("Insira quantas pessoas você quer cadastrar: ");
  scanf("%d", &n);

  Pessoa *pessoas = (Pessoa *)malloc(n * sizeof(Pessoa));
  for (int i = 0; i < n; i++)
  {
    printf("\n\nPessoa %d\n", i + 1);
    cadastrar_pessoa(pessoas, i);
  }

  system("cls");
  int cpf;

  do
  {
    printf("\n\nInsira o CPF da pessoa que você quer procurar ou digite 0 para sair: ");
    scanf("%d", &cpf);

    int posicao = procurar_pessoa(pessoas, n, cpf);
    if (posicao != -1)
    {
      imprimir_pessoa(pessoas[posicao]);
      calcular_imc(pessoas, n, posicao);
    }
  } while (cpf != 0);

  getchar();
  free(pessoas);
  return 0;
}

void cadastrar_pessoa(Pessoa *pessoas, int n)
{
  printf("Insira o nome: ");
  scanf("%s", pessoas[n].nome);
  printf("Insira a altura: ");
  scanf("%f", &pessoas[n].altura);
  printf("Insira o peso: ");
  scanf("%f", &pessoas[n].peso);
  printf("Insira o CPF: ");
  scanf("%d", &pessoas[n].cpf);
  printf("Insira o sexo: ");
  scanf(" %c", &pessoas[n].sexo);
}

int procurar_pessoa(Pessoa *pessoas, int n, int cpf)
{
  for (int i = 0; i < n; i++)
  {
    if (*pessoas[i].cpf == cpf)
    {
      return i;
    }
  }
  return -1;
}

void imprimir_pessoa(Pessoa pessoa)
{
  printf("\nNome: %s\n", pessoa.nome);
  printf("Altura: %.2f\n", pessoa.altura);
  printf("Peso: %.2f\n", pessoa.peso);
  printf("CPF: %d\n", pessoa.cpf);
  printf("Sexo: %c\n", pessoa.sexo);
}

void calcular_imc(Pessoa *pessoas, int n, int posicao)
{
  float imc = pessoas[posicao].peso / (pessoas[posicao].altura * pessoas[posicao].altura);

  if (imc < 18.5)
  {
    printf("\nIMC: %.2f - Abaixo do peso\n", imc);
  }
  else if (imc >= 18.5 && imc <= 24.9)
  {
    printf("\nIMC: %.2f - Peso normal\n", imc);
  }
  else if (imc >= 25 && imc <= 29.9)
  {
    printf("\nIMC: %.2f - Sobrepeso\n", imc);
  }
  else if (imc >= 30 && imc <= 34.9)
  {
    printf("\nIMC: %.2f - Obesidade grau 1\n", imc);
  }
  else if (imc >= 35 && imc <= 39.9)
  {
    printf("\nIMC: %.2f - Obesidade grau 2\n", imc);
  }
  else
  {
    printf("\nIMC: %.2f - Obesidade grau 3\n", imc);
  }
}
```

3.
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
  char nome[50];
  int codigo;
  float preco;
} Produto;

void cadastrar_produtos(Produto *produto, int n);
int buscar_produto(Produto *produto, int n, int codigo);
void imprimir_produto(Produto *produto, int n);

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int n = 0;

  printf("Digite a quantidade de produtos: ");
  scanf("%d", &n);

  Produto *produto = (Produto *)malloc(n * sizeof(Produto));

  cadastrar_produtos(produto, n);

  system("cls");

  int codigo = 0;
  do
  {
    printf("Digite o codigo do produto ou digite 0 para sair: ");
    scanf("%d", &codigo);

    int posicao = buscar_produto(produto, n, codigo);

    if (posicao != -1)
    {
      imprimir_produto(produto, posicao);
      getchar();
    }
    else if (codigo > 0)
      printf("Produto nao encontrado!\n");
  } while (codigo != 0);

  free(produto);
  return 0;
}

void cadastrar_produtos(Produto *produto, int n)
{
  for (int i = 0; i < n; i++)
  {
    fflush(stdin);
    printf("Digite o nome do produto: ");
    scanf("%s", produto[i].nome);

    printf("Digite o codigo do produto: ");
    scanf("%d", &produto[i].codigo);

    printf("Digite o preco do produto: ");
    scanf("%f", &produto[i].preco);
  }
}

int buscar_produto(Produto *produto, int n, int codigo)
{
  for (int i = 0; i < n; i++)
  {
    if (produto[i].codigo == codigo)
      return i;
  }
  return -1;
}

void imprimir_produto(Produto *produto, int n)
{
  printf("Nome: %s\n", produto[n].nome);
  printf("Codigo: %d\n", produto[n].codigo);
  printf("Preco: %.2f\n", produto[n].preco);
}
```

4.
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_CADASTRO 3

typedef struct
{
  char nome[50];
  int cpf;
  int saldo;
  int senha;
} Correntista;

void cadastrar_CC(Correntista *cadastro, int n);
void depositar_CC(Correntista *cadastro, int n);
void sacar_CC(Correntista *cadastro, int n);
void consultar_CC(Correntista *cadastro, int n);
void exibir_CC(Correntista *cadastro, int n, int cpf, int senha);

int main()
{
  setlocale(LC_ALL, "Portuguese");

  Correntista cadastro[MAX_CADASTRO];

  int cpf, senha;
  int opcao;

  cadastrar_CC(cadastro, MAX_CADASTRO);

  system("cls");

  do
  {
    printf("Digite uma opção\n"
           "1 - Cadastrar\n"
           "2 - Depositar\n"
           "3 - Sacar\n"
           "4 - Consultar\n"
           "5 - Sair\n"
           "Opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      cadastrar_CC(cadastro, MAX_CADASTRO);
      break;
    case 2:
      depositar_CC(cadastro, MAX_CADASTRO);
      break;
    case 3:
      sacar_CC(cadastro, MAX_CADASTRO);
      break;
    case 4:
      consultar_CC(cadastro, MAX_CADASTRO);
      break;
    case 5:
      break;
    default:
      printf("Opção inválida\n");
      break;
    }
  } while (opcao != 5);

  return 0;
}

void cadastrar_CC(Correntista *cadastro, int n)
{
  system("cls");
  int i;
  for (i = 0; i < n; i++)
  {
    printf("Digite o nome do correntista: ");
    scanf("%s", cadastro[i].nome);
    printf("Digite o CPF do correntista: ");
    scanf("%d", &cadastro[i].cpf);
    printf("Digite a senha do correntista: ");
    scanf("%d", &cadastro[i].senha);

    cadastro[i].saldo = 0;
    do
    {
      depositar_CC(cadastro, n);
    } while (cadastro[i].saldo <= 0);
  }
}

void depositar_CC(Correntista *cadastro, int n)
{
  int i, cpf, valor;
  system("cls");
  printf("Digite o CPF do correntista: ");
  scanf("%d", &cpf);

  for (i = 0; i < n; i++)
  {
    if (cpf == cadastro[i].cpf)
    {
      printf("Digite o valor a ser depositado: ");
      scanf("%d", &valor);
      cadastro[i].saldo += valor;
      printf("Deposito realizado com sucesso!\n");

      system("pause");
      system("cls");
      return;
    }
  }
}

void sacar_CC(Correntista *cadastro, int n)
{
  int i, j, cpf, senha, valor;
  system("cls");
  printf("Digite o CPF do correntista: ");
  scanf("%d", &cpf);

  for (i = 0; i < n; i++)
  {
    if (cpf == cadastro[i].cpf)
    {
      printf("Digite a senha do correntista: ");
      scanf("%d", &senha);

      for (j = 0; j < n; j++)
      {
        if (senha == cadastro[j].senha)
        {
          printf("Digite o valor a ser sacado: ");
          scanf("%d", &valor);
          cadastro[i].saldo -= valor;
          printf("Saque realizado com sucesso!\n");

          system("pause");
          system("cls");
          return;
        }
      }
    }
  }
}

void consultar_CC(Correntista *cadastro, int n)
{
  int i, j, cpf, senha;
  system("cls");
  printf("Digite o CPF do correntista: ");
  scanf("%d", &cpf);

  for (i = 0; i < n; i++)
  {
    if (cpf == cadastro[i].cpf)
    {
      printf("Digite a senha do correntista: ");
      scanf("%d", &senha);

      for (j = 0; j < n; j++)
      {
        if (senha == cadastro[j].senha)
        {
          exibir_CC(cadastro, n, cpf, senha);
          return;
        }
      }
    }
  }
}

void exibir_CC(Correntista *cadastro, int n, int cpf, int senha)
{
  system("cls");
  int i;
  for (i = 0; i < n; i++)
  {
    if (cpf == cadastro[i].cpf && senha == cadastro[i].senha)
    {
      printf("Nome: %s\n", cadastro[i].nome);
      printf("CPF: %d\n", cadastro[i].cpf);
      printf("Saldo: %d\n", cadastro[i].saldo);
      getchar();
      return;
    }
    else
    {
      printf("CPF ou senha incorretos!\n");
      getchar();
      return;
    }
  }
}
```

5.
```c
Lista *retira_ultimo(Lista *l) {
    Lista *aux = l;
    Lista *ant = NULL;
    while (aux->prox != NULL) {
        ant = aux;
        aux = aux->prox;
    }
    if (ant == NULL) {
        free(aux);
        return NULL;
    }
    ant->prox = NULL;
    free(aux);
    return l;
}
```

6.
```c
Lista *constroi(int n int *v)
{
    Lista *l = NULL;
    Lista *p = NULL;
    int i;
    for (i = 0; i < n; i++) {
        Lista *novo = (Lista *) malloc(sizeof(Lista));
        novo->info = v[i];
        novo->prox = NULL;
        if (l == NULL) {
            l = novo;
        } else {
            p->prox = novo;
        }
        p = novo;
    }
    return l;
}
```

7.
```c
struct lista
{
  char nome[80];
  float nota;
  struct lista *prox;
} typedef struct lista Lista;

// função para inserir um novo elemento na lista, retornando o ponteiro para a lista alterada
Lista *insere(Lista *l, char *nome, float nota)
{
  Lista *novo = (Lista *)malloc(sizeof(Lista));
  strcpy(novo->nome, nome);
  novo->nota = nota;
  novo->prox = l;
  return novo;
}
```

8. **?**

9. **?**

10. **?**