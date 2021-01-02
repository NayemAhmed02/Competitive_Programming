#include<stdio.h>

int main()
{
    double B1,B2,H,Area;

    printf("Enter the length of first base : ");
    scanf("%lf", &B1);

    printf("Enter the length of second base : ");
    scanf("%lf", &B2);

    printf("Enter the length of height : ");
    scanf("%lf", &H);

    Area = 0.5 * (B1 + B2) * H;

    printf("\nArea Of Trapezium Is : %lf\n",Area);

    return 0;
}
