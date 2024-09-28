#include <stdio.h>

int main()
{
    for (int j = 1; j <= 25; j++)
    {
        printf("%d ", j);
        if (j % 5 == 0)
        {
            printf("\n");
        }
    }
}