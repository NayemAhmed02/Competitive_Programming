#include<stdio.h>

int main()
{
    double Num1,Num2;
    double R,Sum;

    printf("Num1 Is: ");
    scanf("%lf", &Num1);

    printf("Num2 Is: ");
    scanf("%lf", &Num2);

    R=Num1-Num2;
    Sum=(Num1*2)-R;
    printf("Sum Is: %lf\n",Sum);

    return 0;
}
