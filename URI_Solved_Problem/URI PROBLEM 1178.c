#include<stdio.h>

int main()
{
    int I,N[100];
    double X;
    scanf("%lf",&X);

    for(I=0; I<100; I++)
    {
        printf("N[%d] = %.4lf\n",I,X);
        X = X/2.0000;
    }
    return 0;
}

