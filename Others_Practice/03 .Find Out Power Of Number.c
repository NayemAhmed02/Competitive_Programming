#include<stdio.h>

int main()
{
    int N,P,I,S=1;

    printf("Enter A Number : ");
    scanf("%d", &N);

    printf("Enter Power : ");
    scanf("%d", &P);

    for(I=1; I<=P; I++)
    {
        S = S * N;
    }
    printf("\n%d To The Power %d Is = %d\n",N,P,S);

    return 0;
}
