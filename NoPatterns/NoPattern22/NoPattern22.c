#include <stdio.h>
int main()
{
    int i,j;
    for(j=1;j<=5;j++)
    {
        for(i=1; i<=6-j; i++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}