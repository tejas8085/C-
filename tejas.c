#include <stdio.h>

void main()
{
    int n, i, j, k = 1, c = 1;
    printf("Enter no of rows :- \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        k = (i * (i + 1)) / 2;
        for (j = 1; j <= i; j++)
        {
            printf("%3d", k);
            k--;
        }
        printf("\n");
    }
}