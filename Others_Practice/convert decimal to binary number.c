#include<stdio.h>

int main()
{
    int N,I,J=1,R,M,S=0;
    printf("Enter A Decimal Number: ");
    scanf("%d",&N);

    for(I=N; I>0; I=I/2)
    {
        R = I % 2;
        M = R*J;
        S = S+M;
        J = J*10;
    }
    printf("\nDecimal %d Is Equals To Binary %d.\n",N,S);
    return 0;
}
