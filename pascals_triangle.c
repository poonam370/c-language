#include <stdio.h>

int main()
{
    int i, j, n = 5, coef;

    for(i = 0; i < n; i++)
    {
        coef = 1;

        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for(j = 0; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}