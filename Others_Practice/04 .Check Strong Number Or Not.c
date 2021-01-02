#include<stdio.h>

int main()
{
    int N,P,I,J,M,S;
    S = 0;
    J = 1;

    printf("The Number Is : ");
    scanf("%d", &N);

    M = N;

    for( ; N > 0; )
    {
        P = N % 10;

        for(I=1; I<=P; I++)
        {
            J = J * I;

        }
        S = S + J;
        N = N /10;
        J = 1;
    }
    if(S == M)
    {
        printf(" \n \nThis Is A Strong Number .\n");
    }
    else
    {
        printf(" \n \nThis Is Not A Strong Number .\n");
    }

    return 0;
}
