#include <stdio.h>

int main()
{
    for(int j = 1; j <= 5; j++)
    {

        for(int i = j; i <= j + 5; i++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}