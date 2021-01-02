#include<stdio.h>

int main()
{
    long long int A,B;
    int N,I,X,Y,RA,RB;
    scanf("%d", &N);
    for(I=0; I<N; I++)
    {
        scanf("%lld %lld", &A, &B);
        X = 0;
        Y = 0;
        while(B > 0)
        {
            RA = A % 10;
            RB = B % 10;
            if(RA == RB) X++;
            A = A / 10;
            B = B / 10;
            Y++;
        }
        if(X == Y) printf("encaixa\n");
        else printf("nao encaixa\n");
    }
    return 0;
}
