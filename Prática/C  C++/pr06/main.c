#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct tipo_no {
  int codigo;
  struct tipo_no *prox;
};

typedef struct tipo_no no;

void insere_inicio(int, no**);
void adicionar_fim(int, no**);

int main()
{
  no *inicio = NULL; // o ponteiro inicio NULL indica lista vazia

  adicionar_fim(15, &inicio);

  printf("%d\n", inicio->codigo);

  adicionar_fim(31, &inicio);

  printf("%d\n", inicio->prox->codigo);

  system("pause");
  return EXIT_SUCCESS;
}

void insere_inicio(int n, no** inicio)/// insere um novo n� no in�cio da lista
{
  no* aux = (no*) malloc(sizeof(no));  // aloca espa�o para o novo n�
  if (aux)                             // conseguiu alocar espa�o
  {
    aux->codigo = n;
    if (!(*inicio))                    // lista vazia - � o mesmo que if(*inicio==NULL)
    {
      (*inicio) = aux;
      (*inicio)->prox = NULL;
    }
    else {                             // lista n�o vazia
      aux->prox = (*inicio);           // liga o novo n� � lista
      (*inicio) = aux;                 // o in�cio da lista passa a ser o novo n�
    }
  }
  else printf("Heap Overflow\n");
}

void adicionar_fim(int n, no **inicio)/// fun��o para adicionar um novo n� ao final da lista
{
  no* aux = (no*) malloc(sizeof(no));  // aloca espa�o para o novo n�
  if (aux)                             // conseguiu alocar espa�o
  {
    aux->codigo = n;
    aux->prox = NULL;                  // como o novo n� ser� inserido no final da lista
                                       // ele n�o ter� ningu�m � frente

    if (!(*inicio))                    // lista vazia
      (*inicio) = aux;
    else
    {
      no *p = (*inicio);               // usaremos os ponteiro p para encontrar o �ltimo n�
        while (p->prox != NULL)
          p = p->prox;
        p->prox = aux;                 // ligaremos o �ltimo n� ao novo n� da lista
    }
  }
  else printf("Heap Overflow!\n");
}
