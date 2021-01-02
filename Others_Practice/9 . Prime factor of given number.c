#include<stdio.h>

int main()
{
    int N,I=2;
    printf("Enter A Number : ");
    scanf("%d",&N);
    printf("\nLet's See The Prime Factor Of %d : \n\n",N);

    while(N > 1)
    {
        if(N % I == 0)
        {
            printf("%d  ",I);
            N = N/I;
        }
        else
            I++;
    }
    printf("\n");
    return 0;
}
