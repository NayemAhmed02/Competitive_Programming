#include<stdio.h>

int main()
{
    int I,J,K,L,N;
    int ara[101][101];
    while(scanf("%d", &N))
    {
        if(N == 0) break;
        for(I=0; I<N; I++)
        {
            for(J=0; J<N; J++)
            {
               K = I - J;
               L = J - I;
               if(K >= 0) ara[I][J] = K+1;
               else ara[I][J] = L+1;
            }
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



