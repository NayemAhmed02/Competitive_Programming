#include<stdio.h>

int main()
{
    int I,J,N;
    int ara[101][101];
    while(scanf("%d", &N))
    {
        if(N == 0)
            break;
        for(I=0; I<N; I++)
        {
            for(J=0; J<N; J++)
            {
                if(I==0 || I==N-1) ara[I][J]=1;
                else if(J==0 || J==N-1) ara[I][J]=1;
                else
                {
                    if(I == N/2 && J == N/2) ara[I][J]=(N+1)/2;
                    else
                        ara[I][J]=N/2;
                }
            }
        }
        for(I=0; I<N; I++)
        {
            for(J=0; J<N; J++)
                printf(" %3d",ara[I][J]);
            printf("\n");
        }
    }
    return 0;
}

