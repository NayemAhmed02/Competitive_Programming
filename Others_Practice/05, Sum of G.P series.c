#include<stdio.h>

int main()
{
    int FN,N,R,I,J,PR = 1,Sum = 0;

    printf("Enter the first number of the G.P. series : ");
    scanf("%d",&FN);

    printf("Enter the total numbers in the G.P. series : ");
    scanf("%d",&N);

    printf("Enter the common ratio of G.P. series : ");
    scanf("%d",&R);

    for(I=0; I<N; I++)
        PR = PR * R;

    Sum = (FN*(1 - PR))/(1-R);

    printf("\nSum of the G.P Series : ");
    for(J=1; J<=N; J++)
    {
        if(J < N)
            printf("%d + ",FN);
        else
            printf("%d = %d\n",FN,Sum);
        FN = FN * R;
    }
    return 0;
}
