#include <stdio.h>


int main(){
  int matriz[9];

  for(int i = 0; i < 9; i++){
      scanf("%d%*c", &matriz[i]);
  }


  for(int i = 0; i < 9; i++){
      printf(" %d ", matriz[i]);
  }

  return 0;
}
