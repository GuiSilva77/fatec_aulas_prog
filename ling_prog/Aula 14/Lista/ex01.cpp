#include <iostream.h>
#include <iostream>

void main()
{
  int i = 5, *p;
  p = &i;
  cout << p << ‘\t’ << (*p + 2) << ‘ \t’ << **&p << ‘\t’ << (3 * *p) << ‘ \t’ << (**&p + 4);
}