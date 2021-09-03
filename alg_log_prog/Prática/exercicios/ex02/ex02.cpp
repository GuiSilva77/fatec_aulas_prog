#include <stdio.h>
#include <stdlib.h>

main()
{
  for(int i=0;i<=9;i++)
  {
    for(int j=0;j<=10;j++)
      printf("\n[%d]*[%d] = %d", i, j, (i*j));

    printf("\n");
  }

  return EXIT_SUCCESS;
}
