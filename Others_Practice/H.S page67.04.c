#include<stdio.h>

int main()
{
    double a,b,ad;

    printf("Enter First Number : ");
    scanf("%lf", &a);

    printf("Enter Second Number : ");
    scanf("%lf", &b);

    printf("Addition Of Two Numbers : ");
    scanf("%lf", &ad);

    if(ad == (a + b))
    {
        printf("RIGHT.");
    }
    else
    {
        printf("SORRY,You Are Wrong.\nThe Correct Answer is : %lf",a+b);
    }
    return 0;

}
