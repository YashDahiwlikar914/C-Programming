#include <stdio.h>
#include <math.h>

int main()
{
    int NumInput, Dback, Count, Dfront;
    printf("Enter A Number: ");
    scanf("%d", &NumInput);
    int NumAlternative = NumInput;
    Count = 0;
    while (NumInput > 0)
    {
        int D = NumInput % 10;    // Declare D
        NumInput = NumInput / 10; // Use integer division instead of subtraction
        Count++;
    }

    for (int i = 1; i <= Count; i++)
    {
        Dback = NumAlternative % 10;
        NumAlternative = NumAlternative / 10; // Use integer division instead of subtraction

        Dfront = NumAlternative % (int)pow(10, (Count - i));         // Cast the result of pow to int
        NumAlternative = NumAlternative / (int)pow(10, (Count - i)); // Use integer division

        if (Count % 2 == 0)
        {
            if (Dback != Dfront)
            {
                printf("The number is not symmetric.\n");
                return 0;
            }
            else
            {
                printf("The number is symmetric.\n");
                return 0;
            }
        }
        else
        {
            if (Dback != Dfront)
            {
                printf("The number is not symmetric.\n");
                return 0;
            }
            else
            {
                printf("The number is symmetric.\n");
                return 0;
            }
        }
    }

    return 0;
}