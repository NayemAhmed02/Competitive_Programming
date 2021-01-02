#include<stdio.h>

int main()
{
    double R,Area;

    printf("Radius Of Circle Is: ");
    scanf("%lf", &R);

    Area = (3.14159) * R * R;

    printf("\nArea Of Circle Is: %lf\n",Area);

    return 0;
}
