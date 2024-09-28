#include <stdio.h>
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    for(int j = num;j>=1;j--)
    {
        for(int i=1;i<=j;i++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }

}