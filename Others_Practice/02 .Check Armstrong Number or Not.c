#include<stdio.h>

int main()
{
    int N,R,M,I,X,Y,P = 0,S = 0;

    printf("Enter A Number : ");
    scanf("%d", &N);

    M = N;
    X = N;

    for( ; N>0; )
    {
        N = N / 10;
        P++;
    }

    for( ; M>0; )
    {
        Y = 1;
        R = M % 10;
        for(I=0; I<P; I++) Y = Y*R;
        M = M / 10;
        S = S+Y;
    }

    if(S == X)
        printf("\n\n%d Is A Armstrong Number .\n",X);
    else
        printf("\n\n%d Is Not A Armstrong Number .\n",X);

    return 0;
}
