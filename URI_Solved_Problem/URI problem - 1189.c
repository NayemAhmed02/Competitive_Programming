#include<stdio.h>

int main()
{
    double M[12][12],Sum1=0,Sum2=0;
    int I,J;
    char O;
    scanf("%c",&O);
    for(I=0; I<12; I++)
        for(J=0; J<12; J++)
            scanf("%lf", &M[I][J]);
    for(I=1; I<6; I++)
    {
         for(J=0; J<I; J++)
            Sum1 = Sum1 + M[I][J];
    }
    for(I=6; I<11; I++)
    {
         for(J=0; J<11-I; J++)
            Sum2 = Sum2 + M[I][J];
    }


    if(O == 'S')
        printf("%.1lf\n",Sum1+Sum2);
    else if(O == 'M')
        printf("%.1lf\n",(Sum1+Sum2)/30.0);
    return 0;
}

