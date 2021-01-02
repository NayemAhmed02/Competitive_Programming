#include<stdio.h>

int main()
{
    int I,J,K,N,L;
    int ara[70][70];
    while(scanf("%d", &N) != EOF)
    {
        L = 1;
        for(I=0; I<N; I++)
        {
            K = N-L;
            for(J=0; J<N; J++)
            {
                if(I == J) ara[I][J] = 1;
                else ara[I][J] = 3;
                if(J == K) ara[I][J] = 2;
            }
            L++;
        }
        for(I=0; I<N; I++)
        {
            for(J=0; J<N; J++)
                printf("%d",ara[I][J]);
            printf("\n");
        }
    }
    return 0;
}
