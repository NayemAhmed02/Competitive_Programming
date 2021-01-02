#include<stdio.h>
#include<conio.h>

int main()
{
    int N,I,SUM;
    SUM = 0;

    printf("The Number Is : ");
    scanf("%d", &N);

    for(I=1; I<N; I++)
    {
        if(N % I == 0)
        {
          SUM = SUM + I;
        }
    }
    if(N == SUM)
    {
        printf(" \nTHIS IS A PERFECT NUMBER .\n");
    }
    else
    {
        printf(" \nTHIS IS NOT A PERFECT NUMBER .\n");
    }
    return 0;
}
