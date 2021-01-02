#include<stdio.h>

int main()
{
    int N,M,R,I,J=0,S1=0,S2=0;
    printf("Enter A Decimal Number : ");
    scanf("%d",&N);
    M = N;

    while(N > 0)
    {
        R = N % 8;
        S1 = (S1 + R) * 10;
        N = N/8;
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
    printf("\n\nDecimal %d Is Equivalent To Octal %d .\n",M,S2);

    return 0;
}

