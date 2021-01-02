#include<stdio.h>

int main()
{
    int N,M,R,S=0,J=1;
    printf("Enter A Binary Number : ");
    scanf("%d", &N);
    M = N;

    while(N > 0)
    {
       R = N % 10;
       S = S + (R * J);
       N = N / 10;
       J = J * 2;
    }
    printf("\n\nBinary %d Is Equivalent To Decimal %d\n",M,S);

    return 0;
}
