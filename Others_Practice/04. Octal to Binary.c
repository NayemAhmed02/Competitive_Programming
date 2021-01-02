#include<stdio.h>

int main()
{
    int N,ON,R,I,J=0,S=0;
    printf("Enter A Octal Number: ");
    scanf("%d",&N);
    while(N > 0)
    {
        R = N % 10;
        S = (S + R)*10;
        N = N/10;
        J++;
    }
    S = S/10;
    printf("\n\nEquivalent Binary Number Is : ");
    for(I=0; I<J; I++)
    {
        R = S % 10;
        if(R == 0)printf("000");
        else if(R == 1)printf("001");
        else if(R == 2)printf("010");
        else if(R == 3)printf("011");
        else if(R == 4)printf("100");
        else if(R == 5)printf("101");
        else if(R == 6)printf("110");
        else if(R == 7)printf("111");
        S = S/10;
    }
    printf("\n\n");

    return 0;
}
