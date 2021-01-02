#include<stdio.h>

int main()
{
    int IN,R,I,J=0,S1=0,S2=0;
    double N,FN,P,S=0;

    printf("Enter A Fractional Decimal Number : ");
    scanf("%lf",&N);

    IN = N;
    FN = N - IN;

    while(IN > 0)
    {
        R = IN % 2;
        S1 = (S1 + R) * 10;
        IN = IN/2;
        J++;
    }
    S1 = S1/10;

    for(I=0; I<J; I++)
    {
        R = S1 % 10;
        S2 = (S2 + R) * 10;
        S1 = S1/10;
    }
    S2 = S2/10;

    for(I=0; I<6; I++)
    {
       P = FN * 2;
       R = P;
       FN = P - R;
       S = (S + R)*10;
    }
    S = S / 10000000;

    printf("\n\nEquivalent Fractional Binary Number Is : %lf\n",S+S2);

    return 0;
}

