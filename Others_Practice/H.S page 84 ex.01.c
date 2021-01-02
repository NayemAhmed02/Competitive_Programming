#include<stdio.h>

int main()
{
    double D,S,T;

    int I,CN;

    printf("Enter Total Car Number : ");
    scanf("%d", &CN);

    I=1;

    while(I<=CN)
    {
        printf(" \nCar Number : %d\n",I);

        printf(" \nTotal Distance From Start Line : ");
        scanf("%lf", &D);

        printf("Car Average Speed : ");
        scanf("%lf", &S);

        T = D/S;
        printf("Total Time : %lf\n",T);

        I++;
    }
    return 0;
}
