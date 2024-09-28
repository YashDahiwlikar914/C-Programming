/*#include <stdio.h>

int x = 0, y = 1, z;
int Calculate()
{
    z = x + y;
    y = z;
    x = y;
    return z;
}

int main()
{
    int Num;
    printf("Enter The Number Of Terms In Fibonacci Series: ");
    scanf("%d", &Num);

    for(int i = 0; i < Num; i++)
    {
        int c = Calculate();
        printf("%d ", c);
    }
}*/

#include <stdio.h>

int main()
{
    int Num;
    int x = 0, y = 1, z;
    printf("Enter The Number Of Terms In Fibonacci Series: ");
    scanf("%d", &Num);

    for (int i = 0; i < Num-2; i++)
    {
        z = x + y;
        x = y;
        y = z;
        if (i <= 1)
        {
            printf("%d ",i);
        }
        printf("%d ", z);
    }
}