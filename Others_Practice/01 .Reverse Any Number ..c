#include<stdio.h>

int main()
{
    int N,P,RN=0;

    printf("Enter the Number : ");
    scanf("%d", &N);

    for( ; N > 0; )
    {
        P = N % 10;
        RN = RN + P;
        RN = RN * 10;
        N = N / 10;
    }
    RN = RN / 10;

    printf(" \nThe Reverse Number Is : %d\n",RN);

    return 0;
}

