#include<stdio.h>

int main()
{
    int N,I,J=1,R,M,S=0;
    printf("Enter A Binary Number: ");
    scanf("%d",&N);

    for(I=N; I>0; I=I/10)
    {
        R = I % 10;
        M = R*J;
        S = S+M;
        J = J*2;
    }
    printf("\nBinary %d Is Equals To Decimal %d.\n",N,S);
    return 0;
}


