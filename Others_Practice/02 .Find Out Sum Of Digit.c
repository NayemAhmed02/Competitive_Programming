#include<stdio.h>

int main()
{
    int N,P,S=0;

    printf("Enter A Number : ");
    scanf("%d", &N);

    for( ; N > 0; )
    {
        P = N % 10;
        S = S + P;
        N = N / 10;
    }

    printf(" \nSum Of Digit Of Given Number : %d\n",S);

    return 0;
}
