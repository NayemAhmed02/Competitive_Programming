#include<stdio.h>

int main()
{
    double M[12][12],Sum = 0;
    int I,J;
    char O;
    scanf("%c",&O);
    for(I=0; I<12; I++)
        for(J=0; J<12; J++)
            scanf("%lf", &M[I][J]);
     for(I=1; I<12; I++)
        for(J=11; J>11-I; J--)
            Sum = Sum + M[I][J];

    if(O == 'S')
        printf("%.1lf\n",Sum);
    else if(O == 'M')
        printf("%.1lf\n",Sum/66.0);
    return 0;
}

