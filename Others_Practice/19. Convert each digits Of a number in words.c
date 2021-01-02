#include<stdio.h>

int main()
{
    int N,R,I,J=0,S=0;

    printf("Enter A Number : ");
    scanf("%d", &N);

    while(N > 0)
    {
        R = N % 10;
        S = (S + R) * 10;
        N = N/10;
        J++;
    }
    S = S/10;

    for(I=0; I<J; I++)
    {
        R = S % 10;
        if(R == 0)
            printf("Zero ");
        else if(R == 1)
            printf("One ");
        else if(R == 2)
            printf("Two ");
        else if(R == 3)
            printf("Three ");
        else if(R == 4)
            printf("Four ");
        else if(R == 5)
            printf("Five ");
        else if(R == 6)
            printf("Six ");
        else if(R == 7)
            printf("Seven ");
        else if(R == 8)
            printf("Eight ");
        else if(R == 9)
            printf("Nine ");
        S = S/10;
    }
    return 0;
}
