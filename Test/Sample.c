#include <stdio.h>
void main()
{
    int i, j, n, k;
    int m = 2;
    i = 0;
    scanf("%d", &n);
    for (j = 1; j <= n; j++) /*To Print Rows*/
    {
        if (j % 2 == 0) /*For Even Rows*/
        {
            for (k = i + j; k > i; k--)
            {
                printf("%d", k);
            }
        }
        else if (j == 1) /*For First Ever Number*/
        {
            for (int t = (i + 1) * j; i < t; i++)
            {
                printf("%d", i + 1);
            }
        }
        else /*For Odd Rows*/
        {
            for (int t = m * j; i <= t; i++)
            {
                if (i > (j * m) - j)
                {
                    printf("%d", i);
                }
            }
            i = i - 1;
            m = m + 1;
        }
        printf("\n");
    }
}