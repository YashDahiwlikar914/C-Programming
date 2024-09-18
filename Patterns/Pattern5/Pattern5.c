#include <stdio.h>
void main()
{
    int j, i;

    for (i = 0; i <= 4; i++)
    {
        for (int s = 0; s < i; s++)
        {
            printf(" ");
        }
        for (j = 0; j <= 4; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
