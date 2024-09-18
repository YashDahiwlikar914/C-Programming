#include <stdio.h>
int main()
{
    int Divisor = 0;
    for (int j = 2; j <= 100; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                Divisor = Divisor + 1;
            }
        }
        if (Divisor == 2)
        {
            printf("%d ", j);
        }
        Divisor = 0;
    }
    return 0;
}