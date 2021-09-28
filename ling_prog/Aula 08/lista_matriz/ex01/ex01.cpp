#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#if defined(__STDC__)
  #if defined(__STDC_VERSION__)
    printf("Version %ld\n", __STDC_VERSION__);
  #else
    puts("Standard C - certainly 1989");
  #endif
#else
  puts("Pre 1989 or non-compliant C");
#endif

void mostrar(int matriz[2][2])
{
  printf("Matriz: ");
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      printf("\n[%d][%d] = %d", i+1, j+1, matriz[i][j]);
    }
  }
}

int _soma(int matriz[2][2])
{
  int soma=0;

  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      soma += matriz[i][j];
    }
  }

  return soma;
}

main()
{
  setlocale(LC_ALL, "portuguese");

  int matriz[2][2], soma=0;

  printf("Insira os valores da matriz: ");
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      printf("\n[%d][%d] = ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  soma = _soma(matriz);

  system("cls");

  mostrar(matriz);

  printf("\nSoma de todos os valores da matriz: %d\n", soma);
  system("pause");
  return EXIT_SUCCESS;
}
