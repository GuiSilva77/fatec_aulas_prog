#include <stdio.h>

int main(int argc, const char **argv[])
{
  typedef char* string[1000];

  string nome = "nome";

  printf("%s", nome);

  return 0;
}
