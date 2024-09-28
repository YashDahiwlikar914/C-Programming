#include <stdio.h>

int Calculate(int x);

int main()
{
    int Num, Ans;
    printf("Enter A Number : ");
    scanf("%d", &Num);

    Ans = Calculate(Num);
    printf("The Factorial of %d Is %d", Num, Ans);
    return 0;
}

int Calculate(int x)
{
    int F = 1;
    for (int i = 1; i <= x; i++)
    {
        F = F * i;
    }
    return F;
}
