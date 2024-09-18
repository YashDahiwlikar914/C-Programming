#include <stdio.h>
void main()
{
    int j, i;

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if ((i == 1 || i == 3) && (j == 1))
            {
                printf("* ");
            }
            else if ((i == 1 || i == 3) && (j == 2 || j == 1 || j == 3))
            {
                printf("*");
            }
            else if ((i == 2) && (j == 0 || j == 1 || j == 2))
            {
                printf("* ");
            }
            else if (i == 0 || i == 4)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
