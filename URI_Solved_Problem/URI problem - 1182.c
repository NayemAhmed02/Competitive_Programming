#include<stdio.h>

int main()
{
    double M[12][12],Sum = 0;
    int I,J,C;
    char T;
    scanf("%d %c",&C,&T);
    for(I=0; I<12; I++)
        for(J=0; J<12; J++)
            scanf("%lf", &M[I][J]);
    for(J=0; J<12; J++)
        Sum = Sum + M[J][C];
    if(T == 'S')
        printf("%.1lf\n",Sum);
    else if(T == 'M')
        printf("%.1lf\n",Sum/12.0);
    return 0;
}

