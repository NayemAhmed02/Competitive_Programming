#include<stdio.h>

int main()
{
    int N,R,DN=0,J=1;
    int I,K=0,S=0,ON=0;

    printf("Enter A Binary Number : ");
    scanf("%d", &N);

    while(N > 0)
    {
       R = N % 10;
       DN = DN + (R * J);
       N = N / 10;
       J = J * 2;
    }
    printf("\n\nEquivalent Decimal Number Is : %d\n",DN);

    while(DN > 0)
    {
        R = DN % 8;
        S = (S + R) * 10;
        DN = DN/8;
        K++;
    }
    S = S/10;

    for(I=0; I<K; I++)
    {
        R = S % 10;
        ON = (ON + R) * 10;
        S = S/10;
    }
    ON = ON/10;

    printf("\n\nEquivalent Octal Number Is : %d \n",ON);

    return 0;
}

