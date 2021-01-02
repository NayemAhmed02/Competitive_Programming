#include<stdio.h>

int main()
{
    int C,N,A[1001],I,J,Sum,Av,T;
    double AAv;
    char ch = '%';
    scanf("%d", &C);
    for(I=0; I<C; I++)
    {
        scanf("%d", &N);
        Sum = 0;
        for(J=0; J<N; J++)
        {
            scanf("%d", &A[J]);
            Sum = Sum + A[J];
        }
        Av = Sum / N;
        T = 0;
        for(J=0; J<N; J++)
        {
            if(A[J] > Av) T++;
        }
        AAv = (T*100.00)/N;
        printf("%.3lf%c\n",AAv,ch);
    }
    return 0;
}
