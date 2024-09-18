#include <stdio.h>
void main()
{
    int i, j, k;
    i = 0;
    for (j = 1; j <= 3; j++)
    {
        if (j % 2 == 0) /*For Even */
        {
            for (k = i + j; k > i; k--)
            {
                printf("%d", k);
            }
        }
        else if (j == 1)
        {
            for (i < j * (i + 1); i++;)
            {
                printf("%d", i + 1);
            }
        }
        else
        {
            for (i <= j * (i + 1); i++;)
            {
                printf("%d", i);
            }
            i = i - 1;
        }
        printf("\n");
    }
}