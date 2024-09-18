#include <stdio.h>
void main()
{
    int j, i;

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i == 0 || i == 1 || i == 4)
            {
                printf("*");
            }

            if (i == 2 && j == 1)
            {
                printf(" ");
            }
            else if (i == 2)
            {
                printf("*");
            }

            if (i == 3 && (j == 1 || j == 2))
            {
                printf(" ");
            }
            else if (i == 3)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
