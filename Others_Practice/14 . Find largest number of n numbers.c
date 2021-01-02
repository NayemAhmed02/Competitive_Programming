#include<stdio.h>

int main()
{
    int N,M,I,Max=0;
    printf("Enter Input Number's : ");
    scanf("%d",&N);
    printf("\nEnter The Input's : \n\n");

    for(I=1; I<=N; I++)
    {
        printf("Number %d Is : ",I);
        scanf("%d",&M);
        if(M > Max)
            Max = M;
    }
    printf("\n\nThe Largest Number Is : %d\n",Max);

    return 0;
}
