#include<stdio.h>

int main()
{
    int N,I,P;
    double X;
    scanf("%d", &N);
    for(I=0; I<N; I++)
    {
        scanf("%lf", &X);
        P = 0;
        while(X > 1)
        {
            X = X / 2;
            P++;
        }
        printf("%d dias\n", P);
    }
    return 0;
}
