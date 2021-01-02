#include<stdio.h>
#include<string.h>

int main()
{
    long long int T,N,R,P,D,Max,I,X[110];

    scanf("%lld", &T);

    while(T--)
    {
        scanf("%lld %lld %lld", &N, &R, &P);
        for(I=0; I<N; I++)
            scanf("%lld", &X[I]);
        Max = 0;
        for(I=0; I<N; I++)
        {
            if(I == 0)
                D = X[I] - 0;
            else
                D = X[I] - X[I-1];
            if(D > P)
            {
                Max++;
                P = D;
            }
        }
        D = R - X[N-1];
        if(D > P)
            Max++;
        printf("%lld\n",Max);
    }
    return 0;
}

