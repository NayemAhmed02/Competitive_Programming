#include<stdio.h>

int main()
{
    int N,DN=0;

    printf("Enter A Number : ");
    scanf("%d", &N);

    for( ; N > 0; )
    {
        N = N / 10;
        DN++;
    }
    printf(" \nNumber Of Digits In Given Number Is : %d\n",DN);

    return 0;
}
