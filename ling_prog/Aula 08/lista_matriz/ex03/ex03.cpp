#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
  setlocale(LC_ALL, "portuguese");

  int matriz[6][6], v_10 = 0;

  printf("Insira os valores da matriz: ");
  for(int i=0;i<6;i++)
  {
    for(int j=0;j<6;j++)
    {
      printf("\n[%d][%d] = ", i+1, j+1);
      scanf("%d", &matriz[i][j]);

      if(matriz[i][j] > 10)
        v_10++;
    }
  }

  printf("\nValores maiores que dez: %d\n", v_10);
  system("pause");
  return EXIT_SUCCESS;
}
