#include <stdio.h>
#include <stdlib.h>

int *merge(int *v1, int *v2, int n1, int n2)
{
  int *v3 = (int *)malloc(sizeof(int) * (n1 + n2));
  int i = 0, j = 0, k = 0;

  while (i < n1 && j < n2)
  {
    if (v1[i] < v2[j])
      v3[k++] = v1[i++];
    else
      v3[k++] = v2[j++];
  }

  while (i < n1)
    v3[k++] = v1[i++];

  while (j < n2)
    v3[k++] = v2[j++];

  return v3;
}

int main(void)
{
  int arr1[] = {6, 7, 8, 9, 10};
  int arr2[] = {1, 2, 3, 4, 5};

  int *p = merge(arr1, arr2, 5, 5);

  for (int i = 0; i < 10; i++)
    printf("%d ", p[i]);

  free(p);

  printf("%d", a);

  return EXIT_SUCCESS;
}