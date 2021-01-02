#include<stdio.h>

int main()
{
    int I,T,N;
    long long int X[60];
    X[0] = 0;
    X[1] = 1;
    for(I=2; I<61; I++)
        X[I] = X[I-1] + X[I-2];
    scanf("%d", &T);
    for(I=0; I<T; I++)
    {
        scanf("%d", &N);
        printf("Fib(%d) = %lld\n",N,X[N]);
    }
    return 0;
}
