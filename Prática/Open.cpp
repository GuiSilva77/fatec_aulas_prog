#include <iostream>
#include <cmath>

using namespace std;

int Parse(float par1){
  return par1 * 3;
}

int main(){
  int par1;

  scanf("%d%*c", &par1);

  int par2 = Parse(par1);

  printf("%d", par2);

  return 0;
}