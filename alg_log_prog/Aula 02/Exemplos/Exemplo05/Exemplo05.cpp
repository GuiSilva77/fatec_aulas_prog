// Programa para identificar a tabela ASCII em decimal

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int tecla;
    system("cls");
    printf("Para sair do Programa Precione ESC\n");
    do
    {
      tecla=getche();  //getch    get:pegar e o ch:ler caracter   //e getche o E mostra tambem o que foi digitado
      printf("\n%d   ",tecla);
      printf("\n");
      if(tecla==0)
      {
            tecla=getch();
            printf("%d  ",tecla);
            printf("\n");
      }
    }while(tecla!=27);
    return 0;
}
