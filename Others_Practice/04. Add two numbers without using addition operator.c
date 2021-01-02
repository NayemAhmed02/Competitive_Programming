#include<stdio.h>

int main()
{
    double Num1,Num2,Ave,Sum;
    printf("Num1 Is: ");
    scanf("%lf", &Num1);
    printf("Num2 Is: ");
    scanf("%lf", &Num2);

    Ave=(Num1 + Num2)/2;
    Sum=Ave * 2;
    printf("Sum Is: %lf\n",Sum);

    return 0;
}
