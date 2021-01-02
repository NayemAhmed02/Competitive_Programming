#include<stdio.h>

int main()
{
    int N,P,M,RN=0;

    printf("Enter the Number : ");
    scanf("%d", &N);

    M = N;

    for( ; N > 0; )
    {
        P = N % 10;
        RN = RN + P;
        RN = RN * 10;
        N = N / 10;
    }
    RN = RN / 10;

    if(RN == M)
    {
        printf(" \nThis Is A Palindrome Number .\n");
    }
    else
    {
        printf(" \nThis Is Not A Palindrome Number .\n");
    }

    return 0;

}
