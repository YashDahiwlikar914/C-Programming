#include <stdio.h>
void main()
{
    int j, i;

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if ((i == 1 || i == 2 || i == 3) && (j == 1 || j == 3 || j == 4))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
