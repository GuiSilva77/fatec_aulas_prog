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

void insere_inicio(int n, no** inicio)/// insere um novo nó no início da lista
{
  no* aux = (no*) malloc(sizeof(no));  // aloca espaço para o novo nó
  if (aux)                             // conseguiu alocar espaço
  {
    aux->codigo = n;
    if (!(*inicio))                    // lista vazia - é o mesmo que if(*inicio==NULL)
    {
      (*inicio) = aux;
      (*inicio)->prox = NULL;
    }
    else {                             // lista não vazia
      aux->prox = (*inicio);           // liga o novo nó à lista
      (*inicio) = aux;                 // o início da lista passa a ser o novo nó
    }
  }
  else printf("Heap Overflow\n");
}

void adicionar_fim(int n, no **inicio)/// função para adicionar um novo nó ao final da lista
{
  no* aux = (no*) malloc(sizeof(no));  // aloca espaço para o novo nó
  if (aux)                             // conseguiu alocar espaço
  {
    aux->codigo = n;
    aux->prox = NULL;                  // como o novo nó será inserido no final da lista
                                       // ele não terá ninguém à frente

    if (!(*inicio))                    // lista vazia
      (*inicio) = aux;
    else
    {
      no *p = (*inicio);               // usaremos os ponteiro p para encontrar o último nó
        while (p->prox != NULL)
          p = p->prox;
        p->prox = aux;                 // ligaremos o último nó ao novo nó da lista
    }
  }
  else printf("Heap Overflow!\n");
}
