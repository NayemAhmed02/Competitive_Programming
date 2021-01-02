#include<stdio.h>

int main()
{
    long long int M,N,FM,FN;
    while(scanf("%lld %lld",&M, &N) != EOF)
    {
        int I;
        FM = 1;
        FN = 1;
        for(I=1; I<=M; I++)
            FM = FM * I;
        for(I=1; I<=N; I++)
            FN = FN * I;
        printf("%lld\n",FM+FN);
    }
    return 0;
}
