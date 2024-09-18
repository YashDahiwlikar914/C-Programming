#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}