#include<stdio.h>

int main()
{
    int N,I,F=1;

    printf("Enter A Number : ");
    scanf("%d", &N);

    for(I=1; I<=N; I++)
    {
        F = F * I;
    }
    printf(" \nFactorial Of %d Is : %d\n",N,F);

    return 0;
}
