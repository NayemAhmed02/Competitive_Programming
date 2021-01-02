#include<stdio.h>

int main()
{
    long long int I,J,K,L,N;
    long long int ara[16][16];
    while(scanf("%lld", &N))
    {
        L = 1;
        if(N == 0) break;
        for(I=0; I<N; I++)
        {
            K = L;
            for(J=0; J<N; J++)
            {
               ara[I][J] = K;
               K = K*2;
            }
            L = L * 2;
        }

        for(I=0; I<N; I++)
        {
            for(J=0; J<N; J++)
            {
                if(N == 1)
                    printf("%lld",ara[I][J]);
                else if(N == 2)
                {
                    if(J==0) printf("%lld",ara[I][J]);
                    else printf("%2lld",ara[I][J]);
                }
                else if(N == 3 || N == 4)
                {
                    if(J==0) printf("%2lld",ara[I][J]);
                    else printf("%3lld",ara[I][J]);
                }
                else if(N == 5)
                {
                    if(J==0) printf("%3lld",ara[I][J]);
                    else printf("%4lld",ara[I][J]);
                }
                else if(N == 6 || N == 7)
                {
                    if(J==0) printf("%4lld",ara[I][J]);
                    else printf("%5lld",ara[I][J]);
                }
                else if(N == 8 || N == 9)
                {
                    if(J==0) printf("%5lld",ara[I][J]);
                    else printf("%6lld",ara[I][J]);
                }
                else if(N == 10)
                {
                    if(J==0) printf("%6lld",ara[I][J]);
                    else printf("%7lld",ara[I][J]);
                }
                else if(N == 11 || N == 12)
                {
                    if(J==0) printf("%7lld",ara[I][J]);
                    else printf("%8lld",ara[I][J]);
                }
                else if(N == 13 || N == 14)
                {
                    if(J==0) printf("%8lld",ara[I][J]);
                    else printf("%9lld",ara[I][J]);
                }
                else if(N == 15)
                {
                    if(J==0) printf("%9lld",ara[I][J]);
                    else printf("%10lld",ara[I][J]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
