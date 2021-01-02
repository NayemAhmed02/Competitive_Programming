#include<stdio.h>

int main()
{
    int I,J,N,K,L,X,Y;
    int ara[101][101];
    while(scanf("%d", &N))
    {
        if(N == 0)
            break;
        L = N/2;
        if(N % 2 == 1) L++;
        X = 0;
        Y = N-1;
        for(K=1; K<=L; K++)
        {
           for(I=X; I<=Y; I++)
           {
               for(J=X; J<=Y; J++)
                ara[I][J] = K;
           }
           X++;
           Y--;
        }

        for(I=0; I<N; I++)
        {
            for(J=0; J<N; J++)
            {
                if(J==0) printf("%3d",ara[I][J]);
                else printf(" %3d",ara[I][J]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}


