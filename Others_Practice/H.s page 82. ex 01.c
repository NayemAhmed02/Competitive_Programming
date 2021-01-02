#include<stdio.h>

int main()
{
    double D,AS,T;

    printf("Total Distance From Start Line : ");
    scanf("%lf", &D);

    printf(" \nCar Average Speed : ");
    scanf("%lf", &AS);

    T = D / AS;

    printf(" \n \nTotal Drive Time : %lf HOUR.\n",T);

    return 0;
}
