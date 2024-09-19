#include <stdio.h>

int main()
{
    int Num, N;
    N = 0;  // Initialize Counter To 0
    printf("Enter a Positive Integer : ");
    scanf("%d", &Num);

    while(Num > 0)
    {
        Num = Num / 10;
        N++;
    }
    printf("Number of Digits : %d", N);
}