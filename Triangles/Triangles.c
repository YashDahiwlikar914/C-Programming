#include <stdio.h>

void main()
{
    int Side1, Side2, Side3;
    int Angle1, Angle2, Angle3;
    printf("Enter The Sides : ");
    scanf("%d %d %d", &Side1, &Side2, &Side3);
    printf("Enter The Angles : ");
    scanf("%d %d %d", &Angle1, &Angle2, &Angle3);

    if ((Angle1 + Angle2 + Angle3 == 180) && (Side1 + Side2 > Side3) && (Side2 + Side3 > Side1) && (Side1 + Side3 > Side2))
    {
        if (Side1 == Side2 && Side2 == Side3 && Side1 == Side3 && Angle1 == 60 && Angle2 == 60 && Angle3 == 60)
        {
            printf("The Entered Triangle Is An Equilateral Triangle");
        }
        else if ((Side1 == Side2 || Side3 == Side2 || Side3 == Side1) && (Angle1 == Angle2 || Angle1 == Angle3 || Angle2 == Angle3))
        {
            if (Angle1 == 90 || Angle2 == 90 || Angle3 == 90)
            {
                printf("The Entered Triangle Is An Isosceles Right Angled Triangle");
            }
            else
            {
                printf("The Entered Triangle Is An Isosceles Triangle");
            }
        }
        else
        {
            if (Side1 == Side2 && Side2 == Side3 && Side1 == Side3)
            {
                printf("The Entered Triangle Is Not A Valid Triangle");
            }
            else if (Angle1 == 60 && Angle2 == 60 && Angle3 == 60)
            {
                printf("The Entered Triangle Is Not A Valid Triangle");
            }
            else
            {
                if (Angle1 == 90 || Angle2 == 90 || Angle3 == 90)
                {
                    printf("The Entered Triangle Is A Right Angled Triangle");
                }
                else
                {
                    printf("The Entered Triangle Is An Scalene Triangle");
                }
            }
        }
    }
    else
    {
        printf("The Entered Triangle Is Not A Valid Triangle");
    }
}