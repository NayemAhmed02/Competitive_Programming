#include<stdio.h>

int main()
{
    int N,I,J=1,R,M,S=0;
    printf("Enter A Decimal Number: ");
    scanf("%d",&N);

    for(I=N; I>0; I=I/8)
    {
        R = I % 8;
        M = R*J;
        S = S+M;
        J = J*10;
    }
    printf("\nDecimal %d Is Equals To Octal %d.\n",N,S);
    return 0;
}

