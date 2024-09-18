#include <stdio.h>
int main()
{
    for (int j = 1; j <= 17; j++)
    {
        if (j <= 9)
        {
            for (int i = 1; i <= j; i++)
            {
                printf("%d", i);
            }
            printf("\n");
        }
        else
        {
            for (int k = 1; k <= (18-j); k++)
            {
                printf("%d", k);
            }
            printf("\n");
        }
    }
}