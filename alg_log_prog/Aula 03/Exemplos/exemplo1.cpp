#include <stdio.h>

int main()
{
    int i, n1, n2;

    scanf("%d%*c", &n1);
    scanf("%d%*c", &n2);

    i = n1;
    if (i<n2)
    {
        i = n1;
        while(i < n2)
        {
            printf("%d, ", i);
            i++;
        }
         printf("%d.", n2);
    } else
        {
            i = n2;
          while(i < n1)
        {
            printf("%d, ", i);
            i++;
        }
         printf("%d.", n1);
        }
}
