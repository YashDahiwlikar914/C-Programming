#include <stdio.h>
#include <math.h>
int main()
{
    int Num, x, f;
    float P;
    P = 1, f = 1;
    printf("Enter A Number : ");
    scanf("%d", &Num);
    printf("Enter Value Of X : ");
    scanf("%d", &x);

    for (int i = 1; i <= Num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            f = f * j;
        }
        P = P + pow(x, i) / f;
    }
    printf("The Value Of The Expression is : %f", P);
}