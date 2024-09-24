#include <stdio.h>

void main()
{
    for (int j = 5; j >= 1; j--)
    {
        for (int s = j; s < 5; s++)
        {
            printf(" ");
        }
        for (int i = 1; i <= j; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}