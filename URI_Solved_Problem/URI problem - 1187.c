#include<stdio.h>

int main()
{
    double M[12][12],Sum = 0;
    int I,J,K=1;
    char O;
    scanf("%c",&O);
    for(I=0; I<12; I++)
        for(J=0; J<12; J++)
            scanf("%lf", &M[I][J]);
    for(I=0; I<5; I++)
    {
         for(J=K; J<12-K; J++)
            Sum = Sum + M[I][J];
         K++;
    }

    if(O == 'S')
        printf("%.1lf\n",Sum);
    else if(O == 'M')
        printf("%.1lf\n",Sum/30.0);
    return 0;
}

