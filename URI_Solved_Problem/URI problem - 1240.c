#include<stdio.h>

int main()
{
    int N,I;
    long long int A,B;
    scanf("%d", &N);
    for(I=0; I<N; I++)
    {
        int K,L,M=0,N=0;
        scanf("%lld %lld", &A, &B);
        while(B > 0)
        {
           K = B % 10;
           L = A % 10;
           if(K == L) M++;
           A = A/10;
           B = B/10;
           N++;
        }
        if(N == M) printf("encaixa\n");
        else printf("nao encaixa\n");
    }
    return 0;
}
