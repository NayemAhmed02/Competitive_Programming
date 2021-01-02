#include<stdio.h>

int main()
{
    double T,D,S;

    int I,LN;

    printf("Enter Total Car Number : ");
    scanf("%d", &LN);

    for(I=1; I<=LN; I++)
    {
        printf(" \nCar Number : %d\n",I);

        printf(" \nTotal Distance From Start Line : ");
        scanf("%lf", &D);

        printf("Car Average Speed : ");
        scanf("%lf", &S);

        T = D/S;
        printf("Total Time : %lf\n",T);
    }
    return 0;
}
