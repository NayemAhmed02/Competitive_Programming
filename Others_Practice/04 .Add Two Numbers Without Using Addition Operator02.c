#include<stdio.h>

int main()
{
    double Num1,Num2,Sum;

    printf("Enter First Number : ");
    scanf("%lf", &Num1);

    printf("Enter Second Number : ");
    scanf("%lf", &Num2);

    Sum = Num1 - (- Num2);

    printf(" \nSum Of Two Numbers : %lf\n",Sum);

    return 0;

}
