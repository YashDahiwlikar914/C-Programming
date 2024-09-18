#include <stdio.h>
void main()
{
    int i, j, k;
    i = 1;
    j = 3;

    for (int t = (i + 1) * j; i < t; i++)
    {
        printf("%d", (i + 1));
    }
}